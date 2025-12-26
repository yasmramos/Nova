/**
 * @file TypeChecker.cpp
 * @brief Implementación del analizador semántico y verificador de tipos
 */

#include "TypeChecker.h"
#include "ASTBuilder.h"
#include <sstream>
#include <algorithm>

namespace aether {

// ============================================
// CONSTRUCTOR Y MÉTODOS PRINCIPALES
// ============================================

TypeChecker::TypeChecker(ErrorHandler& errorHandler, TypeContext& typeContext)
    : errorHandler_(errorHandler), typeContext_(typeContext) {}

bool TypeChecker::check(ModuleNode* module) {
    // Visit the module
    visitModule(module);
    
    // Return true if no fatal errors
    return !errorHandler_.hasErrors();
}

// ============================================
// VISIT - MÓDULO
// ============================================

void TypeChecker::visitModule(ModuleNode* node) {
    // El módulo ya tiene la Symbol Table global
    
    // Procesar declaraciones de nivel superior
    for (auto& decl : node->getDeclarations()) {
        // Los tipos se registran primero
        if (decl->is(NodeKind::StructDecl)) {
            auto structType = static_cast<StructType*>(decl->getType());
            symbolTable_.insertType(structType->getName(), structType, decl);
        } else if (decl->is(NodeKind::EnumDecl)) {
            auto enumType = static_cast<EnumType*>(decl->getType());
            symbolTable_.insertType(enumType->getName(), enumType, decl);
        } else if (decl->is(NodeKind::TraitDecl)) {
            // Insertar trait
        } else if (decl->is(NodeKind::TypeAlias)) {
            auto alias = static_cast<TypeAlias*>(decl->getType());
            symbolTable_.insertType(alias->getName(), alias, decl);
        }
    }
    
    // Segunda pasada: funciones y variables
    for (auto& decl : node->getDeclarations()) {
        if (decl->is(NodeKind::FunctionDecl)) {
            visitFunctionDecl(static_cast<FunctionDeclNode*>(decl.get()));
        } else if (decl->is(NodeKind::LetDecl)) {
            visitLetDecl(static_cast<LetDeclNode*>(decl.get()));
        } else if (decl->is(NodeKind::ConstDecl)) {
            visitConstDecl(static_cast<ConstDeclNode*>(decl.get()));
        }
    }
}

// ============================================
// VISIT - DECLARACIONES
// ============================================

void TypeChecker::visitFunctionDecl(FunctionDeclNode* node) {
    enterFunctionScope(node);
    
    // Registrar parámetros en el scope
    for (auto& paramNode : node->getParameters()) {
        if (paramNode->is(NodeKind::FunctionParam)) {
            auto* param = static_cast<FunctionParamNode*>(paramNode.get());
            // symbolTable_.insertVariable(param->getName(), param->getType(), param);
        }
    }
    
    // Visitar el cuerpo
    if (node->getBody()) {
        node->getBody()->accept(*this);
    }
    
    // Verificar retorno
    checkReturnType(node->getReturnType());
    
    exitFunctionScope();
}

void TypeChecker::visitStructDecl(StructType* node) {
    // Los campos ya fueron procesados al crear el tipo
    // Verificar que los tipos de campos sean válidos
    for (const auto& field : node->getFields()) {
        if (field.type->isError()) {
            errorHandler_.unknownTypeError(
                SourceLocation("", 0, 0),
                field.name
            );
        }
    }
}

void TypeChecker::visitEnumDecl(EnumType* node) {
    // Verificar variantes
    for (const auto& variant : node->getVariants()) {
        for (Type* assocType : variant.associatedTypes) {
            if (assocType->isError()) {
                errorHandler_.unknownTypeError(
                    SourceLocation("", 0, 0),
                    variant.name
                );
            }
        }
    }
}

void TypeChecker::visitTraitDecl(TraitDeclNode* node) {
    // symbolTable_.insertType(node->getName(), ...);
}

void TypeChecker::visitImplDecl(ImplDeclNode* node) {
    // symbolTable_.enterScope(...);
    // symbolTable_.exitScope();
}

void TypeChecker::visitTypeAlias(TypeAliasNode* node) {
    Type* underlying = node->getType();
    if (underlying->isError()) {
        errorHandler_.unknownTypeError(node->getLocation(), underlying->getName());
    }
}

void TypeChecker::visitLetDecl(LetDeclNode* node) {
    // Procesar el inicializador si existe
    Type* initializerType = nullptr;
    if (node->getInitializer()) {
        node->getInitializer()->accept(*this);
        initializerType = getExpressionType(node->getInitializer());
    }
    
    // Determinar el tipo declarado o inferido
    Type* declaredType = node->getDeclaredType();
    
    if (declaredType && initializerType) {
        // Verificar compatibilidad
        if (!checkAssignment(declaredType, node->getInitializer(), node->getLocation())) {
            typeError(node->getInitializer(), declaredType, initializerType);
        }
    } else if (initializerType) {
        // Inferir tipo del inicializador
        node->setType(initializerType);
    } else if (declaredType) {
        // Solo tipo declarado, sin inicializador
        node->setType(declaredType);
    } else {
        // Error: ni tipo declarado ni inicializador
        errorHandler_.reportError(
            ErrorCode::SemanticTypeMismatch,
            node->getLocation(),
            "Variable declaration requires either a type or an initializer"
        );
    }
    
    // Insertar en la tabla de símbolos
    StorageClass storage = node->isMutable() ? StorageClass::Mut : StorageClass::Const;
    symbolTable_.insertVariable(node->getName(), node->getType(), node, storage);
}

void TypeChecker::visitConstDecl(ConstDeclNode* node) {
    // Similar a let pero sin posibilidad de mutabilidad
    if (node->getInitializer()) {
        node->getInitializer()->accept(*this);
    }
    
    symbolTable_.insertConstant(node->getName(), node->getType(), node);
}

// ============================================
// VISIT - STATEMENTS
// ============================================

void TypeChecker::visitBlock(BlockNode* node) {
    symbolTable_.enterBlockScope();
    
    for (auto& stmt : node->getStatements()) {
        stmt->accept(*this);
        if (errorHandler_.hasErrors()) {
            // Continuar para reportar más errores
        }
    }
    
    // Expresión final
    if (node->getFinalExpression()) {
        node->getFinalExpression()->accept(*this);
    }
    
    symbolTable_.exitScope();
}

void TypeChecker::visitExprStmt(ExprStmtNode* node) {
    if (node->getExpression()) {
        node->getExpression()->accept(*this);
    }
}

void TypeChecker::visitAssignStmt(AssignStmtNode* node) {
    if (!node->getLValue() || !node->getRValue()) return;
    
    node->getLValue()->accept(*this);
    node->getRValue()->accept(*this);
    
    Type* lhsType = getExpressionType(node->getLValue());
    Type* rhsType = getExpressionType(node->getRValue());
    
    // Verificar que el LHS sea un lvalue asignable
    if (!node->getLValue()->isLValue()) {
        errorHandler_.reportError(
            ErrorCode::SemanticInvalidOperation,
            node->getLValue()->getLocation(),
            "Left-hand side is not a valid assignment target"
        );
        return;
    }
    
    // Verificar tipos
    checkAssignment(lhsType, node->getRValue(), node->getLocation());
}

void TypeChecker::visitIfStmt(IfStmtNode* node) {
    // Condición
    if (node->getCondition()) {
        node->getCondition()->accept(*this);
        Type* condType = getExpressionType(node->getCondition());
        
        if (!expectBoolean(condType, node->getCondition())) {
            typeError(node->getCondition(), "bool", condType->getName());
        }
    }
    
    // Then branch
    if (node->getThenBranch()) {
        symbolTable_.enterBlockScope();
        node->getThenBranch()->accept(*this);
        symbolTable_.exitScope();
    }
    
    // Else branch
    if (node->getElseBranch()) {
        symbolTable_.enterBlockScope();
        node->getElseBranch()->accept(*this);
        symbolTable_.exitScope();
    }
}

void TypeChecker::visitWhileStmt(WhileStmtNode* node) {
    // Condición
    if (node->getCondition()) {
        node->getCondition()->accept(*this);
        Type* condType = getExpressionType(node->getCondition());
        
        if (!expectBoolean(condType, node->getCondition())) {
            typeError(node->getCondition(), "bool", condType->getName());
        }
    }
    
    // Cuerpo
    if (node->getBody()) {
        symbolTable_.enterBlockScope();
        node->getBody()->accept(*this);
        symbolTable_.exitScope();
    }
}

void TypeChecker::visitForStmt(ForStmtNode* node) {
    // Iterable
    if (node->getIterable()) {
        node->getIterable()->accept(*this);
        Type* iterType = getExpressionType(node->getIterable());
        
        // Verificar que sea iterable
        // Por ahora, solo soportamos arrays
        if (!iterType->isArray() && !iterType->isTuple() && !iterType->isString()) {
            errorHandler_.reportError(
                ErrorCode::SemanticInvalidOperation,
                node->getIterable()->getLocation(),
                "Expression is not iterable"
            );
        }
    }
    
    // Cuerpo
    if (node->getBody()) {
        symbolTable_.enterBlockScope();
        
        // Insertar la variable del bucle
        // symbolTable_.insertVariable(node->getVariableName(), ...);
        
        node->getBody()->accept(*this);
        symbolTable_.exitScope();
    }
}

void TypeChecker::visitLoopStmt(LoopStmtNode* node) {
    if (node->getBody()) {
        symbolTable_.enterBlockScope();
        node->getBody()->accept(*this);
        symbolTable_.exitScope();
    }
}

void TypeChecker::visitMatchStmt(MatchStmtNode* node) {
    visitMatchExpr(node);  // Reutilizar lógica
}

void TypeChecker::visitReturnStmt(ReturnStmtNode* node) {
    returnEncountered_ = true;
    
    if (!isInFunction()) {
        errorHandler_.reportError(
            ErrorCode::SemanticInvalidOperation,
            node->getLocation(),
            "Return statement outside of function"
        );
        return;
    }
    
    Type* returnType = expectedReturnType_;
    if (!returnType) returnType = typeContext_.getVoidType();
    
    if (node->getValue()) {
        node->getValue()->accept(*this);
        Type* actualType = getExpressionType(node->getValue());
        
        if (!checkAssignment(returnType, node->getValue(), node->getLocation())) {
            typeError(node->getValue(), returnType, actualType);
        }
    } else {
        // Return sin valor, solo válido si el tipo de retorno es void
        if (!returnType->isVoid() && !returnType->isNever()) {
            errorHandler_.reportError(
                ErrorCode::SemanticTypeMismatch,
                node->getLocation(),
                "Return without value in function returning non-void type"
            );
        }
    }
}

void TypeChecker::visitBreakStmt(BreakStmtNode* node) {
    // TODO: Verificar que estamos dentro de un bucle
    if (node->getValue()) {
        node->getValue()->accept(*this);
    }
}

void TypeChecker::visitContinueStmt(ContinueStmtNode* node) {
    // TODO: Verificar que estamos dentro de un bucle
}

// ============================================
// VISIT - EXPRESIONES
// ============================================

void TypeChecker::visitBinaryExpr(BinaryExprNode* node) {
    node->getLeft()->accept(*this);
    node->getRight()->accept(*this);
    
    Type* leftType = getExpressionType(node->getLeft());
    Type* rightType = getExpressionType(node->getRight());
    
    // Obtener el tipo resultante
    Type* resultType = getBinaryResultType(node->getOperator(), leftType, rightType);
    
    if (resultType) {
        node->setType(resultType);
    } else {
        // Error de tipos
        errorHandler_.typeMismatchError(
            node->getLocation(),
            leftType->getName() + " " + BinaryOpToString(node->getOperator()) + " " + rightType->getName(),
            "invalid operand types"
        );
    }
}

void TypeChecker::visitUnaryExpr(UnaryExprNode* node) {
    node->getOperand()->accept(*this);
    Type* operandType = getExpressionType(node->getOperand());
    
    switch (node->getOperator()) {
        case UnaryOp::Neg:
            if (operandType->isNumeric()) {
                node->setType(operandType);
            } else {
                typeError(node->getOperand(), "numeric", operandType->getName());
            }
            break;
            
        case UnaryOp::Not:
            if (operandType->isBoolean()) {
                node->setType(typeContext_.getBoolType());
            } else {
                typeError(node->getOperand(), "bool", operandType->getName());
            }
            break;
            
        case UnaryOp::Deref:
            if (operandType->isPointer() || operandType->isReference()) {
                auto* refType = static_cast<ReferenceType*>(operandType);
                node->setType(refType->getReferencedType());
            } else {
                typeError(node->getOperand(), "pointer or reference", operandType->getName());
            }
            break;
            
        case UnaryOp::Ref:
        case UnaryOp::RefMut:
            node->setType(typeContext_.getReferenceType(
                operandType,
                node->getOperator() == UnaryOp::RefMut ? Mutability::Mutable : Mutability::Immutable
            ));
            break;
    }
}

void TypeChecker::visitCallExpr(CallExprNode* node) {
    // Procesar función llamada
    if (node->getFunction()) {
        node->getFunction()->accept(*this);
    }
    
    // Procesar argumentos
    for (auto& arg : node->getArguments()) {
        arg->accept(*this);
    }
    
    // Determinar tipo de la función
    Type* funcType = getExpressionType(node->getFunction());
    
    if (funcType->isFunction()) {
        auto* fnType = static_cast<FunctionType*>(funcType);
        
        // Verificar número de argumentos
        if (node->getArguments().size() != fnType->getParamTypes().size()) {
            errorHandler_.reportError(
                ErrorCode::SemanticTypeMismatch,
                node->getLocation(),
                "Function call argument count mismatch"
            );
        }
        
        // Verificar tipos de argumentos
        const auto& paramTypes = fnType->getParamTypes();
        for (size_t i = 0; i < std::min(node->getArguments().size(), paramTypes.size()); ++i) {
            Type* argType = getExpressionType(node->getArguments()[i].get());
            if (!checkAssignment(paramTypes[i], node->getArguments()[i].get(), 
                                node->getArguments()[i]->getLocation())) {
                typeError(node->getArguments()[i].get(), paramTypes[i], argType);
            }
        }
        
        // El tipo de retorno de la llamada
        node->setType(fnType->getReturnType());
    } else {
        // Error: no es una función
        errorHandler_.reportError(
            ErrorCode::SemanticTypeMismatch,
            node->getLocation(),
            "Expression is not callable"
        );
        node->setType(typeContext_.getErrorType());
    }
}

void TypeChecker::visitIfExpr(IfExprNode* node) {
    // Condición
    node->getCondition()->accept(*this);
    Type* condType = getExpressionType(node->getCondition());
    
    if (!expectBoolean(condType, node->getCondition())) {
        typeError(node->getCondition(), "bool", condType->getName());
    }
    
    // Then branch
    node->getThenBranch()->accept(*this);
    Type* thenType = getExpressionType(static_cast<Expression*>(node->getThenBranch()));
    
    // Else branch
    Type* elseType = nullptr;
    if (node->getElseBranch()) {
        node->getElseBranch()->accept(*this);
        elseType = getExpressionType(static_cast<Expression*>(node->getElseBranch()));
    } else {
        elseType = typeContext_.getVoidType();
    }
    
    // El tipo del if expression es el tipo común de ambas ramas
    Type* commonType = thenType->getCommonType(elseType);
    if (commonType) {
        node->setType(commonType);
    } else {
        errorHandler_.typeMismatchError(
            node->getLocation(),
            thenType->getName(),
            elseType->getName()
        );
        node->setType(typeContext_.getErrorType());
    }
}

void TypeChecker::visitMatchExpr(MatchExprNode* node) {
    // Expression a evaluar
    node->getMatchedExpr()->accept(*this);
    Type* matchedType = getExpressionType(node->getMatchedExpr());
    
    // Brazos del match
    Type* resultType = nullptr;
    for (auto& arm : node->getArms()) {
        arm->accept(*this);
        
        Type* armType = getExpressionType(static_cast<Expression*>(arm->getBody()));
        
        if (!resultType) {
            resultType = armType;
        } else {
            Type* common = resultType->getCommonType(armType);
            if (common) {
                resultType = common;
            }
        }
    }
    
    if (resultType) {
        node->setType(resultType);
    } else {
        node->setType(typeContext_.getErrorType());
    }
}

void TypeChecker::visitLambdaExpr(LambdaExprNode* node) {
    // Procesar parámetros
    std::vector<Type*> paramTypes;
    for (auto& param : node->getParameters()) {
        param->accept(*this);
        paramTypes.push_back(param->getType());
    }
    
    // Tipo de retorno
    Type* returnType = node->getReturnType();
    if (!returnType) {
        // Inferir del cuerpo
        if (node->getBody()) {
            node->getBody()->accept(*this);
            returnType = getExpressionType(static_cast<Expression*>(node->getBody()));
        } else {
            returnType = typeContext_.getVoidType();
        }
    }
    
    // Crear tipo de función
    FunctionType* funcType = typeContext_.getFunctionType(paramTypes, returnType);
    node->setType(funcType);
}

void TypeChecker::visitLiteral(LiteralNode* node) {
    if (node->is(NodeKind::IntegerLiteral)) {
        auto* lit = static_cast<IntegerLiteralNode*>(node);
        // Determinar tipo basado en el sufijo
        if (lit->getSuffix() == "i8") {
            node->setType(typeContext_.getInt8Type());
        } else if (lit->getSuffix() == "i32") {
            node->setType(typeContext_.getInt32Type());
        } else if (lit->getSuffix() == "u8") {
            node->setType(typeContext_.getUInt8Type());
        } else if (lit->getSuffix() == "u32") {
            node->setType(typeContext_.getUInt32Type());
        } else {
            // Default a i32
            node->setType(typeContext_.getInt32Type());
        }
    } else if (node->is(NodeKind::FloatLiteral)) {
        auto* lit = static_cast<FloatLiteralNode*>(node);
        if (lit->getSuffix() == "f32") {
            node->setType(typeContext_.getFloat32Type());
        } else {
            node->setType(typeContext_.getFloat64Type());
        }
    } else if (node->is(NodeKind::BooleanLiteral)) {
        node->setType(typeContext_.getBoolType());
    } else if (node->is(NodeKind::StringLiteral)) {
        node->setType(typeContext_.getStringType());
    } else if (node->is(NodeKind::CharLiteral)) {
        node->setType(typeContext_.getCharType());
    } else if (node->is(NodeKind::NullLiteral)) {
        node->setType(typeContext_.getErrorType()); // TODO: Option<T>
    }
}

void TypeChecker::visitIdentifier(IdentifierNode* node) {
    // Buscar en la tabla de símbolos
    Symbol* sym = symbolTable_.lookup(node->getName());
    
    if (!sym) {
        undefinedError(node);
        node->setType(typeContext_.getErrorType());
        return;
    }
    
    // Guardar el símbolo para uso posterior
    node->setSymbol(sym);
    node->setType(sym->type);
    
    // Marcar como lvalue si es una variable
    if (sym->kind == SymbolKind::Variable) {
        node->setLValue(true);
    }
}

void TypeChecker::visitFieldExpr(FieldExprNode* node) {
    node->getObject()->accept(*this);
    Type* objectType = getExpressionType(node->getObject());
    
    // TODO: Buscar campo en struct/enum
    node->setType(typeContext_.getErrorType());
}

void TypeChecker::visitTupleIndexExpr(TupleIndexExprNode* node) {
    node->getTuple()->accept(*this);
    Type* tupleType = getExpressionType(node->getTuple());
    
    if (tupleType->isTuple()) {
        auto* tup = static_cast<TupleType*>(tupleType);
        size_t index = node->getIndex();
        
        if (index < tup->getElementCount()) {
            node->setType(tup->getElement(index));
        } else {
            errorHandler_.reportError(
                ErrorCode::SemanticInvalidOperation,
                node->getLocation(),
                "Tuple index out of bounds"
            );
            node->setType(typeContext_.getErrorType());
        }
    } else {
        errorHandler_.reportError(
            ErrorCode::SemanticInvalidOperation,
            node->getLocation(),
            "Cannot index non-tuple type"
        );
        node->setType(typeContext_.getErrorType());
    }
}

void TypeChecker::visitArrayExpr(ArrayExprNode* node) {
    if (node->getElements().empty()) {
        node->setType(typeContext_.getErrorType());
        return;
    }
    
    // Verificar que todos los elementos tengan el mismo tipo
    Type* commonType = nullptr;
    for (auto& elem : node->getElements()) {
        elem->accept(*this);
        Type* elemType = getExpressionType(elem.get());
        
        if (!commonType) {
            commonType = elemType;
        } else {
            Type* unified = commonType->getCommonType(elemType);
            if (unified) {
                commonType = unified;
            }
        }
    }
    
    if (commonType) {
        node->setType(typeContext_.getArrayType(commonType, node->getElements().size()));
    } else {
        node->setType(typeContext_.getErrorType());
    }
}

void TypeChecker::visitTupleExpr(TupleExprNode* node) {
    std::vector<Type*> elementTypes;
    for (auto& elem : node->getElements()) {
        elem->accept(*this);
        elementTypes.push_back(getExpressionType(elem.get()));
    }
    
    node->setType(typeContext_.getTupleType(elementTypes));
}

void TypeChecker::visitStructExpr(StructExprNode* node) {
    // TODO: Verificar que el tipo existe y los campos son correctos
    node->setType(typeContext_.getErrorType());
}

void TypeChecker::visitRangeExpr(RangeExprNode* node) {
    node->getStart()->accept(*this);
    node->getEnd()->accept(*this);
    
    Type* startType = getExpressionType(node->getStart());
    Type* endType = getExpressionType(node->getEnd());
    
    if (startType->isInteger() && endType->isInteger()) {
        // Tipo rango de enteros
        node->setType(typeContext_.getInt32Type()); // TODO: Tipo Range
    } else {
        errorHandler_.reportError(
            ErrorCode::SemanticTypeMismatch,
            node->getLocation(),
            "Range bounds must be integer types"
        );
        node->setType(typeContext_.getErrorType());
    }
}

void TypeChecker::visitCastExpr(CastExprNode* node) {
    node->getValue()->accept(*this);
    Type* valueType = getExpressionType(node->getValue());
    Type* targetType = node->getTargetType();
    
    // Verificar que la conversión es válida
    // TODO: Implementar reglas de conversión
    
    node->setType(targetType);
}

void TypeChecker::visitAwaitExpr(AwaitExprNode* node) {
    node->getValue()->accept(*this);
    Type* valueType = getExpressionType(node->getValue());
    
    // TODO: Verificar que es un Future o similar
    node->setType(typeContext_.getErrorType());
}

// ============================================
// UTILIDADES DE ANÁLISIS
// ============================================

Type* TypeChecker::getExpressionType(Expression* expr) {
    if (expr->hasType()) {
        return expr->getType();
    }
    return typeContext_.getErrorType();
}

bool TypeChecker::expectNumeric(Type* type, Expression* expr) {
    if (!type->isNumeric()) {
        typeError(expr, "numeric", type->getName());
        return false;
    }
    return true;
}

bool TypeChecker::expectInteger(Type* type, Expression* expr) {
    if (!type->isInteger()) {
        typeError(expr, "integer", type->getName());
        return false;
    }
    return true;
}

bool TypeChecker::expectBoolean(Type* type, Expression* expr) {
    if (!type->isBoolean()) {
        typeError(expr, "bool", type->getName());
        return false;
    }
    return true;
}

bool TypeChecker::expectComparable(Type* type, Expression* expr) {
    // Por ahora, todos los tipos escalares son comparables
    if (!type->isScalar() && !type->isString()) {
        typeError(expr, "comparable", type->getName());
        return false;
    }
    return true;
}

bool TypeChecker::checkAssignment(Type* targetType, Expression* value, SourceLocation loc) {
    Type* valueType = getExpressionType(value);
    
    // Verificar conversión implícita
    ConversionKind conv = valueType->getConversionTo(targetType);
    
    return conv == ConversionKind::Identity || 
           conv == ConversionKind::Implicit;
}

Type* TypeChecker::getBinaryResultType(BinaryOp op, Type* left, Type* right) {
    // Operadores aritméticos
    if (op == BinaryOp::Add || op == BinaryOp::Sub || 
        op == BinaryOp::Mul || op == BinaryOp::Div || 
        op == BinaryOp::Mod) {
        
        if (left->isNumeric() && right->isNumeric()) {
            // Obtener el tipo común
            return left->getCommonType(right);
        }
        return nullptr;
    }
    
    // Operador de potencia
    if (op == BinaryOp::Pow) {
        if (left->isFloat() && right->isFloat()) {
            return left->getCommonType(right);
        }
        return nullptr;
    }
    
    // Operadores de comparación
    if (op == BinaryOp::Eq || op == BinaryOp::Ne ||
        op == BinaryOp::Lt || op == BinaryOp::Le ||
        op == BinaryOp::Gt || op == BinaryOp::Ge) {
        
        if (expectComparable(left, nullptr) && expectComparable(right, nullptr)) {
            return typeContext_.getBoolType();
        }
        return nullptr;
    }
    
    // Operadores lógicos
    if (op == BinaryOp::And || op == BinaryOp::Or) {
        if (left->isBoolean() && right->isBoolean()) {
            return typeContext_.getBoolType();
        }
        return nullptr;
    }
    
    // Operadores bitwise
    if (op == BinaryOp::BitAnd || op == BinaryOp::BitOr || 
        op == BinaryOp::BitXor || op == BinaryOp::Shl || 
        op == BinaryOp::Shr) {
        
        if (left->isInteger() && right->isInteger()) {
            return left->getCommonType(right);
        }
        return nullptr;
    }
    
    return nullptr;
}

void TypeChecker::typeError(Expression* expr, const std::string& expected, 
                            const std::string& found) {
    errorHandler_.typeMismatchError(
        expr->getLocation(),
        expected,
        found
    );
}

void TypeChecker::typeError(Expression* expr, Type* expected, Type* found) {
    typeError(expr, expected->getName(), found->getName());
}

void TypeChecker::undefinedError(IdentifierNode* ident) {
    errorHandler_.undefinedVariableError(
        ident->getLocation(),
        ident->getName()
    );
}

void TypeChecker::duplicateError(const std::string& name, SourceLocation loc) {
    errorHandler_.duplicateDefinitionError(loc, name);
}

void TypeChecker::returnError(FunctionDeclNode* func, Type* expected, Type* found) {
    std::ostringstream oss;
    oss << "Return type mismatch in function '" << func->getName() << "': ";
    oss << "expected '" << expected->getName() << "', found '" << found->getName() << "'";
    
    errorHandler_.reportError(
        ErrorCode::SemanticTypeMismatch,
        func->getLocation(),
        oss.str()
    );
}

// ============================================
// CONTEXTO DE ANÁLISIS
// ============================================

void TypeChecker::enterFunctionScope(FunctionDeclNode* func) {
    currentFunction_ = func;
    expectedReturnType_ = func->getReturnType();
    returnEncountered_ = false;
    
    symbolTable_.enterFunctionScope(func->getName());
    
    // Insertar parámetro implícito 'self' si es un método
    // symbolTable_.insert(...);
}

void TypeChecker::exitFunctionScope() {
    currentFunction_ = nullptr;
    expectedReturnType_ = nullptr;
    returnEncountered_ = false;
    
    symbolTable_.exitScope();
}

bool TypeChecker::checkReturnType(Type* returnType) {
    if (!expectedReturnType_) {
        expectedReturnType_ = returnType;
    }
    
    if (!returnEncountered_) {
        // Verificar que la función no requiere返回值 pero no tiene return
        // Esto es solo para funciones que no retornan void
        if (returnType && !returnType->isVoid() && !returnType->isNever()) {
            errorHandler_.reportError(
                ErrorCode::SemanticInvalidOperation,
                currentFunction_->getLocation(),
                "Function with non-void return type missing return statement"
            );
            return false;
        }
    }
    
    return true;
}

void TypeChecker::setExpectedReturnType(Type* type) {
    expectedReturnType_ = type;
}

// ============================================
// RESOLUCIÓN DE TIPOS
// ============================================

Type* TypeChecker::resolveType(TypeRefNode* typeRef) {
    Path path = typeRef->getPath();
    return resolveQualifiedPath(path);
}

Type* TypeChecker::resolveQualifiedPath(const Path& path) {
    std::string fullPath = path.toString();
    
    // Buscar en la tabla de símbolos
    Symbol* sym = symbolTable_.lookup(fullPath);
    if (sym) {
        return sym->type;
    }
    
    // Buscar en el contexto de tipos
    Type* type = typeContext_.lookupType(path);
    if (type) {
        return type;
    }
    
    return typeContext_.getErrorType();
}

} // namespace aether
