
// Generated from Nova.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NovaVisitor.h"


/**
 * This class provides an empty implementation of NovaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NovaBaseVisitor : public NovaVisitor {
public:

  virtual antlrcpp::Any visitSourceFile(NovaParser::SourceFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleDeclaration(NovaParser::ModuleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDeclaration(NovaParser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(NovaParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameters(NovaParser::FunctionParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(NovaParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(NovaParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnType(NovaParser::ReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDeclaration(NovaParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructField(NovaParser::StructFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTraitDeclaration(NovaParser::TraitDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTraitMethod(NovaParser::TraitMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionSignature(NovaParser::FunctionSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImplDeclaration(NovaParser::ImplDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImplMember(NovaParser::ImplMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDeclaration(NovaParser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumVariant(NovaParser::EnumVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDeclaration(NovaParser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternDeclaration(NovaParser::ExternDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternFunction(NovaParser::ExternFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_(NovaParser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveType(NovaParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeReference(NovaParser::TypeReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGenericType(NovaParser::GenericTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeList(NovaParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionType(NovaParser::FunctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTupleType(NovaParser::TupleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayType(NovaParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceType(NovaParser::ReferenceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOwnershipType(NovaParser::OwnershipTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameterList(NovaParser::TypeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameter(NovaParser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintList(NovaParser::ConstraintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraint(NovaParser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(NovaParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLifetime(NovaParser::LifetimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(NovaParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpression(NovaParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(NovaParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonExpression(NovaParser::ComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseExpression(NovaParser::BitwiseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticExpression(NovaParser::ArithmeticExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTermExpression(NovaParser::TermExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowerExpression(NovaParser::PowerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression(NovaParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(NovaParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpression(NovaParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralExpression(NovaParser::LiteralExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(NovaParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(NovaParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(NovaParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacterLiteral(NovaParser::CharacterLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(NovaParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullLiteral(NovaParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierExpression(NovaParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockExpression(NovaParser::BlockExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(NovaParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(NovaParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationStatement(NovaParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(NovaParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPattern(NovaParser::PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierPattern(NovaParser::IdentifierPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTuplePattern(NovaParser::TuplePatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructPattern(NovaParser::StructPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWildcardPattern(NovaParser::WildcardPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(NovaParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStatement(NovaParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaExpression(NovaParser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTupleExpression(NovaParser::TupleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayExpression(NovaParser::ArrayExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructExpression(NovaParser::StructExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldInitializer(NovaParser::FieldInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumVariantExpression(NovaParser::EnumVariantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallExpression(NovaParser::CallExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentList(NovaParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldExpression(NovaParser::FieldExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfExpression(NovaParser::IfExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(NovaParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(NovaParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLetCondition(NovaParser::LetConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchExpression(NovaParser::MatchExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchStatement(NovaParser::MatchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMatchArm(NovaParser::MatchArmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopExpression(NovaParser::LoopExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopStatement(NovaParser::LoopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoopBlock(NovaParser::LoopBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileBlock(NovaParser::WhileBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForBlock(NovaParser::ForBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJumpStatement(NovaParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakExpression(NovaParser::BreakExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueExpression(NovaParser::ContinueExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnExpression(NovaParser::ReturnExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAwaitExpression(NovaParser::AwaitExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsafeExpression(NovaParser::UnsafeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVisibility(NovaParser::VisibilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedName(NovaParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(NovaParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

