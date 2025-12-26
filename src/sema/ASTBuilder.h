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

#ifndef AETHER_AST_BUILDER_H
#define AETHER_AST_BUILDER_H

#include <memory>
#include <vector>
#include <string>
#include <variant>
#include <unordered_map>
#include <stack>
#include "antlr4-runtime.h"
#include "AetherBaseVisitor.h"
#include "Node.h"
#include "Types.h"
#include "Error.h"

namespace aether {

/**
 * @class ASTBuilder
 * @brief Convierte CST de ANTLR4 a AST de Aether
 * 
 * Esta clase hereda de AetherBaseVisitor (generado por ANTLR4)
 * y convierte cada nodo del árbol de parseo en un nodo de nuestro AST.
 */
class ASTBuilder : public AetherBaseVisitor {
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
    
    std::any visitSourceFile(AetherParser::SourceFileContext* ctx) override;
    std::any visitModuleDeclaration(AetherParser::ModuleDeclarationContext* ctx) override;
    std::any visitImportDeclaration(AetherParser::ImportDeclarationContext* ctx) override;
    std::any visitTopLevelDeclaration(AetherParser::TopLevelDeclarationContext* ctx) override;
    
    // Declaraciones
    std::any visitFunctionDeclaration(AetherParser::FunctionDeclarationContext* ctx) override;
    std::any visitStructDeclaration(AetherParser::StructDeclarationContext* ctx) override;
    std::any visitEnumDeclaration(AetherParser::EnumDeclarationContext* ctx) override;
    std::any visitTraitDeclaration(AetherParser::TraitDeclarationContext* ctx) override;
    std::any visitImplDeclaration(AetherParser::ImplDeclarationContext* ctx) override;
    std::any visitTypeAliasDeclaration(AetherParser::TypeAliasDeclarationContext* ctx) override;
    std::any visitConstantDeclaration(AetherParser::ConstantDeclarationContext* ctx) override;
    
    // Statements
    std::any visitBlock(AetherParser::BlockContext* ctx) override;
    std::any visitVariableDeclaration(AetherParser::VariableDeclarationContext* ctx) override;
    std::any visitExpressionStatement(AetherParser::ExpressionStatementContext* ctx) override;
    std::any visitAssignmentStatement(AetherParser::AssignmentStatementContext* ctx) override;
    std::any visitIfStatement(AetherParser::IfStatementContext* ctx) override;
    std::any visitLoopStatement(AetherParser::LoopStatementContext* ctx) override;
    std::any visitMatchStatement(AetherParser::MatchStatementContext* ctx) override;
    std::any visitReturnStatement(AetherParser::ReturnStatementContext* ctx) override;
    std::any visitBreakStatement(AetherParser::BreakStatementContext* ctx) override;
    std::any visitContinueStatement(AetherParser::ContinueStatementContext* ctx) override;
    
    // Expresiones
    std::any visitExpression(AetherParser::ExpressionContext* ctx) override;
    std::any visitLiteralExpression(AetherParser::LiteralExpressionContext* ctx) override;
    std::any visitIdentifierExpression(AetherParser::IdentifierExpressionContext* ctx) override;
    std::any visitBinaryExpr(AetherParser::BinaryExprContext* ctx) override;
    std::any visitUnaryExpr(AetherParser::UnaryExprContext* ctx) override;
    std::any visitCallExpr(AetherParser::CallExprContext* ctx) override;
    std::any visitFieldExpr(AetherParser::FieldExprContext* ctx) override;
    std::any visitTupleIndexExpr(AetherParser::TupleIndexExprContext* ctx) override;
    std::any visitIfExpr(AetherParser::IfExprContext* ctx) override;
    std::any visitMatchExpr(AetherParser::MatchExprContext* ctx) override;
    std::any visitLoopExpr(AetherParser::LoopExprContext* ctx) override;
    std::any visitRangeExpr(AetherParser::RangeExprContext* ctx) override;
    std::any visitCastExpr(AetherParser::CastExprContext* ctx) override;
    std::any visitLambdaExpr(AetherParser::LambdaExprContext* ctx) override;
    std::any visitArrayExpression(AetherParser::ArrayExpressionContext* ctx) override;
    std::any visitTupleExpression(AetherParser::TupleExpressionContext* ctx) override;
    std::any visitStructExpression(AetherParser::StructExpressionContext* ctx) override;
    std::any visitAwaitExpression(AetherParser::AwaitExpressionContext* ctx) override;
    
    // Tipos
    std::any visitType(AetherParser::TypeContext* ctx) override;
    std::any visitPrimitiveType(AetherParser::PrimitiveTypeContext* ctx) override;
    std::any visitTypeReference(AetherParser::TypeReferenceContext* ctx) override;
    std::any visitGenericType(AetherParser::GenericTypeContext* ctx) override;
    std::any visitFunctionType(AetherParser::FunctionTypeContext* ctx) override;
    std::any visitTupleType(AetherParser::TupleTypeContext* ctx) override;
    std::any visitArrayType(AetherParser::ArrayTypeContext* ctx) override;
    std::any visitReferenceType(AetherParser::ReferenceTypeContext* ctx) override;
    
    // Literales
    std::any visitIntegerLiteral(AetherParser::IntegerLiteralContext* ctx) override;
    std::any visitFloatLiteral(AetherParser::FloatLiteralContext* ctx) override;
    std::any visitBooleanLiteral(AetherParser::BooleanLiteralContext* ctx) override;
    std::any visitCharacterLiteral(AetherParser::CharacterLiteralContext* ctx) override;
    std::any visitStringLiteral(AetherParser::StringLiteralContext* ctx) override;
    
    // Patrones
    std::any visitPattern(AetherParser::PatternContext* ctx) override;
    std::any visitIdentifierPattern(AetherParser::IdentifierPatternContext* ctx) override;
    std::any visitTuplePattern(AetherParser::TuplePatternContext* ctx) override;
    std::any visitStructPattern(AetherParser::StructPatternContext* ctx) override;
    std::any visitWildcardPattern(AetherParser::WildcardPatternContext* ctx) override;
    
    // Parámetros
    std::any visitParameter(AetherParser::ParameterContext* ctx) override;
    std::any visitFunctionParameters(AetherParser::FunctionParametersContext* ctx) override;
    
    // Match arms
    std::any visitMatchArm(AetherParser::MatchArmContext* ctx) override;
    
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
    Type* convertType(AetherParser::TypeContext* ctx);
    
    /**
     * @brief Convierte un path de la gramática a Path del sistema
     */
    Path convertPath(AetherParser::QualifiedNameContext* ctx);
    
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

} // namespace aether

#endif // AETHER_AST_BUILDER_H
