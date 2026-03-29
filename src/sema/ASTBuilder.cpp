/**
 * @file ASTBuilder.cpp
 * @brief Implementación del constructor del AST
 * @author Yasmany Ramos García
 */

#include "ASTBuilder.h"
#include "NovaParser.h"
#include "NovaLexer.h"
#include <sstream>
#include <cctype>
#include <stdexcept>

namespace nova {

// ============================================
// CONSTRUCTOR Y MÉTODOS PRINCIPALES
// ============================================

ASTBuilder::ASTBuilder(ErrorHandler& errorHandler, TypeContext& typeContext)
    : errorHandler_(errorHandler), typeContext_(typeContext) {}

std::unique_ptr<ModuleNode> ASTBuilder::build(antlr4::ANTLRInputStream* inputStream) {
    // Crear el lexer
    NovaLexer lexer(inputStream);
    NovaErrorListener errorListener(errorHandler_);
    lexer.removeErrorListeners();
    lexer.addErrorListener(&errorListener);
    
    // Crear el token stream
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
    
    // Crear el parser
    NovaParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(&errorListener);
    
    // Parsear el archivo fuente
    auto* tree = parser.sourceFile();
    
    // Verificar errores de parseo
    if (errorHandler_.hasErrors()) {
        errorHandler_.printSummary();
        return nullptr;
    }
    
    // Construir el AST
    auto result = visitSourceFile(tree);
    if (!result.isEmpty()) {
        return result.as<std::unique_ptr<ModuleNode>>();
    }
    
    return nullptr;
}

std::unique_ptr<ModuleNode> ASTBuilder::build(antlr4::CharStream* charStream) {
    auto input = std::make_unique<antlr4::ANTLRInputStream>(charStream->getSourceName().c_str(), static_cast<size_t>(charStream->getSourceName().size()));
    return build(input.get());
}

// ============================================
// VISIT - ELEMENTOS DE NIVEL SUPERIOR
// ============================================

antlrcpp::Any ASTBuilder::visitSourceFile(NovaParser::SourceFileContext* ctx) {
    auto module = std::make_unique<ModuleNode>(createSourceLocation(ctx));
    
    // Procesar módulo si existe
    if (ctx->moduleDeclaration()) {
        auto result = visit(ctx->moduleDeclaration());
        if (!result.isEmpty()) {
            // module name se procesa aquí
        }
    }
    
    // Procesar imports
    for (auto* importCtx : ctx->importDeclaration()) {
        auto result = visit(importCtx);
        // Crear nodo de import y añadirlo
    }
    
    // Procesar declaraciones de nivel superior
    for (auto* declCtx : ctx->topLevelDeclaration()) {
        auto result = visit(declCtx);
        if (!result.isEmpty()) {
            // El resultado puede ser una declaración
        }
    }
    
    module->setEndLocation(createSourceLocation(ctx));
    return module;
}

antlrcpp::Any ASTBuilder::visitModuleDeclaration(NovaParser::ModuleDeclarationContext* ctx) {
    // Módulo: 'module' qualifiedName ';'
    if (ctx->qualifiedName()) {
        auto path = convertPath(ctx->qualifiedName());
        return path;
    }
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitImportDeclaration(NovaParser::ImportDeclarationContext* ctx) {
    // Import: 'import' qualifiedName ('as' identifier)? ';'
    // Use: 'use' qualifiedName ';'
    
    auto importNode = std::make_unique<ImportDeclNode>(createSourceLocation(ctx));
    
    if (ctx->qualifiedName()) {
        auto path = convertPath(ctx->qualifiedName());
        // Guardar path en el nodo
    }
    
    if (ctx->identifier()) {
        // Hay alias
    }
    
    return importNode;
}

antlrcpp::Any ASTBuilder::visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext* ctx) {
    // Delegar al tipo específico de declaración
    if (ctx->functionDeclaration()) {
        return visit(ctx->functionDeclaration());
    } else if (ctx->structDeclaration()) {
        return visit(ctx->structDeclaration());
    } else if (ctx->enumDeclaration()) {
        return visit(ctx->enumDeclaration());
    } else if (ctx->traitDeclaration()) {
        return visit(ctx->traitDeclaration());
    } else if (ctx->implDeclaration()) {
        return visit(ctx->implDeclaration());
    } else if (ctx->typeAliasDeclaration()) {
        return visit(ctx->typeAliasDeclaration());
    } else if (ctx->constantDeclaration()) {
        return visit(ctx->constantDeclaration());
    } else if (ctx->externDeclaration()) {
        return visit(ctx->externDeclaration());
    }
    
    return antlrcpp::Any();
}

// ============================================
// VISIT - DECLARACIONES
// ============================================

antlrcpp::Any ASTBuilder::visitFunctionDeclaration(NovaParser::FunctionDeclarationContext* ctx) {
    auto funcNode = std::make_unique<FunctionDeclNode>(createSourceLocation(ctx));
    
    // Nombre de la función
    if (ctx->identifier()) {
        funcNode->setName(ctx->identifier()->getText());
    }
    
    // Async
    funcNode->setAsync(ctx->async != nullptr);
    
    // Parámetros
    if (ctx->functionParameters()) {
        auto result = visit(ctx->functionParameters());
        // Procesar parámetros
    }
    
    // Tipo de retorno
    if (ctx->returnType()) {
        Type* returnType = convertType(ctx->returnType()->type_());
        funcNode->setReturnType(returnType);
    }
    
    // Cuerpo
    if (ctx->block()) {
        auto result = visit(ctx->block());
        if (!result.isEmpty()) {
            funcNode->setBody(antlrcpp::Any_cast<std::unique_ptr<Node>>(result));
        }
    }
    
    funcNode->setEndLocation(createSourceLocation(ctx));
    return funcNode;
}

antlrcpp::Any ASTBuilder::visitStructDeclaration(NovaParser::StructDeclarationContext* ctx) {
    // Crear el tipo struct
    std::string name = ctx->identifier()->getText();
    StructType* structType = typeContext_.registerStruct(name);
    
    // Procesar campos
    for (auto* fieldCtx : ctx->structField()) {
        std::string fieldName = fieldCtx->identifier()->getText();
        Type* fieldType = convertType(fieldCtx->type_());
        
        Visibility vis = Visibility::Public;
        if (fieldCtx->visibility()) {
            // Parsear visibilidad
        }
        
        structType->addField(StructField(fieldName, fieldType, vis));
    }
    
    // Crear nodo de declaración
    auto declNode = std::make_unique<StructDeclNode>(createSourceLocation(ctx));
    declNode->setType(structType);
    
    return declNode;
}

antlrcpp::Any ASTBuilder::visitEnumDeclaration(NovaParser::EnumDeclarationContext* ctx) {
    // Crear el tipo enum
    std::string name = ctx->identifier()->getText();
    EnumType* enumType = typeContext_.registerEnum(name);
    
    // Procesar variantes
    for (auto* variantCtx : ctx->enumVariant()) {
        std::string variantName = variantCtx->identifier()->getText();
        
        std::vector<Type*> associatedTypes;
        if (variantCtx->typeList()) {
            for (auto* typeCtx : variantCtx->typeList()->type_()) {
                associatedTypes.push_back(convertType(typeCtx));
            }
        }
        
        enumType->addVariant(EnumVariant(variantName, associatedTypes));
    }
    
    auto declNode = std::make_unique<EnumDeclNode>(createSourceLocation(ctx));
    declNode->setType(enumType);
    
    return declNode;
}

antlrcpp::Any ASTBuilder::visitTraitDeclaration(NovaParser::TraitDeclarationContext* ctx) {
    auto traitNode = std::make_unique<TraitDeclNode>(createSourceLocation(ctx));
    
    if (ctx->identifier()) {
        // setName(ctx->identifier()->getText());
    }
    
    // Procesar métodos del trait
    for (auto* methodCtx : ctx->traitMethod()) {
        visit(methodCtx);
    }
    
    return traitNode;
}

antlrcpp::Any ASTBuilder::visitImplDeclaration(NovaParser::ImplDeclarationContext* ctx) {
    auto implNode = std::make_unique<ImplDeclNode>(createSourceLocation(ctx));
    
    // Procesar miembros de la implementación
    for (auto* memberCtx : ctx->implMember()) {
        visit(memberCtx);
    }
    
    return implNode;
}

antlrcpp::Any ASTBuilder::visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext* ctx) {
    std::string name = ctx->identifier()->getText();
    Type* underlying = convertType(ctx->type_());
    
    TypeAlias* alias = typeContext_.getTypeAlias(name, underlying);
    
    auto declNode = std::make_unique<TypeAliasNode>(createSourceLocation(ctx));
    declNode->setType(alias);
    
    return declNode;
}

antlrcpp::Any ASTBuilder::visitConstantDeclaration(NovaParser::ConstantDeclarationContext* ctx) {
    auto constNode = std::make_unique<ConstDeclNode>(createSourceLocation(ctx));
    
    // Nombre
    if (ctx->identifier()) {
        // setName(ctx->identifier()->getText());
    }
    
    // Tipo
    if (ctx->type_()) {
        Type* type = convertType(ctx->type_());
        // constNode->setType(type);
    }
    
    // Valor inicial
    if (ctx->expression()) {
        auto result = visit(ctx->expression());
        if (!result.isEmpty()) {
            // setInitializer(...)
        }
    }
    
    return constNode;
}

// ============================================
// VISIT - STATEMENTS
// ============================================

antlrcpp::Any ASTBuilder::visitBlock(NovaParser::BlockContext* ctx) {
    auto blockNode = std::make_unique<BlockNode>(createSourceLocation(ctx));
    
    // Procesar statements y expresión final
    for (auto* stmtCtx : ctx->statement()) {
        visit(stmtCtx);
    }
    
    // Expresión final opcional
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    blockNode->setEndLocation(createSourceLocation(ctx));
    return blockNode;
}

antlrcpp::Any ASTBuilder::visitVariableDeclaration(NovaParser::VariableDeclarationContext* ctx) {
    auto letNode = std::make_unique<LetDeclNode>(createSourceLocation(ctx));
    
    // Mutabilidad
    letNode->setMutable(ctx->mut != nullptr);
    
    // El pattern debe ser un identificador (para simplificar)
    if (ctx->pattern() && ctx->pattern()->identifierPattern()) {
        std::string name = ctx->pattern()->identifierPattern()->identifier()->getText();
        letNode->setName(name);
    }
    
    // Tipo declarado (opcional)
    if (ctx->type_()) {
        Type* declaredType = convertType(ctx->type_());
        letNode->setDeclaredType(declaredType);
    }
    
    // Inicializador
    if (ctx->expression()) {
        auto result = visit(ctx->expression());
        if (!result.isEmpty()) {
            // letNode->setInitializer(...);
        }
    }
    
    return letNode;
}

antlrcpp::Any ASTBuilder::visitExpressionStatement(NovaParser::ExpressionStatementContext* ctx) {
    if (ctx->expression()) {
        auto result = visit(ctx->expression());
        if (!result.isEmpty()) {
            auto expr = antlrcpp::Any_cast<std::unique_ptr<Expression>>(result);
            auto stmt = std::make_unique<ExprStmtNode>(createSourceLocation(ctx));
            // stmt->setExpression(std::move(expr));
            return stmt;
        }
    }
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitAssignmentStatement(NovaParser::AssignmentStatementContext* ctx) {
    auto assignNode = std::make_unique<AssignStmtNode>(createSourceLocation(ctx));
    
    // LHS
    if (ctx->expression(0)) {
        visit(ctx->expression(0));
    }
    
    // RHS
    if (ctx->expression(1)) {
        visit(ctx->expression(1));
    }
    
    return assignNode;
}

antlrcpp::Any ASTBuilder::visitIfStatement(NovaParser::IfStatementContext* ctx) {
    auto ifNode = std::make_unique<IfStmtNode>(createSourceLocation(ctx));
    
    // Condición
    if (ctx->condition()) {
        if (ctx->condition()->expression()) {
            visit(ctx->condition()->expression());
        } else if (ctx->condition()->letCondition()) {
            // let pattern = expression
            visit(ctx->condition()->letCondition());
        }
    }
    
    // Then branch
    if (ctx->block(0)) {
        visit(ctx->block(0));
    }
    
    // Else branch (opcional)
    if (ctx->block().size() > 1) {
        visit(ctx->block(1));
    }
    
    return ifNode;
}

antlrcpp::Any ASTBuilder::visitLoopStatement(NovaParser::LoopStatementContext* ctx) {
    if (ctx->loopBlock()) {
        return visit(ctx->loopBlock());
    } else if (ctx->whileBlock()) {
        return visit(ctx->whileBlock());
    } else if (ctx->forBlock()) {
        return visit(ctx->forBlock());
    }
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitMatchStatement(NovaParser::MatchStatementContext* ctx) {
    auto matchNode = std::make_unique<MatchStmtNode>(createSourceLocation(ctx));
    
    // Expresión a evaluar
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    // Brazos del match
    for (auto* armCtx : ctx->matchArm()) {
        visit(armCtx);
    }
    
    return matchNode;
}

antlrcpp::Any ASTBuilder::visitReturnExpression(NovaParser::ReturnExpressionContext* ctx) {
    auto returnNode = std::make_unique<ReturnStmtNode>(createSourceLocation(ctx));
    
    if (ctx->expression()) {
        auto result = visit(ctx->expression());
        if (!result.isEmpty()) {
            // returnNode->setValue(...);
        }
    }
    
    return returnNode;
}

antlrcpp::Any ASTBuilder::visitBreakExpression(NovaParser::BreakExpressionContext* ctx) {
    auto breakNode = std::make_unique<BreakStmtNode>(createSourceLocation(ctx));
    
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    return breakNode;
}

antlrcpp::Any ASTBuilder::visitContinueExpression(NovaParser::ContinueExpressionContext* ctx) {
    return std::make_unique<ContinueStmtNode>(createSourceLocation(ctx));
}

// ============================================
// VISIT - EXPRESIONES
// ============================================

antlrcpp::Any ASTBuilder::visitExpression(NovaParser::ExpressionContext* ctx) {
    // El parser puede devolver diferentes tipos de expresiones
    // delegar al método específico
    if (ctx->literalExpression()) {
        return visit(ctx->literalExpression());
    } else if (ctx->identifierExpression()) {
        return visit(ctx->identifierExpression());
    } else if (ctx->binaryExpr()) {
        return visit(ctx->binaryExpr());
    } else if (ctx->unaryExpr()) {
        return visit(ctx->unaryExpr());
    } else if (ctx->callExpr()) {
        return visit(ctx->callExpr());
    } else if (ctx->ifExpr()) {
        return visit(ctx->ifExpr());
    } else if (ctx->matchExpr()) {
        return visit(ctx->matchExpr());
    } else if (ctx->parenthesizedExpression()) {
        return visit(ctx->parenthesizedExpression()->expression());
    }
    
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitLiteralExpression(NovaParser::LiteralExpressionContext* ctx) {
    if (ctx->integerLiteral()) {
        return visit(ctx->integerLiteral());
    } else if (ctx->floatLiteral()) {
        return visit(ctx->floatLiteral());
    } else if (ctx->booleanLiteral()) {
        return visit(ctx->booleanLiteral());
    } else if (ctx->characterLiteral()) {
        return visit(ctx->characterLiteral());
    } else if (ctx->stringLiteral()) {
        return visit(ctx->stringLiteral());
    } else if (ctx->nullLiteral()) {
        return visitNullLiteral(nullptr);
    }
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitIdentifierExpression(NovaParser::IdentifierExpressionContext* ctx) {
    auto identNode = std::make_unique<IdentifierNode>(
        ctx->identifier()->getText(),
        createSourceLocation(ctx)
    );
    
    return identNode;
}

antlrcpp::Any ASTBuilder::visitArithmeticExpression(NovaParser::ArithmeticExpressionContext* ctx) {
    auto binNode = std::make_unique<BinaryExprNode>(createSourceLocation(ctx));
    
    // Operador
    int tokenType = ctx->getStart()->getType();
    if (auto op = getBinaryOperator(tokenType)) {
        binNode->setOperator(*op);
    } else {
        reportBuildError(ctx, "Unknown binary operator");
    }
    
    // Operando izquierdo
    if (ctx->expression(0)) {
        auto result = visit(ctx->expression(0));
        if (!result.isEmpty()) {
            // binNode->setLeft(...);
        }
    }
    
    // Operando derecho
    if (ctx->expression(1)) {
        auto result = visit(ctx->expression(1));
        if (!result.isEmpty()) {
            // binNode->setRight(...);
        }
    }
    
    return binNode;
}

antlrcpp::Any ASTBuilder::visitUnaryExpression(NovaParser::UnaryExpressionContext* ctx) {
    auto unaryNode = std::make_unique<UnaryExprNode>(createSourceLocation(ctx));
    
    // Operador
    int tokenType = ctx->getStart()->getType();
    if (auto op = getUnaryOperator(tokenType)) {
        unaryNode->setOperator(*op);
    }
    
    // Operando
    if (ctx->expression()) {
        auto result = visit(ctx->expression());
        if (!result.isEmpty()) {
            // unaryNode->setOperand(...);
        }
    }
    
    return unaryNode;
}

antlrcpp::Any ASTBuilder::visitCallExpression(NovaParser::CallExpressionContext* ctx) {
    auto callNode = std::make_unique<CallExprNode>(createSourceLocation(ctx));
    
    // Función llamada
    if (ctx->expression()) {
        auto result = visit(ctx->expression());
        if (!result.isEmpty()) {
            // callNode->setFunction(...);
        }
    }
    
    // Argumentos
    if (ctx->argumentList()) {
        for (auto* argCtx : ctx->argumentList()->expression()) {
            auto result = visit(argCtx);
            if (!result.isEmpty()) {
                // callNode->addArgument(...);
            }
        }
    }
    
    return callNode;
}

antlrcpp::Any ASTBuilder::visitFieldExpression(NovaParser::FieldExpressionContext* ctx) {
    // expression '.' identifier
    auto fieldNode = std::make_unique<FieldExprNode>(createSourceLocation(ctx));
    
    // Objeto
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    // Campo
    if (ctx->identifier()) {
        // fieldNode->setFieldName(ctx->identifier()->getText());
    }
    
    return fieldNode;
}

antlrcpp::Any ASTBuilder::visitFieldExpression(NovaParser::FieldExpressionContext* ctx) {
    // expression '.' DecimalLiteral
    auto indexNode = std::make_unique<TupleIndexExprNode>(createSourceLocation(ctx));
    
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    if (ctx->DecimalLiteral()) {
        // indexNode->setIndex(...)
    }
    
    return indexNode;
}

antlrcpp::Any ASTBuilder::visitIfExpression(NovaParser::IfExpressionContext* ctx) {
    auto ifNode = std::make_unique<IfExprNode>(createSourceLocation(ctx));
    
    // Condición
    if (ctx->expression(0)) {
        visit(ctx->expression(0));
    }
    
    // Then branch
    if (ctx->block(0)) {
        visit(ctx->block(0));
    }
    
    // Else branch
    if (ctx->expression(1)) {
        visit(ctx->expression(1));
    } else if (ctx->block().size() > 1) {
        visit(ctx->block(1));
    } else if (ctx->ifExpr()) {
        visit(ctx->ifExpr());
    }
    
    return ifNode;
}

antlrcpp::Any ASTBuilder::visitMatchExpression(NovaParser::MatchExpressionContext* ctx) {
    auto matchNode = std::make_unique<MatchExprNode>(createSourceLocation(ctx));
    
    // Expresión a evaluar
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    // Brazos
    for (auto* armCtx : ctx->matchArm()) {
        visit(armCtx);
    }
    
    return matchNode;
}

antlrcpp::Any ASTBuilder::visitLoopExpression(NovaParser::LoopExpressionContext* ctx) {
    if (ctx->loopBlock()) {
        return visit(ctx->loopBlock());
    }
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitBlockExpression(NovaParser::BlockExpressionContext* ctx) {
    auto rangeNode = std::make_unique<RangeExprNode>(createSourceLocation(ctx));
    
    if (ctx->expression(0)) {
        visit(ctx->expression(0));
    }
    
    if (ctx->expression(1)) {
        visit(ctx->expression(1));
    }
    
    return rangeNode;
}

antlrcpp::Any ASTBuilder::visitPostfixExpression(NovaParser::PostfixExpressionContext* ctx) {
    auto castNode = std::make_unique<CastExprNode>(createSourceLocation(ctx));
    
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    if (ctx->type_()) {
        Type* targetType = convertType(ctx->type_());
        // castNode->setTargetType(targetType);
    }
    
    return castNode;
}

antlrcpp::Any ASTBuilder::visitLambdaExpression(NovaParser::LambdaExpressionContext* ctx) {
    auto lambdaNode = std::make_unique<LambdaExprNode>(createSourceLocation(ctx));
    
    // Parámetros
    if (ctx->parameterList()) {
        for (auto* paramCtx : ctx->parameterList()->parameter()) {
            visit(paramCtx);
        }
    }
    
    // Tipo de retorno
    if (ctx->type_()) {
        Type* returnType = convertType(ctx->type_());
        // lambdaNode->setReturnType(returnType);
    }
    
    // Cuerpo
    if (ctx->block()) {
        visit(ctx->block());
    }
    
    return lambdaNode;
}

antlrcpp::Any ASTBuilder::visitArrayExpression(NovaParser::ArrayExpressionContext* ctx) {
    auto arrayNode = std::make_unique<ArrayExprNode>(createSourceLocation(ctx));
    
    for (auto* exprCtx : ctx->expression()) {
        visit(exprCtx);
    }
    
    return arrayNode;
}

antlrcpp::Any ASTBuilder::visitTupleExpression(NovaParser::TupleExpressionContext* ctx) {
    auto tupleNode = std::make_unique<TupleExprNode>(createSourceLocation(ctx));
    
    for (auto* exprCtx : ctx->expression()) {
        visit(exprCtx);
    }
    
    return tupleNode;
}

antlrcpp::Any ASTBuilder::visitStructExpression(NovaParser::StructExpressionContext* ctx) {
    auto structNode = std::make_unique<StructExprNode>(createSourceLocation(ctx));
    
    if (ctx->typeReference()) {
        // Tipo de la estructura
        Path typePath = convertPath(ctx->typeReference()->qualifiedName());
        // structNode->setTypePath(typePath);
    }
    
    // Inicializadores de campo
    for (auto* initCtx : ctx->structExpression()->fieldInitializer()) {
        // Procesar inicializador
    }
    
    return structNode;
}

antlrcpp::Any ASTBuilder::visitAwaitExpression(NovaParser::AwaitExpressionContext* ctx) {
    auto awaitNode = std::make_unique<AwaitExprNode>(createSourceLocation(ctx));
    
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    return awaitNode;
}

// ============================================
// VISIT - TIPOS
// ============================================

antlrcpp::Any ASTBuilder::visitType_(NovaParser::Type_Context* ctx) {
    Type* type = nullptr;
    
    if (ctx->primitiveType()) {
        type = convertType(ctx->primitiveType());
    } else if (ctx->typeReference()) {
        type = convertType(ctx->typeReference());
    } else if (ctx->genericType()) {
        type = convertType(ctx->genericType());
    } else if (ctx->functionType()) {
        type = convertType(ctx->functionType());
    } else if (ctx->tupleType()) {
        type = convertType(ctx->tupleType());
    } else if (ctx->arrayType()) {
        type = convertType(ctx->arrayType());
    } else if (ctx->referenceType()) {
        type = convertType(ctx->referenceType());
    }
    
    return type;
}

antlrcpp::Any ASTBuilder::visitPrimitiveType(NovaParser::PrimitiveTypeContext* ctx) {
    std::string typeName = ctx->getText();
    
    if (typeName == "void") return static_cast<Type*>(typeContext_.getVoidType());
    if (typeName == "bool") return static_cast<Type*>(typeContext_.getBoolType());
    if (typeName == "char") return static_cast<Type*>(typeContext_.getCharType());
    if (typeName == "i8") return static_cast<Type*>(typeContext_.getInt8Type());
    if (typeName == "i16") return static_cast<Type*>(typeContext_.getInt16Type());
    if (typeName == "i32") return static_cast<Type*>(typeContext_.getInt32Type());
    if (typeName == "i64") return static_cast<Type*>(typeContext_.getInt64Type());
    if (typeName == "isize") return static_cast<Type*>(typeContext_.getIntSizeType());
    if (typeName == "u8") return static_cast<Type*>(typeContext_.getUInt8Type());
    if (typeName == "u16") return static_cast<Type*>(typeContext_.getUInt16Type());
    if (typeName == "u32") return static_cast<Type*>(typeContext_.getUInt32Type());
    if (typeName == "u64") return static_cast<Type*>(typeContext_.getUInt64Type());
    if (typeName == "usize") return static_cast<Type*>(typeContext_.getUIntSizeType());
    if (typeName == "f32") return static_cast<Type*>(typeContext_.getFloat32Type());
    if (typeName == "f64") return static_cast<Type*>(typeContext_.getFloat64Type());
    if (typeName == "str") return static_cast<Type*>(typeContext_.getStringType());
    if (typeName == "type") return static_cast<Type*>(typeContext_.getTypeType());
    
    return static_cast<Type*>(typeContext_.getErrorType());
}

antlrcpp::Any ASTBuilder::visitTypeReference(NovaParser::TypeReferenceContext* ctx) {
    Path path = convertPath(ctx->qualifiedName());
    
    // Buscar en el contexto de tipos
    Type* type = typeContext_.lookupType(path);
    if (type) {
        return type;
    }
    
    // Crear tipo no resuelto
    return static_cast<Type*>(typeContext_.getGenericType(path.toString()));
}

antlrcpp::Any ASTBuilder::visitGenericType(NovaParser::GenericTypeContext* ctx) {
    // typeReference '<' typeList '>'
    
    Type* baseType = convertType(ctx->typeReference());
    std::vector<Type*> typeArgs;
    
    if (ctx->typeList()) {
        for (auto* typeCtx : ctx->typeList()->type_()) {
            typeArgs.push_back(convertType(typeCtx));
        }
    }
    
    // Por ahora, devolver el tipo base
    // En una implementación completa, crearíamos un tipo genérico instanciado
    return baseType;
}

antlrcpp::Any ASTBuilder::visitFunctionType(NovaParser::FunctionTypeContext* ctx) {
    std::vector<Type*> paramTypes;
    
    if (ctx->typeList()) {
        for (auto* typeCtx : ctx->typeList()->type_()) {
            paramTypes.push_back(convertType(typeCtx));
        }
    }
    
    Type* returnType = typeContext_.getVoidType();
    if (ctx->returnType()) {
        returnType = convertType(ctx->returnType()->type_());
    }
    
    return static_cast<Type*>(typeContext_.getFunctionType(paramTypes, returnType));
}

antlrcpp::Any ASTBuilder::visitTupleType(NovaParser::TupleTypeContext* ctx) {
    std::vector<Type*> elementTypes;
    
    if (ctx->typeList()) {
        for (auto* typeCtx : ctx->typeList()->type_()) {
            elementTypes.push_back(convertType(typeCtx));
        }
    }
    
    return static_cast<Type*>(typeContext_.getTupleType(elementTypes));
}

antlrcpp::Any ASTBuilder::visitArrayType(NovaParser::ArrayTypeContext* ctx) {
    Type* elementType = convertType(ctx->type_(0));
    
    // Determinar tamaño
    uint64_t size = 0;
    if (ctx->expression()) {
        // Parsear expresión constante para tamaño
        // Por ahora, usar tamaño desconocido
        size = 0;
    }
    
    return static_cast<Type*>(typeContext_.getArrayType(elementType, size));
}

antlrcpp::Any ASTBuilder::visitReferenceType(NovaParser::ReferenceTypeContext* ctx) {
    Type* referencedType = convertType(ctx->type_());
    Mutability mut = ctx->mut ? Mutability::Mutable : Mutability::Immutable;
    
    return static_cast<Type*>(typeContext_.getReferenceType(referencedType, mut));
}

// ============================================
// VISIT - LITERALES
// ============================================

antlrcpp::Any ASTBuilder::visitIntegerLiteral(NovaParser::IntegerLiteralContext* ctx) {
    auto litNode = std::make_unique<IntegerLiteralNode>(createSourceLocation(ctx));
    
    std::string text = ctx->getText();
    std::string suffix;
    
    // Extraer sufijo
    if (text.size() >= 2) {
        std::string lastTwo = text.substr(text.size() - 2);
        if (lastTwo == "i8" || lastTwo == "i16" || lastTwo == "i32" || 
            lastTwo == "i64" || lastTwo == "u8" || lastTwo == "u16" ||
            lastTwo == "u32" || lastTwo == "u64") {
            suffix = lastTwo;
            text = text.substr(0, text.size() - 2);
        } else if (text.size() >= 3) {
            std::string lastThree = text.substr(text.size() - 3);
            if (lastThree == "isize" || lastThree == "usize") {
                suffix = lastThree;
                text = text.substr(0, text.size() - 3);
            }
        }
    }
    
    // Quitar underscores
    text.erase(remove(text.begin(), text.end(), '_'), text.end());
    
    // Determinar base
    uint64_t value = 0;
    if (text.substr(0, 2) == "0x" || text.substr(0, 2) == "0X") {
        // Hexadecimal
        value = stoull(text.substr(2), nullptr, 16);
    } else if (text.substr(0, 2) == "0b" || text.substr(0, 2) == "0B") {
        // Binario
        value = stoull(text.substr(2), nullptr, 2);
    } else if (!text.empty() && text[0] == '0') {
        // Octal
        value = stoull(text, nullptr, 8);
    } else {
        // Decimal
        value = stoull(text, nullptr, 10);
    }
    
    litNode->setValue(value);
    litNode->setSuffix(suffix);
    
    return litNode;
}

antlrcpp::Any ASTBuilder::visitFloatLiteral(NovaParser::FloatLiteralContext* ctx) {
    auto litNode = std::make_unique<FloatLiteralNode>(createSourceLocation(ctx));
    
    std::string text = ctx->getText();
    std::string suffix;
    
    // Extraer sufijo
    if (text.size() >= 3 && (text.substr(text.size() - 3) == "f32" || 
                             text.substr(text.size() - 3) == "f64")) {
        suffix = text.substr(text.size() - 3);
        text = text.substr(0, text.size() - 3);
    }
    
    // Quitar underscores
    text.erase(remove(text.begin(), text.end(), '_'), text.end());
    
    long double value = stold(text);
    litNode->setValue(value);
    litNode->setSuffix(suffix);
    
    return litNode;
}

antlrcpp::Any ASTBuilder::visitBooleanLiteral(NovaParser::BooleanLiteralContext* ctx) {
    bool value = ctx->getText() == "true";
    return std::make_unique<BooleanLiteralNode>(value, createSourceLocation(ctx));
}

antlrcpp::Any ASTBuilder::visitCharacterLiteral(NovaParser::CharacterLiteralContext* ctx) {
    auto litNode = std::make_unique<CharLiteralNode>(createSourceLocation(ctx));
    
    std::string text = ctx->getText();
    // Eliminar comillas simples
    text = text.substr(1, text.size() - 2);
    
    // Manejar secuencias de escape
    char value = 0;
    if (text.size() >= 2 && text[0] == '\\') {
        switch (text[1]) {
            case 'n': value = '\n'; break;
            case 't': value = '\t'; break;
            case 'r': value = '\r'; break;
            case '\\': value = '\\'; break;
            case '\'': value = '\''; break;
            case '"': value = '"'; break;
            default: value = text[1];
        }
    } else {
        value = text[0];
    }
    
    litNode->setValue(value);
    return litNode;
}

antlrcpp::Any ASTBuilder::visitStringLiteral(NovaParser::StringLiteralContext* ctx) {
    auto litNode = std::make_unique<StringLiteralNode>(createSourceLocation(ctx));
    
    std::string text = ctx->getText();
    // Eliminar comillas dobles
    text = text.substr(1, text.size() - 2);
    
    // TODO: Procesar secuencias de escape
    litNode->setValue(text);
    
    return litNode;
}

// ============================================
// VISIT - PATRONES
// ============================================

antlrcpp::Any ASTBuilder::visitPattern(NovaParser::PatternContext* ctx) {
    if (ctx->identifierPattern()) {
        return visit(ctx->identifierPattern());
    } else if (ctx->tuplePattern()) {
        return visit(ctx->tuplePattern());
    } else if (ctx->structPattern()) {
        return visit(ctx->structPattern());
    } else if (ctx->wildcardPattern()) {
        return visit(ctx->wildcardPattern());
    }
    return antlrcpp::Any();
}

antlrcpp::Any ASTBuilder::visitIdentifierPattern(NovaParser::IdentifierPatternContext* ctx) {
    auto pattern = std::make_unique<IdentifierPatternNode>(createSourceLocation(ctx));
    
    bool isMutable = ctx->mut != nullptr;
    pattern->setMutable(isMutable);
    
    if (ctx->identifier()) {
        pattern->setName(ctx->identifier()->getText());
    }
    
    return pattern;
}

antlrcpp::Any ASTBuilder::visitTuplePattern(NovaParser::TuplePatternContext* ctx) {
    auto pattern = std::make_unique<TuplePatternNode>(createSourceLocation(ctx));
    
    for (auto* patCtx : ctx->pattern()) {
        visit(patCtx);
    }
    
    return pattern;
}

antlrcpp::Any ASTBuilder::visitStructPattern(NovaParser::StructPatternContext* ctx) {
    auto pattern = std::make_unique<StructPatternNode>(createSourceLocation(ctx));
    
    if (ctx->identifier()) {
        // pattern->setTypeName(ctx->identifier()->getText());
    }
    
    return pattern;
}

antlrcpp::Any ASTBuilder::visitWildcardPattern(NovaParser::WildcardPatternContext* ctx) {
    return std::make_unique<WildcardPatternNode>(createSourceLocation(ctx));
}

// ============================================
// VISIT - PARÁMETROS
// ============================================

antlrcpp::Any ASTBuilder::visitParameter(NovaParser::ParameterContext* ctx) {
    auto paramNode = std::make_unique<FunctionParamNode>(createSourceLocation(ctx));
    
    if (ctx->identifier()) {
        // paramNode->setName(ctx->identifier()->getText());
    }
    
    if (ctx->type_()) {
        Type* paramType = convertType(ctx->type_());
        // paramNode->setType(paramType);
    }
    
    if (ctx->expression()) {
        visit(ctx->expression());
    }
    
    return paramNode;
}

antlrcpp::Any ASTBuilder::visitFunctionParameters(NovaParser::FunctionParametersContext* ctx) {
    std::vector<std::unique_ptr<FunctionParamNode>> params;
    
    for (auto* paramCtx : ctx->parameterList()->parameter()) {
        auto result = visit(paramCtx);
        if (!result.isEmpty()) {
            // params.push_back(...);
        }
    }
    
    return params;
}

// ============================================
// VISIT - MATCH ARMS
// ============================================

antlrcpp::Any ASTBuilder::visitMatchArm(NovaParser::MatchArmContext* ctx) {
    auto armNode = std::make_unique<MatchArmNode>(createSourceLocation(ctx));
    
    // Pattern
    if (ctx->pattern()) {
        visit(ctx->pattern());
    }
    
    // Expression o block
    if (ctx->expression()) {
        visit(ctx->expression());
    } else if (ctx->block()) {
        visit(ctx->block());
    }
    
    return armNode;
}

// ============================================
// MÉTODOS HELPER
// ============================================

SourceLocation ASTBuilder::createSourceLocation(antlr4::ParserRuleContext* ctx) {
    if (!ctx) return SourceLocation();
    
    auto* start = ctx->getStart();
    return tokenToSourceLocation(start);
}

SourceLocation ASTBuilder::tokenToSourceLocation(antlr4::Token* token) {
    if (!token) return SourceLocation();
    
    std::string fileName = token->getInputStream()->getSourceName();
    size_t line = token->getLine();
    size_t column = token->getCharPositionInLine() + 1;
    
    return SourceLocation(fileName, line, column);
}

Type* ASTBuilder::convertType(NovaParser::Type_Context* ctx) {
    if (!ctx) return typeContext_.getErrorType();
    
    auto result = visit(ctx);
    if (!result.isEmpty()) {
        return antlrcpp::Any_cast<Type*>(result);
    }
    return typeContext_.getErrorType();
}

Path ASTBuilder::convertPath(NovaParser::QualifiedNameContext* ctx) {
    Path path;
    
    for (auto* ident : ctx->identifier()) {
        path.addSegment(ident->getText());
    }
    
    return path;
}

void ASTBuilder::reportBuildError(antlr4::ParserRuleContext* ctx, const std::string& message) {
    SourceLocation loc = createSourceLocation(ctx);
    errorHandler_.reportError(ErrorCode::SemanticInvalidOperation, loc, message);
}

std::optional<BinaryOp> ASTBuilder::getBinaryOperator(int tokenType) {
    switch (tokenType) {
        case NovaParser::ADD: return BinaryOp::Add;
        case NovaParser::SUB: return BinaryOp::Sub;
        case NovaParser::MUL: return BinaryOp::Mul;
        case NovaParser::DIV: return BinaryOp::Div;
        case NovaParser::MOD: return BinaryOp::Mod;
        case NovaParser::POW: return BinaryOp::Pow;
        case NovaParser::BITAND: return BinaryOp::BitAnd;
        case NovaParser::BITOR: return BinaryOp::BitOr;
        case NovaParser::BITXOR: return BinaryOp::BitXor;
        case NovaParser::SHL: return BinaryOp::Shl;
        case NovaParser::SHR: return BinaryOp::Shr;
        case NovaParser::AND: return BinaryOp::And;
        case NovaParser::OR: return BinaryOp::Or;
        case NovaParser::EQ: return BinaryOp::Eq;
        case NovaParser::NE: return BinaryOp::Ne;
        case NovaParser::LT: return BinaryOp::Lt;
        case NovaParser::LE: return BinaryOp::Le;
        case NovaParser::GT: return BinaryOp::Gt;
        case NovaParser::GE: return BinaryOp::Ge;
        default: return std::nullopt;
    }
}

std::optional<UnaryOp> ASTBuilder::getUnaryOperator(int tokenType) {
    switch (tokenType) {
        case NovaParser::SUB: return UnaryOp::Neg;
        case NovaParser::NOT: return UnaryOp::Not;
        case NovaParser::MUL: return UnaryOp::Deref;
        case NovaParser::AND: return UnaryOp::Ref;
        default: return std::nullopt;
    }
}

// ============================================
// AST DUMPER
// ============================================

void ASTDumper::dump(ModuleNode* module) {
    os_ << "=== AST Dump ===" << std::endl;
    visitModule(module);
}

void ASTDumper::printIndent() {
    os_ << std::string(indent_ * 2, ' ');
}

void ASTDumper::printNode(const std::string& name, Node* node) {
    printIndent();
    os_ << name << ": " << node->getNodeName();
    if (node->hasType()) {
        os_ << " [" << node->getType()->getName() << "]";
    }
    os_ << " @ " << node->getLocation().toString() << std::endl;
}

void ASTDumper::printType(Type* type) {
    if (type) {
        printIndent();
        os_ << "  Type: " << type->getName() << std::endl;
    }
}

void ASTDumper::visitModule(ModuleNode* node) {
    printNode("Module", node);
    indent_++;
    
    for (auto& decl : node->getDeclarations()) {
        decl->dump(indent_);
    }
    
    indent_--;
}

} // namespace nova
