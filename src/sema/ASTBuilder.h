/**
 * @file ASTBuilder.h
 * @brief Constructor del AST (Abstract Syntax Tree)
 * @author Yasmany Ramos García
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
#include <any>
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
    // Nota: Los nombres deben coincidir exactamente con los generados por ANTLR4
    
    // Top-level
    antlrcpp::Any visitSourceFile(NovaParser::SourceFileContext* ctx) override;
    antlrcpp::Any visitModuleDeclaration(NovaParser::ModuleDeclarationContext* ctx) override;
    antlrcpp::Any visitImportDeclaration(NovaParser::ImportDeclarationContext* ctx) override;
    antlrcpp::Any visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext* ctx) override;
    
    // Declaraciones de alto nivel
    antlrcpp::Any visitFunctionDeclaration(NovaParser::FunctionDeclarationContext* ctx) override;
    antlrcpp::Any visitStructDeclaration(NovaParser::StructDeclarationContext* ctx) override;
    antlrcpp::Any visitEnumDeclaration(NovaParser::EnumDeclarationContext* ctx) override;
    antlrcpp::Any visitTraitDeclaration(NovaParser::TraitDeclarationContext* ctx) override;
    antlrcpp::Any visitImplDeclaration(NovaParser::ImplDeclarationContext* ctx) override;
    antlrcpp::Any visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext* ctx) override;
    antlrcpp::Any visitConstantDeclaration(NovaParser::ConstantDeclarationContext* ctx) override;
    antlrcpp::Any visitExternDeclaration(NovaParser::ExternDeclarationContext* ctx) override;
    
    // Miembros y campos
    antlrcpp::Any visitStructField(NovaParser::StructFieldContext* ctx) override;
    antlrcpp::Any visitTraitMethod(NovaParser::TraitMethodContext* ctx) override;
    antlrcpp::Any visitFunctionSignature(NovaParser::FunctionSignatureContext* ctx) override;
    antlrcpp::Any visitImplMember(NovaParser::ImplMemberContext* ctx) override;
    antlrcpp::Any visitEnumVariant(NovaParser::EnumVariantContext* ctx) override;
    antlrcpp::Any visitExternFunction(NovaParser::ExternFunctionContext* ctx) override;
    
    // Parámetros y tipos genéricos
    antlrcpp::Any visitFunctionParameters(NovaParser::FunctionParametersContext* ctx) override;
    antlrcpp::Any visitParameterList(NovaParser::ParameterListContext* ctx) override;
    antlrcpp::Any visitParameter(NovaParser::ParameterContext* ctx) override;
    antlrcpp::Any visitReturnType(NovaParser::ReturnTypeContext* ctx) override;
    antlrcpp::Any visitTypeParameterList(NovaParser::TypeParameterListContext* ctx) override;
    antlrcpp::Any visitTypeParameter(NovaParser::TypeParameterContext* ctx) override;
    antlrcpp::Any visitConstraintList(NovaParser::ConstraintListContext* ctx) override;
    antlrcpp::Any visitConstraint(NovaParser::ConstraintContext* ctx) override;
    antlrcpp::Any visitIdentifierList(NovaParser::IdentifierListContext* ctx) override;
    antlrcpp::Any visitLifetime(NovaParser::LifetimeContext* ctx) override;
    
    // Types
    antlrcpp::Any visitType_(NovaParser::Type_Context* ctx) override;
    antlrcpp::Any visitPrimitiveType(NovaParser::PrimitiveTypeContext* ctx) override;
    antlrcpp::Any visitTypeReference(NovaParser::TypeReferenceContext* ctx) override;
    antlrcpp::Any visitGenericType(NovaParser::GenericTypeContext* ctx) override;
    antlrcpp::Any visitTypeList(NovaParser::TypeListContext* ctx) override;
    antlrcpp::Any visitFunctionType(NovaParser::FunctionTypeContext* ctx) override;
    antlrcpp::Any visitTupleType(NovaParser::TupleTypeContext* ctx) override;
    antlrcpp::Any visitArrayType(NovaParser::ArrayTypeContext* ctx) override;
    antlrcpp::Any visitReferenceType(NovaParser::ReferenceTypeContext* ctx) override;
    antlrcpp::Any visitOwnershipType(NovaParser::OwnershipTypeContext* ctx) override;
    
    // Statements
    antlrcpp::Any visitStatement(NovaParser::StatementContext* ctx) override;
    antlrcpp::Any visitDeclarationStatement(NovaParser::DeclarationStatementContext* ctx) override;
    antlrcpp::Any visitBlock(NovaParser::BlockContext* ctx) override;
    antlrcpp::Any visitVariableDeclaration(NovaParser::VariableDeclarationContext* ctx) override;
    antlrcpp::Any visitExpressionStatement(NovaParser::ExpressionStatementContext* ctx) override;
    antlrcpp::Any visitAssignmentStatement(NovaParser::AssignmentStatementContext* ctx) override;
    antlrcpp::Any visitIfStatement(NovaParser::IfStatementContext* ctx) override;
    antlrcpp::Any visitLoopStatement(NovaParser::LoopStatementContext* ctx) override;
    antlrcpp::Any visitMatchStatement(NovaParser::MatchStatementContext* ctx) override;
    antlrcpp::Any visitJumpStatement(NovaParser::JumpStatementContext* ctx) override;
    
    // Expressions - Primary
    antlrcpp::Any visitExpression(NovaParser::ExpressionContext* ctx) override;
    antlrcpp::Any visitPrimaryExpression(NovaParser::PrimaryExpressionContext* ctx) override;
    antlrcpp::Any visitLiteralExpression(NovaParser::LiteralExpressionContext* ctx) override;
    antlrcpp::Any visitIdentifierExpression(NovaParser::IdentifierExpressionContext* ctx) override;
    antlrcpp::Any visitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext* ctx) override;
    
    // Expressions - Operators by precedence
    antlrcpp::Any visitAssignmentExpression(NovaParser::AssignmentExpressionContext* ctx) override;
    antlrcpp::Any visitLogicalExpression(NovaParser::LogicalExpressionContext* ctx) override;
    antlrcpp::Any visitComparisonExpression(NovaParser::ComparisonExpressionContext* ctx) override;
    antlrcpp::Any visitBitwiseExpression(NovaParser::BitwiseExpressionContext* ctx) override;
    antlrcpp::Any visitArithmeticExpression(NovaParser::ArithmeticExpressionContext* ctx) override;
    antlrcpp::Any visitTermExpression(NovaParser::TermExpressionContext* ctx) override;
    antlrcpp::Any visitPowerExpression(NovaParser::PowerExpressionContext* ctx) override;
    antlrcpp::Any visitUnaryExpression(NovaParser::UnaryExpressionContext* ctx) override;
    antlrcpp::Any visitPostfixExpression(NovaParser::PostfixExpressionContext* ctx) override;
    
    // Specific expression types
    antlrcpp::Any visitCallExpression(NovaParser::CallExpressionContext* ctx) override;
    antlrcpp::Any visitArgumentList(NovaParser::ArgumentListContext* ctx) override;
    antlrcpp::Any visitFieldExpression(NovaParser::FieldExpressionContext* ctx) override;
    antlrcpp::Any visitIfExpression(NovaParser::IfExpressionContext* ctx) override;
    antlrcpp::Any visitMatchExpression(NovaParser::MatchExpressionContext* ctx) override;
    antlrcpp::Any visitLoopExpression(NovaParser::LoopExpressionContext* ctx) override;
    antlrcpp::Any visitLambdaExpression(NovaParser::LambdaExpressionContext* ctx) override;
    antlrcpp::Any visitArrayExpression(NovaParser::ArrayExpressionContext* ctx) override;
    antlrcpp::Any visitTupleExpression(NovaParser::TupleExpressionContext* ctx) override;
    antlrcpp::Any visitStructExpression(NovaParser::StructExpressionContext* ctx) override;
    antlrcpp::Any visitFieldInitializer(NovaParser::FieldInitializerContext* ctx) override;
    antlrcpp::Any visitEnumVariantExpression(NovaParser::EnumVariantExpressionContext* ctx) override;
    antlrcpp::Any visitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext* ctx) override;
    antlrcpp::Any visitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext* ctx) override;
    antlrcpp::Any visitAwaitExpression(NovaParser::AwaitExpressionContext* ctx) override;
    antlrcpp::Any visitUnsafeExpression(NovaParser::UnsafeExpressionContext* ctx) override;
    antlrcpp::Any visitBlockExpression(NovaParser::BlockExpressionContext* ctx) override;
    
    // Control flow blocks
    antlrcpp::Any visitCondition(NovaParser::ConditionContext* ctx) override;
    antlrcpp::Any visitLetCondition(NovaParser::LetConditionContext* ctx) override;
    antlrcpp::Any visitLoopBlock(NovaParser::LoopBlockContext* ctx) override;
    antlrcpp::Any visitWhileBlock(NovaParser::WhileBlockContext* ctx) override;
    antlrcpp::Any visitForBlock(NovaParser::ForBlockContext* ctx) override;
    
    // Jump expressions
    antlrcpp::Any visitReturnExpression(NovaParser::ReturnExpressionContext* ctx) override;
    antlrcpp::Any visitBreakExpression(NovaParser::BreakExpressionContext* ctx) override;
    antlrcpp::Any visitContinueExpression(NovaParser::ContinueExpressionContext* ctx) override;
    
    // Literals
    antlrcpp::Any visitIntegerLiteral(NovaParser::IntegerLiteralContext* ctx) override;
    antlrcpp::Any visitFloatLiteral(NovaParser::FloatLiteralContext* ctx) override;
    antlrcpp::Any visitBooleanLiteral(NovaParser::BooleanLiteralContext* ctx) override;
    antlrcpp::Any visitCharacterLiteral(NovaParser::CharacterLiteralContext* ctx) override;
    antlrcpp::Any visitStringLiteral(NovaParser::StringLiteralContext* ctx) override;
    antlrcpp::Any visitNullLiteral(NovaParser::NullLiteralContext* ctx) override;
    
    // Patterns
    antlrcpp::Any visitPattern(NovaParser::PatternContext* ctx) override;
    antlrcpp::Any visitIdentifierPattern(NovaParser::IdentifierPatternContext* ctx) override;
    antlrcpp::Any visitTuplePattern(NovaParser::TuplePatternContext* ctx) override;
    antlrcpp::Any visitStructPattern(NovaParser::StructPatternContext* ctx) override;
    antlrcpp::Any visitWildcardPattern(NovaParser::WildcardPatternContext* ctx) override;
    
    // Match arms
    antlrcpp::Any visitMatchArm(NovaParser::MatchArmContext* ctx) override;
    
    // Utils
    antlrcpp::Any visitVisibility(NovaParser::VisibilityContext* ctx) override;
    antlrcpp::Any visitQualifiedName(NovaParser::QualifiedNameContext* ctx) override;
    antlrcpp::Any visitIdentifier(NovaParser::IdentifierContext* ctx) override;
    
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
    Type* convertType(NovaParser::Type_Context* ctx);
    
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
class ASTDumper {
public:
    ASTDumper(std::ostream& os) : os_(os), indent_(0) {}
    
    void dump(ModuleNode* module);
    void visitModule(ModuleNode* node);
    void visitFunctionDecl(FunctionDeclNode* node);
    void visitStructDecl(StructType* node);
    void visitEnumDecl(EnumType* node);
    void visitLetDecl(LetDeclNode* node);
    void visitBinaryExpr(BinaryExprNode* node);
    void visitUnaryExpr(UnaryExprNode* node);
    void visitCallExpr(CallExprNode* node);
    void visitIfExpr(IfExprNode* node);
    void visitLiteral(LiteralNode* node);
    void visitIdentifier(IdentifierNode* node);
    
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
