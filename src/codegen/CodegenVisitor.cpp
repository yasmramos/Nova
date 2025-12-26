/**
 * @file CodegenVisitor.cpp
 * @brief Implementación del generador de código LLVM IR
 */

#include "CodegenVisitor.h"
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Intrinsics.h>
#include <sstream>

namespace aether {

// ============================================
// CONSTRUCTOR
// ============================================

CodegenVisitor::CodegenVisitor(CodeGenContext& context)
    : context_(context), builder_(context.getBuilder()), typeContext_(context.getTypeContext()) {}

// ============================================
// MÉTODO PRINCIPAL
// ============================================

bool CodegenVisitor::generate(ModuleNode* module) {
    // Inicializar el contexto
    context_.initialize();
    
    // Visitar el módulo
    visitModule(module);
    
    // Verificar el módulo generado
    if (!context_.verifyModule()) {
        context_.reportError("Module verification failed: " + context_.getLastError());
        return false;
    }
    
    return !context_.hasErrors();
}

// ============================================
// VISIT - MÓDULO
// ============================================

void CodegenVisitor::visitModule(ModuleNode* node) {
    // Declaraciones de nivel superior
    for (auto& decl : node->getDeclarations()) {
        decl->accept(*this);
    }
}

// ============================================
// VISIT - DECLARACIONES
// ============================================

void CodegenVisitor::visitFunctionDecl(FunctionDeclNode* node) {
    llvm::Function* func = getOrCreateFunction(node);
    if (!func) {
        error(node, "Failed to create function: " + node->getName());
        return;
    }
    
    // Guardar la función anterior
    llvm::Function* prevFunction = currentFunction_;
    currentFunction_ = func;
    
    // Entrar al scope de la función
    context_.enterScope();
    returnTypes_.push_back(node->getReturnType());
    
    // Crear el bloque de entrada
    llvm::BasicBlock* entryBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "entry", func
    );
    context_.setCurrentBlock(entryBlock);
    builder_.SetInsertPoint(entryBlock);
    
    // Registrar parámetros
    size_t paramIndex = 0;
    for (auto& arg : func->args()) {
        if (paramIndex < node->getParameters().size()) {
            std::string paramName = "arg_" + std::to_string(paramIndex);
            arg.setName(paramName);
            
            // Crear alloca para el parámetro
            llvm::AllocaInst* alloca = context_.createEntryBlockAlloca(
                func, paramName, arg.getType()
            );
            builder_.CreateStore(&arg, alloca);
            
            // Registrar en la tabla de símbolos
            context_.setValue(paramName, alloca);
        }
        paramIndex++;
    }
    
    // Generar el cuerpo de la función
    if (node->getBody()) {
        node->getBody()->accept(*this);
    }
    
    // Si no hay retorno y la función no es void, añadir retorno por defecto
    Type* returnType = node->getReturnType();
    if (!returnType || !returnType->isVoid()) {
        llvm::BasicBlock* currentBlock = context_.getCurrentBlock();
        if (!currentBlock->getTerminator()) {
            if (returnType && returnType->isNever()) {
                // Para funciones que nunca retornan, no hacer nada
            } else {
                // Retornar valor por defecto
                llvm::Value* defaultValue = llvm::Constant::getZeroValue(
                    context_.convertType(returnType ? returnType : typeContext_.getVoidType())
                );
                builder_.CreateRet(defaultValue);
            }
        }
    }
    
    // Salir del scope de la función
    context_.exitScope();
    returnTypes_.pop_back();
    
    // Restaurar la función anterior
    currentFunction_ = prevFunction;
}

void CodegenVisitor::visitStructDecl(StructType* node) {
    // Los structs ya se procesan al convertir tipos
    // Aquí no generamos código, solo metadata
}

void CodegenVisitor::visitEnumDecl(EnumType* node) {
    // Los enums se representan como enteros
}

void CodegenVisitor::visitTraitDecl(TraitDeclNode* node) {
    // Traits son solo para verificación semántica
}

void CodegenVisitor::visitImplDecl(ImplDeclNode* node) {
    // Implementaciones se generan como funciones normales
}

void CodegenVisitor::visitTypeAlias(TypeAliasNode* node) {
    // Los aliases son solo para el type checker
}

void CodegenVisitor::visitLetDecl(LetDeclNode* node) {
    Type* varType = node->getType();
    llvm::Type* llvmType = context_.convertType(varType);
    
    // Crear alloca en el bloque actual
    llvm::AllocaInst* alloca = builder_.CreateAlloca(
        llvmType, nullptr, node->getName()
    );
    
    // Registrar en la tabla de símbolos
    context_.setValue(node->getName(), alloca);
    
    // Inicializar si hay inicializador
    if (node->getInitializer()) {
        llvm::Value* initValue = generateExpression(node->getInitializer());
        if (initValue) {
            builder_.CreateStore(initValue, alloca);
        }
    }
}

void CodegenVisitor::visitConstDecl(ConstDeclNode* node) {
    // Las constantes se tratan como variables inmutables
    visitLetDecl(node);
}

// ============================================
// VISIT - STATEMENTS
// ============================================

void CodegenVisitor::visitBlock(BlockNode* node) {
    for (auto& stmt : node->getStatements()) {
        stmt->accept(*this);
        
        // Verificar si hay un terminador (return, branch, etc.)
        if (context_.getCurrentBlock()->getTerminator()) {
            break;
        }
    }
    
    // Generar la expresión final si existe
    if (node->getFinalExpression()) {
        generateExpression(node->getFinalExpression());
    }
}

void CodegenVisitor::visitExprStmt(ExprStmtNode* node) {
    if (node->getExpression()) {
        generateExpression(node->getExpression());
    }
}

void CodegenVisitor::visitAssignStmt(AssignStmtNode* node) {
    if (!node->getLValue() || !node->getRValue()) return;
    
    // Generar el valor
    llvm::Value* rvalue = generateExpression(node->getRValue());
    if (!rvalue) return;
    
    // Generar el lvalue (debe ser un puntero)
    llvm::Value* lvalue = nullptr;
    
    if (node->getLValue()->is(NodeKind::Identifier)) {
        auto* ident = static_cast<IdentifierNode*>(node->getLValue());
        lvalue = context_.getValue(ident->getName());
    } else {
        lvalue = generateExpression(node->getLValue());
    }
    
    if (lvalue) {
        builder_.CreateStore(rvalue, lvalue);
    }
}

void CodegenVisitor::visitIfStmt(IfStmtNode* node) {
    llvm::Function* func = builder_.GetInsertBlock()->getParent();
    
    // Generar la condición
    llvm::Value* condValue = generateExpression(node->getCondition());
    if (!condValue) return;
    
    // Asegurar que la condición es i1
    if (condValue->getType()->isIntegerTy(32)) {
        condValue = builder_.CreateTrunc(condValue, builder_.getInt1Ty(), "cond.trunc");
    }
    
    // Crear bloques
    llvm::BasicBlock* thenBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "if.then", func
    );
    llvm::BasicBlock* elseBlock = nullptr;
    if (node->getElseBranch()) {
        elseBlock = llvm::BasicBlock::Create(
            context_.getLLVMContext(), "if.else", func
        );
    }
    llvm::BasicBlock* mergeBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "if.merge", func
    );
    
    // Branch condicional
    if (elseBlock) {
        builder_.CreateCondBr(condValue, thenBlock, elseBlock);
    } else {
        builder_.CreateCondBr(condValue, thenBlock, mergeBlock);
    }
    
    // Generar bloque then
    builder_.SetInsertPoint(thenBlock);
    node->getThenBranch()->accept(*this);
    
    // Verificar si thenBlock tiene terminador
    if (!thenBlock->getTerminator()) {
        builder_.CreateBr(mergeBlock);
    }
    
    // Generar bloque else
    if (elseBlock) {
        builder_.SetInsertPoint(elseBlock);
        if (node->getElseBranch()) {
            node->getElseBranch()->accept(*this);
        }
        
        if (!elseBlock->getTerminator()) {
            builder_.CreateBr(mergeBlock);
        }
    }
    
    // Continuar en merge block
    builder_.SetInsertPoint(mergeBlock);
}

void CodegenVisitor::visitWhileStmt(WhileStmtNode* node) {
    llvm::Function* func = builder_.GetInsertBlock()->getParent();
    
    // Crear bloques
    llvm::BasicBlock* condBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "while.cond", func
    );
    llvm::BasicBlock* bodyBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "while.body", func
    );
    llvm::BasicBlock* afterBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "while.after", func
    );
    
    // Añadir bloques a las pilas de break/continue
    breakBlocks_.push_back(afterBlock);
    continueBlocks_.push_back(condBlock);
    
    // Branch al bloque de condición
    builder_.CreateBr(condBlock);
    
    // Generar condición
    builder_.SetInsertPoint(condBlock);
    llvm::Value* condValue = generateExpression(node->getCondition());
    if (condValue) {
        if (condValue->getType()->isIntegerTy(32)) {
            condValue = builder_.CreateTrunc(condValue, builder_.getInt1Ty(), "cond.trunc");
        }
        builder_.CreateCondBr(condValue, bodyBlock, afterBlock);
    } else {
        builder_.CreateBr(afterBlock);
    }
    
    // Generar cuerpo
    builder_.SetInsertPoint(bodyBlock);
    node->getBody()->accept(*this);
    
    // Verificar terminador
    if (!bodyBlock->getTerminator()) {
        builder_.CreateBr(condBlock);
    }
    
    // Continuar después del while
    builder_.SetInsertPoint(afterBlock);
    
    // Sacar bloques de las pilas
    breakBlocks_.pop_back();
    continueBlocks_.pop_back();
}

void CodegenVisitor::visitForStmt(ForStmtNode* node) {
    // TODO: Implementar for loop
}

void CodegenVisitor::visitLoopStmt(LoopStmtNode* node) {
    llvm::Function* func = builder_.GetInsertBlock()->getParent();
    
    // Crear bloques
    llvm::BasicBlock* bodyBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "loop.body", func
    );
    llvm::BasicBlock* afterBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "loop.after", func
    );
    
    // Añadir a las pilas
    breakBlocks_.push_back(afterBlock);
    continueBlocks_.push_back(bodyBlock);
    
    // Branch al cuerpo
    builder_.CreateBr(bodyBlock);
    
    // Generar cuerpo
    builder_.SetInsertPoint(bodyBlock);
    node->getBody()->accept(*this);
    
    // Verificar terminador
    if (!bodyBlock->getTerminator()) {
        builder_.CreateBr(bodyBlock);
    }
    
    // Continuar después del loop
    builder_.SetInsertPoint(afterBlock);
    
    // Sacar de las pilas
    breakBlocks_.pop_back();
    continueBlocks_.pop_back();
}

void CodegenVisitor::visitMatchStmt(MatchStmtNode* node) {
    // TODO: Implementar pattern matching
}

void CodegenVisitor::visitReturnStmt(ReturnStmtNode* node) {
    if (node->getValue()) {
        llvm::Value* retValue = generateExpression(node->getValue());
        if (retValue) {
            builder_.CreateRet(retValue);
        } else {
            builder_.CreateRetVoid();
        }
    } else {
        builder_.CreateRetVoid();
    }
}

void CodegenVisitor::visitBreakStmt(BreakStmtNode* node) {
    if (!breakBlocks_.empty()) {
        builder_.CreateBr(breakBlocks_.back());
    }
}

void CodegenVisitor::visitContinueStmt(ContinueStmtNode* node) {
    if (!continueBlocks_.empty()) {
        builder_.CreateBr(continueBlocks_.back());
    }
}

// ============================================
// VISIT - EXPRESIONES
// ============================================

llvm::Value* CodegenVisitor::generateExpression(Expression* expr) {
    if (!expr) return nullptr;
    
    expr->accept(*this);
    
    // El tipo debe haber sido establecido por el visitor
    return context_.getValue("_expr_result_" + std::to_string(tempCounter_++));
}

void CodegenVisitor::generateStatement(Node* stmt) {
    if (!stmt) return;
    stmt->accept(*this);
}

void CodegenVisitor::visitBinaryExpr(BinaryExprNode* node) {
    if (!node->getLeft() || !node->getRight()) return;
    
    llvm::Value* left = generateExpression(node->getLeft());
    llvm::Value* right = generateExpression(node->getRight());
    
    if (!left || !right) return;
    
    llvm::Value* result = generateBinaryOp(node->getOperator(), left, right, node->getType());
    
    if (result) {
        std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
        context_.setValue(tempName, result);
    }
}

llvm::Value* CodegenVisitor::generateBinaryOp(BinaryOp op, llvm::Value* left, llvm::Value* right, 
                                               Type* resultType) {
    llvm::Type* llvmType = context_.convertType(resultType);
    bool isFloat = llvmType->isFloatingPointTy();
    
    switch (op) {
        // Aritméticos
        case BinaryOp::Add:
            return isFloat ? builder_.CreateFAdd(left, right, "add.f") 
                          : builder_.CreateAdd(left, right, "add");
        case BinaryOp::Sub:
            return isFloat ? builder_.CreateFSub(left, right, "sub.f")
                          : builder_.CreateSub(left, right, "sub");
        case BinaryOp::Mul:
            return isFloat ? builder_.CreateFMul(left, right, "mul.f")
                          : builder_.CreateMul(left, right, "mul");
        case BinaryOp::Div:
            return isFloat ? builder_.CreateFDiv(left, right, "div.f")
                          : builder_.CreateSDiv(left, right, "div");
        case BinaryOp::Mod:
            return builder_.CreateSRem(left, right, "mod");
        case BinaryOp::Pow:
            // Pow no tiene intrínseco directo, usar library call
            context_.reportError("Power operator not yet implemented");
            return nullptr;
            
        // Bitwise
        case BinaryOp::BitAnd:
            return builder_.CreateAnd(left, right, "and");
        case BinaryOp::BitOr:
            return builder_.CreateOr(left, right, "or");
        case BinaryOp::BitXor:
            return builder_.CreateXor(left, right, "xor");
        case BinaryOp::Shl:
            return builder_.CreateShl(left, right, "shl");
        case BinaryOp::Shr:
            return builder_.CreateLShr(left, right, "shr");
            
        // Comparación (retornan i1)
        case BinaryOp::Eq: {
            llvm::Value* cmp = isFloat ? builder_.CreateFCmpOEQ(left, right, "cmp.oeq")
                                       : builder_.CreateICmpEQ(left, right, "cmp.eq");
            return builder_.CreateZExt(cmp, llvmType, "zext");
        }
        case BinaryOp::Ne: {
            llvm::Value* cmp = isFloat ? builder_.CreateFCmpONE(left, right, "cmp.one")
                                       : builder_.CreateICmpNE(left, right, "cmp.ne");
            return builder_.CreateZExt(cmp, llvmType, "zext");
        }
        case BinaryOp::Lt: {
            llvm::Value* cmp = isFloat ? builder_.CreateFCmpOLT(left, right, "cmp.olt")
                                       : builder_.CreateICmpSLT(left, right, "cmp.slt");
            return builder_.CreateZExt(cmp, llvmType, "zext");
        }
        case BinaryOp::Le: {
            llvm::Value* cmp = isFloat ? builder_.CreateFCmpOLE(left, right, "cmp.ole")
                                       : builder_.CreateICmpSLE(left, right, "cmp.sle");
            return builder_.CreateZExt(cmp, llvmType, "zext");
        }
        case BinaryOp::Gt: {
            llvm::Value* cmp = isFloat ? builder_.CreateFCmpOGT(left, right, "cmp.ogt")
                                       : builder_.CreateICmpSGT(left, right, "cmp.sgt");
            return builder_.CreateZExt(cmp, llvmType, "zext");
        }
        case BinaryOp::Ge: {
            llvm::Value* cmp = isFloat ? builder_.CreateFCmpOGE(left, right, "cmp.oge")
                                       : builder_.CreateICmpSGE(left, right, "cmp.sge");
            return builder_.CreateZExt(cmp, llvmType, "zext");
        }
        
        // Lógicos (operan sobre i1)
        case BinaryOp::And:
            return builder_.CreateAnd(left, right, "and");
        case BinaryOp::Or:
            return builder_.CreateOr(left, right, "or");
            
        default:
            context_.reportError("Unsupported binary operator");
            return nullptr;
    }
}

void CodegenVisitor::visitUnaryExpr(UnaryExprNode* node) {
    if (!node->getOperand()) return;
    
    llvm::Value* operand = generateExpression(node->getOperand());
    if (!operand) return;
    
    llvm::Value* result = generateUnaryOp(node->getOperator(), operand);
    
    if (result) {
        std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
        context_.setValue(tempName, result);
    }
}

llvm::Value* CodegenVisitor::generateUnaryOp(UnaryOp op, llvm::Value* operand) {
    switch (op) {
        case UnaryOp::Neg:
            if (operand->getType()->isFloatingPointTy()) {
                return builder_.CreateFNeg(operand, "neg.f");
            }
            return builder_.CreateNeg(operand, "neg");
            
        case UnaryOp::Not:
            return builder_.CreateNot(operand, "not");
            
        case UnaryOp::Deref:
            return builder_.CreateLoad(operand->getType()->getPointerElementType(), 
                                       operand, "deref");
            
        case UnaryOp::Ref:
        case UnaryOp::RefMut:
            // Referencias se manejan en el type checker
            return operand;
            
        default:
            return nullptr;
    }
}

void CodegenVisitor::visitCallExpr(CallExprNode* node) {
    if (!node->getFunction()) return;
    
    // Generar la función
    node->getFunction()->accept(*this);
    
    // Generar argumentos
    std::vector<llvm::Value*> args;
    for (auto& arg : node->getArguments()) {
        llvm::Value* argValue = generateExpression(arg.get());
        if (argValue) {
            args.push_back(argValue);
        }
    }
    
    // Buscar la función en LLVM
    if (node->getFunction()->is(NodeKind::Identifier)) {
        auto* ident = static_cast<IdentifierNode*>(node->getFunction());
        llvm::Function* callee = context_.getModule()->getFunction(ident->getName());
        
        if (callee) {
            llvm::Value* callResult = builder_.CreateCall(callee, args, "call");
            
            std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
            context_.setValue(tempName, callResult);
        } else {
            error(node, "Function not found: " + ident->getName());
        }
    }
}

void CodegenVisitor::visitIfExpr(IfExprNode* node) {
    llvm::Function* func = builder_.GetInsertBlock()->getParent();
    
    // Generar la condición
    llvm::Value* condValue = generateExpression(node->getCondition());
    if (!condValue) return;
    
    // Crear bloques
    llvm::BasicBlock* thenBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "if.then", func
    );
    llvm::BasicBlock* elseBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "if.else", func
    );
    llvm::BasicBlock* mergeBlock = llvm::BasicBlock::Create(
        context_.getLLVMContext(), "if.merge", func
    );
    
    // Branch condicional
    builder_.CreateCondBr(condValue, thenBlock, elseBlock);
    
    // Generar then
    builder_.SetInsertPoint(thenBlock);
    node->getThenBranch()->accept(*this);
    llvm::Value* thenValue = nullptr;
    if (context_.getCurrentBlock()->getTerminator()) {
        // El bloque tiene terminador, usar phi
    }
    
    if (!thenBlock->getTerminator()) {
        builder_.CreateBr(mergeBlock);
    }
    
    // Generar else
    builder_.SetInsertPoint(elseBlock);
    node->getElseBranch()->accept(*this);
    llvm::Value* elseValue = nullptr;
    
    if (!elseBlock->getTerminator()) {
        builder_.CreateBr(mergeBlock);
    }
    
    // Generar merge con phi
    builder_.SetInsertPoint(mergeBlock);
    
    // TODO: Completar el merge con phi node
}

void CodegenVisitor::visitMatchExpr(MatchExprNode* node) {
    context_.reportError("Match expression not yet implemented");
}

void CodegenVisitor::visitLambdaExpr(LambdaExprNode* node) {
    context_.reportError("Lambda expressions not yet implemented");
}

void CodegenVisitor::visitLiteral(LiteralNode* node) {
    llvm::Value* value = nullptr;
    
    if (node->is(NodeKind::IntegerLiteral)) {
        auto* lit = static_cast<IntegerLiteralNode*>(node);
        llvm::Type* llvmType = context_.convertType(lit->getType());
        value = llvm::ConstantInt::get(llvmType, lit->getValue(), true);
    } else if (node->is(NodeKind::FloatLiteral)) {
        auto* lit = static_cast<FloatLiteralNode*>(node);
        llvm::Type* llvmType = context_.convertType(lit->getType());
        value = llvm::ConstantFP::get(llvmType, lit->getValue());
    } else if (node->is(NodeKind::BooleanLiteral)) {
        auto* lit = static_cast<BooleanLiteralNode*>(node);
        value = builder_.getInt1(lit->getValue());
    } else if (node->is(NodeKind::StringLiteral)) {
        auto* lit = static_cast<StringLiteralNode*>(node);
        llvm::Constant* strConst = llvm::ConstantDataArray::getString(
            context_.getLLVMContext(), lit->getValue()
        );
        llvm::GlobalVariable* gv = new llvm::GlobalVariable(
            *context_.getModule(), strConst->getType(), true,
            llvm::GlobalValue::PrivateLinkage, strConst
        );
        value = builder_.CreateConstGEP2_32(strConst->getType(), gv, 0, 0, "str");
    } else if (node->is(NodeKind::CharLiteral)) {
        auto* lit = static_cast<CharLiteralNode*>(node);
        value = builder_.getInt8(lit->getValue());
    } else if (node->is(NodeKind::NullLiteral)) {
        value = llvm::Constant::getNullValue(builder_.getInt8PtrTy());
    }
    
    if (value) {
        std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
        context_.setValue(tempName, value);
    }
}

void CodegenVisitor::visitIdentifier(IdentifierNode* node) {
    llvm::Value* value = context_.getValue(node->getName());
    
    if (value) {
        // Verificar si es un puntero (variable) o un valor inmediato
        if (value->getType()->isPointerTy()) {
            // Cargar el valor
            llvm::LoadInst* load = builder_.CreateLoad(
                value->getType()->getPointerElementType(), value, node->getName()
            );
            std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
            context_.setValue(tempName, load);
        } else {
            std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
            context_.setValue(tempName, value);
        }
    } else {
        error(node, "Undefined variable: " + node->getName());
    }
}

void CodegenVisitor::visitFieldExpr(FieldExprNode* node) {
    context_.reportError("Field access not yet implemented");
}

void CodegenVisitor::visitTupleIndexExpr(TupleIndexExprNode* node) {
    context_.reportError("Tuple index not yet implemented");
}

void CodegenVisitor::visitArrayExpr(ArrayExprNode* node) {
    context_.reportError("Array expressions not yet implemented");
}

void CodegenVisitor::visitTupleExpr(TupleExprNode* node) {
    context_.reportError("Tuple expressions not yet implemented");
}

void CodegenVisitor::visitStructExpr(StructExprNode* node) {
    context_.reportError("Struct expressions not yet implemented");
}

void CodegenVisitor::visitRangeExpr(RangeExprNode* node) {
    context_.reportError("Range expressions not yet implemented");
}

void CodegenVisitor::visitCastExpr(CastExprNode* node) {
    llvm::Value* value = generateExpression(node->getValue());
    if (!value) return;
    
    llvm::Type* targetType = context_.convertType(node->getTargetType());
    llvm::Type* sourceType = value->getType();
    
    llvm::Value* result = nullptr;
    
    // Determinar el tipo de conversión
    if (sourceType->isIntegerTy() && targetType->isIntegerTy()) {
        if (sourceType->getIntegerBitWidth() < targetType->getIntegerBitWidth()) {
            result = builder_.CreateSExt(value, targetType, "cast.sext");
        } else {
            result = builder_.CreateTrunc(value, targetType, "cast.trunc");
        }
    } else if (sourceType->isFloatingPointTy() && targetType->isFloatingPointTy()) {
        result = builder_.CreateFPCast(value, targetType, "cast.fpcast");
    } else if (sourceType->isIntegerTy() && targetType->isFloatingPointTy()) {
        result = builder_.CreateSIToFP(value, targetType, "cast.sitofp");
    } else if (sourceType->isFloatingPointTy() && targetType->isIntegerTy()) {
        result = builder_.CreateFPToSI(value, targetType, "cast.fptosi");
    } else {
        // Fallback: bitcast
        result = builder_.CreateBitCast(value, targetType, "cast.bitcast");
    }
    
    if (result) {
        std::string tempName = "_expr_result_" + std::to_string(tempCounter_++);
        context_.setValue(tempName, result);
    }
}

void CodegenVisitor::visitAwaitExpr(AwaitExprNode* node) {
    context_.reportError("Async/await not yet implemented");
}

// ============================================
// UTILIDADES
// ============================================

llvm::Function* CodegenVisitor::getOrCreateFunction(FunctionDeclNode* node) {
    // Buscar si ya existe
    llvm::Function* existingFunc = context_.getModule()->getFunction(node->getName());
    if (existingFunc) {
        return existingFunc;
    }
    
    // Crear el tipo de función
    std::vector<llvm::Type*> paramTypes;
    for (auto& param : node->getParameters()) {
        if (param->is(NodeKind::FunctionParam)) {
            auto* fp = static_cast<FunctionParamNode*>(param.get());
            paramTypes.push_back(context_.convertType(fp->getType()));
        }
    }
    
    llvm::Type* returnType = context_.convertType(node->getReturnType());
    llvm::FunctionType* funcType = llvm::FunctionType::get(returnType, paramTypes, false);
    
    // Crear la función
    return llvm::Function::Create(
        funcType,
        llvm::Function::ExternalLinkage,
        node->getName(),
        context_.getModule()
    );
}

void CodegenVisitor::error(Node* node, const std::string& message) {
    std::ostringstream oss;
    oss << message << " at " << node->getLocation().toString();
    context_.reportError(oss.str());
}

llvm::Type* CodegenVisitor::getLLVMType(Node* node) {
    if (node->hasType()) {
        return context_.convertType(node->getType());
    }
    return llvm::Type::getVoidTy(context_.getLLVMContext());
}

} // namespace aether
