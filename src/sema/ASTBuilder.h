/**
 * @file ASTBuilder.h
 * @brief Constructor del AST (Abstract Syntax Tree)
 * 
 * Convierte el CST (Concrete Syntax Tree) generado por ANTLR4
 * en nuestro AST personalizado y limpio.
 * 
 * Este visitor recorre el árbol de parseo y construye nodos
 * del AST tipados y listos para el análisis semántico.
 */

#ifndef NOVA_AST_BUILDER_H
#define NOVA_AST_BUILDER_H

#include <memory>
#include <vector>
#include <string>
#include <variant>
#include <unordered_map>
#include <stack>
#include "antlr4-runtime.h"
#include "NovaBaseVisitor.h"
#include "Node.h"
#include "Types.h"
#include "Error.h"

namespace nova {

/**
 * @class ASTBuilder
 * @brief Convierte CST de ANTLR4 a AST de Nova
 * 
 * Esta clase hereda de NovaBaseVisitor (generado por ANTLR4)
 * y convierte cada nodo del árbol de parseo en un nodo de nuestro AST.
 */
class ASTBuilder : public NovaBaseVisitor {
public:
    /**
     * @brief Constructor
     * @param errorHandler Manejador de errores
     * @param typeContext Contexto de tipos
     */
    ASTBuilder(ErrorHandler& errorHandler, TypeContext& typeContext);
    
    /**
     * @brief Destructor
     */
    ~ASTBuilder() override = default;
    
    // === Métodos principales ===
    
    /**
     * @brief Construye el AST desde un archivo fuente
     * @param inputStream Flujo de entrada del código fuente
     * @return Nodo raíz del AST (módulo)
     */
    std::unique_ptr<ModuleNode> build(antlr4::ANTLRInputStream* inputStream);
    
    /**
     * @brief Construye el AST desde un CharStream
     * @param charStream Flujo de caracteres
     * @return Nodo raíz del AST (módulo)
     */
    std::unique_ptr<ModuleNode> build(antlr4::CharStream* charStream);
    
    // === Visit methods (implementación de la interfaz visitor) ===
    
    // Nota: Los métodos override exactos dependen de la gramática
    // Esta es una implementación genérica que será completada
    
    std::any visitSourceFile(NovaParser::SourceFileContext* ctx) override;
    std::any visitModuleDeclaration(NovaParser::ModuleDeclarationContext* ctx) override;
    std::any visitImportDeclaration(NovaParser::ImportDeclarationContext* ctx) override;
    std::any visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext* ctx) override;
    
    // Declaraciones
    std::any visitFunctionDeclaration(NovaParser::FunctionDeclarationContext* ctx) override;
    std::any visitStructDeclaration(NovaParser::StructDeclarationContext* ctx) override;
    std::any visitEnumDeclaration(NovaParser::EnumDeclarationContext* ctx) override;
    std::any visitTraitDeclaration(NovaParser::TraitDeclarationContext* ctx) override;
    std::any visitImplDeclaration(NovaParser::ImplDeclarationContext* ctx) override;
    std::any visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext* ctx) override;
    std::any visitConstantDeclaration(NovaParser::ConstantDeclarationContext* ctx) override;
    
    // Statements
    std::any visitBlock(NovaParser::BlockContext* ctx) override;
    std::any visitVariableDeclaration(NovaParser::VariableDeclarationContext* ctx) override;
    std::any visitExpressionStatement(NovaParser::ExpressionStatementContext* ctx) override;
    std::any visitAssignmentStatement(NovaParser::AssignmentStatementContext* ctx) override;
    std::any visitIfStatement(NovaParser::IfStatementContext* ctx) override;
    std::any visitLoopStatement(NovaParser::LoopStatementContext* ctx) override;
    std::any visitMatchStatement(NovaParser::MatchStatementContext* ctx) override;
    std::any visitReturnStatement(NovaParser::ReturnStatementContext* ctx) override;
    std::any visitBreakStatement(NovaParser::BreakStatementContext* ctx) override;
    std::any visitContinueStatement(NovaParser::ContinueStatementContext* ctx) override;
    
    // Expresiones
    std::any visitExpression(NovaParser::ExpressionContext* ctx) override;
    std::any visitLiteralExpression(NovaParser::LiteralExpressionContext* ctx) override;
    std::any visitIdentifierExpression(NovaParser::IdentifierExpressionContext* ctx) override;
    std::any visitBinaryExpr(NovaParser::BinaryExprContext* ctx) override;
    std::any visitUnaryExpr(NovaParser::UnaryExprContext* ctx) override;
    std::any visitCallExpr(NovaParser::CallExprContext* ctx) override;
    std::any visitFieldExpr(NovaParser::FieldExprContext* ctx) override;
    std::any visitTupleIndexExpr(NovaParser::TupleIndexExprContext* ctx) override;
    std::any visitIfExpr(NovaParser::IfExprContext* ctx) override;
    std::any visitMatchExpr(NovaParser::MatchExprContext* ctx) override;
    std::any visitLoopExpr(NovaParser::LoopExprContext* ctx) override;
    std::any visitRangeExpr(NovaParser::RangeExprContext* ctx) override;
    std::any visitCastExpr(NovaParser::CastExprContext* ctx) override;
    std::any visitLambdaExpr(NovaParser::LambdaExprContext* ctx) override;
    std::any visitArrayExpression(NovaParser::ArrayExpressionContext* ctx) override;
    std::any visitTupleExpression(NovaParser::TupleExpressionContext* ctx) override;
    std::any visitStructExpression(NovaParser::StructExpressionContext* ctx) override;
    std::any visitAwaitExpression(NovaParser::AwaitExpressionContext* ctx) override;
    
    // Tipos
    std::any visitType(NovaParser::TypeContext* ctx) override;
    std::any visitPrimitiveType(NovaParser::PrimitiveTypeContext* ctx) override;
    std::any visitTypeReference(NovaParser::TypeReferenceContext* ctx) override;
    std::any visitGenericType(NovaParser::GenericTypeContext* ctx) override;
    std::any visitFunctionType(NovaParser::FunctionTypeContext* ctx) override;
    std::any visitTupleType(NovaParser::TupleTypeContext* ctx) override;
    std::any visitArrayType(NovaParser::ArrayTypeContext* ctx) override;
    std::any visitReferenceType(NovaParser::ReferenceTypeContext* ctx) override;
    
    // Literales
    std::any visitIntegerLiteral(NovaParser::IntegerLiteralContext* ctx) override;
    std::any visitFloatLiteral(NovaParser::FloatLiteralContext* ctx) override;
    std::any visitBooleanLiteral(NovaParser::BooleanLiteralContext* ctx) override;
    std::any visitCharacterLiteral(NovaParser::CharacterLiteralContext* ctx) override;
    std::any visitStringLiteral(NovaParser::StringLiteralContext* ctx) override;
    
    // Patrones
    std::any visitPattern(NovaParser::PatternContext* ctx) override;
    std::any visitIdentifierPattern(NovaParser::IdentifierPatternContext* ctx) override;
    std::any visitTuplePattern(NovaParser::TuplePatternContext* ctx) override;
    std::any visitStructPattern(NovaParser::StructPatternContext* ctx) override;
    std::any visitWildcardPattern(NovaParser::WildcardPatternContext* ctx) override;
    
    // Parámetros
    std::any visitParameter(NovaParser::ParameterContext* ctx) override;
    std::any visitFunctionParameters(NovaParser::FunctionParametersContext* ctx) override;
    
    // Match arms
    std::any visitMatchArm(NovaParser::MatchArmContext* ctx) override;
    
protected:
    // Métodos helper
    
    /**
     * @brief Crea un SourceLocation desde un contexto de ANTLR
     */
    SourceLocation createSourceLocation(antlr4::ParserRuleContext* ctx);
    
    /**
     * @brief Convierte un token de ANTLR a SourceLocation
     */
    SourceLocation tokenToSourceLocation(antlr4::Token* token);
    
    /**
     * @brief Convierte un tipo del parser a tipo del sistema
     */
    Type* convertType(NovaParser::TypeContext* ctx);
    
    /**
     * @brief Convierte un path de la gramática a Path del sistema
     */
    Path convertPath(NovaParser::QualifiedNameContext* ctx);
    
    /**
     * @brief Reporta un error de construcción del AST
     */
    void reportBuildError(antlr4::ParserRuleContext* ctx, const std::string& message);
    
    /**
     * @brief Determina el operador binario desde el contexto
     */
    std::optional<BinaryOp> getBinaryOperator(int tokenType);
    
    /**
     * @brief Determina el operador unario desde el contexto
     */
    std::optional<UnaryOp> getUnaryOperator(int tokenType);
    
private:
    ErrorHandler& errorHandler_;
    TypeContext& typeContext_;
    
    // Pila para manejar expresiones anidadas
    std::stack<std::unique_ptr<Expression>> expressionStack_;
    
    // Contador para generar nombres únicos
    int anonymousCounter_ = 0;
};

/**
 * @class ASTDumper
 * @brief Imprime el AST en formato legible
 * 
 * Útil para debugging y para el flag --dump-ast del compilador
 */
class ASTDumper : public NodeVisitor {
public:
    ASTDumper(std::ostream& os) : os_(os), indent_(0) {}
    
    void dump(ModuleNode* module);
    
    void visitModule(ModuleNode* node) override;
    void visitFunctionDecl(FunctionDeclNode* node) override;
    void visitStructDecl(StructType* node) override;
    void visitEnumDecl(EnumType* node) override;
    void visitLetDecl(LetDeclNode* node) override;
    void visitBinaryExpr(BinaryExprNode* node) override;
    void visitUnaryExpr(UnaryExprNode* node) override;
    void visitCallExpr(CallExprNode* node) override;
    void visitIfExpr(IfExprNode* node) override;
    void visitLiteral(LiteralNode* node) override;
    void visitIdentifier(IdentifierNode* node) override;
    
private:
    std::ostream& os_;
    int indent_;
    
    void printIndent();
    void printNode(const std::string& name, Node* node);
    void printType(Type* type);
};

/**
 * @class ASTVisualizer
 * @brief Genera representaciones visuales del AST
 * 
 * Puede generar Graphviz DOT para diagramas
 */
class ASTVisualizer {
public:
    /**
     * @brief Genera un grafo DOT del AST
     */
    static std::string toDot(ModuleNode* module);
    
    /**
     * @brief Genera JSON del AST
     */
    static std::string toJson(ModuleNode* module);
};

} // namespace nova

#endif // NOVA_AST_BUILDER_H
