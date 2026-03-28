
// Generated from /workspace/src/grammar/Nova.g4 by ANTLR 4.13.2

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
    virtual std::any visitSourceFile(NovaParser::SourceFileContext *context) = 0;

    virtual std::any visitModuleDeclaration(NovaParser::ModuleDeclarationContext *context) = 0;

    virtual std::any visitImportDeclaration(NovaParser::ImportDeclarationContext *context) = 0;

    virtual std::any visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext *context) = 0;

    virtual std::any visitFunctionDeclaration(NovaParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitFunctionParameters(NovaParser::FunctionParametersContext *context) = 0;

    virtual std::any visitParameterList(NovaParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(NovaParser::ParameterContext *context) = 0;

    virtual std::any visitReturnType(NovaParser::ReturnTypeContext *context) = 0;

    virtual std::any visitStructDeclaration(NovaParser::StructDeclarationContext *context) = 0;

    virtual std::any visitStructField(NovaParser::StructFieldContext *context) = 0;

    virtual std::any visitTraitDeclaration(NovaParser::TraitDeclarationContext *context) = 0;

    virtual std::any visitTraitMethod(NovaParser::TraitMethodContext *context) = 0;

    virtual std::any visitFunctionSignature(NovaParser::FunctionSignatureContext *context) = 0;

    virtual std::any visitImplDeclaration(NovaParser::ImplDeclarationContext *context) = 0;

    virtual std::any visitImplMember(NovaParser::ImplMemberContext *context) = 0;

    virtual std::any visitEnumDeclaration(NovaParser::EnumDeclarationContext *context) = 0;

    virtual std::any visitEnumVariant(NovaParser::EnumVariantContext *context) = 0;

    virtual std::any visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext *context) = 0;

    virtual std::any visitConstantDeclaration(NovaParser::ConstantDeclarationContext *context) = 0;

    virtual std::any visitExternDeclaration(NovaParser::ExternDeclarationContext *context) = 0;

    virtual std::any visitExternFunction(NovaParser::ExternFunctionContext *context) = 0;

    virtual std::any visitType_(NovaParser::Type_Context *context) = 0;

    virtual std::any visitPrimitiveType(NovaParser::PrimitiveTypeContext *context) = 0;

    virtual std::any visitTypeReference(NovaParser::TypeReferenceContext *context) = 0;

    virtual std::any visitGenericType(NovaParser::GenericTypeContext *context) = 0;

    virtual std::any visitTypeList(NovaParser::TypeListContext *context) = 0;

    virtual std::any visitFunctionType(NovaParser::FunctionTypeContext *context) = 0;

    virtual std::any visitTupleType(NovaParser::TupleTypeContext *context) = 0;

    virtual std::any visitArrayType(NovaParser::ArrayTypeContext *context) = 0;

    virtual std::any visitReferenceType(NovaParser::ReferenceTypeContext *context) = 0;

    virtual std::any visitOwnershipType(NovaParser::OwnershipTypeContext *context) = 0;

    virtual std::any visitTypeParameterList(NovaParser::TypeParameterListContext *context) = 0;

    virtual std::any visitTypeParameter(NovaParser::TypeParameterContext *context) = 0;

    virtual std::any visitConstraintList(NovaParser::ConstraintListContext *context) = 0;

    virtual std::any visitConstraint(NovaParser::ConstraintContext *context) = 0;

    virtual std::any visitIdentifierList(NovaParser::IdentifierListContext *context) = 0;

    virtual std::any visitLifetime(NovaParser::LifetimeContext *context) = 0;

    virtual std::any visitExpression(NovaParser::ExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(NovaParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext *context) = 0;

    virtual std::any visitLogicalExpression(NovaParser::LogicalExpressionContext *context) = 0;

    virtual std::any visitComparisonExpression(NovaParser::ComparisonExpressionContext *context) = 0;

    virtual std::any visitBitwiseExpression(NovaParser::BitwiseExpressionContext *context) = 0;

    virtual std::any visitArithmeticExpression(NovaParser::ArithmeticExpressionContext *context) = 0;

    virtual std::any visitTermExpression(NovaParser::TermExpressionContext *context) = 0;

    virtual std::any visitPowerExpression(NovaParser::PowerExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(NovaParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitPostfixExpression(NovaParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitPrimaryExpression(NovaParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext *context) = 0;

    virtual std::any visitLiteralExpression(NovaParser::LiteralExpressionContext *context) = 0;

    virtual std::any visitIntegerLiteral(NovaParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(NovaParser::FloatLiteralContext *context) = 0;

    virtual std::any visitBooleanLiteral(NovaParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitCharacterLiteral(NovaParser::CharacterLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(NovaParser::StringLiteralContext *context) = 0;

    virtual std::any visitNullLiteral(NovaParser::NullLiteralContext *context) = 0;

    virtual std::any visitIdentifierExpression(NovaParser::IdentifierExpressionContext *context) = 0;

    virtual std::any visitBlockExpression(NovaParser::BlockExpressionContext *context) = 0;

    virtual std::any visitBlock(NovaParser::BlockContext *context) = 0;

    virtual std::any visitStatement(NovaParser::StatementContext *context) = 0;

    virtual std::any visitDeclarationStatement(NovaParser::DeclarationStatementContext *context) = 0;

    virtual std::any visitVariableDeclaration(NovaParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitPattern(NovaParser::PatternContext *context) = 0;

    virtual std::any visitIdentifierPattern(NovaParser::IdentifierPatternContext *context) = 0;

    virtual std::any visitTuplePattern(NovaParser::TuplePatternContext *context) = 0;

    virtual std::any visitStructPattern(NovaParser::StructPatternContext *context) = 0;

    virtual std::any visitWildcardPattern(NovaParser::WildcardPatternContext *context) = 0;

    virtual std::any visitExpressionStatement(NovaParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitAssignmentStatement(NovaParser::AssignmentStatementContext *context) = 0;

    virtual std::any visitLambdaExpression(NovaParser::LambdaExpressionContext *context) = 0;

    virtual std::any visitTupleExpression(NovaParser::TupleExpressionContext *context) = 0;

    virtual std::any visitArrayExpression(NovaParser::ArrayExpressionContext *context) = 0;

    virtual std::any visitStructExpression(NovaParser::StructExpressionContext *context) = 0;

    virtual std::any visitFieldInitializer(NovaParser::FieldInitializerContext *context) = 0;

    virtual std::any visitEnumVariantExpression(NovaParser::EnumVariantExpressionContext *context) = 0;

    virtual std::any visitCallExpression(NovaParser::CallExpressionContext *context) = 0;

    virtual std::any visitArgumentList(NovaParser::ArgumentListContext *context) = 0;

    virtual std::any visitFieldExpression(NovaParser::FieldExpressionContext *context) = 0;

    virtual std::any visitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext *context) = 0;

    virtual std::any visitIfExpression(NovaParser::IfExpressionContext *context) = 0;

    virtual std::any visitIfStatement(NovaParser::IfStatementContext *context) = 0;

    virtual std::any visitCondition(NovaParser::ConditionContext *context) = 0;

    virtual std::any visitLetCondition(NovaParser::LetConditionContext *context) = 0;

    virtual std::any visitMatchExpression(NovaParser::MatchExpressionContext *context) = 0;

    virtual std::any visitMatchStatement(NovaParser::MatchStatementContext *context) = 0;

    virtual std::any visitMatchArm(NovaParser::MatchArmContext *context) = 0;

    virtual std::any visitLoopExpression(NovaParser::LoopExpressionContext *context) = 0;

    virtual std::any visitLoopStatement(NovaParser::LoopStatementContext *context) = 0;

    virtual std::any visitLoopBlock(NovaParser::LoopBlockContext *context) = 0;

    virtual std::any visitWhileBlock(NovaParser::WhileBlockContext *context) = 0;

    virtual std::any visitForBlock(NovaParser::ForBlockContext *context) = 0;

    virtual std::any visitJumpStatement(NovaParser::JumpStatementContext *context) = 0;

    virtual std::any visitBreakExpression(NovaParser::BreakExpressionContext *context) = 0;

    virtual std::any visitContinueExpression(NovaParser::ContinueExpressionContext *context) = 0;

    virtual std::any visitReturnExpression(NovaParser::ReturnExpressionContext *context) = 0;

    virtual std::any visitAwaitExpression(NovaParser::AwaitExpressionContext *context) = 0;

    virtual std::any visitUnsafeExpression(NovaParser::UnsafeExpressionContext *context) = 0;

    virtual std::any visitVisibility(NovaParser::VisibilityContext *context) = 0;

    virtual std::any visitQualifiedName(NovaParser::QualifiedNameContext *context) = 0;

    virtual std::any visitIdentifier(NovaParser::IdentifierContext *context) = 0;


};

