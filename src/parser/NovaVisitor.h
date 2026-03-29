
// Generated from Nova.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NovaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NovaParser.
 */
class  NovaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NovaParser.
   */
    virtual antlrcpp::Any visitSourceFile(NovaParser::SourceFileContext *context) = 0;

    virtual antlrcpp::Any visitModuleDeclaration(NovaParser::ModuleDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImportDeclaration(NovaParser::ImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(NovaParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParameters(NovaParser::FunctionParametersContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(NovaParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameter(NovaParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitReturnType(NovaParser::ReturnTypeContext *context) = 0;

    virtual antlrcpp::Any visitStructDeclaration(NovaParser::StructDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructField(NovaParser::StructFieldContext *context) = 0;

    virtual antlrcpp::Any visitTraitDeclaration(NovaParser::TraitDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTraitMethod(NovaParser::TraitMethodContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSignature(NovaParser::FunctionSignatureContext *context) = 0;

    virtual antlrcpp::Any visitImplDeclaration(NovaParser::ImplDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImplMember(NovaParser::ImplMemberContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(NovaParser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEnumVariant(NovaParser::EnumVariantContext *context) = 0;

    virtual antlrcpp::Any visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstantDeclaration(NovaParser::ConstantDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitExternDeclaration(NovaParser::ExternDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitExternFunction(NovaParser::ExternFunctionContext *context) = 0;

    virtual antlrcpp::Any visitType_(NovaParser::Type_Context *context) = 0;

    virtual antlrcpp::Any visitPrimitiveType(NovaParser::PrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeReference(NovaParser::TypeReferenceContext *context) = 0;

    virtual antlrcpp::Any visitGenericType(NovaParser::GenericTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeList(NovaParser::TypeListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(NovaParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitTupleType(NovaParser::TupleTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(NovaParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitReferenceType(NovaParser::ReferenceTypeContext *context) = 0;

    virtual antlrcpp::Any visitOwnershipType(NovaParser::OwnershipTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterList(NovaParser::TypeParameterListContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(NovaParser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitConstraintList(NovaParser::ConstraintListContext *context) = 0;

    virtual antlrcpp::Any visitConstraint(NovaParser::ConstraintContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(NovaParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitLifetime(NovaParser::LifetimeContext *context) = 0;

    virtual antlrcpp::Any visitExpression(NovaParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(NovaParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(NovaParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitComparisonExpression(NovaParser::ComparisonExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseExpression(NovaParser::BitwiseExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticExpression(NovaParser::ArithmeticExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTermExpression(NovaParser::TermExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPowerExpression(NovaParser::PowerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(NovaParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(NovaParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(NovaParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLiteralExpression(NovaParser::LiteralExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(NovaParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(NovaParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(NovaParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitCharacterLiteral(NovaParser::CharacterLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(NovaParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNullLiteral(NovaParser::NullLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(NovaParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBlockExpression(NovaParser::BlockExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBlock(NovaParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(NovaParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationStatement(NovaParser::DeclarationStatementContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(NovaParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPattern(NovaParser::PatternContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierPattern(NovaParser::IdentifierPatternContext *context) = 0;

    virtual antlrcpp::Any visitTuplePattern(NovaParser::TuplePatternContext *context) = 0;

    virtual antlrcpp::Any visitStructPattern(NovaParser::StructPatternContext *context) = 0;

    virtual antlrcpp::Any visitWildcardPattern(NovaParser::WildcardPatternContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(NovaParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStatement(NovaParser::AssignmentStatementContext *context) = 0;

    virtual antlrcpp::Any visitLambdaExpression(NovaParser::LambdaExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTupleExpression(NovaParser::TupleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArrayExpression(NovaParser::ArrayExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStructExpression(NovaParser::StructExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFieldInitializer(NovaParser::FieldInitializerContext *context) = 0;

    virtual antlrcpp::Any visitEnumVariantExpression(NovaParser::EnumVariantExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCallExpression(NovaParser::CallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(NovaParser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitFieldExpression(NovaParser::FieldExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIfExpression(NovaParser::IfExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(NovaParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(NovaParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitLetCondition(NovaParser::LetConditionContext *context) = 0;

    virtual antlrcpp::Any visitMatchExpression(NovaParser::MatchExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMatchStatement(NovaParser::MatchStatementContext *context) = 0;

    virtual antlrcpp::Any visitMatchArm(NovaParser::MatchArmContext *context) = 0;

    virtual antlrcpp::Any visitLoopExpression(NovaParser::LoopExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLoopStatement(NovaParser::LoopStatementContext *context) = 0;

    virtual antlrcpp::Any visitLoopBlock(NovaParser::LoopBlockContext *context) = 0;

    virtual antlrcpp::Any visitWhileBlock(NovaParser::WhileBlockContext *context) = 0;

    virtual antlrcpp::Any visitForBlock(NovaParser::ForBlockContext *context) = 0;

    virtual antlrcpp::Any visitJumpStatement(NovaParser::JumpStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakExpression(NovaParser::BreakExpressionContext *context) = 0;

    virtual antlrcpp::Any visitContinueExpression(NovaParser::ContinueExpressionContext *context) = 0;

    virtual antlrcpp::Any visitReturnExpression(NovaParser::ReturnExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAwaitExpression(NovaParser::AwaitExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnsafeExpression(NovaParser::UnsafeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitVisibility(NovaParser::VisibilityContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedName(NovaParser::QualifiedNameContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(NovaParser::IdentifierContext *context) = 0;


};

