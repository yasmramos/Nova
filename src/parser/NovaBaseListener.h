
// Generated from Nova.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "NovaListener.h"


/**
 * This class provides an empty implementation of NovaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NovaBaseListener : public NovaListener {
public:

  virtual void enterSourceFile(NovaParser::SourceFileContext * /*ctx*/) override { }
  virtual void exitSourceFile(NovaParser::SourceFileContext * /*ctx*/) override { }

  virtual void enterModuleDeclaration(NovaParser::ModuleDeclarationContext * /*ctx*/) override { }
  virtual void exitModuleDeclaration(NovaParser::ModuleDeclarationContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(NovaParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(NovaParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTopLevelDeclaration(NovaParser::TopLevelDeclarationContext * /*ctx*/) override { }
  virtual void exitTopLevelDeclaration(NovaParser::TopLevelDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(NovaParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(NovaParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionParameters(NovaParser::FunctionParametersContext * /*ctx*/) override { }
  virtual void exitFunctionParameters(NovaParser::FunctionParametersContext * /*ctx*/) override { }

  virtual void enterParameterList(NovaParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(NovaParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(NovaParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(NovaParser::ParameterContext * /*ctx*/) override { }

  virtual void enterReturnType(NovaParser::ReturnTypeContext * /*ctx*/) override { }
  virtual void exitReturnType(NovaParser::ReturnTypeContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(NovaParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(NovaParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterStructField(NovaParser::StructFieldContext * /*ctx*/) override { }
  virtual void exitStructField(NovaParser::StructFieldContext * /*ctx*/) override { }

  virtual void enterTraitDeclaration(NovaParser::TraitDeclarationContext * /*ctx*/) override { }
  virtual void exitTraitDeclaration(NovaParser::TraitDeclarationContext * /*ctx*/) override { }

  virtual void enterTraitMethod(NovaParser::TraitMethodContext * /*ctx*/) override { }
  virtual void exitTraitMethod(NovaParser::TraitMethodContext * /*ctx*/) override { }

  virtual void enterFunctionSignature(NovaParser::FunctionSignatureContext * /*ctx*/) override { }
  virtual void exitFunctionSignature(NovaParser::FunctionSignatureContext * /*ctx*/) override { }

  virtual void enterImplDeclaration(NovaParser::ImplDeclarationContext * /*ctx*/) override { }
  virtual void exitImplDeclaration(NovaParser::ImplDeclarationContext * /*ctx*/) override { }

  virtual void enterImplMember(NovaParser::ImplMemberContext * /*ctx*/) override { }
  virtual void exitImplMember(NovaParser::ImplMemberContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(NovaParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(NovaParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumVariant(NovaParser::EnumVariantContext * /*ctx*/) override { }
  virtual void exitEnumVariant(NovaParser::EnumVariantContext * /*ctx*/) override { }

  virtual void enterTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeAliasDeclaration(NovaParser::TypeAliasDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantDeclaration(NovaParser::ConstantDeclarationContext * /*ctx*/) override { }
  virtual void exitConstantDeclaration(NovaParser::ConstantDeclarationContext * /*ctx*/) override { }

  virtual void enterExternDeclaration(NovaParser::ExternDeclarationContext * /*ctx*/) override { }
  virtual void exitExternDeclaration(NovaParser::ExternDeclarationContext * /*ctx*/) override { }

  virtual void enterExternFunction(NovaParser::ExternFunctionContext * /*ctx*/) override { }
  virtual void exitExternFunction(NovaParser::ExternFunctionContext * /*ctx*/) override { }

  virtual void enterType_(NovaParser::Type_Context * /*ctx*/) override { }
  virtual void exitType_(NovaParser::Type_Context * /*ctx*/) override { }

  virtual void enterPrimitiveType(NovaParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(NovaParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterTypeReference(NovaParser::TypeReferenceContext * /*ctx*/) override { }
  virtual void exitTypeReference(NovaParser::TypeReferenceContext * /*ctx*/) override { }

  virtual void enterGenericType(NovaParser::GenericTypeContext * /*ctx*/) override { }
  virtual void exitGenericType(NovaParser::GenericTypeContext * /*ctx*/) override { }

  virtual void enterTypeList(NovaParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(NovaParser::TypeListContext * /*ctx*/) override { }

  virtual void enterFunctionType(NovaParser::FunctionTypeContext * /*ctx*/) override { }
  virtual void exitFunctionType(NovaParser::FunctionTypeContext * /*ctx*/) override { }

  virtual void enterTupleType(NovaParser::TupleTypeContext * /*ctx*/) override { }
  virtual void exitTupleType(NovaParser::TupleTypeContext * /*ctx*/) override { }

  virtual void enterArrayType(NovaParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(NovaParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterReferenceType(NovaParser::ReferenceTypeContext * /*ctx*/) override { }
  virtual void exitReferenceType(NovaParser::ReferenceTypeContext * /*ctx*/) override { }

  virtual void enterOwnershipType(NovaParser::OwnershipTypeContext * /*ctx*/) override { }
  virtual void exitOwnershipType(NovaParser::OwnershipTypeContext * /*ctx*/) override { }

  virtual void enterTypeParameterList(NovaParser::TypeParameterListContext * /*ctx*/) override { }
  virtual void exitTypeParameterList(NovaParser::TypeParameterListContext * /*ctx*/) override { }

  virtual void enterTypeParameter(NovaParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(NovaParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterConstraintList(NovaParser::ConstraintListContext * /*ctx*/) override { }
  virtual void exitConstraintList(NovaParser::ConstraintListContext * /*ctx*/) override { }

  virtual void enterConstraint(NovaParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(NovaParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterIdentifierList(NovaParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(NovaParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterLifetime(NovaParser::LifetimeContext * /*ctx*/) override { }
  virtual void exitLifetime(NovaParser::LifetimeContext * /*ctx*/) override { }

  virtual void enterExpression(NovaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(NovaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(NovaParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(NovaParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitCompoundAssignmentOperator(NovaParser::CompoundAssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterLogicalExpression(NovaParser::LogicalExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalExpression(NovaParser::LogicalExpressionContext * /*ctx*/) override { }

  virtual void enterComparisonExpression(NovaParser::ComparisonExpressionContext * /*ctx*/) override { }
  virtual void exitComparisonExpression(NovaParser::ComparisonExpressionContext * /*ctx*/) override { }

  virtual void enterBitwiseExpression(NovaParser::BitwiseExpressionContext * /*ctx*/) override { }
  virtual void exitBitwiseExpression(NovaParser::BitwiseExpressionContext * /*ctx*/) override { }

  virtual void enterArithmeticExpression(NovaParser::ArithmeticExpressionContext * /*ctx*/) override { }
  virtual void exitArithmeticExpression(NovaParser::ArithmeticExpressionContext * /*ctx*/) override { }

  virtual void enterTermExpression(NovaParser::TermExpressionContext * /*ctx*/) override { }
  virtual void exitTermExpression(NovaParser::TermExpressionContext * /*ctx*/) override { }

  virtual void enterPowerExpression(NovaParser::PowerExpressionContext * /*ctx*/) override { }
  virtual void exitPowerExpression(NovaParser::PowerExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(NovaParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(NovaParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(NovaParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(NovaParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(NovaParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(NovaParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(NovaParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(NovaParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(NovaParser::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(NovaParser::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(NovaParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(NovaParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(NovaParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(NovaParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(NovaParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(NovaParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterCharacterLiteral(NovaParser::CharacterLiteralContext * /*ctx*/) override { }
  virtual void exitCharacterLiteral(NovaParser::CharacterLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(NovaParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(NovaParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterNullLiteral(NovaParser::NullLiteralContext * /*ctx*/) override { }
  virtual void exitNullLiteral(NovaParser::NullLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(NovaParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(NovaParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterBlockExpression(NovaParser::BlockExpressionContext * /*ctx*/) override { }
  virtual void exitBlockExpression(NovaParser::BlockExpressionContext * /*ctx*/) override { }

  virtual void enterBlock(NovaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(NovaParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(NovaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(NovaParser::StatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(NovaParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(NovaParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(NovaParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(NovaParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterPattern(NovaParser::PatternContext * /*ctx*/) override { }
  virtual void exitPattern(NovaParser::PatternContext * /*ctx*/) override { }

  virtual void enterIdentifierPattern(NovaParser::IdentifierPatternContext * /*ctx*/) override { }
  virtual void exitIdentifierPattern(NovaParser::IdentifierPatternContext * /*ctx*/) override { }

  virtual void enterTuplePattern(NovaParser::TuplePatternContext * /*ctx*/) override { }
  virtual void exitTuplePattern(NovaParser::TuplePatternContext * /*ctx*/) override { }

  virtual void enterStructPattern(NovaParser::StructPatternContext * /*ctx*/) override { }
  virtual void exitStructPattern(NovaParser::StructPatternContext * /*ctx*/) override { }

  virtual void enterWildcardPattern(NovaParser::WildcardPatternContext * /*ctx*/) override { }
  virtual void exitWildcardPattern(NovaParser::WildcardPatternContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(NovaParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(NovaParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(NovaParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(NovaParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(NovaParser::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(NovaParser::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterTupleExpression(NovaParser::TupleExpressionContext * /*ctx*/) override { }
  virtual void exitTupleExpression(NovaParser::TupleExpressionContext * /*ctx*/) override { }

  virtual void enterArrayExpression(NovaParser::ArrayExpressionContext * /*ctx*/) override { }
  virtual void exitArrayExpression(NovaParser::ArrayExpressionContext * /*ctx*/) override { }

  virtual void enterStructExpression(NovaParser::StructExpressionContext * /*ctx*/) override { }
  virtual void exitStructExpression(NovaParser::StructExpressionContext * /*ctx*/) override { }

  virtual void enterFieldInitializer(NovaParser::FieldInitializerContext * /*ctx*/) override { }
  virtual void exitFieldInitializer(NovaParser::FieldInitializerContext * /*ctx*/) override { }

  virtual void enterEnumVariantExpression(NovaParser::EnumVariantExpressionContext * /*ctx*/) override { }
  virtual void exitEnumVariantExpression(NovaParser::EnumVariantExpressionContext * /*ctx*/) override { }

  virtual void enterCallExpression(NovaParser::CallExpressionContext * /*ctx*/) override { }
  virtual void exitCallExpression(NovaParser::CallExpressionContext * /*ctx*/) override { }

  virtual void enterArgumentList(NovaParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(NovaParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterFieldExpression(NovaParser::FieldExpressionContext * /*ctx*/) override { }
  virtual void exitFieldExpression(NovaParser::FieldExpressionContext * /*ctx*/) override { }

  virtual void enterCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitCompoundAssignmentExpression(NovaParser::CompoundAssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterIfExpression(NovaParser::IfExpressionContext * /*ctx*/) override { }
  virtual void exitIfExpression(NovaParser::IfExpressionContext * /*ctx*/) override { }

  virtual void enterIfStatement(NovaParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(NovaParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterCondition(NovaParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(NovaParser::ConditionContext * /*ctx*/) override { }

  virtual void enterLetCondition(NovaParser::LetConditionContext * /*ctx*/) override { }
  virtual void exitLetCondition(NovaParser::LetConditionContext * /*ctx*/) override { }

  virtual void enterMatchExpression(NovaParser::MatchExpressionContext * /*ctx*/) override { }
  virtual void exitMatchExpression(NovaParser::MatchExpressionContext * /*ctx*/) override { }

  virtual void enterMatchStatement(NovaParser::MatchStatementContext * /*ctx*/) override { }
  virtual void exitMatchStatement(NovaParser::MatchStatementContext * /*ctx*/) override { }

  virtual void enterMatchArm(NovaParser::MatchArmContext * /*ctx*/) override { }
  virtual void exitMatchArm(NovaParser::MatchArmContext * /*ctx*/) override { }

  virtual void enterLoopExpression(NovaParser::LoopExpressionContext * /*ctx*/) override { }
  virtual void exitLoopExpression(NovaParser::LoopExpressionContext * /*ctx*/) override { }

  virtual void enterLoopStatement(NovaParser::LoopStatementContext * /*ctx*/) override { }
  virtual void exitLoopStatement(NovaParser::LoopStatementContext * /*ctx*/) override { }

  virtual void enterLoopBlock(NovaParser::LoopBlockContext * /*ctx*/) override { }
  virtual void exitLoopBlock(NovaParser::LoopBlockContext * /*ctx*/) override { }

  virtual void enterWhileBlock(NovaParser::WhileBlockContext * /*ctx*/) override { }
  virtual void exitWhileBlock(NovaParser::WhileBlockContext * /*ctx*/) override { }

  virtual void enterForBlock(NovaParser::ForBlockContext * /*ctx*/) override { }
  virtual void exitForBlock(NovaParser::ForBlockContext * /*ctx*/) override { }

  virtual void enterJumpStatement(NovaParser::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(NovaParser::JumpStatementContext * /*ctx*/) override { }

  virtual void enterBreakExpression(NovaParser::BreakExpressionContext * /*ctx*/) override { }
  virtual void exitBreakExpression(NovaParser::BreakExpressionContext * /*ctx*/) override { }

  virtual void enterContinueExpression(NovaParser::ContinueExpressionContext * /*ctx*/) override { }
  virtual void exitContinueExpression(NovaParser::ContinueExpressionContext * /*ctx*/) override { }

  virtual void enterReturnExpression(NovaParser::ReturnExpressionContext * /*ctx*/) override { }
  virtual void exitReturnExpression(NovaParser::ReturnExpressionContext * /*ctx*/) override { }

  virtual void enterAwaitExpression(NovaParser::AwaitExpressionContext * /*ctx*/) override { }
  virtual void exitAwaitExpression(NovaParser::AwaitExpressionContext * /*ctx*/) override { }

  virtual void enterUnsafeExpression(NovaParser::UnsafeExpressionContext * /*ctx*/) override { }
  virtual void exitUnsafeExpression(NovaParser::UnsafeExpressionContext * /*ctx*/) override { }

  virtual void enterVisibility(NovaParser::VisibilityContext * /*ctx*/) override { }
  virtual void exitVisibility(NovaParser::VisibilityContext * /*ctx*/) override { }

  virtual void enterQualifiedName(NovaParser::QualifiedNameContext * /*ctx*/) override { }
  virtual void exitQualifiedName(NovaParser::QualifiedNameContext * /*ctx*/) override { }

  virtual void enterIdentifier(NovaParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(NovaParser::IdentifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

