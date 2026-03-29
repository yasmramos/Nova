
// Generated from Nova.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NovaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NovaParser.
 */
class  NovaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSourceFile(NovaParser::SourceFileContext *ctx) = 0;
  virtual void exitSourceFile(NovaParser::SourceFileContext *ctx) = 0;

  virtual void enterModuleDeclaration(NovaParser::ModuleDeclarationContext *ctx) = 0;
  virtual void exitModuleDeclaration(NovaParser::ModuleDeclarationContext *ctx) = 0;

  virtual void enterImportDeclaration(NovaParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(NovaParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterTopLevelDeclaration(NovaParser::TopLevelDeclarationContext *ctx) = 0;
  virtual void exitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext *ctx) = 0;

  virtual void enterFunctionDeclaration(NovaParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(NovaParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionParameters(NovaParser::FunctionParametersContext *ctx) = 0;
  virtual void exitFunctionParameters(NovaParser::FunctionParametersContext *ctx) = 0;

  virtual void enterParameterList(NovaParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(NovaParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(NovaParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(NovaParser::ParameterContext *ctx) = 0;

  virtual void enterReturnType(NovaParser::ReturnTypeContext *ctx) = 0;
  virtual void exitReturnType(NovaParser::ReturnTypeContext *ctx) = 0;

  virtual void enterStructDeclaration(NovaParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(NovaParser::StructDeclarationContext *ctx) = 0;

  virtual void enterStructField(NovaParser::StructFieldContext *ctx) = 0;
  virtual void exitStructField(NovaParser::StructFieldContext *ctx) = 0;

  virtual void enterTraitDeclaration(NovaParser::TraitDeclarationContext *ctx) = 0;
  virtual void exitTraitDeclaration(NovaParser::TraitDeclarationContext *ctx) = 0;

  virtual void enterTraitMethod(NovaParser::TraitMethodContext *ctx) = 0;
  virtual void exitTraitMethod(NovaParser::TraitMethodContext *ctx) = 0;

  virtual void enterFunctionSignature(NovaParser::FunctionSignatureContext *ctx) = 0;
  virtual void exitFunctionSignature(NovaParser::FunctionSignatureContext *ctx) = 0;

  virtual void enterImplDeclaration(NovaParser::ImplDeclarationContext *ctx) = 0;
  virtual void exitImplDeclaration(NovaParser::ImplDeclarationContext *ctx) = 0;

  virtual void enterImplMember(NovaParser::ImplMemberContext *ctx) = 0;
  virtual void exitImplMember(NovaParser::ImplMemberContext *ctx) = 0;

  virtual void enterEnumDeclaration(NovaParser::EnumDeclarationContext *ctx) = 0;
  virtual void exitEnumDeclaration(NovaParser::EnumDeclarationContext *ctx) = 0;

  virtual void enterEnumVariant(NovaParser::EnumVariantContext *ctx) = 0;
  virtual void exitEnumVariant(NovaParser::EnumVariantContext *ctx) = 0;

  virtual void enterTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext *ctx) = 0;
  virtual void exitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext *ctx) = 0;

  virtual void enterConstantDeclaration(NovaParser::ConstantDeclarationContext *ctx) = 0;
  virtual void exitConstantDeclaration(NovaParser::ConstantDeclarationContext *ctx) = 0;

  virtual void enterExternDeclaration(NovaParser::ExternDeclarationContext *ctx) = 0;
  virtual void exitExternDeclaration(NovaParser::ExternDeclarationContext *ctx) = 0;

  virtual void enterExternFunction(NovaParser::ExternFunctionContext *ctx) = 0;
  virtual void exitExternFunction(NovaParser::ExternFunctionContext *ctx) = 0;

  virtual void enterType_(NovaParser::Type_Context *ctx) = 0;
  virtual void exitType_(NovaParser::Type_Context *ctx) = 0;

  virtual void enterPrimitiveType(NovaParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(NovaParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterTypeReference(NovaParser::TypeReferenceContext *ctx) = 0;
  virtual void exitTypeReference(NovaParser::TypeReferenceContext *ctx) = 0;

  virtual void enterGenericType(NovaParser::GenericTypeContext *ctx) = 0;
  virtual void exitGenericType(NovaParser::GenericTypeContext *ctx) = 0;

  virtual void enterTypeList(NovaParser::TypeListContext *ctx) = 0;
  virtual void exitTypeList(NovaParser::TypeListContext *ctx) = 0;

  virtual void enterFunctionType(NovaParser::FunctionTypeContext *ctx) = 0;
  virtual void exitFunctionType(NovaParser::FunctionTypeContext *ctx) = 0;

  virtual void enterTupleType(NovaParser::TupleTypeContext *ctx) = 0;
  virtual void exitTupleType(NovaParser::TupleTypeContext *ctx) = 0;

  virtual void enterArrayType(NovaParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(NovaParser::ArrayTypeContext *ctx) = 0;

  virtual void enterReferenceType(NovaParser::ReferenceTypeContext *ctx) = 0;
  virtual void exitReferenceType(NovaParser::ReferenceTypeContext *ctx) = 0;

  virtual void enterOwnershipType(NovaParser::OwnershipTypeContext *ctx) = 0;
  virtual void exitOwnershipType(NovaParser::OwnershipTypeContext *ctx) = 0;

  virtual void enterTypeParameterList(NovaParser::TypeParameterListContext *ctx) = 0;
  virtual void exitTypeParameterList(NovaParser::TypeParameterListContext *ctx) = 0;

  virtual void enterTypeParameter(NovaParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(NovaParser::TypeParameterContext *ctx) = 0;

  virtual void enterConstraintList(NovaParser::ConstraintListContext *ctx) = 0;
  virtual void exitConstraintList(NovaParser::ConstraintListContext *ctx) = 0;

  virtual void enterConstraint(NovaParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(NovaParser::ConstraintContext *ctx) = 0;

  virtual void enterIdentifierList(NovaParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(NovaParser::IdentifierListContext *ctx) = 0;

  virtual void enterLifetime(NovaParser::LifetimeContext *ctx) = 0;
  virtual void exitLifetime(NovaParser::LifetimeContext *ctx) = 0;

  virtual void enterExpression(NovaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NovaParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(NovaParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(NovaParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext *ctx) = 0;
  virtual void exitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext *ctx) = 0;

  virtual void enterLogicalExpression(NovaParser::LogicalExpressionContext *ctx) = 0;
  virtual void exitLogicalExpression(NovaParser::LogicalExpressionContext *ctx) = 0;

  virtual void enterComparisonExpression(NovaParser::ComparisonExpressionContext *ctx) = 0;
  virtual void exitComparisonExpression(NovaParser::ComparisonExpressionContext *ctx) = 0;

  virtual void enterBitwiseExpression(NovaParser::BitwiseExpressionContext *ctx) = 0;
  virtual void exitBitwiseExpression(NovaParser::BitwiseExpressionContext *ctx) = 0;

  virtual void enterArithmeticExpression(NovaParser::ArithmeticExpressionContext *ctx) = 0;
  virtual void exitArithmeticExpression(NovaParser::ArithmeticExpressionContext *ctx) = 0;

  virtual void enterTermExpression(NovaParser::TermExpressionContext *ctx) = 0;
  virtual void exitTermExpression(NovaParser::TermExpressionContext *ctx) = 0;

  virtual void enterPowerExpression(NovaParser::PowerExpressionContext *ctx) = 0;
  virtual void exitPowerExpression(NovaParser::PowerExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(NovaParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(NovaParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterPostfixExpression(NovaParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(NovaParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(NovaParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(NovaParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(NovaParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterLiteralExpression(NovaParser::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(NovaParser::LiteralExpressionContext *ctx) = 0;

  virtual void enterIntegerLiteral(NovaParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(NovaParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(NovaParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(NovaParser::FloatLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(NovaParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(NovaParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterCharacterLiteral(NovaParser::CharacterLiteralContext *ctx) = 0;
  virtual void exitCharacterLiteral(NovaParser::CharacterLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(NovaParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(NovaParser::StringLiteralContext *ctx) = 0;

  virtual void enterNullLiteral(NovaParser::NullLiteralContext *ctx) = 0;
  virtual void exitNullLiteral(NovaParser::NullLiteralContext *ctx) = 0;

  virtual void enterIdentifierExpression(NovaParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(NovaParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterBlockExpression(NovaParser::BlockExpressionContext *ctx) = 0;
  virtual void exitBlockExpression(NovaParser::BlockExpressionContext *ctx) = 0;

  virtual void enterBlock(NovaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(NovaParser::BlockContext *ctx) = 0;

  virtual void enterStatement(NovaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(NovaParser::StatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(NovaParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(NovaParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(NovaParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(NovaParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterPattern(NovaParser::PatternContext *ctx) = 0;
  virtual void exitPattern(NovaParser::PatternContext *ctx) = 0;

  virtual void enterIdentifierPattern(NovaParser::IdentifierPatternContext *ctx) = 0;
  virtual void exitIdentifierPattern(NovaParser::IdentifierPatternContext *ctx) = 0;

  virtual void enterTuplePattern(NovaParser::TuplePatternContext *ctx) = 0;
  virtual void exitTuplePattern(NovaParser::TuplePatternContext *ctx) = 0;

  virtual void enterStructPattern(NovaParser::StructPatternContext *ctx) = 0;
  virtual void exitStructPattern(NovaParser::StructPatternContext *ctx) = 0;

  virtual void enterWildcardPattern(NovaParser::WildcardPatternContext *ctx) = 0;
  virtual void exitWildcardPattern(NovaParser::WildcardPatternContext *ctx) = 0;

  virtual void enterExpressionStatement(NovaParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(NovaParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterAssignmentStatement(NovaParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(NovaParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterLambdaExpression(NovaParser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(NovaParser::LambdaExpressionContext *ctx) = 0;

  virtual void enterTupleExpression(NovaParser::TupleExpressionContext *ctx) = 0;
  virtual void exitTupleExpression(NovaParser::TupleExpressionContext *ctx) = 0;

  virtual void enterArrayExpression(NovaParser::ArrayExpressionContext *ctx) = 0;
  virtual void exitArrayExpression(NovaParser::ArrayExpressionContext *ctx) = 0;

  virtual void enterStructExpression(NovaParser::StructExpressionContext *ctx) = 0;
  virtual void exitStructExpression(NovaParser::StructExpressionContext *ctx) = 0;

  virtual void enterFieldInitializer(NovaParser::FieldInitializerContext *ctx) = 0;
  virtual void exitFieldInitializer(NovaParser::FieldInitializerContext *ctx) = 0;

  virtual void enterEnumVariantExpression(NovaParser::EnumVariantExpressionContext *ctx) = 0;
  virtual void exitEnumVariantExpression(NovaParser::EnumVariantExpressionContext *ctx) = 0;

  virtual void enterCallExpression(NovaParser::CallExpressionContext *ctx) = 0;
  virtual void exitCallExpression(NovaParser::CallExpressionContext *ctx) = 0;

  virtual void enterArgumentList(NovaParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(NovaParser::ArgumentListContext *ctx) = 0;

  virtual void enterFieldExpression(NovaParser::FieldExpressionContext *ctx) = 0;
  virtual void exitFieldExpression(NovaParser::FieldExpressionContext *ctx) = 0;

  virtual void enterCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext *ctx) = 0;
  virtual void exitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext *ctx) = 0;

  virtual void enterIfExpression(NovaParser::IfExpressionContext *ctx) = 0;
  virtual void exitIfExpression(NovaParser::IfExpressionContext *ctx) = 0;

  virtual void enterIfStatement(NovaParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(NovaParser::IfStatementContext *ctx) = 0;

  virtual void enterCondition(NovaParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(NovaParser::ConditionContext *ctx) = 0;

  virtual void enterLetCondition(NovaParser::LetConditionContext *ctx) = 0;
  virtual void exitLetCondition(NovaParser::LetConditionContext *ctx) = 0;

  virtual void enterMatchExpression(NovaParser::MatchExpressionContext *ctx) = 0;
  virtual void exitMatchExpression(NovaParser::MatchExpressionContext *ctx) = 0;

  virtual void enterMatchStatement(NovaParser::MatchStatementContext *ctx) = 0;
  virtual void exitMatchStatement(NovaParser::MatchStatementContext *ctx) = 0;

  virtual void enterMatchArm(NovaParser::MatchArmContext *ctx) = 0;
  virtual void exitMatchArm(NovaParser::MatchArmContext *ctx) = 0;

  virtual void enterLoopExpression(NovaParser::LoopExpressionContext *ctx) = 0;
  virtual void exitLoopExpression(NovaParser::LoopExpressionContext *ctx) = 0;

  virtual void enterLoopStatement(NovaParser::LoopStatementContext *ctx) = 0;
  virtual void exitLoopStatement(NovaParser::LoopStatementContext *ctx) = 0;

  virtual void enterLoopBlock(NovaParser::LoopBlockContext *ctx) = 0;
  virtual void exitLoopBlock(NovaParser::LoopBlockContext *ctx) = 0;

  virtual void enterWhileBlock(NovaParser::WhileBlockContext *ctx) = 0;
  virtual void exitWhileBlock(NovaParser::WhileBlockContext *ctx) = 0;

  virtual void enterForBlock(NovaParser::ForBlockContext *ctx) = 0;
  virtual void exitForBlock(NovaParser::ForBlockContext *ctx) = 0;

  virtual void enterJumpStatement(NovaParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(NovaParser::JumpStatementContext *ctx) = 0;

  virtual void enterBreakExpression(NovaParser::BreakExpressionContext *ctx) = 0;
  virtual void exitBreakExpression(NovaParser::BreakExpressionContext *ctx) = 0;

  virtual void enterContinueExpression(NovaParser::ContinueExpressionContext *ctx) = 0;
  virtual void exitContinueExpression(NovaParser::ContinueExpressionContext *ctx) = 0;

  virtual void enterReturnExpression(NovaParser::ReturnExpressionContext *ctx) = 0;
  virtual void exitReturnExpression(NovaParser::ReturnExpressionContext *ctx) = 0;

  virtual void enterAwaitExpression(NovaParser::AwaitExpressionContext *ctx) = 0;
  virtual void exitAwaitExpression(NovaParser::AwaitExpressionContext *ctx) = 0;

  virtual void enterUnsafeExpression(NovaParser::UnsafeExpressionContext *ctx) = 0;
  virtual void exitUnsafeExpression(NovaParser::UnsafeExpressionContext *ctx) = 0;

  virtual void enterVisibility(NovaParser::VisibilityContext *ctx) = 0;
  virtual void exitVisibility(NovaParser::VisibilityContext *ctx) = 0;

  virtual void enterQualifiedName(NovaParser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(NovaParser::QualifiedNameContext *ctx) = 0;

  virtual void enterIdentifier(NovaParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(NovaParser::IdentifierContext *ctx) = 0;


};

