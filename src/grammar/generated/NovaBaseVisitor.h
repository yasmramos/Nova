
// Generated from /workspace/src/grammar/Nova.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NovaVisitor.h"


/**
 * This class provides an empty implementation of NovaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NovaBaseVisitor : public NovaVisitor {
public:

  virtual std::any visitSourceFile(NovaParser::SourceFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDeclaration(NovaParser::ModuleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportDeclaration(NovaParser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(NovaParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionParameters(NovaParser::FunctionParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(NovaParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(NovaParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnType(NovaParser::ReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclaration(NovaParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructField(NovaParser::StructFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTraitDeclaration(NovaParser::TraitDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTraitMethod(NovaParser::TraitMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSignature(NovaParser::FunctionSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplDeclaration(NovaParser::ImplDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplMember(NovaParser::ImplMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumDeclaration(NovaParser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumVariant(NovaParser::EnumVariantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDeclaration(NovaParser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternDeclaration(NovaParser::ExternDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternFunction(NovaParser::ExternFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_(NovaParser::Type_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveType(NovaParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeReference(NovaParser::TypeReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericType(NovaParser::GenericTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeList(NovaParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionType(NovaParser::FunctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTupleType(NovaParser::TupleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(NovaParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferenceType(NovaParser::ReferenceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOwnershipType(NovaParser::OwnershipTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameterList(NovaParser::TypeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameter(NovaParser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintList(NovaParser::ConstraintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraint(NovaParser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(NovaParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLifetime(NovaParser::LifetimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(NovaParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(NovaParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalExpression(NovaParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonExpression(NovaParser::ComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitwiseExpression(NovaParser::BitwiseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticExpression(NovaParser::ArithmeticExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermExpression(NovaParser::TermExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowerExpression(NovaParser::PowerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(NovaParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(NovaParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(NovaParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralExpression(NovaParser::LiteralExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(NovaParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(NovaParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(NovaParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterLiteral(NovaParser::CharacterLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(NovaParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLiteral(NovaParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierExpression(NovaParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockExpression(NovaParser::BlockExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(NovaParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(NovaParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationStatement(NovaParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(NovaParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPattern(NovaParser::PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierPattern(NovaParser::IdentifierPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuplePattern(NovaParser::TuplePatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructPattern(NovaParser::StructPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWildcardPattern(NovaParser::WildcardPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(NovaParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(NovaParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaExpression(NovaParser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTupleExpression(NovaParser::TupleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayExpression(NovaParser::ArrayExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructExpression(NovaParser::StructExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldInitializer(NovaParser::FieldInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumVariantExpression(NovaParser::EnumVariantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallExpression(NovaParser::CallExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(NovaParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldExpression(NovaParser::FieldExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfExpression(NovaParser::IfExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(NovaParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(NovaParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLetCondition(NovaParser::LetConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchExpression(NovaParser::MatchExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchStatement(NovaParser::MatchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchArm(NovaParser::MatchArmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopExpression(NovaParser::LoopExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopStatement(NovaParser::LoopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopBlock(NovaParser::LoopBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileBlock(NovaParser::WhileBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForBlock(NovaParser::ForBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpStatement(NovaParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakExpression(NovaParser::BreakExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueExpression(NovaParser::ContinueExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnExpression(NovaParser::ReturnExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAwaitExpression(NovaParser::AwaitExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsafeExpression(NovaParser::UnsafeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVisibility(NovaParser::VisibilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedName(NovaParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(NovaParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

