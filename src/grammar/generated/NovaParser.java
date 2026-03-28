// Generated from Nova.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class NovaParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, T__33=34, T__34=35, T__35=36, T__36=37, T__37=38, 
		T__38=39, T__39=40, T__40=41, T__41=42, T__42=43, T__43=44, T__44=45, 
		T__45=46, T__46=47, T__47=48, T__48=49, T__49=50, T__50=51, T__51=52, 
		T__52=53, T__53=54, T__54=55, T__55=56, T__56=57, T__57=58, T__58=59, 
		T__59=60, T__60=61, T__61=62, T__62=63, T__63=64, T__64=65, T__65=66, 
		T__66=67, T__67=68, T__68=69, T__69=70, T__70=71, T__71=72, T__72=73, 
		T__73=74, T__74=75, T__75=76, T__76=77, T__77=78, T__78=79, T__79=80, 
		T__80=81, T__81=82, T__82=83, T__83=84, T__84=85, T__85=86, T__86=87, 
		T__87=88, T__88=89, T__89=90, T__90=91, T__91=92, T__92=93, T__93=94, 
		T__94=95, T__95=96, T__96=97, T__97=98, T__98=99, T__99=100, T__100=101, 
		Keyword=102, Identifier=103, DecimalLiteral=104, HexLiteral=105, OctalLiteral=106, 
		BinaryLiteral=107, DecimalFloatLiteral=108, StringLiteral=109, EscapeSequence=110, 
		Comment=111, BlockComment=112, Whitespace=113;
	public static final int
		RULE_sourceFile = 0, RULE_moduleDeclaration = 1, RULE_importDeclaration = 2, 
		RULE_topLevelDeclaration = 3, RULE_functionDeclaration = 4, RULE_functionParameters = 5, 
		RULE_parameterList = 6, RULE_parameter = 7, RULE_returnType = 8, RULE_structDeclaration = 9, 
		RULE_structField = 10, RULE_traitDeclaration = 11, RULE_traitMethod = 12, 
		RULE_functionSignature = 13, RULE_implDeclaration = 14, RULE_implMember = 15, 
		RULE_enumDeclaration = 16, RULE_enumVariant = 17, RULE_typeAliasDeclaration = 18, 
		RULE_constantDeclaration = 19, RULE_externDeclaration = 20, RULE_externFunction = 21, 
		RULE_type_ = 22, RULE_primitiveType = 23, RULE_typeReference = 24, RULE_genericType = 25, 
		RULE_typeList = 26, RULE_functionType = 27, RULE_tupleType = 28, RULE_arrayType = 29, 
		RULE_referenceType = 30, RULE_ownershipType = 31, RULE_typeParameterList = 32, 
		RULE_typeParameter = 33, RULE_constraintList = 34, RULE_constraint = 35, 
		RULE_identifierList = 36, RULE_lifetime = 37, RULE_expression = 38, RULE_assignmentExpression = 39, 
		RULE_compoundAssignmentOperator = 40, RULE_logicalExpression = 41, RULE_comparisonExpression = 42, 
		RULE_bitwiseExpression = 43, RULE_arithmeticExpression = 44, RULE_termExpression = 45, 
		RULE_powerExpression = 46, RULE_unaryExpression = 47, RULE_postfixExpression = 48, 
		RULE_primaryExpression = 49, RULE_parenthesizedExpression = 50, RULE_literalExpression = 51, 
		RULE_integerLiteral = 52, RULE_floatLiteral = 53, RULE_booleanLiteral = 54, 
		RULE_characterLiteral = 55, RULE_stringLiteral = 56, RULE_nullLiteral = 57, 
		RULE_identifierExpression = 58, RULE_blockExpression = 59, RULE_block = 60, 
		RULE_statement = 61, RULE_declarationStatement = 62, RULE_variableDeclaration = 63, 
		RULE_pattern = 64, RULE_identifierPattern = 65, RULE_tuplePattern = 66, 
		RULE_structPattern = 67, RULE_wildcardPattern = 68, RULE_expressionStatement = 69, 
		RULE_assignmentStatement = 70, RULE_lambdaExpression = 71, RULE_tupleExpression = 72, 
		RULE_arrayExpression = 73, RULE_structExpression = 74, RULE_fieldInitializer = 75, 
		RULE_enumVariantExpression = 76, RULE_callExpression = 77, RULE_argumentList = 78, 
		RULE_fieldExpression = 79, RULE_compoundAssignmentExpression = 80, RULE_ifExpression = 81, 
		RULE_ifStatement = 82, RULE_condition = 83, RULE_letCondition = 84, RULE_matchExpression = 85, 
		RULE_matchStatement = 86, RULE_matchArm = 87, RULE_loopExpression = 88, 
		RULE_loopStatement = 89, RULE_loopBlock = 90, RULE_whileBlock = 91, RULE_forBlock = 92, 
		RULE_jumpStatement = 93, RULE_breakExpression = 94, RULE_continueExpression = 95, 
		RULE_returnExpression = 96, RULE_awaitExpression = 97, RULE_unsafeExpression = 98, 
		RULE_visibility = 99, RULE_qualifiedName = 100, RULE_identifier = 101;
	private static String[] makeRuleNames() {
		return new String[] {
			"sourceFile", "moduleDeclaration", "importDeclaration", "topLevelDeclaration", 
			"functionDeclaration", "functionParameters", "parameterList", "parameter", 
			"returnType", "structDeclaration", "structField", "traitDeclaration", 
			"traitMethod", "functionSignature", "implDeclaration", "implMember", 
			"enumDeclaration", "enumVariant", "typeAliasDeclaration", "constantDeclaration", 
			"externDeclaration", "externFunction", "type_", "primitiveType", "typeReference", 
			"genericType", "typeList", "functionType", "tupleType", "arrayType", 
			"referenceType", "ownershipType", "typeParameterList", "typeParameter", 
			"constraintList", "constraint", "identifierList", "lifetime", "expression", 
			"assignmentExpression", "compoundAssignmentOperator", "logicalExpression", 
			"comparisonExpression", "bitwiseExpression", "arithmeticExpression", 
			"termExpression", "powerExpression", "unaryExpression", "postfixExpression", 
			"primaryExpression", "parenthesizedExpression", "literalExpression", 
			"integerLiteral", "floatLiteral", "booleanLiteral", "characterLiteral", 
			"stringLiteral", "nullLiteral", "identifierExpression", "blockExpression", 
			"block", "statement", "declarationStatement", "variableDeclaration", 
			"pattern", "identifierPattern", "tuplePattern", "structPattern", "wildcardPattern", 
			"expressionStatement", "assignmentStatement", "lambdaExpression", "tupleExpression", 
			"arrayExpression", "structExpression", "fieldInitializer", "enumVariantExpression", 
			"callExpression", "argumentList", "fieldExpression", "compoundAssignmentExpression", 
			"ifExpression", "ifStatement", "condition", "letCondition", "matchExpression", 
			"matchStatement", "matchArm", "loopExpression", "loopStatement", "loopBlock", 
			"whileBlock", "forBlock", "jumpStatement", "breakExpression", "continueExpression", 
			"returnExpression", "awaitExpression", "unsafeExpression", "visibility", 
			"qualifiedName", "identifier"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'module'", "';'", "'import'", "'as'", "'use'", "'func'", "'where'", 
			"'async'", "'('", "')'", "','", "':'", "'='", "'->'", "'struct'", "'{'", 
			"'}'", "'trait'", "'impl'", "'for'", "'enum'", "'type'", "'const'", "'extern'", 
			"'C'", "'i8'", "'i16'", "'i32'", "'i64'", "'isize'", "'u8'", "'u16'", 
			"'u32'", "'u64'", "'usize'", "'f32'", "'f64'", "'bool'", "'char'", "'str'", 
			"'void'", "'<'", "'>'", "'fn'", "'['", "']'", "'&'", "'mut'", "'?'", 
			"'''", "'+='", "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", 
			"'<<='", "'>>='", "'&&'", "'||'", "'=='", "'!='", "'<='", "'>='", "'|'", 
			"'^'", "'<<'", "'>>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'**'", "'!'", 
			"'.'", "'..'", "'...'", "'true'", "'false'", "'null'", "'let'", "'_'", 
			"'if'", "'else'", "'match'", "'=>'", "'loop'", "'while'", "'in'", "'break'", 
			"'continue'", "'return'", "'await'", "'unsafe'", "'pub'", "'crate'", 
			"'super'", "'::'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "Keyword", "Identifier", "DecimalLiteral", 
			"HexLiteral", "OctalLiteral", "BinaryLiteral", "DecimalFloatLiteral", 
			"StringLiteral", "EscapeSequence", "Comment", "BlockComment", "Whitespace"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Nova.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public NovaParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SourceFileContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(NovaParser.EOF, 0); }
		public ModuleDeclarationContext moduleDeclaration() {
			return getRuleContext(ModuleDeclarationContext.class,0);
		}
		public List<ImportDeclarationContext> importDeclaration() {
			return getRuleContexts(ImportDeclarationContext.class);
		}
		public ImportDeclarationContext importDeclaration(int i) {
			return getRuleContext(ImportDeclarationContext.class,i);
		}
		public List<TopLevelDeclarationContext> topLevelDeclaration() {
			return getRuleContexts(TopLevelDeclarationContext.class);
		}
		public TopLevelDeclarationContext topLevelDeclaration(int i) {
			return getRuleContext(TopLevelDeclarationContext.class,i);
		}
		public SourceFileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sourceFile; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterSourceFile(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitSourceFile(this);
		}
	}

	public final SourceFileContext sourceFile() throws RecognitionException {
		SourceFileContext _localctx = new SourceFileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_sourceFile);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(205);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(204);
				moduleDeclaration();
				}
			}

			setState(210);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2 || _la==T__4) {
				{
				{
				setState(207);
				importDeclaration();
				}
				}
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(216);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 32276800L) != 0)) {
				{
				{
				setState(213);
				topLevelDeclaration();
				}
				}
				setState(218);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(219);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ModuleDeclarationContext extends ParserRuleContext {
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public ModuleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterModuleDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitModuleDeclaration(this);
		}
	}

	public final ModuleDeclarationContext moduleDeclaration() throws RecognitionException {
		ModuleDeclarationContext _localctx = new ModuleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(221);
			match(T__0);
			setState(222);
			qualifiedName();
			setState(223);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImportDeclarationContext extends ParserRuleContext {
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ImportDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterImportDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitImportDeclaration(this);
		}
	}

	public final ImportDeclarationContext importDeclaration() throws RecognitionException {
		ImportDeclarationContext _localctx = new ImportDeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_importDeclaration);
		int _la;
		try {
			setState(237);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				enterOuterAlt(_localctx, 1);
				{
				setState(225);
				match(T__2);
				setState(226);
				qualifiedName();
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__3) {
					{
					setState(227);
					match(T__3);
					setState(228);
					identifier();
					}
				}

				setState(231);
				match(T__1);
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 2);
				{
				setState(233);
				match(T__4);
				setState(234);
				qualifiedName();
				setState(235);
				match(T__1);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TopLevelDeclarationContext extends ParserRuleContext {
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public StructDeclarationContext structDeclaration() {
			return getRuleContext(StructDeclarationContext.class,0);
		}
		public TraitDeclarationContext traitDeclaration() {
			return getRuleContext(TraitDeclarationContext.class,0);
		}
		public ImplDeclarationContext implDeclaration() {
			return getRuleContext(ImplDeclarationContext.class,0);
		}
		public EnumDeclarationContext enumDeclaration() {
			return getRuleContext(EnumDeclarationContext.class,0);
		}
		public TypeAliasDeclarationContext typeAliasDeclaration() {
			return getRuleContext(TypeAliasDeclarationContext.class,0);
		}
		public ConstantDeclarationContext constantDeclaration() {
			return getRuleContext(ConstantDeclarationContext.class,0);
		}
		public ExternDeclarationContext externDeclaration() {
			return getRuleContext(ExternDeclarationContext.class,0);
		}
		public TopLevelDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_topLevelDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTopLevelDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTopLevelDeclaration(this);
		}
	}

	public final TopLevelDeclarationContext topLevelDeclaration() throws RecognitionException {
		TopLevelDeclarationContext _localctx = new TopLevelDeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_topLevelDeclaration);
		try {
			setState(247);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(239);
				functionDeclaration();
				}
				break;
			case T__14:
				enterOuterAlt(_localctx, 2);
				{
				setState(240);
				structDeclaration();
				}
				break;
			case T__17:
				enterOuterAlt(_localctx, 3);
				{
				setState(241);
				traitDeclaration();
				}
				break;
			case T__18:
				enterOuterAlt(_localctx, 4);
				{
				setState(242);
				implDeclaration();
				}
				break;
			case T__20:
				enterOuterAlt(_localctx, 5);
				{
				setState(243);
				enumDeclaration();
				}
				break;
			case T__21:
				enterOuterAlt(_localctx, 6);
				{
				setState(244);
				typeAliasDeclaration();
				}
				break;
			case T__22:
				enterOuterAlt(_localctx, 7);
				{
				setState(245);
				constantDeclaration();
				}
				break;
			case T__23:
				enterOuterAlt(_localctx, 8);
				{
				setState(246);
				externDeclaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public FunctionParametersContext functionParameters() {
			return getRuleContext(FunctionParametersContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public ReturnTypeContext returnType() {
			return getRuleContext(ReturnTypeContext.class,0);
		}
		public ConstraintListContext constraintList() {
			return getRuleContext(ConstraintListContext.class,0);
		}
		public FunctionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFunctionDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFunctionDeclaration(this);
		}
	}

	public final FunctionDeclarationContext functionDeclaration() throws RecognitionException {
		FunctionDeclarationContext _localctx = new FunctionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_functionDeclaration);
		int _la;
		try {
			setState(280);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
				enterOuterAlt(_localctx, 1);
				{
				setState(249);
				match(T__5);
				setState(250);
				identifier();
				setState(252);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__41) {
					{
					setState(251);
					typeParameterList();
					}
				}

				setState(254);
				functionParameters();
				setState(256);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__13) {
					{
					setState(255);
					returnType();
					}
				}

				setState(260);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__6) {
					{
					setState(258);
					match(T__6);
					setState(259);
					constraintList();
					}
				}

				setState(262);
				block();
				}
				break;
			case T__7:
				enterOuterAlt(_localctx, 2);
				{
				setState(264);
				match(T__7);
				setState(265);
				match(T__5);
				setState(266);
				identifier();
				setState(268);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__41) {
					{
					setState(267);
					typeParameterList();
					}
				}

				setState(270);
				functionParameters();
				setState(272);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__13) {
					{
					setState(271);
					returnType();
					}
				}

				setState(276);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__6) {
					{
					setState(274);
					match(T__6);
					setState(275);
					constraintList();
					}
				}

				setState(278);
				block();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionParametersContext extends ParserRuleContext {
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public FunctionParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParameters; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFunctionParameters(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFunctionParameters(this);
		}
	}

	public final FunctionParametersContext functionParameters() throws RecognitionException {
		FunctionParametersContext _localctx = new FunctionParametersContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_functionParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(282);
			match(T__8);
			setState(284);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Keyword || _la==Identifier) {
				{
				setState(283);
				parameterList();
				}
			}

			setState(286);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterListContext extends ParserRuleContext {
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public ParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterParameterList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitParameterList(this);
		}
	}

	public final ParameterListContext parameterList() throws RecognitionException {
		ParameterListContext _localctx = new ParameterListContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_parameterList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			parameter();
			setState(293);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(289);
				match(T__10);
				setState(290);
				parameter();
				}
				}
				setState(295);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterParameter(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitParameter(this);
		}
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_parameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(296);
			identifier();
			setState(297);
			match(T__11);
			setState(298);
			type_();
			setState(301);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__12) {
				{
				setState(299);
				match(T__12);
				setState(300);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReturnTypeContext extends ParserRuleContext {
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ReturnTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterReturnType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitReturnType(this);
		}
	}

	public final ReturnTypeContext returnType() throws RecognitionException {
		ReturnTypeContext _localctx = new ReturnTypeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_returnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(303);
			match(T__13);
			setState(304);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StructDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public ConstraintListContext constraintList() {
			return getRuleContext(ConstraintListContext.class,0);
		}
		public List<StructFieldContext> structField() {
			return getRuleContexts(StructFieldContext.class);
		}
		public StructFieldContext structField(int i) {
			return getRuleContext(StructFieldContext.class,i);
		}
		public StructDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterStructDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitStructDeclaration(this);
		}
	}

	public final StructDeclarationContext structDeclaration() throws RecognitionException {
		StructDeclarationContext _localctx = new StructDeclarationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_structDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(306);
			match(T__14);
			setState(307);
			identifier();
			setState(309);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__41) {
				{
				setState(308);
				typeParameterList();
				}
			}

			setState(313);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6) {
				{
				setState(311);
				match(T__6);
				setState(312);
				constraintList();
				}
			}

			setState(315);
			match(T__15);
			setState(319);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 98)) & ~0x3f) == 0 && ((1L << (_la - 98)) & 49L) != 0)) {
				{
				{
				setState(316);
				structField();
				}
				}
				setState(321);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(322);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StructFieldContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public VisibilityContext visibility() {
			return getRuleContext(VisibilityContext.class,0);
		}
		public StructFieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structField; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterStructField(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitStructField(this);
		}
	}

	public final StructFieldContext structField() throws RecognitionException {
		StructFieldContext _localctx = new StructFieldContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_structField);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(325);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__97) {
				{
				setState(324);
				visibility();
				}
			}

			setState(327);
			identifier();
			setState(328);
			match(T__11);
			setState(329);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TraitDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public List<TraitMethodContext> traitMethod() {
			return getRuleContexts(TraitMethodContext.class);
		}
		public TraitMethodContext traitMethod(int i) {
			return getRuleContext(TraitMethodContext.class,i);
		}
		public TraitDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_traitDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTraitDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTraitDeclaration(this);
		}
	}

	public final TraitDeclarationContext traitDeclaration() throws RecognitionException {
		TraitDeclarationContext _localctx = new TraitDeclarationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_traitDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(331);
			match(T__17);
			setState(332);
			identifier();
			setState(334);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__41) {
				{
				setState(333);
				typeParameterList();
				}
			}

			setState(338);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__11) {
				{
				setState(336);
				match(T__11);
				setState(337);
				identifierList();
				}
			}

			setState(340);
			match(T__15);
			setState(344);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5 || _la==T__7 || _la==Keyword || _la==Identifier) {
				{
				{
				setState(341);
				traitMethod();
				}
				}
				setState(346);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(347);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TraitMethodContext extends ParserRuleContext {
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public FunctionSignatureContext functionSignature() {
			return getRuleContext(FunctionSignatureContext.class,0);
		}
		public TraitMethodContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_traitMethod; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTraitMethod(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTraitMethod(this);
		}
	}

	public final TraitMethodContext traitMethod() throws RecognitionException {
		TraitMethodContext _localctx = new TraitMethodContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_traitMethod);
		try {
			setState(351);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(349);
				functionDeclaration();
				}
				break;
			case Keyword:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(350);
				functionSignature();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionSignatureContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public FunctionParametersContext functionParameters() {
			return getRuleContext(FunctionParametersContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public ReturnTypeContext returnType() {
			return getRuleContext(ReturnTypeContext.class,0);
		}
		public FunctionSignatureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionSignature; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFunctionSignature(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFunctionSignature(this);
		}
	}

	public final FunctionSignatureContext functionSignature() throws RecognitionException {
		FunctionSignatureContext _localctx = new FunctionSignatureContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_functionSignature);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(353);
			identifier();
			setState(355);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__41) {
				{
				setState(354);
				typeParameterList();
				}
			}

			setState(357);
			functionParameters();
			setState(359);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__13) {
				{
				setState(358);
				returnType();
				}
			}

			setState(361);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImplDeclarationContext extends ParserRuleContext {
		public List<Type_Context> type_() {
			return getRuleContexts(Type_Context.class);
		}
		public Type_Context type_(int i) {
			return getRuleContext(Type_Context.class,i);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public List<ImplMemberContext> implMember() {
			return getRuleContexts(ImplMemberContext.class);
		}
		public ImplMemberContext implMember(int i) {
			return getRuleContext(ImplMemberContext.class,i);
		}
		public ImplDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_implDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterImplDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitImplDeclaration(this);
		}
	}

	public final ImplDeclarationContext implDeclaration() throws RecognitionException {
		ImplDeclarationContext _localctx = new ImplDeclarationContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_implDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(363);
			match(T__18);
			setState(365);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__41) {
				{
				setState(364);
				typeParameterList();
				}
			}

			setState(367);
			type_();
			setState(370);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__19) {
				{
				setState(368);
				match(T__19);
				setState(369);
				type_();
				}
			}

			setState(372);
			match(T__15);
			setState(376);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8388928L) != 0)) {
				{
				{
				setState(373);
				implMember();
				}
				}
				setState(378);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(379);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImplMemberContext extends ParserRuleContext {
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public ConstantDeclarationContext constantDeclaration() {
			return getRuleContext(ConstantDeclarationContext.class,0);
		}
		public ImplMemberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_implMember; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterImplMember(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitImplMember(this);
		}
	}

	public final ImplMemberContext implMember() throws RecognitionException {
		ImplMemberContext _localctx = new ImplMemberContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_implMember);
		try {
			setState(383);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__5:
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(381);
				functionDeclaration();
				}
				break;
			case T__22:
				enterOuterAlt(_localctx, 2);
				{
				setState(382);
				constantDeclaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public ConstraintListContext constraintList() {
			return getRuleContext(ConstraintListContext.class,0);
		}
		public List<EnumVariantContext> enumVariant() {
			return getRuleContexts(EnumVariantContext.class);
		}
		public EnumVariantContext enumVariant(int i) {
			return getRuleContext(EnumVariantContext.class,i);
		}
		public EnumDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterEnumDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitEnumDeclaration(this);
		}
	}

	public final EnumDeclarationContext enumDeclaration() throws RecognitionException {
		EnumDeclarationContext _localctx = new EnumDeclarationContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_enumDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(385);
			match(T__20);
			setState(386);
			identifier();
			setState(388);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__41) {
				{
				setState(387);
				typeParameterList();
				}
			}

			setState(392);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6) {
				{
				setState(390);
				match(T__6);
				setState(391);
				constraintList();
				}
			}

			setState(394);
			match(T__15);
			setState(398);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Keyword || _la==Identifier) {
				{
				{
				setState(395);
				enumVariant();
				}
				}
				setState(400);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(401);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumVariantContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeListContext typeList() {
			return getRuleContext(TypeListContext.class,0);
		}
		public EnumVariantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumVariant; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterEnumVariant(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitEnumVariant(this);
		}
	}

	public final EnumVariantContext enumVariant() throws RecognitionException {
		EnumVariantContext _localctx = new EnumVariantContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_enumVariant);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(403);
			identifier();
			setState(408);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__8) {
				{
				setState(404);
				match(T__8);
				setState(405);
				typeList();
				setState(406);
				match(T__9);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeAliasDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public TypeAliasDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeAliasDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTypeAliasDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTypeAliasDeclaration(this);
		}
	}

	public final TypeAliasDeclarationContext typeAliasDeclaration() throws RecognitionException {
		TypeAliasDeclarationContext _localctx = new TypeAliasDeclarationContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_typeAliasDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(410);
			match(T__21);
			setState(411);
			identifier();
			setState(413);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__41) {
				{
				setState(412);
				typeParameterList();
				}
			}

			setState(415);
			match(T__12);
			setState(416);
			type_();
			setState(417);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstantDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ConstantDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterConstantDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitConstantDeclaration(this);
		}
	}

	public final ConstantDeclarationContext constantDeclaration() throws RecognitionException {
		ConstantDeclarationContext _localctx = new ConstantDeclarationContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_constantDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(419);
			match(T__22);
			setState(420);
			identifier();
			setState(421);
			match(T__11);
			setState(422);
			type_();
			setState(423);
			match(T__12);
			setState(424);
			expression();
			setState(425);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public FunctionParametersContext functionParameters() {
			return getRuleContext(FunctionParametersContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public ReturnTypeContext returnType() {
			return getRuleContext(ReturnTypeContext.class,0);
		}
		public List<ExternFunctionContext> externFunction() {
			return getRuleContexts(ExternFunctionContext.class);
		}
		public ExternFunctionContext externFunction(int i) {
			return getRuleContext(ExternFunctionContext.class,i);
		}
		public ExternDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterExternDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitExternDeclaration(this);
		}
	}

	public final ExternDeclarationContext externDeclaration() throws RecognitionException {
		ExternDeclarationContext _localctx = new ExternDeclarationContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_externDeclaration);
		int _la;
		try {
			setState(449);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(427);
				match(T__23);
				setState(428);
				match(T__5);
				setState(429);
				identifier();
				setState(431);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__41) {
					{
					setState(430);
					typeParameterList();
					}
				}

				setState(433);
				functionParameters();
				setState(435);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__13) {
					{
					setState(434);
					returnType();
					}
				}

				setState(437);
				match(T__1);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(439);
				match(T__23);
				setState(440);
				match(T__24);
				setState(441);
				match(T__15);
				setState(445);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Keyword || _la==Identifier) {
					{
					{
					setState(442);
					externFunction();
					}
					}
					setState(447);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(448);
				match(T__16);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternFunctionContext extends ParserRuleContext {
		public FunctionSignatureContext functionSignature() {
			return getRuleContext(FunctionSignatureContext.class,0);
		}
		public ExternFunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externFunction; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterExternFunction(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitExternFunction(this);
		}
	}

	public final ExternFunctionContext externFunction() throws RecognitionException {
		ExternFunctionContext _localctx = new ExternFunctionContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_externFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(451);
			functionSignature();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Type_Context extends ParserRuleContext {
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public TypeReferenceContext typeReference() {
			return getRuleContext(TypeReferenceContext.class,0);
		}
		public GenericTypeContext genericType() {
			return getRuleContext(GenericTypeContext.class,0);
		}
		public FunctionTypeContext functionType() {
			return getRuleContext(FunctionTypeContext.class,0);
		}
		public TupleTypeContext tupleType() {
			return getRuleContext(TupleTypeContext.class,0);
		}
		public ArrayTypeContext arrayType() {
			return getRuleContext(ArrayTypeContext.class,0);
		}
		public ReferenceTypeContext referenceType() {
			return getRuleContext(ReferenceTypeContext.class,0);
		}
		public OwnershipTypeContext ownershipType() {
			return getRuleContext(OwnershipTypeContext.class,0);
		}
		public Type_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterType_(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitType_(this);
		}
	}

	public final Type_Context type_() throws RecognitionException {
		Type_Context _localctx = new Type_Context(_ctx, getState());
		enterRule(_localctx, 44, RULE_type_);
		try {
			setState(461);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(453);
				primitiveType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(454);
				typeReference();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(455);
				genericType();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(456);
				functionType();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(457);
				tupleType();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(458);
				arrayType();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(459);
				referenceType();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(460);
				ownershipType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrimitiveTypeContext extends ParserRuleContext {
		public PrimitiveTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterPrimitiveType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitPrimitiveType(this);
		}
	}

	public final PrimitiveTypeContext primitiveType() throws RecognitionException {
		PrimitiveTypeContext _localctx = new PrimitiveTypeContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_primitiveType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(463);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 4397983596544L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeReferenceContext extends ParserRuleContext {
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public TypeListContext typeList() {
			return getRuleContext(TypeListContext.class,0);
		}
		public TypeReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeReference; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTypeReference(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTypeReference(this);
		}
	}

	public final TypeReferenceContext typeReference() throws RecognitionException {
		TypeReferenceContext _localctx = new TypeReferenceContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_typeReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(465);
			qualifiedName();
			setState(470);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				{
				setState(466);
				match(T__41);
				setState(467);
				typeList();
				setState(468);
				match(T__42);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GenericTypeContext extends ParserRuleContext {
		public TypeReferenceContext typeReference() {
			return getRuleContext(TypeReferenceContext.class,0);
		}
		public GenericTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_genericType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterGenericType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitGenericType(this);
		}
	}

	public final GenericTypeContext genericType() throws RecognitionException {
		GenericTypeContext _localctx = new GenericTypeContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_genericType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(472);
			typeReference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeListContext extends ParserRuleContext {
		public List<Type_Context> type_() {
			return getRuleContexts(Type_Context.class);
		}
		public Type_Context type_(int i) {
			return getRuleContext(Type_Context.class,i);
		}
		public TypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTypeList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTypeList(this);
		}
	}

	public final TypeListContext typeList() throws RecognitionException {
		TypeListContext _localctx = new TypeListContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_typeList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(474);
			type_();
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(475);
				match(T__10);
				setState(476);
				type_();
				}
				}
				setState(481);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionTypeContext extends ParserRuleContext {
		public TypeListContext typeList() {
			return getRuleContext(TypeListContext.class,0);
		}
		public ReturnTypeContext returnType() {
			return getRuleContext(ReturnTypeContext.class,0);
		}
		public FunctionTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFunctionType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFunctionType(this);
		}
	}

	public final FunctionTypeContext functionType() throws RecognitionException {
		FunctionTypeContext _localctx = new FunctionTypeContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_functionType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(482);
			match(T__43);
			setState(483);
			match(T__8);
			setState(485);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 197912030085632L) != 0) || _la==Keyword || _la==Identifier) {
				{
				setState(484);
				typeList();
				}
			}

			setState(487);
			match(T__9);
			setState(489);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				{
				setState(488);
				returnType();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TupleTypeContext extends ParserRuleContext {
		public List<Type_Context> type_() {
			return getRuleContexts(Type_Context.class);
		}
		public Type_Context type_(int i) {
			return getRuleContext(Type_Context.class,i);
		}
		public TupleTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tupleType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTupleType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTupleType(this);
		}
	}

	public final TupleTypeContext tupleType() throws RecognitionException {
		TupleTypeContext _localctx = new TupleTypeContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_tupleType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(491);
			match(T__8);
			setState(499);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 197912030085632L) != 0) || _la==Keyword || _la==Identifier) {
				{
				setState(492);
				type_();
				setState(495); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(493);
					match(T__10);
					setState(494);
					type_();
					}
					}
					setState(497); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==T__10 );
				}
			}

			setState(501);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArrayTypeContext extends ParserRuleContext {
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ArrayTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterArrayType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitArrayType(this);
		}
	}

	public final ArrayTypeContext arrayType() throws RecognitionException {
		ArrayTypeContext _localctx = new ArrayTypeContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_arrayType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(503);
			match(T__44);
			setState(504);
			type_();
			setState(505);
			match(T__1);
			setState(506);
			expression();
			setState(507);
			match(T__45);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReferenceTypeContext extends ParserRuleContext {
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public LifetimeContext lifetime() {
			return getRuleContext(LifetimeContext.class,0);
		}
		public ReferenceTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_referenceType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterReferenceType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitReferenceType(this);
		}
	}

	public final ReferenceTypeContext referenceType() throws RecognitionException {
		ReferenceTypeContext _localctx = new ReferenceTypeContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_referenceType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(509);
			match(T__46);
			setState(511);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(510);
				match(T__47);
				}
			}

			setState(514);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__49) {
				{
				setState(513);
				lifetime();
				}
			}

			setState(516);
			type_();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OwnershipTypeContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeParameterListContext typeParameterList() {
			return getRuleContext(TypeParameterListContext.class,0);
		}
		public OwnershipTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ownershipType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterOwnershipType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitOwnershipType(this);
		}
	}

	public final OwnershipTypeContext ownershipType() throws RecognitionException {
		OwnershipTypeContext _localctx = new OwnershipTypeContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_ownershipType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(518);
			identifier();
			setState(520);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(519);
				typeParameterList();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeParameterListContext extends ParserRuleContext {
		public List<TypeParameterContext> typeParameter() {
			return getRuleContexts(TypeParameterContext.class);
		}
		public TypeParameterContext typeParameter(int i) {
			return getRuleContext(TypeParameterContext.class,i);
		}
		public TypeParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeParameterList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTypeParameterList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTypeParameterList(this);
		}
	}

	public final TypeParameterListContext typeParameterList() throws RecognitionException {
		TypeParameterListContext _localctx = new TypeParameterListContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_typeParameterList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(522);
			match(T__41);
			setState(523);
			typeParameter();
			setState(528);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(524);
				match(T__10);
				setState(525);
				typeParameter();
				}
				}
				setState(530);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(531);
			match(T__42);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeParameterContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TypeParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeParameter; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTypeParameter(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTypeParameter(this);
		}
	}

	public final TypeParameterContext typeParameter() throws RecognitionException {
		TypeParameterContext _localctx = new TypeParameterContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_typeParameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(533);
			identifier();
			setState(536);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__11) {
				{
				setState(534);
				match(T__11);
				setState(535);
				identifierList();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstraintListContext extends ParserRuleContext {
		public List<ConstraintContext> constraint() {
			return getRuleContexts(ConstraintContext.class);
		}
		public ConstraintContext constraint(int i) {
			return getRuleContext(ConstraintContext.class,i);
		}
		public ConstraintListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constraintList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterConstraintList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitConstraintList(this);
		}
	}

	public final ConstraintListContext constraintList() throws RecognitionException {
		ConstraintListContext _localctx = new ConstraintListContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_constraintList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(538);
			constraint();
			setState(543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(539);
				match(T__10);
				setState(540);
				constraint();
				}
				}
				setState(545);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstraintContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeListContext typeList() {
			return getRuleContext(TypeListContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constraint; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterConstraint(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitConstraint(this);
		}
	}

	public final ConstraintContext constraint() throws RecognitionException {
		ConstraintContext _localctx = new ConstraintContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_constraint);
		int _la;
		try {
			setState(555);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Keyword:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(546);
				identifier();
				setState(551);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__8) {
					{
					setState(547);
					match(T__8);
					setState(548);
					typeList();
					setState(549);
					match(T__9);
					}
				}

				}
				break;
			case T__48:
				enterOuterAlt(_localctx, 2);
				{
				setState(553);
				match(T__48);
				setState(554);
				type_();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierListContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIdentifierList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIdentifierList(this);
		}
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_identifierList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(557);
			identifier();
			setState(562);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(558);
					match(T__10);
					setState(559);
					identifier();
					}
					} 
				}
				setState(564);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LifetimeContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public LifetimeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lifetime; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLifetime(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLifetime(this);
		}
	}

	public final LifetimeContext lifetime() throws RecognitionException {
		LifetimeContext _localctx = new LifetimeContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_lifetime);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(565);
			match(T__49);
			setState(566);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitExpression(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(568);
			assignmentExpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentExpressionContext extends ParserRuleContext {
		public LogicalExpressionContext logicalExpression() {
			return getRuleContext(LogicalExpressionContext.class,0);
		}
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public CompoundAssignmentOperatorContext compoundAssignmentOperator() {
			return getRuleContext(CompoundAssignmentOperatorContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AssignmentExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterAssignmentExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitAssignmentExpression(this);
		}
	}

	public final AssignmentExpressionContext assignmentExpression() throws RecognitionException {
		AssignmentExpressionContext _localctx = new AssignmentExpressionContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_assignmentExpression);
		try {
			setState(579);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(570);
				logicalExpression(0);
				setState(571);
				match(T__12);
				setState(572);
				assignmentExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(574);
				logicalExpression(0);
				setState(575);
				compoundAssignmentOperator();
				setState(576);
				expression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(578);
				logicalExpression(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CompoundAssignmentOperatorContext extends ParserRuleContext {
		public CompoundAssignmentOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundAssignmentOperator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterCompoundAssignmentOperator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitCompoundAssignmentOperator(this);
		}
	}

	public final CompoundAssignmentOperatorContext compoundAssignmentOperator() throws RecognitionException {
		CompoundAssignmentOperatorContext _localctx = new CompoundAssignmentOperatorContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_compoundAssignmentOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(581);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2303591209400008704L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LogicalExpressionContext extends ParserRuleContext {
		public ComparisonExpressionContext comparisonExpression() {
			return getRuleContext(ComparisonExpressionContext.class,0);
		}
		public LogicalExpressionContext logicalExpression() {
			return getRuleContext(LogicalExpressionContext.class,0);
		}
		public LogicalExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLogicalExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLogicalExpression(this);
		}
	}

	public final LogicalExpressionContext logicalExpression() throws RecognitionException {
		return logicalExpression(0);
	}

	private LogicalExpressionContext logicalExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalExpressionContext _localctx = new LogicalExpressionContext(_ctx, _parentState);
		LogicalExpressionContext _prevctx = _localctx;
		int _startState = 82;
		enterRecursionRule(_localctx, 82, RULE_logicalExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(584);
			comparisonExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(591);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalExpression);
					setState(586);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(587);
					_la = _input.LA(1);
					if ( !(_la==T__60 || _la==T__61) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(588);
					comparisonExpression(0);
					}
					} 
				}
				setState(593);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComparisonExpressionContext extends ParserRuleContext {
		public BitwiseExpressionContext bitwiseExpression() {
			return getRuleContext(BitwiseExpressionContext.class,0);
		}
		public ComparisonExpressionContext comparisonExpression() {
			return getRuleContext(ComparisonExpressionContext.class,0);
		}
		public ComparisonExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparisonExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterComparisonExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitComparisonExpression(this);
		}
	}

	public final ComparisonExpressionContext comparisonExpression() throws RecognitionException {
		return comparisonExpression(0);
	}

	private ComparisonExpressionContext comparisonExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ComparisonExpressionContext _localctx = new ComparisonExpressionContext(_ctx, _parentState);
		ComparisonExpressionContext _prevctx = _localctx;
		int _startState = 84;
		enterRecursionRule(_localctx, 84, RULE_comparisonExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(595);
			bitwiseExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(602);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ComparisonExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_comparisonExpression);
					setState(597);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(598);
					_la = _input.LA(1);
					if ( !(((((_la - 42)) & ~0x3f) == 0 && ((1L << (_la - 42)) & 31457283L) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(599);
					bitwiseExpression(0);
					}
					} 
				}
				setState(604);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BitwiseExpressionContext extends ParserRuleContext {
		public ArithmeticExpressionContext arithmeticExpression() {
			return getRuleContext(ArithmeticExpressionContext.class,0);
		}
		public BitwiseExpressionContext bitwiseExpression() {
			return getRuleContext(BitwiseExpressionContext.class,0);
		}
		public BitwiseExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitwiseExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterBitwiseExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitBitwiseExpression(this);
		}
	}

	public final BitwiseExpressionContext bitwiseExpression() throws RecognitionException {
		return bitwiseExpression(0);
	}

	private BitwiseExpressionContext bitwiseExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BitwiseExpressionContext _localctx = new BitwiseExpressionContext(_ctx, _parentState);
		BitwiseExpressionContext _prevctx = _localctx;
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_bitwiseExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(606);
			arithmeticExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(613);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BitwiseExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_bitwiseExpression);
					setState(608);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(609);
					_la = _input.LA(1);
					if ( !(((((_la - 47)) & ~0x3f) == 0 && ((1L << (_la - 47)) & 15728641L) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(610);
					arithmeticExpression(0);
					}
					} 
				}
				setState(615);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArithmeticExpressionContext extends ParserRuleContext {
		public TermExpressionContext termExpression() {
			return getRuleContext(TermExpressionContext.class,0);
		}
		public ArithmeticExpressionContext arithmeticExpression() {
			return getRuleContext(ArithmeticExpressionContext.class,0);
		}
		public ArithmeticExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arithmeticExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterArithmeticExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitArithmeticExpression(this);
		}
	}

	public final ArithmeticExpressionContext arithmeticExpression() throws RecognitionException {
		return arithmeticExpression(0);
	}

	private ArithmeticExpressionContext arithmeticExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ArithmeticExpressionContext _localctx = new ArithmeticExpressionContext(_ctx, _parentState);
		ArithmeticExpressionContext _prevctx = _localctx;
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_arithmeticExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(617);
			termExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(624);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ArithmeticExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_arithmeticExpression);
					setState(619);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(620);
					_la = _input.LA(1);
					if ( !(_la==T__70 || _la==T__71) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(621);
					termExpression(0);
					}
					} 
				}
				setState(626);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TermExpressionContext extends ParserRuleContext {
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public TermExpressionContext termExpression() {
			return getRuleContext(TermExpressionContext.class,0);
		}
		public TermExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_termExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTermExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTermExpression(this);
		}
	}

	public final TermExpressionContext termExpression() throws RecognitionException {
		return termExpression(0);
	}

	private TermExpressionContext termExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TermExpressionContext _localctx = new TermExpressionContext(_ctx, _parentState);
		TermExpressionContext _prevctx = _localctx;
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_termExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(628);
			unaryExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(635);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TermExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_termExpression);
					setState(630);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(631);
					_la = _input.LA(1);
					if ( !(((((_la - 73)) & ~0x3f) == 0 && ((1L << (_la - 73)) & 7L) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(632);
					unaryExpression();
					}
					} 
				}
				setState(637);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PowerExpressionContext extends ParserRuleContext {
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public PowerExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_powerExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterPowerExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitPowerExpression(this);
		}
	}

	public final PowerExpressionContext powerExpression() throws RecognitionException {
		PowerExpressionContext _localctx = new PowerExpressionContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_powerExpression);
		try {
			setState(641);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__75:
				enterOuterAlt(_localctx, 1);
				{
				setState(638);
				match(T__75);
				setState(639);
				unaryExpression();
				}
				break;
			case T__8:
			case T__15:
			case T__19:
			case T__44:
			case T__46:
			case T__49:
			case T__71:
			case T__72:
			case T__76:
			case T__80:
			case T__81:
			case T__82:
			case T__85:
			case T__87:
			case T__89:
			case T__90:
			case T__92:
			case T__93:
			case T__94:
			case T__95:
			case T__96:
			case Keyword:
			case Identifier:
			case DecimalLiteral:
			case HexLiteral:
			case OctalLiteral:
			case BinaryLiteral:
			case DecimalFloatLiteral:
			case StringLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(640);
				unaryExpression();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnaryExpressionContext extends ParserRuleContext {
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public PostfixExpressionContext postfixExpression() {
			return getRuleContext(PostfixExpressionContext.class,0);
		}
		public UnaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterUnaryExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitUnaryExpression(this);
		}
	}

	public final UnaryExpressionContext unaryExpression() throws RecognitionException {
		UnaryExpressionContext _localctx = new UnaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_unaryExpression);
		int _la;
		try {
			setState(655);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__71:
				enterOuterAlt(_localctx, 1);
				{
				setState(643);
				match(T__71);
				setState(644);
				unaryExpression();
				}
				break;
			case T__76:
				enterOuterAlt(_localctx, 2);
				{
				setState(645);
				match(T__76);
				setState(646);
				unaryExpression();
				}
				break;
			case T__72:
				enterOuterAlt(_localctx, 3);
				{
				setState(647);
				match(T__72);
				setState(648);
				unaryExpression();
				}
				break;
			case T__46:
				enterOuterAlt(_localctx, 4);
				{
				setState(649);
				match(T__46);
				setState(651);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__47) {
					{
					setState(650);
					match(T__47);
					}
				}

				setState(653);
				unaryExpression();
				}
				break;
			case T__8:
			case T__15:
			case T__19:
			case T__44:
			case T__49:
			case T__80:
			case T__81:
			case T__82:
			case T__85:
			case T__87:
			case T__89:
			case T__90:
			case T__92:
			case T__93:
			case T__94:
			case T__95:
			case T__96:
			case Keyword:
			case Identifier:
			case DecimalLiteral:
			case HexLiteral:
			case OctalLiteral:
			case BinaryLiteral:
			case DecimalFloatLiteral:
			case StringLiteral:
				enterOuterAlt(_localctx, 5);
				{
				setState(654);
				postfixExpression();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PostfixExpressionContext extends ParserRuleContext {
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public ArgumentListContext argumentList() {
			return getRuleContext(ArgumentListContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode DecimalLiteral() { return getToken(NovaParser.DecimalLiteral, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public PostfixExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterPostfixExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitPostfixExpression(this);
		}
	}

	public final PostfixExpressionContext postfixExpression() throws RecognitionException {
		PostfixExpressionContext _localctx = new PostfixExpressionContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_postfixExpression);
		int _la;
		try {
			setState(686);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(657);
				primaryExpression();
				setState(658);
				match(T__8);
				setState(660);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
					{
					setState(659);
					argumentList();
					}
				}

				setState(662);
				match(T__9);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(664);
				primaryExpression();
				setState(665);
				match(T__77);
				setState(666);
				identifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(668);
				primaryExpression();
				setState(669);
				match(T__77);
				setState(670);
				match(DecimalLiteral);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(672);
				primaryExpression();
				setState(673);
				match(T__3);
				setState(674);
				type_();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(676);
				primaryExpression();
				setState(677);
				match(T__11);
				setState(678);
				type_();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(680);
				primaryExpression();
				setState(681);
				_la = _input.LA(1);
				if ( !(_la==T__78 || _la==T__79) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(683);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
				case 1:
					{
					setState(682);
					expression();
					}
					break;
				}
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(685);
				primaryExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrimaryExpressionContext extends ParserRuleContext {
		public LiteralExpressionContext literalExpression() {
			return getRuleContext(LiteralExpressionContext.class,0);
		}
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public BlockExpressionContext blockExpression() {
			return getRuleContext(BlockExpressionContext.class,0);
		}
		public TupleExpressionContext tupleExpression() {
			return getRuleContext(TupleExpressionContext.class,0);
		}
		public ArrayExpressionContext arrayExpression() {
			return getRuleContext(ArrayExpressionContext.class,0);
		}
		public StructExpressionContext structExpression() {
			return getRuleContext(StructExpressionContext.class,0);
		}
		public EnumVariantExpressionContext enumVariantExpression() {
			return getRuleContext(EnumVariantExpressionContext.class,0);
		}
		public IfExpressionContext ifExpression() {
			return getRuleContext(IfExpressionContext.class,0);
		}
		public MatchExpressionContext matchExpression() {
			return getRuleContext(MatchExpressionContext.class,0);
		}
		public LoopExpressionContext loopExpression() {
			return getRuleContext(LoopExpressionContext.class,0);
		}
		public BreakExpressionContext breakExpression() {
			return getRuleContext(BreakExpressionContext.class,0);
		}
		public ContinueExpressionContext continueExpression() {
			return getRuleContext(ContinueExpressionContext.class,0);
		}
		public ReturnExpressionContext returnExpression() {
			return getRuleContext(ReturnExpressionContext.class,0);
		}
		public AwaitExpressionContext awaitExpression() {
			return getRuleContext(AwaitExpressionContext.class,0);
		}
		public UnsafeExpressionContext unsafeExpression() {
			return getRuleContext(UnsafeExpressionContext.class,0);
		}
		public ParenthesizedExpressionContext parenthesizedExpression() {
			return getRuleContext(ParenthesizedExpressionContext.class,0);
		}
		public PrimaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterPrimaryExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitPrimaryExpression(this);
		}
	}

	public final PrimaryExpressionContext primaryExpression() throws RecognitionException {
		PrimaryExpressionContext _localctx = new PrimaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_primaryExpression);
		try {
			setState(704);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(688);
				literalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(689);
				identifierExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(690);
				blockExpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(691);
				tupleExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(692);
				arrayExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(693);
				structExpression();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(694);
				enumVariantExpression();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(695);
				ifExpression();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(696);
				matchExpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(697);
				loopExpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(698);
				breakExpression();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(699);
				continueExpression();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(700);
				returnExpression();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(701);
				awaitExpression();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(702);
				unsafeExpression();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(703);
				parenthesizedExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParenthesizedExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParenthesizedExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parenthesizedExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterParenthesizedExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitParenthesizedExpression(this);
		}
	}

	public final ParenthesizedExpressionContext parenthesizedExpression() throws RecognitionException {
		ParenthesizedExpressionContext _localctx = new ParenthesizedExpressionContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_parenthesizedExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(706);
			match(T__8);
			setState(707);
			expression();
			setState(708);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LiteralExpressionContext extends ParserRuleContext {
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public BooleanLiteralContext booleanLiteral() {
			return getRuleContext(BooleanLiteralContext.class,0);
		}
		public CharacterLiteralContext characterLiteral() {
			return getRuleContext(CharacterLiteralContext.class,0);
		}
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public NullLiteralContext nullLiteral() {
			return getRuleContext(NullLiteralContext.class,0);
		}
		public LiteralExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLiteralExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLiteralExpression(this);
		}
	}

	public final LiteralExpressionContext literalExpression() throws RecognitionException {
		LiteralExpressionContext _localctx = new LiteralExpressionContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_literalExpression);
		try {
			setState(716);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DecimalLiteral:
			case HexLiteral:
			case OctalLiteral:
			case BinaryLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(710);
				integerLiteral();
				}
				break;
			case DecimalFloatLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(711);
				floatLiteral();
				}
				break;
			case T__80:
			case T__81:
				enterOuterAlt(_localctx, 3);
				{
				setState(712);
				booleanLiteral();
				}
				break;
			case T__49:
				enterOuterAlt(_localctx, 4);
				{
				setState(713);
				characterLiteral();
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 5);
				{
				setState(714);
				stringLiteral();
				}
				break;
			case T__82:
				enterOuterAlt(_localctx, 6);
				{
				setState(715);
				nullLiteral();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IntegerLiteralContext extends ParserRuleContext {
		public TerminalNode DecimalLiteral() { return getToken(NovaParser.DecimalLiteral, 0); }
		public TerminalNode HexLiteral() { return getToken(NovaParser.HexLiteral, 0); }
		public TerminalNode OctalLiteral() { return getToken(NovaParser.OctalLiteral, 0); }
		public TerminalNode BinaryLiteral() { return getToken(NovaParser.BinaryLiteral, 0); }
		public IntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIntegerLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIntegerLiteral(this);
		}
	}

	public final IntegerLiteralContext integerLiteral() throws RecognitionException {
		IntegerLiteralContext _localctx = new IntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(718);
			_la = _input.LA(1);
			if ( !(((((_la - 104)) & ~0x3f) == 0 && ((1L << (_la - 104)) & 15L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FloatLiteralContext extends ParserRuleContext {
		public TerminalNode DecimalFloatLiteral() { return getToken(NovaParser.DecimalFloatLiteral, 0); }
		public FloatLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_floatLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFloatLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFloatLiteral(this);
		}
	}

	public final FloatLiteralContext floatLiteral() throws RecognitionException {
		FloatLiteralContext _localctx = new FloatLiteralContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_floatLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(720);
			match(DecimalFloatLiteral);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BooleanLiteralContext extends ParserRuleContext {
		public BooleanLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterBooleanLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitBooleanLiteral(this);
		}
	}

	public final BooleanLiteralContext booleanLiteral() throws RecognitionException {
		BooleanLiteralContext _localctx = new BooleanLiteralContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(722);
			_la = _input.LA(1);
			if ( !(_la==T__80 || _la==T__81) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharacterLiteralContext extends ParserRuleContext {
		public TerminalNode EscapeSequence() { return getToken(NovaParser.EscapeSequence, 0); }
		public CharacterLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterCharacterLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitCharacterLiteral(this);
		}
	}

	public final CharacterLiteralContext characterLiteral() throws RecognitionException {
		CharacterLiteralContext _localctx = new CharacterLiteralContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_characterLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(724);
			match(T__49);
			setState(727);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				{
				setState(725);
				_la = _input.LA(1);
				if ( _la <= 0 || (_la==T__49) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 2:
				{
				setState(726);
				match(EscapeSequence);
				}
				break;
			}
			setState(729);
			match(T__49);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StringLiteralContext extends ParserRuleContext {
		public TerminalNode StringLiteral() { return getToken(NovaParser.StringLiteral, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterStringLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitStringLiteral(this);
		}
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_stringLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(731);
			match(StringLiteral);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NullLiteralContext extends ParserRuleContext {
		public NullLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullLiteral; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterNullLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitNullLiteral(this);
		}
	}

	public final NullLiteralContext nullLiteral() throws RecognitionException {
		NullLiteralContext _localctx = new NullLiteralContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_nullLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(733);
			match(T__82);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierExpressionContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public IdentifierExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIdentifierExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIdentifierExpression(this);
		}
	}

	public final IdentifierExpressionContext identifierExpression() throws RecognitionException {
		IdentifierExpressionContext _localctx = new IdentifierExpressionContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_identifierExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(735);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockExpressionContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public BlockExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterBlockExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitBlockExpression(this);
		}
	}

	public final BlockExpressionContext blockExpression() throws RecognitionException {
		BlockExpressionContext _localctx = new BlockExpressionContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_blockExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(737);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitBlock(this);
		}
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_block);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(739);
			match(T__15);
			setState(743);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(740);
					statement();
					}
					} 
				}
				setState(745);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			}
			setState(747);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
				{
				setState(746);
				expression();
				}
			}

			setState(749);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public DeclarationStatementContext declarationStatement() {
			return getRuleContext(DeclarationStatementContext.class,0);
		}
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public AssignmentStatementContext assignmentStatement() {
			return getRuleContext(AssignmentStatementContext.class,0);
		}
		public IfStatementContext ifStatement() {
			return getRuleContext(IfStatementContext.class,0);
		}
		public LoopStatementContext loopStatement() {
			return getRuleContext(LoopStatementContext.class,0);
		}
		public MatchStatementContext matchStatement() {
			return getRuleContext(MatchStatementContext.class,0);
		}
		public JumpStatementContext jumpStatement() {
			return getRuleContext(JumpStatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitStatement(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_statement);
		try {
			setState(758);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(751);
				declarationStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(752);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(753);
				assignmentStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(754);
				ifStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(755);
				loopStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(756);
				matchStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(757);
				jumpStatement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclarationStatementContext extends ParserRuleContext {
		public VariableDeclarationContext variableDeclaration() {
			return getRuleContext(VariableDeclarationContext.class,0);
		}
		public ConstantDeclarationContext constantDeclaration() {
			return getRuleContext(ConstantDeclarationContext.class,0);
		}
		public DeclarationStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterDeclarationStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitDeclarationStatement(this);
		}
	}

	public final DeclarationStatementContext declarationStatement() throws RecognitionException {
		DeclarationStatementContext _localctx = new DeclarationStatementContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_declarationStatement);
		try {
			setState(762);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__47:
			case T__83:
				enterOuterAlt(_localctx, 1);
				{
				setState(760);
				variableDeclaration();
				}
				break;
			case T__22:
				enterOuterAlt(_localctx, 2);
				{
				setState(761);
				constantDeclaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableDeclarationContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public VariableDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterVariableDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitVariableDeclaration(this);
		}
	}

	public final VariableDeclarationContext variableDeclaration() throws RecognitionException {
		VariableDeclarationContext _localctx = new VariableDeclarationContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_variableDeclaration);
		int _la;
		try {
			setState(786);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(765);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__47) {
					{
					setState(764);
					match(T__47);
					}
				}

				setState(767);
				match(T__83);
				setState(768);
				pattern();
				setState(769);
				match(T__12);
				setState(770);
				expression();
				setState(771);
				match(T__1);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(774);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__47) {
					{
					setState(773);
					match(T__47);
					}
				}

				setState(776);
				match(T__83);
				setState(777);
				pattern();
				setState(778);
				match(T__11);
				setState(779);
				type_();
				setState(782);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__12) {
					{
					setState(780);
					match(T__12);
					setState(781);
					expression();
					}
				}

				setState(784);
				match(T__1);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PatternContext extends ParserRuleContext {
		public IdentifierPatternContext identifierPattern() {
			return getRuleContext(IdentifierPatternContext.class,0);
		}
		public TuplePatternContext tuplePattern() {
			return getRuleContext(TuplePatternContext.class,0);
		}
		public StructPatternContext structPattern() {
			return getRuleContext(StructPatternContext.class,0);
		}
		public WildcardPatternContext wildcardPattern() {
			return getRuleContext(WildcardPatternContext.class,0);
		}
		public PatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pattern; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterPattern(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitPattern(this);
		}
	}

	public final PatternContext pattern() throws RecognitionException {
		PatternContext _localctx = new PatternContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_pattern);
		try {
			setState(792);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(788);
				identifierPattern();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(789);
				tuplePattern();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(790);
				structPattern();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(791);
				wildcardPattern();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierPatternContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public IdentifierPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierPattern; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIdentifierPattern(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIdentifierPattern(this);
		}
	}

	public final IdentifierPatternContext identifierPattern() throws RecognitionException {
		IdentifierPatternContext _localctx = new IdentifierPatternContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_identifierPattern);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(795);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__47) {
				{
				setState(794);
				match(T__47);
				}
			}

			setState(797);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TuplePatternContext extends ParserRuleContext {
		public List<PatternContext> pattern() {
			return getRuleContexts(PatternContext.class);
		}
		public PatternContext pattern(int i) {
			return getRuleContext(PatternContext.class,i);
		}
		public TuplePatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuplePattern; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTuplePattern(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTuplePattern(this);
		}
	}

	public final TuplePatternContext tuplePattern() throws RecognitionException {
		TuplePatternContext _localctx = new TuplePatternContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_tuplePattern);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(799);
			match(T__8);
			setState(800);
			pattern();
			setState(805);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(801);
				match(T__10);
				setState(802);
				pattern();
				}
				}
				setState(807);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(808);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StructPatternContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<PatternContext> pattern() {
			return getRuleContexts(PatternContext.class);
		}
		public PatternContext pattern(int i) {
			return getRuleContext(PatternContext.class,i);
		}
		public StructPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structPattern; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterStructPattern(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitStructPattern(this);
		}
	}

	public final StructPatternContext structPattern() throws RecognitionException {
		StructPatternContext _localctx = new StructPatternContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_structPattern);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(810);
			identifier();
			setState(811);
			match(T__15);
			setState(825);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Keyword || _la==Identifier) {
				{
				setState(812);
				identifier();
				setState(813);
				match(T__11);
				setState(814);
				pattern();
				setState(822);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__10) {
					{
					{
					setState(815);
					match(T__10);
					setState(816);
					identifier();
					setState(817);
					match(T__11);
					setState(818);
					pattern();
					}
					}
					setState(824);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(827);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WildcardPatternContext extends ParserRuleContext {
		public WildcardPatternContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_wildcardPattern; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterWildcardPattern(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitWildcardPattern(this);
		}
	}

	public final WildcardPatternContext wildcardPattern() throws RecognitionException {
		WildcardPatternContext _localctx = new WildcardPatternContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_wildcardPattern);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(829);
			match(T__84);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionStatementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterExpressionStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitExpressionStatement(this);
		}
	}

	public final ExpressionStatementContext expressionStatement() throws RecognitionException {
		ExpressionStatementContext _localctx = new ExpressionStatementContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_expressionStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(831);
			expression();
			setState(832);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentStatementContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public AssignmentStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterAssignmentStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitAssignmentStatement(this);
		}
	}

	public final AssignmentStatementContext assignmentStatement() throws RecognitionException {
		AssignmentStatementContext _localctx = new AssignmentStatementContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_assignmentStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(834);
			expression();
			setState(835);
			match(T__12);
			setState(836);
			expression();
			setState(837);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LambdaExpressionContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public LambdaExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLambdaExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLambdaExpression(this);
		}
	}

	public final LambdaExpressionContext lambdaExpression() throws RecognitionException {
		LambdaExpressionContext _localctx = new LambdaExpressionContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_lambdaExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(839);
			match(T__66);
			setState(841);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Keyword || _la==Identifier) {
				{
				setState(840);
				parameterList();
				}
			}

			setState(843);
			match(T__66);
			setState(846);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__13) {
				{
				setState(844);
				match(T__13);
				setState(845);
				type_();
				}
			}

			setState(848);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TupleExpressionContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TupleExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tupleExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterTupleExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitTupleExpression(this);
		}
	}

	public final TupleExpressionContext tupleExpression() throws RecognitionException {
		TupleExpressionContext _localctx = new TupleExpressionContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_tupleExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(850);
			match(T__8);
			setState(858);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
				{
				setState(851);
				expression();
				setState(854); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(852);
					match(T__10);
					setState(853);
					expression();
					}
					}
					setState(856); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==T__10 );
				}
			}

			setState(860);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArrayExpressionContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ArrayExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterArrayExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitArrayExpression(this);
		}
	}

	public final ArrayExpressionContext arrayExpression() throws RecognitionException {
		ArrayExpressionContext _localctx = new ArrayExpressionContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_arrayExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(862);
			match(T__44);
			setState(871);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
				{
				setState(863);
				expression();
				setState(868);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__10) {
					{
					{
					setState(864);
					match(T__10);
					setState(865);
					expression();
					}
					}
					setState(870);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(873);
			match(T__45);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StructExpressionContext extends ParserRuleContext {
		public TypeReferenceContext typeReference() {
			return getRuleContext(TypeReferenceContext.class,0);
		}
		public List<FieldInitializerContext> fieldInitializer() {
			return getRuleContexts(FieldInitializerContext.class);
		}
		public FieldInitializerContext fieldInitializer(int i) {
			return getRuleContext(FieldInitializerContext.class,i);
		}
		public StructExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterStructExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitStructExpression(this);
		}
	}

	public final StructExpressionContext structExpression() throws RecognitionException {
		StructExpressionContext _localctx = new StructExpressionContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_structExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(875);
			typeReference();
			setState(876);
			match(T__15);
			setState(885);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Keyword || _la==Identifier) {
				{
				setState(877);
				fieldInitializer();
				setState(882);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__10) {
					{
					{
					setState(878);
					match(T__10);
					setState(879);
					fieldInitializer();
					}
					}
					setState(884);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(887);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FieldInitializerContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public FieldInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldInitializer; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFieldInitializer(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFieldInitializer(this);
		}
	}

	public final FieldInitializerContext fieldInitializer() throws RecognitionException {
		FieldInitializerContext _localctx = new FieldInitializerContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_fieldInitializer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(889);
			identifier();
			setState(892);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__12) {
				{
				setState(890);
				match(T__12);
				setState(891);
				expression();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumVariantExpressionContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public EnumVariantExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumVariantExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterEnumVariantExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitEnumVariantExpression(this);
		}
	}

	public final EnumVariantExpressionContext enumVariantExpression() throws RecognitionException {
		EnumVariantExpressionContext _localctx = new EnumVariantExpressionContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_enumVariantExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(894);
			identifier();
			setState(899);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				{
				setState(895);
				match(T__8);
				setState(896);
				expression();
				setState(897);
				match(T__9);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CallExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ArgumentListContext argumentList() {
			return getRuleContext(ArgumentListContext.class,0);
		}
		public CallExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_callExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterCallExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitCallExpression(this);
		}
	}

	public final CallExpressionContext callExpression() throws RecognitionException {
		CallExpressionContext _localctx = new CallExpressionContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_callExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(901);
			expression();
			setState(902);
			match(T__8);
			setState(904);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
				{
				setState(903);
				argumentList();
				}
			}

			setState(906);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArgumentListContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ArgumentListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argumentList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterArgumentList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitArgumentList(this);
		}
	}

	public final ArgumentListContext argumentList() throws RecognitionException {
		ArgumentListContext _localctx = new ArgumentListContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_argumentList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(908);
			expression();
			setState(913);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__10) {
				{
				{
				setState(909);
				match(T__10);
				setState(910);
				expression();
				}
				}
				setState(915);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FieldExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public FieldExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterFieldExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitFieldExpression(this);
		}
	}

	public final FieldExpressionContext fieldExpression() throws RecognitionException {
		FieldExpressionContext _localctx = new FieldExpressionContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_fieldExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(916);
			expression();
			setState(917);
			match(T__77);
			setState(918);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CompoundAssignmentExpressionContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public CompoundAssignmentExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundAssignmentExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterCompoundAssignmentExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitCompoundAssignmentExpression(this);
		}
	}

	public final CompoundAssignmentExpressionContext compoundAssignmentExpression() throws RecognitionException {
		CompoundAssignmentExpressionContext _localctx = new CompoundAssignmentExpressionContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_compoundAssignmentExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(920);
			expression();
			setState(921);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2303591209400008704L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(922);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfExpressionContext extends ParserRuleContext {
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public IfExpressionContext ifExpression() {
			return getRuleContext(IfExpressionContext.class,0);
		}
		public IfExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIfExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIfExpression(this);
		}
	}

	public final IfExpressionContext ifExpression() throws RecognitionException {
		IfExpressionContext _localctx = new IfExpressionContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_ifExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(924);
			match(T__85);
			setState(925);
			condition();
			setState(926);
			block();
			setState(932);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
			case 1:
				{
				setState(927);
				match(T__86);
				setState(930);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__15:
					{
					setState(928);
					block();
					}
					break;
				case T__85:
					{
					setState(929);
					ifExpression();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfStatementContext extends ParserRuleContext {
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public IfStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIfStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIfStatement(this);
		}
	}

	public final IfStatementContext ifStatement() throws RecognitionException {
		IfStatementContext _localctx = new IfStatementContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_ifStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(934);
			match(T__85);
			setState(935);
			condition();
			setState(936);
			block();
			setState(939);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__86) {
				{
				setState(937);
				match(T__86);
				setState(938);
				block();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConditionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public LetConditionContext letCondition() {
			return getRuleContext(LetConditionContext.class,0);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterCondition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitCondition(this);
		}
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_condition);
		try {
			setState(943);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
			case T__15:
			case T__19:
			case T__44:
			case T__46:
			case T__49:
			case T__71:
			case T__72:
			case T__76:
			case T__80:
			case T__81:
			case T__82:
			case T__85:
			case T__87:
			case T__89:
			case T__90:
			case T__92:
			case T__93:
			case T__94:
			case T__95:
			case T__96:
			case Keyword:
			case Identifier:
			case DecimalLiteral:
			case HexLiteral:
			case OctalLiteral:
			case BinaryLiteral:
			case DecimalFloatLiteral:
			case StringLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(941);
				expression();
				}
				break;
			case T__83:
				enterOuterAlt(_localctx, 2);
				{
				setState(942);
				letCondition();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LetConditionContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public LetConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_letCondition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLetCondition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLetCondition(this);
		}
	}

	public final LetConditionContext letCondition() throws RecognitionException {
		LetConditionContext _localctx = new LetConditionContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_letCondition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(945);
			match(T__83);
			setState(946);
			pattern();
			setState(947);
			match(T__12);
			setState(948);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MatchExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public List<MatchArmContext> matchArm() {
			return getRuleContexts(MatchArmContext.class);
		}
		public MatchArmContext matchArm(int i) {
			return getRuleContext(MatchArmContext.class,i);
		}
		public MatchExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_matchExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterMatchExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitMatchExpression(this);
		}
	}

	public final MatchExpressionContext matchExpression() throws RecognitionException {
		MatchExpressionContext _localctx = new MatchExpressionContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_matchExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(950);
			match(T__87);
			setState(951);
			expression();
			setState(952);
			match(T__15);
			setState(956);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8 || _la==T__47 || ((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & 393217L) != 0)) {
				{
				{
				setState(953);
				matchArm();
				}
				}
				setState(958);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(959);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MatchStatementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public List<MatchArmContext> matchArm() {
			return getRuleContexts(MatchArmContext.class);
		}
		public MatchArmContext matchArm(int i) {
			return getRuleContext(MatchArmContext.class,i);
		}
		public MatchStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_matchStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterMatchStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitMatchStatement(this);
		}
	}

	public final MatchStatementContext matchStatement() throws RecognitionException {
		MatchStatementContext _localctx = new MatchStatementContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_matchStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(961);
			match(T__87);
			setState(962);
			expression();
			setState(963);
			match(T__15);
			setState(967);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8 || _la==T__47 || ((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & 393217L) != 0)) {
				{
				{
				setState(964);
				matchArm();
				}
				}
				setState(969);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(970);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MatchArmContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public MatchArmContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_matchArm; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterMatchArm(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitMatchArm(this);
		}
	}

	public final MatchArmContext matchArm() throws RecognitionException {
		MatchArmContext _localctx = new MatchArmContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_matchArm);
		try {
			setState(981);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(972);
				pattern();
				setState(973);
				match(T__88);
				setState(974);
				expression();
				setState(975);
				match(T__10);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(977);
				pattern();
				setState(978);
				match(T__88);
				setState(979);
				block();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LoopExpressionContext extends ParserRuleContext {
		public LoopBlockContext loopBlock() {
			return getRuleContext(LoopBlockContext.class,0);
		}
		public WhileBlockContext whileBlock() {
			return getRuleContext(WhileBlockContext.class,0);
		}
		public ForBlockContext forBlock() {
			return getRuleContext(ForBlockContext.class,0);
		}
		public LoopExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loopExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLoopExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLoopExpression(this);
		}
	}

	public final LoopExpressionContext loopExpression() throws RecognitionException {
		LoopExpressionContext _localctx = new LoopExpressionContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_loopExpression);
		try {
			setState(986);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__89:
				enterOuterAlt(_localctx, 1);
				{
				setState(983);
				loopBlock();
				}
				break;
			case T__90:
				enterOuterAlt(_localctx, 2);
				{
				setState(984);
				whileBlock();
				}
				break;
			case T__19:
				enterOuterAlt(_localctx, 3);
				{
				setState(985);
				forBlock();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LoopStatementContext extends ParserRuleContext {
		public LoopBlockContext loopBlock() {
			return getRuleContext(LoopBlockContext.class,0);
		}
		public WhileBlockContext whileBlock() {
			return getRuleContext(WhileBlockContext.class,0);
		}
		public ForBlockContext forBlock() {
			return getRuleContext(ForBlockContext.class,0);
		}
		public LoopStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loopStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLoopStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLoopStatement(this);
		}
	}

	public final LoopStatementContext loopStatement() throws RecognitionException {
		LoopStatementContext _localctx = new LoopStatementContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_loopStatement);
		try {
			setState(991);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__89:
				enterOuterAlt(_localctx, 1);
				{
				setState(988);
				loopBlock();
				}
				break;
			case T__90:
				enterOuterAlt(_localctx, 2);
				{
				setState(989);
				whileBlock();
				}
				break;
			case T__19:
				enterOuterAlt(_localctx, 3);
				{
				setState(990);
				forBlock();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LoopBlockContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public LoopBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loopBlock; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterLoopBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitLoopBlock(this);
		}
	}

	public final LoopBlockContext loopBlock() throws RecognitionException {
		LoopBlockContext _localctx = new LoopBlockContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_loopBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(993);
			match(T__89);
			setState(994);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WhileBlockContext extends ParserRuleContext {
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public WhileBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileBlock; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterWhileBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitWhileBlock(this);
		}
	}

	public final WhileBlockContext whileBlock() throws RecognitionException {
		WhileBlockContext _localctx = new WhileBlockContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_whileBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(996);
			match(T__90);
			setState(997);
			condition();
			setState(998);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ForBlockContext extends ParserRuleContext {
		public PatternContext pattern() {
			return getRuleContext(PatternContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ForBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forBlock; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterForBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitForBlock(this);
		}
	}

	public final ForBlockContext forBlock() throws RecognitionException {
		ForBlockContext _localctx = new ForBlockContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_forBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1000);
			match(T__19);
			setState(1001);
			pattern();
			setState(1002);
			match(T__91);
			setState(1003);
			expression();
			setState(1004);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class JumpStatementContext extends ParserRuleContext {
		public BreakExpressionContext breakExpression() {
			return getRuleContext(BreakExpressionContext.class,0);
		}
		public ContinueExpressionContext continueExpression() {
			return getRuleContext(ContinueExpressionContext.class,0);
		}
		public ReturnExpressionContext returnExpression() {
			return getRuleContext(ReturnExpressionContext.class,0);
		}
		public JumpStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_jumpStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterJumpStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitJumpStatement(this);
		}
	}

	public final JumpStatementContext jumpStatement() throws RecognitionException {
		JumpStatementContext _localctx = new JumpStatementContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_jumpStatement);
		try {
			setState(1009);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__92:
				enterOuterAlt(_localctx, 1);
				{
				setState(1006);
				breakExpression();
				}
				break;
			case T__93:
				enterOuterAlt(_localctx, 2);
				{
				setState(1007);
				continueExpression();
				}
				break;
			case T__94:
				enterOuterAlt(_localctx, 3);
				{
				setState(1008);
				returnExpression();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BreakExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BreakExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_breakExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterBreakExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitBreakExpression(this);
		}
	}

	public final BreakExpressionContext breakExpression() throws RecognitionException {
		BreakExpressionContext _localctx = new BreakExpressionContext(_ctx, getState());
		enterRule(_localctx, 188, RULE_breakExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1011);
			match(T__92);
			setState(1013);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
				{
				setState(1012);
				expression();
				}
			}

			setState(1015);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ContinueExpressionContext extends ParserRuleContext {
		public ContinueExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_continueExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterContinueExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitContinueExpression(this);
		}
	}

	public final ContinueExpressionContext continueExpression() throws RecognitionException {
		ContinueExpressionContext _localctx = new ContinueExpressionContext(_ctx, getState());
		enterRule(_localctx, 190, RULE_continueExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1017);
			match(T__93);
			setState(1018);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReturnExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ReturnExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterReturnExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitReturnExpression(this);
		}
	}

	public final ReturnExpressionContext returnExpression() throws RecognitionException {
		ReturnExpressionContext _localctx = new ReturnExpressionContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_returnExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1020);
			match(T__94);
			setState(1022);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1301821768401408L) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 273870048803L) != 0)) {
				{
				setState(1021);
				expression();
				}
			}

			setState(1024);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AwaitExpressionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AwaitExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_awaitExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterAwaitExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitAwaitExpression(this);
		}
	}

	public final AwaitExpressionContext awaitExpression() throws RecognitionException {
		AwaitExpressionContext _localctx = new AwaitExpressionContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_awaitExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1026);
			match(T__95);
			setState(1027);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnsafeExpressionContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public UnsafeExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unsafeExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterUnsafeExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitUnsafeExpression(this);
		}
	}

	public final UnsafeExpressionContext unsafeExpression() throws RecognitionException {
		UnsafeExpressionContext _localctx = new UnsafeExpressionContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_unsafeExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1029);
			match(T__96);
			setState(1030);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VisibilityContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public VisibilityContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_visibility; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterVisibility(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitVisibility(this);
		}
	}

	public final VisibilityContext visibility() throws RecognitionException {
		VisibilityContext _localctx = new VisibilityContext(_ctx, getState());
		enterRule(_localctx, 198, RULE_visibility);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1032);
			match(T__97);
			setState(1043);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,107,_ctx) ) {
			case 1:
				{
				setState(1033);
				match(T__8);
				setState(1034);
				match(T__98);
				setState(1035);
				match(T__9);
				}
				break;
			case 2:
				{
				setState(1036);
				match(T__8);
				setState(1037);
				match(T__99);
				setState(1038);
				match(T__9);
				}
				break;
			case 3:
				{
				setState(1039);
				match(T__8);
				setState(1040);
				identifier();
				setState(1041);
				match(T__9);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QualifiedNameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public QualifiedNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedName; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterQualifiedName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitQualifiedName(this);
		}
	}

	public final QualifiedNameContext qualifiedName() throws RecognitionException {
		QualifiedNameContext _localctx = new QualifiedNameContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_qualifiedName);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1045);
			identifier();
			setState(1050);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,108,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1046);
					match(T__100);
					setState(1047);
					identifier();
					}
					} 
				}
				setState(1052);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,108,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(NovaParser.Identifier, 0); }
		public TerminalNode Keyword() { return getToken(NovaParser.Keyword, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).enterIdentifier(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof NovaListener ) ((NovaListener)listener).exitIdentifier(this);
		}
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_identifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1053);
			_la = _input.LA(1);
			if ( !(_la==Keyword || _la==Identifier) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 41:
			return logicalExpression_sempred((LogicalExpressionContext)_localctx, predIndex);
		case 42:
			return comparisonExpression_sempred((ComparisonExpressionContext)_localctx, predIndex);
		case 43:
			return bitwiseExpression_sempred((BitwiseExpressionContext)_localctx, predIndex);
		case 44:
			return arithmeticExpression_sempred((ArithmeticExpressionContext)_localctx, predIndex);
		case 45:
			return termExpression_sempred((TermExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean logicalExpression_sempred(LogicalExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean comparisonExpression_sempred(ComparisonExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean bitwiseExpression_sempred(BitwiseExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean arithmeticExpression_sempred(ArithmeticExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean termExpression_sempred(TermExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001q\u0420\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007\u001e"+
		"\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007\"\u0002"+
		"#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007\'\u0002"+
		"(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007+\u0002,\u0007,\u0002"+
		"-\u0007-\u0002.\u0007.\u0002/\u0007/\u00020\u00070\u00021\u00071\u0002"+
		"2\u00072\u00023\u00073\u00024\u00074\u00025\u00075\u00026\u00076\u0002"+
		"7\u00077\u00028\u00078\u00029\u00079\u0002:\u0007:\u0002;\u0007;\u0002"+
		"<\u0007<\u0002=\u0007=\u0002>\u0007>\u0002?\u0007?\u0002@\u0007@\u0002"+
		"A\u0007A\u0002B\u0007B\u0002C\u0007C\u0002D\u0007D\u0002E\u0007E\u0002"+
		"F\u0007F\u0002G\u0007G\u0002H\u0007H\u0002I\u0007I\u0002J\u0007J\u0002"+
		"K\u0007K\u0002L\u0007L\u0002M\u0007M\u0002N\u0007N\u0002O\u0007O\u0002"+
		"P\u0007P\u0002Q\u0007Q\u0002R\u0007R\u0002S\u0007S\u0002T\u0007T\u0002"+
		"U\u0007U\u0002V\u0007V\u0002W\u0007W\u0002X\u0007X\u0002Y\u0007Y\u0002"+
		"Z\u0007Z\u0002[\u0007[\u0002\\\u0007\\\u0002]\u0007]\u0002^\u0007^\u0002"+
		"_\u0007_\u0002`\u0007`\u0002a\u0007a\u0002b\u0007b\u0002c\u0007c\u0002"+
		"d\u0007d\u0002e\u0007e\u0001\u0000\u0003\u0000\u00ce\b\u0000\u0001\u0000"+
		"\u0005\u0000\u00d1\b\u0000\n\u0000\f\u0000\u00d4\t\u0000\u0001\u0000\u0005"+
		"\u0000\u00d7\b\u0000\n\u0000\f\u0000\u00da\t\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0003\u0002\u00e6\b\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002\u00ee\b\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0003\u0003\u00f8\b\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0003\u0004\u00fd\b\u0004\u0001\u0004\u0001\u0004\u0003\u0004"+
		"\u0101\b\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u0105\b\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003"+
		"\u0004\u010d\b\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u0111\b\u0004"+
		"\u0001\u0004\u0001\u0004\u0003\u0004\u0115\b\u0004\u0001\u0004\u0001\u0004"+
		"\u0003\u0004\u0119\b\u0004\u0001\u0005\u0001\u0005\u0003\u0005\u011d\b"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0005"+
		"\u0006\u0124\b\u0006\n\u0006\f\u0006\u0127\t\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007\u012e\b\u0007\u0001\b"+
		"\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0003\t\u0136\b\t\u0001\t\u0001"+
		"\t\u0003\t\u013a\b\t\u0001\t\u0001\t\u0005\t\u013e\b\t\n\t\f\t\u0141\t"+
		"\t\u0001\t\u0001\t\u0001\n\u0003\n\u0146\b\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u014f\b\u000b\u0001"+
		"\u000b\u0001\u000b\u0003\u000b\u0153\b\u000b\u0001\u000b\u0001\u000b\u0005"+
		"\u000b\u0157\b\u000b\n\u000b\f\u000b\u015a\t\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0003\f\u0160\b\f\u0001\r\u0001\r\u0003\r\u0164\b\r\u0001"+
		"\r\u0001\r\u0003\r\u0168\b\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0003"+
		"\u000e\u016e\b\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u0173"+
		"\b\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u0177\b\u000e\n\u000e\f\u000e"+
		"\u017a\t\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0003\u000f"+
		"\u0180\b\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u0185\b"+
		"\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u0189\b\u0010\u0001\u0010\u0001"+
		"\u0010\u0005\u0010\u018d\b\u0010\n\u0010\f\u0010\u0190\t\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0003\u0011\u0199\b\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012"+
		"\u019e\b\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014"+
		"\u01b0\b\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u01b4\b\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0005"+
		"\u0014\u01bc\b\u0014\n\u0014\f\u0014\u01bf\t\u0014\u0001\u0014\u0003\u0014"+
		"\u01c2\b\u0014\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0003\u0016"+
		"\u01ce\b\u0016\u0001\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0018"+
		"\u0001\u0018\u0001\u0018\u0003\u0018\u01d7\b\u0018\u0001\u0019\u0001\u0019"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0005\u001a\u01de\b\u001a\n\u001a"+
		"\f\u001a\u01e1\t\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0003\u001b"+
		"\u01e6\b\u001b\u0001\u001b\u0001\u001b\u0003\u001b\u01ea\b\u001b\u0001"+
		"\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0004\u001c\u01f0\b\u001c\u000b"+
		"\u001c\f\u001c\u01f1\u0003\u001c\u01f4\b\u001c\u0001\u001c\u0001\u001c"+
		"\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d"+
		"\u0001\u001e\u0001\u001e\u0003\u001e\u0200\b\u001e\u0001\u001e\u0003\u001e"+
		"\u0203\b\u001e\u0001\u001e\u0001\u001e\u0001\u001f\u0001\u001f\u0003\u001f"+
		"\u0209\b\u001f\u0001 \u0001 \u0001 \u0001 \u0005 \u020f\b \n \f \u0212"+
		"\t \u0001 \u0001 \u0001!\u0001!\u0001!\u0003!\u0219\b!\u0001\"\u0001\""+
		"\u0001\"\u0005\"\u021e\b\"\n\"\f\"\u0221\t\"\u0001#\u0001#\u0001#\u0001"+
		"#\u0001#\u0003#\u0228\b#\u0001#\u0001#\u0003#\u022c\b#\u0001$\u0001$\u0001"+
		"$\u0005$\u0231\b$\n$\f$\u0234\t$\u0001%\u0001%\u0001%\u0001&\u0001&\u0001"+
		"\'\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0001\'\u0003"+
		"\'\u0244\b\'\u0001(\u0001(\u0001)\u0001)\u0001)\u0001)\u0001)\u0001)\u0005"+
		")\u024e\b)\n)\f)\u0251\t)\u0001*\u0001*\u0001*\u0001*\u0001*\u0001*\u0005"+
		"*\u0259\b*\n*\f*\u025c\t*\u0001+\u0001+\u0001+\u0001+\u0001+\u0001+\u0005"+
		"+\u0264\b+\n+\f+\u0267\t+\u0001,\u0001,\u0001,\u0001,\u0001,\u0001,\u0005"+
		",\u026f\b,\n,\f,\u0272\t,\u0001-\u0001-\u0001-\u0001-\u0001-\u0001-\u0005"+
		"-\u027a\b-\n-\f-\u027d\t-\u0001.\u0001.\u0001.\u0003.\u0282\b.\u0001/"+
		"\u0001/\u0001/\u0001/\u0001/\u0001/\u0001/\u0001/\u0003/\u028c\b/\u0001"+
		"/\u0001/\u0003/\u0290\b/\u00010\u00010\u00010\u00030\u0295\b0\u00010\u0001"+
		"0\u00010\u00010\u00010\u00010\u00010\u00010\u00010\u00010\u00010\u0001"+
		"0\u00010\u00010\u00010\u00010\u00010\u00010\u00010\u00010\u00010\u0003"+
		"0\u02ac\b0\u00010\u00030\u02af\b0\u00011\u00011\u00011\u00011\u00011\u0001"+
		"1\u00011\u00011\u00011\u00011\u00011\u00011\u00011\u00011\u00011\u0001"+
		"1\u00031\u02c1\b1\u00012\u00012\u00012\u00012\u00013\u00013\u00013\u0001"+
		"3\u00013\u00013\u00033\u02cd\b3\u00014\u00014\u00015\u00015\u00016\u0001"+
		"6\u00017\u00017\u00017\u00037\u02d8\b7\u00017\u00017\u00018\u00018\u0001"+
		"9\u00019\u0001:\u0001:\u0001;\u0001;\u0001<\u0001<\u0005<\u02e6\b<\n<"+
		"\f<\u02e9\t<\u0001<\u0003<\u02ec\b<\u0001<\u0001<\u0001=\u0001=\u0001"+
		"=\u0001=\u0001=\u0001=\u0001=\u0003=\u02f7\b=\u0001>\u0001>\u0003>\u02fb"+
		"\b>\u0001?\u0003?\u02fe\b?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001"+
		"?\u0003?\u0307\b?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0003?\u030f"+
		"\b?\u0001?\u0001?\u0003?\u0313\b?\u0001@\u0001@\u0001@\u0001@\u0003@\u0319"+
		"\b@\u0001A\u0003A\u031c\bA\u0001A\u0001A\u0001B\u0001B\u0001B\u0001B\u0005"+
		"B\u0324\bB\nB\fB\u0327\tB\u0001B\u0001B\u0001C\u0001C\u0001C\u0001C\u0001"+
		"C\u0001C\u0001C\u0001C\u0001C\u0001C\u0005C\u0335\bC\nC\fC\u0338\tC\u0003"+
		"C\u033a\bC\u0001C\u0001C\u0001D\u0001D\u0001E\u0001E\u0001E\u0001F\u0001"+
		"F\u0001F\u0001F\u0001F\u0001G\u0001G\u0003G\u034a\bG\u0001G\u0001G\u0001"+
		"G\u0003G\u034f\bG\u0001G\u0001G\u0001H\u0001H\u0001H\u0001H\u0004H\u0357"+
		"\bH\u000bH\fH\u0358\u0003H\u035b\bH\u0001H\u0001H\u0001I\u0001I\u0001"+
		"I\u0001I\u0005I\u0363\bI\nI\fI\u0366\tI\u0003I\u0368\bI\u0001I\u0001I"+
		"\u0001J\u0001J\u0001J\u0001J\u0001J\u0005J\u0371\bJ\nJ\fJ\u0374\tJ\u0003"+
		"J\u0376\bJ\u0001J\u0001J\u0001K\u0001K\u0001K\u0003K\u037d\bK\u0001L\u0001"+
		"L\u0001L\u0001L\u0001L\u0003L\u0384\bL\u0001M\u0001M\u0001M\u0003M\u0389"+
		"\bM\u0001M\u0001M\u0001N\u0001N\u0001N\u0005N\u0390\bN\nN\fN\u0393\tN"+
		"\u0001O\u0001O\u0001O\u0001O\u0001P\u0001P\u0001P\u0001P\u0001Q\u0001"+
		"Q\u0001Q\u0001Q\u0001Q\u0001Q\u0003Q\u03a3\bQ\u0003Q\u03a5\bQ\u0001R\u0001"+
		"R\u0001R\u0001R\u0001R\u0003R\u03ac\bR\u0001S\u0001S\u0003S\u03b0\bS\u0001"+
		"T\u0001T\u0001T\u0001T\u0001T\u0001U\u0001U\u0001U\u0001U\u0005U\u03bb"+
		"\bU\nU\fU\u03be\tU\u0001U\u0001U\u0001V\u0001V\u0001V\u0001V\u0005V\u03c6"+
		"\bV\nV\fV\u03c9\tV\u0001V\u0001V\u0001W\u0001W\u0001W\u0001W\u0001W\u0001"+
		"W\u0001W\u0001W\u0001W\u0003W\u03d6\bW\u0001X\u0001X\u0001X\u0003X\u03db"+
		"\bX\u0001Y\u0001Y\u0001Y\u0003Y\u03e0\bY\u0001Z\u0001Z\u0001Z\u0001[\u0001"+
		"[\u0001[\u0001[\u0001\\\u0001\\\u0001\\\u0001\\\u0001\\\u0001\\\u0001"+
		"]\u0001]\u0001]\u0003]\u03f2\b]\u0001^\u0001^\u0003^\u03f6\b^\u0001^\u0001"+
		"^\u0001_\u0001_\u0001_\u0001`\u0001`\u0003`\u03ff\b`\u0001`\u0001`\u0001"+
		"a\u0001a\u0001a\u0001b\u0001b\u0001b\u0001c\u0001c\u0001c\u0001c\u0001"+
		"c\u0001c\u0001c\u0001c\u0001c\u0001c\u0001c\u0003c\u0414\bc\u0001d\u0001"+
		"d\u0001d\u0005d\u0419\bd\nd\fd\u041c\td\u0001e\u0001e\u0001e\u0000\u0005"+
		"RTVXZf\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018"+
		"\u001a\u001c\u001e \"$&(*,.02468:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080"+
		"\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098"+
		"\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0"+
		"\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8"+
		"\u00ca\u0000\f\u0002\u0000\u0016\u0016\u001a)\u0001\u00003<\u0001\u0000"+
		"=>\u0002\u0000*+?B\u0002\u0000//CF\u0001\u0000GH\u0001\u0000IK\u0001\u0000"+
		"OP\u0001\u0000hk\u0001\u0000QR\u0001\u000022\u0001\u0000fg\u0459\u0000"+
		"\u00cd\u0001\u0000\u0000\u0000\u0002\u00dd\u0001\u0000\u0000\u0000\u0004"+
		"\u00ed\u0001\u0000\u0000\u0000\u0006\u00f7\u0001\u0000\u0000\u0000\b\u0118"+
		"\u0001\u0000\u0000\u0000\n\u011a\u0001\u0000\u0000\u0000\f\u0120\u0001"+
		"\u0000\u0000\u0000\u000e\u0128\u0001\u0000\u0000\u0000\u0010\u012f\u0001"+
		"\u0000\u0000\u0000\u0012\u0132\u0001\u0000\u0000\u0000\u0014\u0145\u0001"+
		"\u0000\u0000\u0000\u0016\u014b\u0001\u0000\u0000\u0000\u0018\u015f\u0001"+
		"\u0000\u0000\u0000\u001a\u0161\u0001\u0000\u0000\u0000\u001c\u016b\u0001"+
		"\u0000\u0000\u0000\u001e\u017f\u0001\u0000\u0000\u0000 \u0181\u0001\u0000"+
		"\u0000\u0000\"\u0193\u0001\u0000\u0000\u0000$\u019a\u0001\u0000\u0000"+
		"\u0000&\u01a3\u0001\u0000\u0000\u0000(\u01c1\u0001\u0000\u0000\u0000*"+
		"\u01c3\u0001\u0000\u0000\u0000,\u01cd\u0001\u0000\u0000\u0000.\u01cf\u0001"+
		"\u0000\u0000\u00000\u01d1\u0001\u0000\u0000\u00002\u01d8\u0001\u0000\u0000"+
		"\u00004\u01da\u0001\u0000\u0000\u00006\u01e2\u0001\u0000\u0000\u00008"+
		"\u01eb\u0001\u0000\u0000\u0000:\u01f7\u0001\u0000\u0000\u0000<\u01fd\u0001"+
		"\u0000\u0000\u0000>\u0206\u0001\u0000\u0000\u0000@\u020a\u0001\u0000\u0000"+
		"\u0000B\u0215\u0001\u0000\u0000\u0000D\u021a\u0001\u0000\u0000\u0000F"+
		"\u022b\u0001\u0000\u0000\u0000H\u022d\u0001\u0000\u0000\u0000J\u0235\u0001"+
		"\u0000\u0000\u0000L\u0238\u0001\u0000\u0000\u0000N\u0243\u0001\u0000\u0000"+
		"\u0000P\u0245\u0001\u0000\u0000\u0000R\u0247\u0001\u0000\u0000\u0000T"+
		"\u0252\u0001\u0000\u0000\u0000V\u025d\u0001\u0000\u0000\u0000X\u0268\u0001"+
		"\u0000\u0000\u0000Z\u0273\u0001\u0000\u0000\u0000\\\u0281\u0001\u0000"+
		"\u0000\u0000^\u028f\u0001\u0000\u0000\u0000`\u02ae\u0001\u0000\u0000\u0000"+
		"b\u02c0\u0001\u0000\u0000\u0000d\u02c2\u0001\u0000\u0000\u0000f\u02cc"+
		"\u0001\u0000\u0000\u0000h\u02ce\u0001\u0000\u0000\u0000j\u02d0\u0001\u0000"+
		"\u0000\u0000l\u02d2\u0001\u0000\u0000\u0000n\u02d4\u0001\u0000\u0000\u0000"+
		"p\u02db\u0001\u0000\u0000\u0000r\u02dd\u0001\u0000\u0000\u0000t\u02df"+
		"\u0001\u0000\u0000\u0000v\u02e1\u0001\u0000\u0000\u0000x\u02e3\u0001\u0000"+
		"\u0000\u0000z\u02f6\u0001\u0000\u0000\u0000|\u02fa\u0001\u0000\u0000\u0000"+
		"~\u0312\u0001\u0000\u0000\u0000\u0080\u0318\u0001\u0000\u0000\u0000\u0082"+
		"\u031b\u0001\u0000\u0000\u0000\u0084\u031f\u0001\u0000\u0000\u0000\u0086"+
		"\u032a\u0001\u0000\u0000\u0000\u0088\u033d\u0001\u0000\u0000\u0000\u008a"+
		"\u033f\u0001\u0000\u0000\u0000\u008c\u0342\u0001\u0000\u0000\u0000\u008e"+
		"\u0347\u0001\u0000\u0000\u0000\u0090\u0352\u0001\u0000\u0000\u0000\u0092"+
		"\u035e\u0001\u0000\u0000\u0000\u0094\u036b\u0001\u0000\u0000\u0000\u0096"+
		"\u0379\u0001\u0000\u0000\u0000\u0098\u037e\u0001\u0000\u0000\u0000\u009a"+
		"\u0385\u0001\u0000\u0000\u0000\u009c\u038c\u0001\u0000\u0000\u0000\u009e"+
		"\u0394\u0001\u0000\u0000\u0000\u00a0\u0398\u0001\u0000\u0000\u0000\u00a2"+
		"\u039c\u0001\u0000\u0000\u0000\u00a4\u03a6\u0001\u0000\u0000\u0000\u00a6"+
		"\u03af\u0001\u0000\u0000\u0000\u00a8\u03b1\u0001\u0000\u0000\u0000\u00aa"+
		"\u03b6\u0001\u0000\u0000\u0000\u00ac\u03c1\u0001\u0000\u0000\u0000\u00ae"+
		"\u03d5\u0001\u0000\u0000\u0000\u00b0\u03da\u0001\u0000\u0000\u0000\u00b2"+
		"\u03df\u0001\u0000\u0000\u0000\u00b4\u03e1\u0001\u0000\u0000\u0000\u00b6"+
		"\u03e4\u0001\u0000\u0000\u0000\u00b8\u03e8\u0001\u0000\u0000\u0000\u00ba"+
		"\u03f1\u0001\u0000\u0000\u0000\u00bc\u03f3\u0001\u0000\u0000\u0000\u00be"+
		"\u03f9\u0001\u0000\u0000\u0000\u00c0\u03fc\u0001\u0000\u0000\u0000\u00c2"+
		"\u0402\u0001\u0000\u0000\u0000\u00c4\u0405\u0001\u0000\u0000\u0000\u00c6"+
		"\u0408\u0001\u0000\u0000\u0000\u00c8\u0415\u0001\u0000\u0000\u0000\u00ca"+
		"\u041d\u0001\u0000\u0000\u0000\u00cc\u00ce\u0003\u0002\u0001\u0000\u00cd"+
		"\u00cc\u0001\u0000\u0000\u0000\u00cd\u00ce\u0001\u0000\u0000\u0000\u00ce"+
		"\u00d2\u0001\u0000\u0000\u0000\u00cf\u00d1\u0003\u0004\u0002\u0000\u00d0"+
		"\u00cf\u0001\u0000\u0000\u0000\u00d1\u00d4\u0001\u0000\u0000\u0000\u00d2"+
		"\u00d0\u0001\u0000\u0000\u0000\u00d2\u00d3\u0001\u0000\u0000\u0000\u00d3"+
		"\u00d8\u0001\u0000\u0000\u0000\u00d4\u00d2\u0001\u0000\u0000\u0000\u00d5"+
		"\u00d7\u0003\u0006\u0003\u0000\u00d6\u00d5\u0001\u0000\u0000\u0000\u00d7"+
		"\u00da\u0001\u0000\u0000\u0000\u00d8\u00d6\u0001\u0000\u0000\u0000\u00d8"+
		"\u00d9\u0001\u0000\u0000\u0000\u00d9\u00db\u0001\u0000\u0000\u0000\u00da"+
		"\u00d8\u0001\u0000\u0000\u0000\u00db\u00dc\u0005\u0000\u0000\u0001\u00dc"+
		"\u0001\u0001\u0000\u0000\u0000\u00dd\u00de\u0005\u0001\u0000\u0000\u00de"+
		"\u00df\u0003\u00c8d\u0000\u00df\u00e0\u0005\u0002\u0000\u0000\u00e0\u0003"+
		"\u0001\u0000\u0000\u0000\u00e1\u00e2\u0005\u0003\u0000\u0000\u00e2\u00e5"+
		"\u0003\u00c8d\u0000\u00e3\u00e4\u0005\u0004\u0000\u0000\u00e4\u00e6\u0003"+
		"\u00cae\u0000\u00e5\u00e3\u0001\u0000\u0000\u0000\u00e5\u00e6\u0001\u0000"+
		"\u0000\u0000\u00e6\u00e7\u0001\u0000\u0000\u0000\u00e7\u00e8\u0005\u0002"+
		"\u0000\u0000\u00e8\u00ee\u0001\u0000\u0000\u0000\u00e9\u00ea\u0005\u0005"+
		"\u0000\u0000\u00ea\u00eb\u0003\u00c8d\u0000\u00eb\u00ec\u0005\u0002\u0000"+
		"\u0000\u00ec\u00ee\u0001\u0000\u0000\u0000\u00ed\u00e1\u0001\u0000\u0000"+
		"\u0000\u00ed\u00e9\u0001\u0000\u0000\u0000\u00ee\u0005\u0001\u0000\u0000"+
		"\u0000\u00ef\u00f8\u0003\b\u0004\u0000\u00f0\u00f8\u0003\u0012\t\u0000"+
		"\u00f1\u00f8\u0003\u0016\u000b\u0000\u00f2\u00f8\u0003\u001c\u000e\u0000"+
		"\u00f3\u00f8\u0003 \u0010\u0000\u00f4\u00f8\u0003$\u0012\u0000\u00f5\u00f8"+
		"\u0003&\u0013\u0000\u00f6\u00f8\u0003(\u0014\u0000\u00f7\u00ef\u0001\u0000"+
		"\u0000\u0000\u00f7\u00f0\u0001\u0000\u0000\u0000\u00f7\u00f1\u0001\u0000"+
		"\u0000\u0000\u00f7\u00f2\u0001\u0000\u0000\u0000\u00f7\u00f3\u0001\u0000"+
		"\u0000\u0000\u00f7\u00f4\u0001\u0000\u0000\u0000\u00f7\u00f5\u0001\u0000"+
		"\u0000\u0000\u00f7\u00f6\u0001\u0000\u0000\u0000\u00f8\u0007\u0001\u0000"+
		"\u0000\u0000\u00f9\u00fa\u0005\u0006\u0000\u0000\u00fa\u00fc\u0003\u00ca"+
		"e\u0000\u00fb\u00fd\u0003@ \u0000\u00fc\u00fb\u0001\u0000\u0000\u0000"+
		"\u00fc\u00fd\u0001\u0000\u0000\u0000\u00fd\u00fe\u0001\u0000\u0000\u0000"+
		"\u00fe\u0100\u0003\n\u0005\u0000\u00ff\u0101\u0003\u0010\b\u0000\u0100"+
		"\u00ff\u0001\u0000\u0000\u0000\u0100\u0101\u0001\u0000\u0000\u0000\u0101"+
		"\u0104\u0001\u0000\u0000\u0000\u0102\u0103\u0005\u0007\u0000\u0000\u0103"+
		"\u0105\u0003D\"\u0000\u0104\u0102\u0001\u0000\u0000\u0000\u0104\u0105"+
		"\u0001\u0000\u0000\u0000\u0105\u0106\u0001\u0000\u0000\u0000\u0106\u0107"+
		"\u0003x<\u0000\u0107\u0119\u0001\u0000\u0000\u0000\u0108\u0109\u0005\b"+
		"\u0000\u0000\u0109\u010a\u0005\u0006\u0000\u0000\u010a\u010c\u0003\u00ca"+
		"e\u0000\u010b\u010d\u0003@ \u0000\u010c\u010b\u0001\u0000\u0000\u0000"+
		"\u010c\u010d\u0001\u0000\u0000\u0000\u010d\u010e\u0001\u0000\u0000\u0000"+
		"\u010e\u0110\u0003\n\u0005\u0000\u010f\u0111\u0003\u0010\b\u0000\u0110"+
		"\u010f\u0001\u0000\u0000\u0000\u0110\u0111\u0001\u0000\u0000\u0000\u0111"+
		"\u0114\u0001\u0000\u0000\u0000\u0112\u0113\u0005\u0007\u0000\u0000\u0113"+
		"\u0115\u0003D\"\u0000\u0114\u0112\u0001\u0000\u0000\u0000\u0114\u0115"+
		"\u0001\u0000\u0000\u0000\u0115\u0116\u0001\u0000\u0000\u0000\u0116\u0117"+
		"\u0003x<\u0000\u0117\u0119\u0001\u0000\u0000\u0000\u0118\u00f9\u0001\u0000"+
		"\u0000\u0000\u0118\u0108\u0001\u0000\u0000\u0000\u0119\t\u0001\u0000\u0000"+
		"\u0000\u011a\u011c\u0005\t\u0000\u0000\u011b\u011d\u0003\f\u0006\u0000"+
		"\u011c\u011b\u0001\u0000\u0000\u0000\u011c\u011d\u0001\u0000\u0000\u0000"+
		"\u011d\u011e\u0001\u0000\u0000\u0000\u011e\u011f\u0005\n\u0000\u0000\u011f"+
		"\u000b\u0001\u0000\u0000\u0000\u0120\u0125\u0003\u000e\u0007\u0000\u0121"+
		"\u0122\u0005\u000b\u0000\u0000\u0122\u0124\u0003\u000e\u0007\u0000\u0123"+
		"\u0121\u0001\u0000\u0000\u0000\u0124\u0127\u0001\u0000\u0000\u0000\u0125"+
		"\u0123\u0001\u0000\u0000\u0000\u0125\u0126\u0001\u0000\u0000\u0000\u0126"+
		"\r\u0001\u0000\u0000\u0000\u0127\u0125\u0001\u0000\u0000\u0000\u0128\u0129"+
		"\u0003\u00cae\u0000\u0129\u012a\u0005\f\u0000\u0000\u012a\u012d\u0003"+
		",\u0016\u0000\u012b\u012c\u0005\r\u0000\u0000\u012c\u012e\u0003L&\u0000"+
		"\u012d\u012b\u0001\u0000\u0000\u0000\u012d\u012e\u0001\u0000\u0000\u0000"+
		"\u012e\u000f\u0001\u0000\u0000\u0000\u012f\u0130\u0005\u000e\u0000\u0000"+
		"\u0130\u0131\u0003,\u0016\u0000\u0131\u0011\u0001\u0000\u0000\u0000\u0132"+
		"\u0133\u0005\u000f\u0000\u0000\u0133\u0135\u0003\u00cae\u0000\u0134\u0136"+
		"\u0003@ \u0000\u0135\u0134\u0001\u0000\u0000\u0000\u0135\u0136\u0001\u0000"+
		"\u0000\u0000\u0136\u0139\u0001\u0000\u0000\u0000\u0137\u0138\u0005\u0007"+
		"\u0000\u0000\u0138\u013a\u0003D\"\u0000\u0139\u0137\u0001\u0000\u0000"+
		"\u0000\u0139\u013a\u0001\u0000\u0000\u0000\u013a\u013b\u0001\u0000\u0000"+
		"\u0000\u013b\u013f\u0005\u0010\u0000\u0000\u013c\u013e\u0003\u0014\n\u0000"+
		"\u013d\u013c\u0001\u0000\u0000\u0000\u013e\u0141\u0001\u0000\u0000\u0000"+
		"\u013f\u013d\u0001\u0000\u0000\u0000\u013f\u0140\u0001\u0000\u0000\u0000"+
		"\u0140\u0142\u0001\u0000\u0000\u0000\u0141\u013f\u0001\u0000\u0000\u0000"+
		"\u0142\u0143\u0005\u0011\u0000\u0000\u0143\u0013\u0001\u0000\u0000\u0000"+
		"\u0144\u0146\u0003\u00c6c\u0000\u0145\u0144\u0001\u0000\u0000\u0000\u0145"+
		"\u0146\u0001\u0000\u0000\u0000\u0146\u0147\u0001\u0000\u0000\u0000\u0147"+
		"\u0148\u0003\u00cae\u0000\u0148\u0149\u0005\f\u0000\u0000\u0149\u014a"+
		"\u0003,\u0016\u0000\u014a\u0015\u0001\u0000\u0000\u0000\u014b\u014c\u0005"+
		"\u0012\u0000\u0000\u014c\u014e\u0003\u00cae\u0000\u014d\u014f\u0003@ "+
		"\u0000\u014e\u014d\u0001\u0000\u0000\u0000\u014e\u014f\u0001\u0000\u0000"+
		"\u0000\u014f\u0152\u0001\u0000\u0000\u0000\u0150\u0151\u0005\f\u0000\u0000"+
		"\u0151\u0153\u0003H$\u0000\u0152\u0150\u0001\u0000\u0000\u0000\u0152\u0153"+
		"\u0001\u0000\u0000\u0000\u0153\u0154\u0001\u0000\u0000\u0000\u0154\u0158"+
		"\u0005\u0010\u0000\u0000\u0155\u0157\u0003\u0018\f\u0000\u0156\u0155\u0001"+
		"\u0000\u0000\u0000\u0157\u015a\u0001\u0000\u0000\u0000\u0158\u0156\u0001"+
		"\u0000\u0000\u0000\u0158\u0159\u0001\u0000\u0000\u0000\u0159\u015b\u0001"+
		"\u0000\u0000\u0000\u015a\u0158\u0001\u0000\u0000\u0000\u015b\u015c\u0005"+
		"\u0011\u0000\u0000\u015c\u0017\u0001\u0000\u0000\u0000\u015d\u0160\u0003"+
		"\b\u0004\u0000\u015e\u0160\u0003\u001a\r\u0000\u015f\u015d\u0001\u0000"+
		"\u0000\u0000\u015f\u015e\u0001\u0000\u0000\u0000\u0160\u0019\u0001\u0000"+
		"\u0000\u0000\u0161\u0163\u0003\u00cae\u0000\u0162\u0164\u0003@ \u0000"+
		"\u0163\u0162\u0001\u0000\u0000\u0000\u0163\u0164\u0001\u0000\u0000\u0000"+
		"\u0164\u0165\u0001\u0000\u0000\u0000\u0165\u0167\u0003\n\u0005\u0000\u0166"+
		"\u0168\u0003\u0010\b\u0000\u0167\u0166\u0001\u0000\u0000\u0000\u0167\u0168"+
		"\u0001\u0000\u0000\u0000\u0168\u0169\u0001\u0000\u0000\u0000\u0169\u016a"+
		"\u0005\u0002\u0000\u0000\u016a\u001b\u0001\u0000\u0000\u0000\u016b\u016d"+
		"\u0005\u0013\u0000\u0000\u016c\u016e\u0003@ \u0000\u016d\u016c\u0001\u0000"+
		"\u0000\u0000\u016d\u016e\u0001\u0000\u0000\u0000\u016e\u016f\u0001\u0000"+
		"\u0000\u0000\u016f\u0172\u0003,\u0016\u0000\u0170\u0171\u0005\u0014\u0000"+
		"\u0000\u0171\u0173\u0003,\u0016\u0000\u0172\u0170\u0001\u0000\u0000\u0000"+
		"\u0172\u0173\u0001\u0000\u0000\u0000\u0173\u0174\u0001\u0000\u0000\u0000"+
		"\u0174\u0178\u0005\u0010\u0000\u0000\u0175\u0177\u0003\u001e\u000f\u0000"+
		"\u0176\u0175\u0001\u0000\u0000\u0000\u0177\u017a\u0001\u0000\u0000\u0000"+
		"\u0178\u0176\u0001\u0000\u0000\u0000\u0178\u0179\u0001\u0000\u0000\u0000"+
		"\u0179\u017b\u0001\u0000\u0000\u0000\u017a\u0178\u0001\u0000\u0000\u0000"+
		"\u017b\u017c\u0005\u0011\u0000\u0000\u017c\u001d\u0001\u0000\u0000\u0000"+
		"\u017d\u0180\u0003\b\u0004\u0000\u017e\u0180\u0003&\u0013\u0000\u017f"+
		"\u017d\u0001\u0000\u0000\u0000\u017f\u017e\u0001\u0000\u0000\u0000\u0180"+
		"\u001f\u0001\u0000\u0000\u0000\u0181\u0182\u0005\u0015\u0000\u0000\u0182"+
		"\u0184\u0003\u00cae\u0000\u0183\u0185\u0003@ \u0000\u0184\u0183\u0001"+
		"\u0000\u0000\u0000\u0184\u0185\u0001\u0000\u0000\u0000\u0185\u0188\u0001"+
		"\u0000\u0000\u0000\u0186\u0187\u0005\u0007\u0000\u0000\u0187\u0189\u0003"+
		"D\"\u0000\u0188\u0186\u0001\u0000\u0000\u0000\u0188\u0189\u0001\u0000"+
		"\u0000\u0000\u0189\u018a\u0001\u0000\u0000\u0000\u018a\u018e\u0005\u0010"+
		"\u0000\u0000\u018b\u018d\u0003\"\u0011\u0000\u018c\u018b\u0001\u0000\u0000"+
		"\u0000\u018d\u0190\u0001\u0000\u0000\u0000\u018e\u018c\u0001\u0000\u0000"+
		"\u0000\u018e\u018f\u0001\u0000\u0000\u0000\u018f\u0191\u0001\u0000\u0000"+
		"\u0000\u0190\u018e\u0001\u0000\u0000\u0000\u0191\u0192\u0005\u0011\u0000"+
		"\u0000\u0192!\u0001\u0000\u0000\u0000\u0193\u0198\u0003\u00cae\u0000\u0194"+
		"\u0195\u0005\t\u0000\u0000\u0195\u0196\u00034\u001a\u0000\u0196\u0197"+
		"\u0005\n\u0000\u0000\u0197\u0199\u0001\u0000\u0000\u0000\u0198\u0194\u0001"+
		"\u0000\u0000\u0000\u0198\u0199\u0001\u0000\u0000\u0000\u0199#\u0001\u0000"+
		"\u0000\u0000\u019a\u019b\u0005\u0016\u0000\u0000\u019b\u019d\u0003\u00ca"+
		"e\u0000\u019c\u019e\u0003@ \u0000\u019d\u019c\u0001\u0000\u0000\u0000"+
		"\u019d\u019e\u0001\u0000\u0000\u0000\u019e\u019f\u0001\u0000\u0000\u0000"+
		"\u019f\u01a0\u0005\r\u0000\u0000\u01a0\u01a1\u0003,\u0016\u0000\u01a1"+
		"\u01a2\u0005\u0002\u0000\u0000\u01a2%\u0001\u0000\u0000\u0000\u01a3\u01a4"+
		"\u0005\u0017\u0000\u0000\u01a4\u01a5\u0003\u00cae\u0000\u01a5\u01a6\u0005"+
		"\f\u0000\u0000\u01a6\u01a7\u0003,\u0016\u0000\u01a7\u01a8\u0005\r\u0000"+
		"\u0000\u01a8\u01a9\u0003L&\u0000\u01a9\u01aa\u0005\u0002\u0000\u0000\u01aa"+
		"\'\u0001\u0000\u0000\u0000\u01ab\u01ac\u0005\u0018\u0000\u0000\u01ac\u01ad"+
		"\u0005\u0006\u0000\u0000\u01ad\u01af\u0003\u00cae\u0000\u01ae\u01b0\u0003"+
		"@ \u0000\u01af\u01ae\u0001\u0000\u0000\u0000\u01af\u01b0\u0001\u0000\u0000"+
		"\u0000\u01b0\u01b1\u0001\u0000\u0000\u0000\u01b1\u01b3\u0003\n\u0005\u0000"+
		"\u01b2\u01b4\u0003\u0010\b\u0000\u01b3\u01b2\u0001\u0000\u0000\u0000\u01b3"+
		"\u01b4\u0001\u0000\u0000\u0000\u01b4\u01b5\u0001\u0000\u0000\u0000\u01b5"+
		"\u01b6\u0005\u0002\u0000\u0000\u01b6\u01c2\u0001\u0000\u0000\u0000\u01b7"+
		"\u01b8\u0005\u0018\u0000\u0000\u01b8\u01b9\u0005\u0019\u0000\u0000\u01b9"+
		"\u01bd\u0005\u0010\u0000\u0000\u01ba\u01bc\u0003*\u0015\u0000\u01bb\u01ba"+
		"\u0001\u0000\u0000\u0000\u01bc\u01bf\u0001\u0000\u0000\u0000\u01bd\u01bb"+
		"\u0001\u0000\u0000\u0000\u01bd\u01be\u0001\u0000\u0000\u0000\u01be\u01c0"+
		"\u0001\u0000\u0000\u0000\u01bf\u01bd\u0001\u0000\u0000\u0000\u01c0\u01c2"+
		"\u0005\u0011\u0000\u0000\u01c1\u01ab\u0001\u0000\u0000\u0000\u01c1\u01b7"+
		"\u0001\u0000\u0000\u0000\u01c2)\u0001\u0000\u0000\u0000\u01c3\u01c4\u0003"+
		"\u001a\r\u0000\u01c4+\u0001\u0000\u0000\u0000\u01c5\u01ce\u0003.\u0017"+
		"\u0000\u01c6\u01ce\u00030\u0018\u0000\u01c7\u01ce\u00032\u0019\u0000\u01c8"+
		"\u01ce\u00036\u001b\u0000\u01c9\u01ce\u00038\u001c\u0000\u01ca\u01ce\u0003"+
		":\u001d\u0000\u01cb\u01ce\u0003<\u001e\u0000\u01cc\u01ce\u0003>\u001f"+
		"\u0000\u01cd\u01c5\u0001\u0000\u0000\u0000\u01cd\u01c6\u0001\u0000\u0000"+
		"\u0000\u01cd\u01c7\u0001\u0000\u0000\u0000\u01cd\u01c8\u0001\u0000\u0000"+
		"\u0000\u01cd\u01c9\u0001\u0000\u0000\u0000\u01cd\u01ca\u0001\u0000\u0000"+
		"\u0000\u01cd\u01cb\u0001\u0000\u0000\u0000\u01cd\u01cc\u0001\u0000\u0000"+
		"\u0000\u01ce-\u0001\u0000\u0000\u0000\u01cf\u01d0\u0007\u0000\u0000\u0000"+
		"\u01d0/\u0001\u0000\u0000\u0000\u01d1\u01d6\u0003\u00c8d\u0000\u01d2\u01d3"+
		"\u0005*\u0000\u0000\u01d3\u01d4\u00034\u001a\u0000\u01d4\u01d5\u0005+"+
		"\u0000\u0000\u01d5\u01d7\u0001\u0000\u0000\u0000\u01d6\u01d2\u0001\u0000"+
		"\u0000\u0000\u01d6\u01d7\u0001\u0000\u0000\u0000\u01d71\u0001\u0000\u0000"+
		"\u0000\u01d8\u01d9\u00030\u0018\u0000\u01d93\u0001\u0000\u0000\u0000\u01da"+
		"\u01df\u0003,\u0016\u0000\u01db\u01dc\u0005\u000b\u0000\u0000\u01dc\u01de"+
		"\u0003,\u0016\u0000\u01dd\u01db\u0001\u0000\u0000\u0000\u01de\u01e1\u0001"+
		"\u0000\u0000\u0000\u01df\u01dd\u0001\u0000\u0000\u0000\u01df\u01e0\u0001"+
		"\u0000\u0000\u0000\u01e05\u0001\u0000\u0000\u0000\u01e1\u01df\u0001\u0000"+
		"\u0000\u0000\u01e2\u01e3\u0005,\u0000\u0000\u01e3\u01e5\u0005\t\u0000"+
		"\u0000\u01e4\u01e6\u00034\u001a\u0000\u01e5\u01e4\u0001\u0000\u0000\u0000"+
		"\u01e5\u01e6\u0001\u0000\u0000\u0000\u01e6\u01e7\u0001\u0000\u0000\u0000"+
		"\u01e7\u01e9\u0005\n\u0000\u0000\u01e8\u01ea\u0003\u0010\b\u0000\u01e9"+
		"\u01e8\u0001\u0000\u0000\u0000\u01e9\u01ea\u0001\u0000\u0000\u0000\u01ea"+
		"7\u0001\u0000\u0000\u0000\u01eb\u01f3\u0005\t\u0000\u0000\u01ec\u01ef"+
		"\u0003,\u0016\u0000\u01ed\u01ee\u0005\u000b\u0000\u0000\u01ee\u01f0\u0003"+
		",\u0016\u0000\u01ef\u01ed\u0001\u0000\u0000\u0000\u01f0\u01f1\u0001\u0000"+
		"\u0000\u0000\u01f1\u01ef\u0001\u0000\u0000\u0000\u01f1\u01f2\u0001\u0000"+
		"\u0000\u0000\u01f2\u01f4\u0001\u0000\u0000\u0000\u01f3\u01ec\u0001\u0000"+
		"\u0000\u0000\u01f3\u01f4\u0001\u0000\u0000\u0000\u01f4\u01f5\u0001\u0000"+
		"\u0000\u0000\u01f5\u01f6\u0005\n\u0000\u0000\u01f69\u0001\u0000\u0000"+
		"\u0000\u01f7\u01f8\u0005-\u0000\u0000\u01f8\u01f9\u0003,\u0016\u0000\u01f9"+
		"\u01fa\u0005\u0002\u0000\u0000\u01fa\u01fb\u0003L&\u0000\u01fb\u01fc\u0005"+
		".\u0000\u0000\u01fc;\u0001\u0000\u0000\u0000\u01fd\u01ff\u0005/\u0000"+
		"\u0000\u01fe\u0200\u00050\u0000\u0000\u01ff\u01fe\u0001\u0000\u0000\u0000"+
		"\u01ff\u0200\u0001\u0000\u0000\u0000\u0200\u0202\u0001\u0000\u0000\u0000"+
		"\u0201\u0203\u0003J%\u0000\u0202\u0201\u0001\u0000\u0000\u0000\u0202\u0203"+
		"\u0001\u0000\u0000\u0000\u0203\u0204\u0001\u0000\u0000\u0000\u0204\u0205"+
		"\u0003,\u0016\u0000\u0205=\u0001\u0000\u0000\u0000\u0206\u0208\u0003\u00ca"+
		"e\u0000\u0207\u0209\u0003@ \u0000\u0208\u0207\u0001\u0000\u0000\u0000"+
		"\u0208\u0209\u0001\u0000\u0000\u0000\u0209?\u0001\u0000\u0000\u0000\u020a"+
		"\u020b\u0005*\u0000\u0000\u020b\u0210\u0003B!\u0000\u020c\u020d\u0005"+
		"\u000b\u0000\u0000\u020d\u020f\u0003B!\u0000\u020e\u020c\u0001\u0000\u0000"+
		"\u0000\u020f\u0212\u0001\u0000\u0000\u0000\u0210\u020e\u0001\u0000\u0000"+
		"\u0000\u0210\u0211\u0001\u0000\u0000\u0000\u0211\u0213\u0001\u0000\u0000"+
		"\u0000\u0212\u0210\u0001\u0000\u0000\u0000\u0213\u0214\u0005+\u0000\u0000"+
		"\u0214A\u0001\u0000\u0000\u0000\u0215\u0218\u0003\u00cae\u0000\u0216\u0217"+
		"\u0005\f\u0000\u0000\u0217\u0219\u0003H$\u0000\u0218\u0216\u0001\u0000"+
		"\u0000\u0000\u0218\u0219\u0001\u0000\u0000\u0000\u0219C\u0001\u0000\u0000"+
		"\u0000\u021a\u021f\u0003F#\u0000\u021b\u021c\u0005\u000b\u0000\u0000\u021c"+
		"\u021e\u0003F#\u0000\u021d\u021b\u0001\u0000\u0000\u0000\u021e\u0221\u0001"+
		"\u0000\u0000\u0000\u021f\u021d\u0001\u0000\u0000\u0000\u021f\u0220\u0001"+
		"\u0000\u0000\u0000\u0220E\u0001\u0000\u0000\u0000\u0221\u021f\u0001\u0000"+
		"\u0000\u0000\u0222\u0227\u0003\u00cae\u0000\u0223\u0224\u0005\t\u0000"+
		"\u0000\u0224\u0225\u00034\u001a\u0000\u0225\u0226\u0005\n\u0000\u0000"+
		"\u0226\u0228\u0001\u0000\u0000\u0000\u0227\u0223\u0001\u0000\u0000\u0000"+
		"\u0227\u0228\u0001\u0000\u0000\u0000\u0228\u022c\u0001\u0000\u0000\u0000"+
		"\u0229\u022a\u00051\u0000\u0000\u022a\u022c\u0003,\u0016\u0000\u022b\u0222"+
		"\u0001\u0000\u0000\u0000\u022b\u0229\u0001\u0000\u0000\u0000\u022cG\u0001"+
		"\u0000\u0000\u0000\u022d\u0232\u0003\u00cae\u0000\u022e\u022f\u0005\u000b"+
		"\u0000\u0000\u022f\u0231\u0003\u00cae\u0000\u0230\u022e\u0001\u0000\u0000"+
		"\u0000\u0231\u0234\u0001\u0000\u0000\u0000\u0232\u0230\u0001\u0000\u0000"+
		"\u0000\u0232\u0233\u0001\u0000\u0000\u0000\u0233I\u0001\u0000\u0000\u0000"+
		"\u0234\u0232\u0001\u0000\u0000\u0000\u0235\u0236\u00052\u0000\u0000\u0236"+
		"\u0237\u0003\u00cae\u0000\u0237K\u0001\u0000\u0000\u0000\u0238\u0239\u0003"+
		"N\'\u0000\u0239M\u0001\u0000\u0000\u0000\u023a\u023b\u0003R)\u0000\u023b"+
		"\u023c\u0005\r\u0000\u0000\u023c\u023d\u0003N\'\u0000\u023d\u0244\u0001"+
		"\u0000\u0000\u0000\u023e\u023f\u0003R)\u0000\u023f\u0240\u0003P(\u0000"+
		"\u0240\u0241\u0003L&\u0000\u0241\u0244\u0001\u0000\u0000\u0000\u0242\u0244"+
		"\u0003R)\u0000\u0243\u023a\u0001\u0000\u0000\u0000\u0243\u023e\u0001\u0000"+
		"\u0000\u0000\u0243\u0242\u0001\u0000\u0000\u0000\u0244O\u0001\u0000\u0000"+
		"\u0000\u0245\u0246\u0007\u0001\u0000\u0000\u0246Q\u0001\u0000\u0000\u0000"+
		"\u0247\u0248\u0006)\uffff\uffff\u0000\u0248\u0249\u0003T*\u0000\u0249"+
		"\u024f\u0001\u0000\u0000\u0000\u024a\u024b\n\u0002\u0000\u0000\u024b\u024c"+
		"\u0007\u0002\u0000\u0000\u024c\u024e\u0003T*\u0000\u024d\u024a\u0001\u0000"+
		"\u0000\u0000\u024e\u0251\u0001\u0000\u0000\u0000\u024f\u024d\u0001\u0000"+
		"\u0000\u0000\u024f\u0250\u0001\u0000\u0000\u0000\u0250S\u0001\u0000\u0000"+
		"\u0000\u0251\u024f\u0001\u0000\u0000\u0000\u0252\u0253\u0006*\uffff\uffff"+
		"\u0000\u0253\u0254\u0003V+\u0000\u0254\u025a\u0001\u0000\u0000\u0000\u0255"+
		"\u0256\n\u0002\u0000\u0000\u0256\u0257\u0007\u0003\u0000\u0000\u0257\u0259"+
		"\u0003V+\u0000\u0258\u0255\u0001\u0000\u0000\u0000\u0259\u025c\u0001\u0000"+
		"\u0000\u0000\u025a\u0258\u0001\u0000\u0000\u0000\u025a\u025b\u0001\u0000"+
		"\u0000\u0000\u025bU\u0001\u0000\u0000\u0000\u025c\u025a\u0001\u0000\u0000"+
		"\u0000\u025d\u025e\u0006+\uffff\uffff\u0000\u025e\u025f\u0003X,\u0000"+
		"\u025f\u0265\u0001\u0000\u0000\u0000\u0260\u0261\n\u0002\u0000\u0000\u0261"+
		"\u0262\u0007\u0004\u0000\u0000\u0262\u0264\u0003X,\u0000\u0263\u0260\u0001"+
		"\u0000\u0000\u0000\u0264\u0267\u0001\u0000\u0000\u0000\u0265\u0263\u0001"+
		"\u0000\u0000\u0000\u0265\u0266\u0001\u0000\u0000\u0000\u0266W\u0001\u0000"+
		"\u0000\u0000\u0267\u0265\u0001\u0000\u0000\u0000\u0268\u0269\u0006,\uffff"+
		"\uffff\u0000\u0269\u026a\u0003Z-\u0000\u026a\u0270\u0001\u0000\u0000\u0000"+
		"\u026b\u026c\n\u0002\u0000\u0000\u026c\u026d\u0007\u0005\u0000\u0000\u026d"+
		"\u026f\u0003Z-\u0000\u026e\u026b\u0001\u0000\u0000\u0000\u026f\u0272\u0001"+
		"\u0000\u0000\u0000\u0270\u026e\u0001\u0000\u0000\u0000\u0270\u0271\u0001"+
		"\u0000\u0000\u0000\u0271Y\u0001\u0000\u0000\u0000\u0272\u0270\u0001\u0000"+
		"\u0000\u0000\u0273\u0274\u0006-\uffff\uffff\u0000\u0274\u0275\u0003^/"+
		"\u0000\u0275\u027b\u0001\u0000\u0000\u0000\u0276\u0277\n\u0002\u0000\u0000"+
		"\u0277\u0278\u0007\u0006\u0000\u0000\u0278\u027a\u0003^/\u0000\u0279\u0276"+
		"\u0001\u0000\u0000\u0000\u027a\u027d\u0001\u0000\u0000\u0000\u027b\u0279"+
		"\u0001\u0000\u0000\u0000\u027b\u027c\u0001\u0000\u0000\u0000\u027c[\u0001"+
		"\u0000\u0000\u0000\u027d\u027b\u0001\u0000\u0000\u0000\u027e\u027f\u0005"+
		"L\u0000\u0000\u027f\u0282\u0003^/\u0000\u0280\u0282\u0003^/\u0000\u0281"+
		"\u027e\u0001\u0000\u0000\u0000\u0281\u0280\u0001\u0000\u0000\u0000\u0282"+
		"]\u0001\u0000\u0000\u0000\u0283\u0284\u0005H\u0000\u0000\u0284\u0290\u0003"+
		"^/\u0000\u0285\u0286\u0005M\u0000\u0000\u0286\u0290\u0003^/\u0000\u0287"+
		"\u0288\u0005I\u0000\u0000\u0288\u0290\u0003^/\u0000\u0289\u028b\u0005"+
		"/\u0000\u0000\u028a\u028c\u00050\u0000\u0000\u028b\u028a\u0001\u0000\u0000"+
		"\u0000\u028b\u028c\u0001\u0000\u0000\u0000\u028c\u028d\u0001\u0000\u0000"+
		"\u0000\u028d\u0290\u0003^/\u0000\u028e\u0290\u0003`0\u0000\u028f\u0283"+
		"\u0001\u0000\u0000\u0000\u028f\u0285\u0001\u0000\u0000\u0000\u028f\u0287"+
		"\u0001\u0000\u0000\u0000\u028f\u0289\u0001\u0000\u0000\u0000\u028f\u028e"+
		"\u0001\u0000\u0000\u0000\u0290_\u0001\u0000\u0000\u0000\u0291\u0292\u0003"+
		"b1\u0000\u0292\u0294\u0005\t\u0000\u0000\u0293\u0295\u0003\u009cN\u0000"+
		"\u0294\u0293\u0001\u0000\u0000\u0000\u0294\u0295\u0001\u0000\u0000\u0000"+
		"\u0295\u0296\u0001\u0000\u0000\u0000\u0296\u0297\u0005\n\u0000\u0000\u0297"+
		"\u02af\u0001\u0000\u0000\u0000\u0298\u0299\u0003b1\u0000\u0299\u029a\u0005"+
		"N\u0000\u0000\u029a\u029b\u0003\u00cae\u0000\u029b\u02af\u0001\u0000\u0000"+
		"\u0000\u029c\u029d\u0003b1\u0000\u029d\u029e\u0005N\u0000\u0000\u029e"+
		"\u029f\u0005h\u0000\u0000\u029f\u02af\u0001\u0000\u0000\u0000\u02a0\u02a1"+
		"\u0003b1\u0000\u02a1\u02a2\u0005\u0004\u0000\u0000\u02a2\u02a3\u0003,"+
		"\u0016\u0000\u02a3\u02af\u0001\u0000\u0000\u0000\u02a4\u02a5\u0003b1\u0000"+
		"\u02a5\u02a6\u0005\f\u0000\u0000\u02a6\u02a7\u0003,\u0016\u0000\u02a7"+
		"\u02af\u0001\u0000\u0000\u0000\u02a8\u02a9\u0003b1\u0000\u02a9\u02ab\u0007"+
		"\u0007\u0000\u0000\u02aa\u02ac\u0003L&\u0000\u02ab\u02aa\u0001\u0000\u0000"+
		"\u0000\u02ab\u02ac\u0001\u0000\u0000\u0000\u02ac\u02af\u0001\u0000\u0000"+
		"\u0000\u02ad\u02af\u0003b1\u0000\u02ae\u0291\u0001\u0000\u0000\u0000\u02ae"+
		"\u0298\u0001\u0000\u0000\u0000\u02ae\u029c\u0001\u0000\u0000\u0000\u02ae"+
		"\u02a0\u0001\u0000\u0000\u0000\u02ae\u02a4\u0001\u0000\u0000\u0000\u02ae"+
		"\u02a8\u0001\u0000\u0000\u0000\u02ae\u02ad\u0001\u0000\u0000\u0000\u02af"+
		"a\u0001\u0000\u0000\u0000\u02b0\u02c1\u0003f3\u0000\u02b1\u02c1\u0003"+
		"t:\u0000\u02b2\u02c1\u0003v;\u0000\u02b3\u02c1\u0003\u0090H\u0000\u02b4"+
		"\u02c1\u0003\u0092I\u0000\u02b5\u02c1\u0003\u0094J\u0000\u02b6\u02c1\u0003"+
		"\u0098L\u0000\u02b7\u02c1\u0003\u00a2Q\u0000\u02b8\u02c1\u0003\u00aaU"+
		"\u0000\u02b9\u02c1\u0003\u00b0X\u0000\u02ba\u02c1\u0003\u00bc^\u0000\u02bb"+
		"\u02c1\u0003\u00be_\u0000\u02bc\u02c1\u0003\u00c0`\u0000\u02bd\u02c1\u0003"+
		"\u00c2a\u0000\u02be\u02c1\u0003\u00c4b\u0000\u02bf\u02c1\u0003d2\u0000"+
		"\u02c0\u02b0\u0001\u0000\u0000\u0000\u02c0\u02b1\u0001\u0000\u0000\u0000"+
		"\u02c0\u02b2\u0001\u0000\u0000\u0000\u02c0\u02b3\u0001\u0000\u0000\u0000"+
		"\u02c0\u02b4\u0001\u0000\u0000\u0000\u02c0\u02b5\u0001\u0000\u0000\u0000"+
		"\u02c0\u02b6\u0001\u0000\u0000\u0000\u02c0\u02b7\u0001\u0000\u0000\u0000"+
		"\u02c0\u02b8\u0001\u0000\u0000\u0000\u02c0\u02b9\u0001\u0000\u0000\u0000"+
		"\u02c0\u02ba\u0001\u0000\u0000\u0000\u02c0\u02bb\u0001\u0000\u0000\u0000"+
		"\u02c0\u02bc\u0001\u0000\u0000\u0000\u02c0\u02bd\u0001\u0000\u0000\u0000"+
		"\u02c0\u02be\u0001\u0000\u0000\u0000\u02c0\u02bf\u0001\u0000\u0000\u0000"+
		"\u02c1c\u0001\u0000\u0000\u0000\u02c2\u02c3\u0005\t\u0000\u0000\u02c3"+
		"\u02c4\u0003L&\u0000\u02c4\u02c5\u0005\n\u0000\u0000\u02c5e\u0001\u0000"+
		"\u0000\u0000\u02c6\u02cd\u0003h4\u0000\u02c7\u02cd\u0003j5\u0000\u02c8"+
		"\u02cd\u0003l6\u0000\u02c9\u02cd\u0003n7\u0000\u02ca\u02cd\u0003p8\u0000"+
		"\u02cb\u02cd\u0003r9\u0000\u02cc\u02c6\u0001\u0000\u0000\u0000\u02cc\u02c7"+
		"\u0001\u0000\u0000\u0000\u02cc\u02c8\u0001\u0000\u0000\u0000\u02cc\u02c9"+
		"\u0001\u0000\u0000\u0000\u02cc\u02ca\u0001\u0000\u0000\u0000\u02cc\u02cb"+
		"\u0001\u0000\u0000\u0000\u02cdg\u0001\u0000\u0000\u0000\u02ce\u02cf\u0007"+
		"\b\u0000\u0000\u02cfi\u0001\u0000\u0000\u0000\u02d0\u02d1\u0005l\u0000"+
		"\u0000\u02d1k\u0001\u0000\u0000\u0000\u02d2\u02d3\u0007\t\u0000\u0000"+
		"\u02d3m\u0001\u0000\u0000\u0000\u02d4\u02d7\u00052\u0000\u0000\u02d5\u02d8"+
		"\b\n\u0000\u0000\u02d6\u02d8\u0005n\u0000\u0000\u02d7\u02d5\u0001\u0000"+
		"\u0000\u0000\u02d7\u02d6\u0001\u0000\u0000\u0000\u02d8\u02d9\u0001\u0000"+
		"\u0000\u0000\u02d9\u02da\u00052\u0000\u0000\u02dao\u0001\u0000\u0000\u0000"+
		"\u02db\u02dc\u0005m\u0000\u0000\u02dcq\u0001\u0000\u0000\u0000\u02dd\u02de"+
		"\u0005S\u0000\u0000\u02des\u0001\u0000\u0000\u0000\u02df\u02e0\u0003\u00ca"+
		"e\u0000\u02e0u\u0001\u0000\u0000\u0000\u02e1\u02e2\u0003x<\u0000\u02e2"+
		"w\u0001\u0000\u0000\u0000\u02e3\u02e7\u0005\u0010\u0000\u0000\u02e4\u02e6"+
		"\u0003z=\u0000\u02e5\u02e4\u0001\u0000\u0000\u0000\u02e6\u02e9\u0001\u0000"+
		"\u0000\u0000\u02e7\u02e5\u0001\u0000\u0000\u0000\u02e7\u02e8\u0001\u0000"+
		"\u0000\u0000\u02e8\u02eb\u0001\u0000\u0000\u0000\u02e9\u02e7\u0001\u0000"+
		"\u0000\u0000\u02ea\u02ec\u0003L&\u0000\u02eb\u02ea\u0001\u0000\u0000\u0000"+
		"\u02eb\u02ec\u0001\u0000\u0000\u0000\u02ec\u02ed\u0001\u0000\u0000\u0000"+
		"\u02ed\u02ee\u0005\u0011\u0000\u0000\u02eey\u0001\u0000\u0000\u0000\u02ef"+
		"\u02f7\u0003|>\u0000\u02f0\u02f7\u0003\u008aE\u0000\u02f1\u02f7\u0003"+
		"\u008cF\u0000\u02f2\u02f7\u0003\u00a4R\u0000\u02f3\u02f7\u0003\u00b2Y"+
		"\u0000\u02f4\u02f7\u0003\u00acV\u0000\u02f5\u02f7\u0003\u00ba]\u0000\u02f6"+
		"\u02ef\u0001\u0000\u0000\u0000\u02f6\u02f0\u0001\u0000\u0000\u0000\u02f6"+
		"\u02f1\u0001\u0000\u0000\u0000\u02f6\u02f2\u0001\u0000\u0000\u0000\u02f6"+
		"\u02f3\u0001\u0000\u0000\u0000\u02f6\u02f4\u0001\u0000\u0000\u0000\u02f6"+
		"\u02f5\u0001\u0000\u0000\u0000\u02f7{\u0001\u0000\u0000\u0000\u02f8\u02fb"+
		"\u0003~?\u0000\u02f9\u02fb\u0003&\u0013\u0000\u02fa\u02f8\u0001\u0000"+
		"\u0000\u0000\u02fa\u02f9\u0001\u0000\u0000\u0000\u02fb}\u0001\u0000\u0000"+
		"\u0000\u02fc\u02fe\u00050\u0000\u0000\u02fd\u02fc\u0001\u0000\u0000\u0000"+
		"\u02fd\u02fe\u0001\u0000\u0000\u0000\u02fe\u02ff\u0001\u0000\u0000\u0000"+
		"\u02ff\u0300\u0005T\u0000\u0000\u0300\u0301\u0003\u0080@\u0000\u0301\u0302"+
		"\u0005\r\u0000\u0000\u0302\u0303\u0003L&\u0000\u0303\u0304\u0005\u0002"+
		"\u0000\u0000\u0304\u0313\u0001\u0000\u0000\u0000\u0305\u0307\u00050\u0000"+
		"\u0000\u0306\u0305\u0001\u0000\u0000\u0000\u0306\u0307\u0001\u0000\u0000"+
		"\u0000\u0307\u0308\u0001\u0000\u0000\u0000\u0308\u0309\u0005T\u0000\u0000"+
		"\u0309\u030a\u0003\u0080@\u0000\u030a\u030b\u0005\f\u0000\u0000\u030b"+
		"\u030e\u0003,\u0016\u0000\u030c\u030d\u0005\r\u0000\u0000\u030d\u030f"+
		"\u0003L&\u0000\u030e\u030c\u0001\u0000\u0000\u0000\u030e\u030f\u0001\u0000"+
		"\u0000\u0000\u030f\u0310\u0001\u0000\u0000\u0000\u0310\u0311\u0005\u0002"+
		"\u0000\u0000\u0311\u0313\u0001\u0000\u0000\u0000\u0312\u02fd\u0001\u0000"+
		"\u0000\u0000\u0312\u0306\u0001\u0000\u0000\u0000\u0313\u007f\u0001\u0000"+
		"\u0000\u0000\u0314\u0319\u0003\u0082A\u0000\u0315\u0319\u0003\u0084B\u0000"+
		"\u0316\u0319\u0003\u0086C\u0000\u0317\u0319\u0003\u0088D\u0000\u0318\u0314"+
		"\u0001\u0000\u0000\u0000\u0318\u0315\u0001\u0000\u0000\u0000\u0318\u0316"+
		"\u0001\u0000\u0000\u0000\u0318\u0317\u0001\u0000\u0000\u0000\u0319\u0081"+
		"\u0001\u0000\u0000\u0000\u031a\u031c\u00050\u0000\u0000\u031b\u031a\u0001"+
		"\u0000\u0000\u0000\u031b\u031c\u0001\u0000\u0000\u0000\u031c\u031d\u0001"+
		"\u0000\u0000\u0000\u031d\u031e\u0003\u00cae\u0000\u031e\u0083\u0001\u0000"+
		"\u0000\u0000\u031f\u0320\u0005\t\u0000\u0000\u0320\u0325\u0003\u0080@"+
		"\u0000\u0321\u0322\u0005\u000b\u0000\u0000\u0322\u0324\u0003\u0080@\u0000"+
		"\u0323\u0321\u0001\u0000\u0000\u0000\u0324\u0327\u0001\u0000\u0000\u0000"+
		"\u0325\u0323\u0001\u0000\u0000\u0000\u0325\u0326\u0001\u0000\u0000\u0000"+
		"\u0326\u0328\u0001\u0000\u0000\u0000\u0327\u0325\u0001\u0000\u0000\u0000"+
		"\u0328\u0329\u0005\n\u0000\u0000\u0329\u0085\u0001\u0000\u0000\u0000\u032a"+
		"\u032b\u0003\u00cae\u0000\u032b\u0339\u0005\u0010\u0000\u0000\u032c\u032d"+
		"\u0003\u00cae\u0000\u032d\u032e\u0005\f\u0000\u0000\u032e\u0336\u0003"+
		"\u0080@\u0000\u032f\u0330\u0005\u000b\u0000\u0000\u0330\u0331\u0003\u00ca"+
		"e\u0000\u0331\u0332\u0005\f\u0000\u0000\u0332\u0333\u0003\u0080@\u0000"+
		"\u0333\u0335\u0001\u0000\u0000\u0000\u0334\u032f\u0001\u0000\u0000\u0000"+
		"\u0335\u0338\u0001\u0000\u0000\u0000\u0336\u0334\u0001\u0000\u0000\u0000"+
		"\u0336\u0337\u0001\u0000\u0000\u0000\u0337\u033a\u0001\u0000\u0000\u0000"+
		"\u0338\u0336\u0001\u0000\u0000\u0000\u0339\u032c\u0001\u0000\u0000\u0000"+
		"\u0339\u033a\u0001\u0000\u0000\u0000\u033a\u033b\u0001\u0000\u0000\u0000"+
		"\u033b\u033c\u0005\u0011\u0000\u0000\u033c\u0087\u0001\u0000\u0000\u0000"+
		"\u033d\u033e\u0005U\u0000\u0000\u033e\u0089\u0001\u0000\u0000\u0000\u033f"+
		"\u0340\u0003L&\u0000\u0340\u0341\u0005\u0002\u0000\u0000\u0341\u008b\u0001"+
		"\u0000\u0000\u0000\u0342\u0343\u0003L&\u0000\u0343\u0344\u0005\r\u0000"+
		"\u0000\u0344\u0345\u0003L&\u0000\u0345\u0346\u0005\u0002\u0000\u0000\u0346"+
		"\u008d\u0001\u0000\u0000\u0000\u0347\u0349\u0005C\u0000\u0000\u0348\u034a"+
		"\u0003\f\u0006\u0000\u0349\u0348\u0001\u0000\u0000\u0000\u0349\u034a\u0001"+
		"\u0000\u0000\u0000\u034a\u034b\u0001\u0000\u0000\u0000\u034b\u034e\u0005"+
		"C\u0000\u0000\u034c\u034d\u0005\u000e\u0000\u0000\u034d\u034f\u0003,\u0016"+
		"\u0000\u034e\u034c\u0001\u0000\u0000\u0000\u034e\u034f\u0001\u0000\u0000"+
		"\u0000\u034f\u0350\u0001\u0000\u0000\u0000\u0350\u0351\u0003x<\u0000\u0351"+
		"\u008f\u0001\u0000\u0000\u0000\u0352\u035a\u0005\t\u0000\u0000\u0353\u0356"+
		"\u0003L&\u0000\u0354\u0355\u0005\u000b\u0000\u0000\u0355\u0357\u0003L"+
		"&\u0000\u0356\u0354\u0001\u0000\u0000\u0000\u0357\u0358\u0001\u0000\u0000"+
		"\u0000\u0358\u0356\u0001\u0000\u0000\u0000\u0358\u0359\u0001\u0000\u0000"+
		"\u0000\u0359\u035b\u0001\u0000\u0000\u0000\u035a\u0353\u0001\u0000\u0000"+
		"\u0000\u035a\u035b\u0001\u0000\u0000\u0000\u035b\u035c\u0001\u0000\u0000"+
		"\u0000\u035c\u035d\u0005\n\u0000\u0000\u035d\u0091\u0001\u0000\u0000\u0000"+
		"\u035e\u0367\u0005-\u0000\u0000\u035f\u0364\u0003L&\u0000\u0360\u0361"+
		"\u0005\u000b\u0000\u0000\u0361\u0363\u0003L&\u0000\u0362\u0360\u0001\u0000"+
		"\u0000\u0000\u0363\u0366\u0001\u0000\u0000\u0000\u0364\u0362\u0001\u0000"+
		"\u0000\u0000\u0364\u0365\u0001\u0000\u0000\u0000\u0365\u0368\u0001\u0000"+
		"\u0000\u0000\u0366\u0364\u0001\u0000\u0000\u0000\u0367\u035f\u0001\u0000"+
		"\u0000\u0000\u0367\u0368\u0001\u0000\u0000\u0000\u0368\u0369\u0001\u0000"+
		"\u0000\u0000\u0369\u036a\u0005.\u0000\u0000\u036a\u0093\u0001\u0000\u0000"+
		"\u0000\u036b\u036c\u00030\u0018\u0000\u036c\u0375\u0005\u0010\u0000\u0000"+
		"\u036d\u0372\u0003\u0096K\u0000\u036e\u036f\u0005\u000b\u0000\u0000\u036f"+
		"\u0371\u0003\u0096K\u0000\u0370\u036e\u0001\u0000\u0000\u0000\u0371\u0374"+
		"\u0001\u0000\u0000\u0000\u0372\u0370\u0001\u0000\u0000\u0000\u0372\u0373"+
		"\u0001\u0000\u0000\u0000\u0373\u0376\u0001\u0000\u0000\u0000\u0374\u0372"+
		"\u0001\u0000\u0000\u0000\u0375\u036d\u0001\u0000\u0000\u0000\u0375\u0376"+
		"\u0001\u0000\u0000\u0000\u0376\u0377\u0001\u0000\u0000\u0000\u0377\u0378"+
		"\u0005\u0011\u0000\u0000\u0378\u0095\u0001\u0000\u0000\u0000\u0379\u037c"+
		"\u0003\u00cae\u0000\u037a\u037b\u0005\r\u0000\u0000\u037b\u037d\u0003"+
		"L&\u0000\u037c\u037a\u0001\u0000\u0000\u0000\u037c\u037d\u0001\u0000\u0000"+
		"\u0000\u037d\u0097\u0001\u0000\u0000\u0000\u037e\u0383\u0003\u00cae\u0000"+
		"\u037f\u0380\u0005\t\u0000\u0000\u0380\u0381\u0003L&\u0000\u0381\u0382"+
		"\u0005\n\u0000\u0000\u0382\u0384\u0001\u0000\u0000\u0000\u0383\u037f\u0001"+
		"\u0000\u0000\u0000\u0383\u0384\u0001\u0000\u0000\u0000\u0384\u0099\u0001"+
		"\u0000\u0000\u0000\u0385\u0386\u0003L&\u0000\u0386\u0388\u0005\t\u0000"+
		"\u0000\u0387\u0389\u0003\u009cN\u0000\u0388\u0387\u0001\u0000\u0000\u0000"+
		"\u0388\u0389\u0001\u0000\u0000\u0000\u0389\u038a\u0001\u0000\u0000\u0000"+
		"\u038a\u038b\u0005\n\u0000\u0000\u038b\u009b\u0001\u0000\u0000\u0000\u038c"+
		"\u0391\u0003L&\u0000\u038d\u038e\u0005\u000b\u0000\u0000\u038e\u0390\u0003"+
		"L&\u0000\u038f\u038d\u0001\u0000\u0000\u0000\u0390\u0393\u0001\u0000\u0000"+
		"\u0000\u0391\u038f\u0001\u0000\u0000\u0000\u0391\u0392\u0001\u0000\u0000"+
		"\u0000\u0392\u009d\u0001\u0000\u0000\u0000\u0393\u0391\u0001\u0000\u0000"+
		"\u0000\u0394\u0395\u0003L&\u0000\u0395\u0396\u0005N\u0000\u0000\u0396"+
		"\u0397\u0003\u00cae\u0000\u0397\u009f\u0001\u0000\u0000\u0000\u0398\u0399"+
		"\u0003L&\u0000\u0399\u039a\u0007\u0001\u0000\u0000\u039a\u039b\u0003L"+
		"&\u0000\u039b\u00a1\u0001\u0000\u0000\u0000\u039c\u039d\u0005V\u0000\u0000"+
		"\u039d\u039e\u0003\u00a6S\u0000\u039e\u03a4\u0003x<\u0000\u039f\u03a2"+
		"\u0005W\u0000\u0000\u03a0\u03a3\u0003x<\u0000\u03a1\u03a3\u0003\u00a2"+
		"Q\u0000\u03a2\u03a0\u0001\u0000\u0000\u0000\u03a2\u03a1\u0001\u0000\u0000"+
		"\u0000\u03a3\u03a5\u0001\u0000\u0000\u0000\u03a4\u039f\u0001\u0000\u0000"+
		"\u0000\u03a4\u03a5\u0001\u0000\u0000\u0000\u03a5\u00a3\u0001\u0000\u0000"+
		"\u0000\u03a6\u03a7\u0005V\u0000\u0000\u03a7\u03a8\u0003\u00a6S\u0000\u03a8"+
		"\u03ab\u0003x<\u0000\u03a9\u03aa\u0005W\u0000\u0000\u03aa\u03ac\u0003"+
		"x<\u0000\u03ab\u03a9\u0001\u0000\u0000\u0000\u03ab\u03ac\u0001\u0000\u0000"+
		"\u0000\u03ac\u00a5\u0001\u0000\u0000\u0000\u03ad\u03b0\u0003L&\u0000\u03ae"+
		"\u03b0\u0003\u00a8T\u0000\u03af\u03ad\u0001\u0000\u0000\u0000\u03af\u03ae"+
		"\u0001\u0000\u0000\u0000\u03b0\u00a7\u0001\u0000\u0000\u0000\u03b1\u03b2"+
		"\u0005T\u0000\u0000\u03b2\u03b3\u0003\u0080@\u0000\u03b3\u03b4\u0005\r"+
		"\u0000\u0000\u03b4\u03b5\u0003L&\u0000\u03b5\u00a9\u0001\u0000\u0000\u0000"+
		"\u03b6\u03b7\u0005X\u0000\u0000\u03b7\u03b8\u0003L&\u0000\u03b8\u03bc"+
		"\u0005\u0010\u0000\u0000\u03b9\u03bb\u0003\u00aeW\u0000\u03ba\u03b9\u0001"+
		"\u0000\u0000\u0000\u03bb\u03be\u0001\u0000\u0000\u0000\u03bc\u03ba\u0001"+
		"\u0000\u0000\u0000\u03bc\u03bd\u0001\u0000\u0000\u0000\u03bd\u03bf\u0001"+
		"\u0000\u0000\u0000\u03be\u03bc\u0001\u0000\u0000\u0000\u03bf\u03c0\u0005"+
		"\u0011\u0000\u0000\u03c0\u00ab\u0001\u0000\u0000\u0000\u03c1\u03c2\u0005"+
		"X\u0000\u0000\u03c2\u03c3\u0003L&\u0000\u03c3\u03c7\u0005\u0010\u0000"+
		"\u0000\u03c4\u03c6\u0003\u00aeW\u0000\u03c5\u03c4\u0001\u0000\u0000\u0000"+
		"\u03c6\u03c9\u0001\u0000\u0000\u0000\u03c7\u03c5\u0001\u0000\u0000\u0000"+
		"\u03c7\u03c8\u0001\u0000\u0000\u0000\u03c8\u03ca\u0001\u0000\u0000\u0000"+
		"\u03c9\u03c7\u0001\u0000\u0000\u0000\u03ca\u03cb\u0005\u0011\u0000\u0000"+
		"\u03cb\u00ad\u0001\u0000\u0000\u0000\u03cc\u03cd\u0003\u0080@\u0000\u03cd"+
		"\u03ce\u0005Y\u0000\u0000\u03ce\u03cf\u0003L&\u0000\u03cf\u03d0\u0005"+
		"\u000b\u0000\u0000\u03d0\u03d6\u0001\u0000\u0000\u0000\u03d1\u03d2\u0003"+
		"\u0080@\u0000\u03d2\u03d3\u0005Y\u0000\u0000\u03d3\u03d4\u0003x<\u0000"+
		"\u03d4\u03d6\u0001\u0000\u0000\u0000\u03d5\u03cc\u0001\u0000\u0000\u0000"+
		"\u03d5\u03d1\u0001\u0000\u0000\u0000\u03d6\u00af\u0001\u0000\u0000\u0000"+
		"\u03d7\u03db\u0003\u00b4Z\u0000\u03d8\u03db\u0003\u00b6[\u0000\u03d9\u03db"+
		"\u0003\u00b8\\\u0000\u03da\u03d7\u0001\u0000\u0000\u0000\u03da\u03d8\u0001"+
		"\u0000\u0000\u0000\u03da\u03d9\u0001\u0000\u0000\u0000\u03db\u00b1\u0001"+
		"\u0000\u0000\u0000\u03dc\u03e0\u0003\u00b4Z\u0000\u03dd\u03e0\u0003\u00b6"+
		"[\u0000\u03de\u03e0\u0003\u00b8\\\u0000\u03df\u03dc\u0001\u0000\u0000"+
		"\u0000\u03df\u03dd\u0001\u0000\u0000\u0000\u03df\u03de\u0001\u0000\u0000"+
		"\u0000\u03e0\u00b3\u0001\u0000\u0000\u0000\u03e1\u03e2\u0005Z\u0000\u0000"+
		"\u03e2\u03e3\u0003x<\u0000\u03e3\u00b5\u0001\u0000\u0000\u0000\u03e4\u03e5"+
		"\u0005[\u0000\u0000\u03e5\u03e6\u0003\u00a6S\u0000\u03e6\u03e7\u0003x"+
		"<\u0000\u03e7\u00b7\u0001\u0000\u0000\u0000\u03e8\u03e9\u0005\u0014\u0000"+
		"\u0000\u03e9\u03ea\u0003\u0080@\u0000\u03ea\u03eb\u0005\\\u0000\u0000"+
		"\u03eb\u03ec\u0003L&\u0000\u03ec\u03ed\u0003x<\u0000\u03ed\u00b9\u0001"+
		"\u0000\u0000\u0000\u03ee\u03f2\u0003\u00bc^\u0000\u03ef\u03f2\u0003\u00be"+
		"_\u0000\u03f0\u03f2\u0003\u00c0`\u0000\u03f1\u03ee\u0001\u0000\u0000\u0000"+
		"\u03f1\u03ef\u0001\u0000\u0000\u0000\u03f1\u03f0\u0001\u0000\u0000\u0000"+
		"\u03f2\u00bb\u0001\u0000\u0000\u0000\u03f3\u03f5\u0005]\u0000\u0000\u03f4"+
		"\u03f6\u0003L&\u0000\u03f5\u03f4\u0001\u0000\u0000\u0000\u03f5\u03f6\u0001"+
		"\u0000\u0000\u0000\u03f6\u03f7\u0001\u0000\u0000\u0000\u03f7\u03f8\u0005"+
		"\u0002\u0000\u0000\u03f8\u00bd\u0001\u0000\u0000\u0000\u03f9\u03fa\u0005"+
		"^\u0000\u0000\u03fa\u03fb\u0005\u0002\u0000\u0000\u03fb\u00bf\u0001\u0000"+
		"\u0000\u0000\u03fc\u03fe\u0005_\u0000\u0000\u03fd\u03ff\u0003L&\u0000"+
		"\u03fe\u03fd\u0001\u0000\u0000\u0000\u03fe\u03ff\u0001\u0000\u0000\u0000"+
		"\u03ff\u0400\u0001\u0000\u0000\u0000\u0400\u0401\u0005\u0002\u0000\u0000"+
		"\u0401\u00c1\u0001\u0000\u0000\u0000\u0402\u0403\u0005`\u0000\u0000\u0403"+
		"\u0404\u0003L&\u0000\u0404\u00c3\u0001\u0000\u0000\u0000\u0405\u0406\u0005"+
		"a\u0000\u0000\u0406\u0407\u0003x<\u0000\u0407\u00c5\u0001\u0000\u0000"+
		"\u0000\u0408\u0413\u0005b\u0000\u0000\u0409\u040a\u0005\t\u0000\u0000"+
		"\u040a\u040b\u0005c\u0000\u0000\u040b\u0414\u0005\n\u0000\u0000\u040c"+
		"\u040d\u0005\t\u0000\u0000\u040d\u040e\u0005d\u0000\u0000\u040e\u0414"+
		"\u0005\n\u0000\u0000\u040f\u0410\u0005\t\u0000\u0000\u0410\u0411\u0003"+
		"\u00cae\u0000\u0411\u0412\u0005\n\u0000\u0000\u0412\u0414\u0001\u0000"+
		"\u0000\u0000\u0413\u0409\u0001\u0000\u0000\u0000\u0413\u040c\u0001\u0000"+
		"\u0000\u0000\u0413\u040f\u0001\u0000\u0000\u0000\u0413\u0414\u0001\u0000"+
		"\u0000\u0000\u0414\u00c7\u0001\u0000\u0000\u0000\u0415\u041a\u0003\u00ca"+
		"e\u0000\u0416\u0417\u0005e\u0000\u0000\u0417\u0419\u0003\u00cae\u0000"+
		"\u0418\u0416\u0001\u0000\u0000\u0000\u0419\u041c\u0001\u0000\u0000\u0000"+
		"\u041a\u0418\u0001\u0000\u0000\u0000\u041a\u041b\u0001\u0000\u0000\u0000"+
		"\u041b\u00c9\u0001\u0000\u0000\u0000\u041c\u041a\u0001\u0000\u0000\u0000"+
		"\u041d\u041e\u0007\u000b\u0000\u0000\u041e\u00cb\u0001\u0000\u0000\u0000"+
		"m\u00cd\u00d2\u00d8\u00e5\u00ed\u00f7\u00fc\u0100\u0104\u010c\u0110\u0114"+
		"\u0118\u011c\u0125\u012d\u0135\u0139\u013f\u0145\u014e\u0152\u0158\u015f"+
		"\u0163\u0167\u016d\u0172\u0178\u017f\u0184\u0188\u018e\u0198\u019d\u01af"+
		"\u01b3\u01bd\u01c1\u01cd\u01d6\u01df\u01e5\u01e9\u01f1\u01f3\u01ff\u0202"+
		"\u0208\u0210\u0218\u021f\u0227\u022b\u0232\u0243\u024f\u025a\u0265\u0270"+
		"\u027b\u0281\u028b\u028f\u0294\u02ab\u02ae\u02c0\u02cc\u02d7\u02e7\u02eb"+
		"\u02f6\u02fa\u02fd\u0306\u030e\u0312\u0318\u031b\u0325\u0336\u0339\u0349"+
		"\u034e\u0358\u035a\u0364\u0367\u0372\u0375\u037c\u0383\u0388\u0391\u03a2"+
		"\u03a4\u03ab\u03af\u03bc\u03c7\u03d5\u03da\u03df\u03f1\u03f5\u03fe\u0413"+
		"\u041a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}