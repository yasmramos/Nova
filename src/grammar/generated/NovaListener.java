// Generated from Nova.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link NovaParser}.
 */
public interface NovaListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link NovaParser#sourceFile}.
	 * @param ctx the parse tree
	 */
	void enterSourceFile(NovaParser.SourceFileContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#sourceFile}.
	 * @param ctx the parse tree
	 */
	void exitSourceFile(NovaParser.SourceFileContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#moduleDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterModuleDeclaration(NovaParser.ModuleDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#moduleDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitModuleDeclaration(NovaParser.ModuleDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#importDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterImportDeclaration(NovaParser.ImportDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#importDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitImportDeclaration(NovaParser.ImportDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#topLevelDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterTopLevelDeclaration(NovaParser.TopLevelDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#topLevelDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitTopLevelDeclaration(NovaParser.TopLevelDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDeclaration(NovaParser.FunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDeclaration(NovaParser.FunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#functionParameters}.
	 * @param ctx the parse tree
	 */
	void enterFunctionParameters(NovaParser.FunctionParametersContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#functionParameters}.
	 * @param ctx the parse tree
	 */
	void exitFunctionParameters(NovaParser.FunctionParametersContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(NovaParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(NovaParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(NovaParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(NovaParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#returnType}.
	 * @param ctx the parse tree
	 */
	void enterReturnType(NovaParser.ReturnTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#returnType}.
	 * @param ctx the parse tree
	 */
	void exitReturnType(NovaParser.ReturnTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#structDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterStructDeclaration(NovaParser.StructDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#structDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitStructDeclaration(NovaParser.StructDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#structField}.
	 * @param ctx the parse tree
	 */
	void enterStructField(NovaParser.StructFieldContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#structField}.
	 * @param ctx the parse tree
	 */
	void exitStructField(NovaParser.StructFieldContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#traitDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterTraitDeclaration(NovaParser.TraitDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#traitDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitTraitDeclaration(NovaParser.TraitDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#traitMethod}.
	 * @param ctx the parse tree
	 */
	void enterTraitMethod(NovaParser.TraitMethodContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#traitMethod}.
	 * @param ctx the parse tree
	 */
	void exitTraitMethod(NovaParser.TraitMethodContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#functionSignature}.
	 * @param ctx the parse tree
	 */
	void enterFunctionSignature(NovaParser.FunctionSignatureContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#functionSignature}.
	 * @param ctx the parse tree
	 */
	void exitFunctionSignature(NovaParser.FunctionSignatureContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#implDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterImplDeclaration(NovaParser.ImplDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#implDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitImplDeclaration(NovaParser.ImplDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#implMember}.
	 * @param ctx the parse tree
	 */
	void enterImplMember(NovaParser.ImplMemberContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#implMember}.
	 * @param ctx the parse tree
	 */
	void exitImplMember(NovaParser.ImplMemberContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#enumDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterEnumDeclaration(NovaParser.EnumDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#enumDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitEnumDeclaration(NovaParser.EnumDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#enumVariant}.
	 * @param ctx the parse tree
	 */
	void enterEnumVariant(NovaParser.EnumVariantContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#enumVariant}.
	 * @param ctx the parse tree
	 */
	void exitEnumVariant(NovaParser.EnumVariantContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#typeAliasDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterTypeAliasDeclaration(NovaParser.TypeAliasDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#typeAliasDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitTypeAliasDeclaration(NovaParser.TypeAliasDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#constantDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterConstantDeclaration(NovaParser.ConstantDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#constantDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitConstantDeclaration(NovaParser.ConstantDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#externDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterExternDeclaration(NovaParser.ExternDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#externDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitExternDeclaration(NovaParser.ExternDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#externFunction}.
	 * @param ctx the parse tree
	 */
	void enterExternFunction(NovaParser.ExternFunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#externFunction}.
	 * @param ctx the parse tree
	 */
	void exitExternFunction(NovaParser.ExternFunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#type_}.
	 * @param ctx the parse tree
	 */
	void enterType_(NovaParser.Type_Context ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#type_}.
	 * @param ctx the parse tree
	 */
	void exitType_(NovaParser.Type_Context ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#primitiveType}.
	 * @param ctx the parse tree
	 */
	void enterPrimitiveType(NovaParser.PrimitiveTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#primitiveType}.
	 * @param ctx the parse tree
	 */
	void exitPrimitiveType(NovaParser.PrimitiveTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#typeReference}.
	 * @param ctx the parse tree
	 */
	void enterTypeReference(NovaParser.TypeReferenceContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#typeReference}.
	 * @param ctx the parse tree
	 */
	void exitTypeReference(NovaParser.TypeReferenceContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#genericType}.
	 * @param ctx the parse tree
	 */
	void enterGenericType(NovaParser.GenericTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#genericType}.
	 * @param ctx the parse tree
	 */
	void exitGenericType(NovaParser.GenericTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#typeList}.
	 * @param ctx the parse tree
	 */
	void enterTypeList(NovaParser.TypeListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#typeList}.
	 * @param ctx the parse tree
	 */
	void exitTypeList(NovaParser.TypeListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#functionType}.
	 * @param ctx the parse tree
	 */
	void enterFunctionType(NovaParser.FunctionTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#functionType}.
	 * @param ctx the parse tree
	 */
	void exitFunctionType(NovaParser.FunctionTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#tupleType}.
	 * @param ctx the parse tree
	 */
	void enterTupleType(NovaParser.TupleTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#tupleType}.
	 * @param ctx the parse tree
	 */
	void exitTupleType(NovaParser.TupleTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#arrayType}.
	 * @param ctx the parse tree
	 */
	void enterArrayType(NovaParser.ArrayTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#arrayType}.
	 * @param ctx the parse tree
	 */
	void exitArrayType(NovaParser.ArrayTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#referenceType}.
	 * @param ctx the parse tree
	 */
	void enterReferenceType(NovaParser.ReferenceTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#referenceType}.
	 * @param ctx the parse tree
	 */
	void exitReferenceType(NovaParser.ReferenceTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#ownershipType}.
	 * @param ctx the parse tree
	 */
	void enterOwnershipType(NovaParser.OwnershipTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#ownershipType}.
	 * @param ctx the parse tree
	 */
	void exitOwnershipType(NovaParser.OwnershipTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#typeParameterList}.
	 * @param ctx the parse tree
	 */
	void enterTypeParameterList(NovaParser.TypeParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#typeParameterList}.
	 * @param ctx the parse tree
	 */
	void exitTypeParameterList(NovaParser.TypeParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#typeParameter}.
	 * @param ctx the parse tree
	 */
	void enterTypeParameter(NovaParser.TypeParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#typeParameter}.
	 * @param ctx the parse tree
	 */
	void exitTypeParameter(NovaParser.TypeParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#constraintList}.
	 * @param ctx the parse tree
	 */
	void enterConstraintList(NovaParser.ConstraintListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#constraintList}.
	 * @param ctx the parse tree
	 */
	void exitConstraintList(NovaParser.ConstraintListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#constraint}.
	 * @param ctx the parse tree
	 */
	void enterConstraint(NovaParser.ConstraintContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#constraint}.
	 * @param ctx the parse tree
	 */
	void exitConstraint(NovaParser.ConstraintContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#identifierList}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierList(NovaParser.IdentifierListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#identifierList}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierList(NovaParser.IdentifierListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#lifetime}.
	 * @param ctx the parse tree
	 */
	void enterLifetime(NovaParser.LifetimeContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#lifetime}.
	 * @param ctx the parse tree
	 */
	void exitLifetime(NovaParser.LifetimeContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(NovaParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(NovaParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#assignmentExpression}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentExpression(NovaParser.AssignmentExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#assignmentExpression}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentExpression(NovaParser.AssignmentExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#compoundAssignmentOperator}.
	 * @param ctx the parse tree
	 */
	void enterCompoundAssignmentOperator(NovaParser.CompoundAssignmentOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#compoundAssignmentOperator}.
	 * @param ctx the parse tree
	 */
	void exitCompoundAssignmentOperator(NovaParser.CompoundAssignmentOperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#logicalExpression}.
	 * @param ctx the parse tree
	 */
	void enterLogicalExpression(NovaParser.LogicalExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#logicalExpression}.
	 * @param ctx the parse tree
	 */
	void exitLogicalExpression(NovaParser.LogicalExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#comparisonExpression}.
	 * @param ctx the parse tree
	 */
	void enterComparisonExpression(NovaParser.ComparisonExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#comparisonExpression}.
	 * @param ctx the parse tree
	 */
	void exitComparisonExpression(NovaParser.ComparisonExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#bitwiseExpression}.
	 * @param ctx the parse tree
	 */
	void enterBitwiseExpression(NovaParser.BitwiseExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#bitwiseExpression}.
	 * @param ctx the parse tree
	 */
	void exitBitwiseExpression(NovaParser.BitwiseExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#arithmeticExpression}.
	 * @param ctx the parse tree
	 */
	void enterArithmeticExpression(NovaParser.ArithmeticExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#arithmeticExpression}.
	 * @param ctx the parse tree
	 */
	void exitArithmeticExpression(NovaParser.ArithmeticExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#termExpression}.
	 * @param ctx the parse tree
	 */
	void enterTermExpression(NovaParser.TermExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#termExpression}.
	 * @param ctx the parse tree
	 */
	void exitTermExpression(NovaParser.TermExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#powerExpression}.
	 * @param ctx the parse tree
	 */
	void enterPowerExpression(NovaParser.PowerExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#powerExpression}.
	 * @param ctx the parse tree
	 */
	void exitPowerExpression(NovaParser.PowerExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExpression(NovaParser.UnaryExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExpression(NovaParser.UnaryExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression(NovaParser.PostfixExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression(NovaParser.PostfixExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#primaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterPrimaryExpression(NovaParser.PrimaryExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#primaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitPrimaryExpression(NovaParser.PrimaryExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#parenthesizedExpression}.
	 * @param ctx the parse tree
	 */
	void enterParenthesizedExpression(NovaParser.ParenthesizedExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#parenthesizedExpression}.
	 * @param ctx the parse tree
	 */
	void exitParenthesizedExpression(NovaParser.ParenthesizedExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#literalExpression}.
	 * @param ctx the parse tree
	 */
	void enterLiteralExpression(NovaParser.LiteralExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#literalExpression}.
	 * @param ctx the parse tree
	 */
	void exitLiteralExpression(NovaParser.LiteralExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#integerLiteral}.
	 * @param ctx the parse tree
	 */
	void enterIntegerLiteral(NovaParser.IntegerLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#integerLiteral}.
	 * @param ctx the parse tree
	 */
	void exitIntegerLiteral(NovaParser.IntegerLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#floatLiteral}.
	 * @param ctx the parse tree
	 */
	void enterFloatLiteral(NovaParser.FloatLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#floatLiteral}.
	 * @param ctx the parse tree
	 */
	void exitFloatLiteral(NovaParser.FloatLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#booleanLiteral}.
	 * @param ctx the parse tree
	 */
	void enterBooleanLiteral(NovaParser.BooleanLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#booleanLiteral}.
	 * @param ctx the parse tree
	 */
	void exitBooleanLiteral(NovaParser.BooleanLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#characterLiteral}.
	 * @param ctx the parse tree
	 */
	void enterCharacterLiteral(NovaParser.CharacterLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#characterLiteral}.
	 * @param ctx the parse tree
	 */
	void exitCharacterLiteral(NovaParser.CharacterLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void enterStringLiteral(NovaParser.StringLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void exitStringLiteral(NovaParser.StringLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#nullLiteral}.
	 * @param ctx the parse tree
	 */
	void enterNullLiteral(NovaParser.NullLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#nullLiteral}.
	 * @param ctx the parse tree
	 */
	void exitNullLiteral(NovaParser.NullLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#identifierExpression}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierExpression(NovaParser.IdentifierExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#identifierExpression}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierExpression(NovaParser.IdentifierExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#blockExpression}.
	 * @param ctx the parse tree
	 */
	void enterBlockExpression(NovaParser.BlockExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#blockExpression}.
	 * @param ctx the parse tree
	 */
	void exitBlockExpression(NovaParser.BlockExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(NovaParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(NovaParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(NovaParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(NovaParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#declarationStatement}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationStatement(NovaParser.DeclarationStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#declarationStatement}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationStatement(NovaParser.DeclarationStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclaration(NovaParser.VariableDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclaration(NovaParser.VariableDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#pattern}.
	 * @param ctx the parse tree
	 */
	void enterPattern(NovaParser.PatternContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#pattern}.
	 * @param ctx the parse tree
	 */
	void exitPattern(NovaParser.PatternContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#identifierPattern}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierPattern(NovaParser.IdentifierPatternContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#identifierPattern}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierPattern(NovaParser.IdentifierPatternContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#tuplePattern}.
	 * @param ctx the parse tree
	 */
	void enterTuplePattern(NovaParser.TuplePatternContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#tuplePattern}.
	 * @param ctx the parse tree
	 */
	void exitTuplePattern(NovaParser.TuplePatternContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#structPattern}.
	 * @param ctx the parse tree
	 */
	void enterStructPattern(NovaParser.StructPatternContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#structPattern}.
	 * @param ctx the parse tree
	 */
	void exitStructPattern(NovaParser.StructPatternContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#wildcardPattern}.
	 * @param ctx the parse tree
	 */
	void enterWildcardPattern(NovaParser.WildcardPatternContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#wildcardPattern}.
	 * @param ctx the parse tree
	 */
	void exitWildcardPattern(NovaParser.WildcardPatternContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStatement(NovaParser.ExpressionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStatement(NovaParser.ExpressionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#assignmentStatement}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentStatement(NovaParser.AssignmentStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#assignmentStatement}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentStatement(NovaParser.AssignmentStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#lambdaExpression}.
	 * @param ctx the parse tree
	 */
	void enterLambdaExpression(NovaParser.LambdaExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#lambdaExpression}.
	 * @param ctx the parse tree
	 */
	void exitLambdaExpression(NovaParser.LambdaExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#tupleExpression}.
	 * @param ctx the parse tree
	 */
	void enterTupleExpression(NovaParser.TupleExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#tupleExpression}.
	 * @param ctx the parse tree
	 */
	void exitTupleExpression(NovaParser.TupleExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#arrayExpression}.
	 * @param ctx the parse tree
	 */
	void enterArrayExpression(NovaParser.ArrayExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#arrayExpression}.
	 * @param ctx the parse tree
	 */
	void exitArrayExpression(NovaParser.ArrayExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#structExpression}.
	 * @param ctx the parse tree
	 */
	void enterStructExpression(NovaParser.StructExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#structExpression}.
	 * @param ctx the parse tree
	 */
	void exitStructExpression(NovaParser.StructExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#fieldInitializer}.
	 * @param ctx the parse tree
	 */
	void enterFieldInitializer(NovaParser.FieldInitializerContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#fieldInitializer}.
	 * @param ctx the parse tree
	 */
	void exitFieldInitializer(NovaParser.FieldInitializerContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#enumVariantExpression}.
	 * @param ctx the parse tree
	 */
	void enterEnumVariantExpression(NovaParser.EnumVariantExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#enumVariantExpression}.
	 * @param ctx the parse tree
	 */
	void exitEnumVariantExpression(NovaParser.EnumVariantExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#callExpression}.
	 * @param ctx the parse tree
	 */
	void enterCallExpression(NovaParser.CallExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#callExpression}.
	 * @param ctx the parse tree
	 */
	void exitCallExpression(NovaParser.CallExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void enterArgumentList(NovaParser.ArgumentListContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#argumentList}.
	 * @param ctx the parse tree
	 */
	void exitArgumentList(NovaParser.ArgumentListContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#fieldExpression}.
	 * @param ctx the parse tree
	 */
	void enterFieldExpression(NovaParser.FieldExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#fieldExpression}.
	 * @param ctx the parse tree
	 */
	void exitFieldExpression(NovaParser.FieldExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#compoundAssignmentExpression}.
	 * @param ctx the parse tree
	 */
	void enterCompoundAssignmentExpression(NovaParser.CompoundAssignmentExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#compoundAssignmentExpression}.
	 * @param ctx the parse tree
	 */
	void exitCompoundAssignmentExpression(NovaParser.CompoundAssignmentExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#ifExpression}.
	 * @param ctx the parse tree
	 */
	void enterIfExpression(NovaParser.IfExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#ifExpression}.
	 * @param ctx the parse tree
	 */
	void exitIfExpression(NovaParser.IfExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void enterIfStatement(NovaParser.IfStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#ifStatement}.
	 * @param ctx the parse tree
	 */
	void exitIfStatement(NovaParser.IfStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(NovaParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(NovaParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#letCondition}.
	 * @param ctx the parse tree
	 */
	void enterLetCondition(NovaParser.LetConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#letCondition}.
	 * @param ctx the parse tree
	 */
	void exitLetCondition(NovaParser.LetConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#matchExpression}.
	 * @param ctx the parse tree
	 */
	void enterMatchExpression(NovaParser.MatchExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#matchExpression}.
	 * @param ctx the parse tree
	 */
	void exitMatchExpression(NovaParser.MatchExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#matchStatement}.
	 * @param ctx the parse tree
	 */
	void enterMatchStatement(NovaParser.MatchStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#matchStatement}.
	 * @param ctx the parse tree
	 */
	void exitMatchStatement(NovaParser.MatchStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#matchArm}.
	 * @param ctx the parse tree
	 */
	void enterMatchArm(NovaParser.MatchArmContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#matchArm}.
	 * @param ctx the parse tree
	 */
	void exitMatchArm(NovaParser.MatchArmContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#loopExpression}.
	 * @param ctx the parse tree
	 */
	void enterLoopExpression(NovaParser.LoopExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#loopExpression}.
	 * @param ctx the parse tree
	 */
	void exitLoopExpression(NovaParser.LoopExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#loopStatement}.
	 * @param ctx the parse tree
	 */
	void enterLoopStatement(NovaParser.LoopStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#loopStatement}.
	 * @param ctx the parse tree
	 */
	void exitLoopStatement(NovaParser.LoopStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#loopBlock}.
	 * @param ctx the parse tree
	 */
	void enterLoopBlock(NovaParser.LoopBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#loopBlock}.
	 * @param ctx the parse tree
	 */
	void exitLoopBlock(NovaParser.LoopBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#whileBlock}.
	 * @param ctx the parse tree
	 */
	void enterWhileBlock(NovaParser.WhileBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#whileBlock}.
	 * @param ctx the parse tree
	 */
	void exitWhileBlock(NovaParser.WhileBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#forBlock}.
	 * @param ctx the parse tree
	 */
	void enterForBlock(NovaParser.ForBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#forBlock}.
	 * @param ctx the parse tree
	 */
	void exitForBlock(NovaParser.ForBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void enterJumpStatement(NovaParser.JumpStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void exitJumpStatement(NovaParser.JumpStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#breakExpression}.
	 * @param ctx the parse tree
	 */
	void enterBreakExpression(NovaParser.BreakExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#breakExpression}.
	 * @param ctx the parse tree
	 */
	void exitBreakExpression(NovaParser.BreakExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#continueExpression}.
	 * @param ctx the parse tree
	 */
	void enterContinueExpression(NovaParser.ContinueExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#continueExpression}.
	 * @param ctx the parse tree
	 */
	void exitContinueExpression(NovaParser.ContinueExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#returnExpression}.
	 * @param ctx the parse tree
	 */
	void enterReturnExpression(NovaParser.ReturnExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#returnExpression}.
	 * @param ctx the parse tree
	 */
	void exitReturnExpression(NovaParser.ReturnExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#awaitExpression}.
	 * @param ctx the parse tree
	 */
	void enterAwaitExpression(NovaParser.AwaitExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#awaitExpression}.
	 * @param ctx the parse tree
	 */
	void exitAwaitExpression(NovaParser.AwaitExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#unsafeExpression}.
	 * @param ctx the parse tree
	 */
	void enterUnsafeExpression(NovaParser.UnsafeExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#unsafeExpression}.
	 * @param ctx the parse tree
	 */
	void exitUnsafeExpression(NovaParser.UnsafeExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#visibility}.
	 * @param ctx the parse tree
	 */
	void enterVisibility(NovaParser.VisibilityContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#visibility}.
	 * @param ctx the parse tree
	 */
	void exitVisibility(NovaParser.VisibilityContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#qualifiedName}.
	 * @param ctx the parse tree
	 */
	void enterQualifiedName(NovaParser.QualifiedNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#qualifiedName}.
	 * @param ctx the parse tree
	 */
	void exitQualifiedName(NovaParser.QualifiedNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link NovaParser#identifier}.
	 * @param ctx the parse tree
	 */
	void enterIdentifier(NovaParser.IdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link NovaParser#identifier}.
	 * @param ctx the parse tree
	 */
	void exitIdentifier(NovaParser.IdentifierContext ctx);
}