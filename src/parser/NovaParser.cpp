
// Generated from Nova.g4 by ANTLR 4.7.2


#include "NovaListener.h"
#include "NovaVisitor.h"

#include "NovaParser.h"


using namespace antlrcpp;
using namespace antlr4;

NovaParser::NovaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NovaParser::~NovaParser() {
  delete _interpreter;
}

std::string NovaParser::getGrammarFileName() const {
  return "Nova.g4";
}

const std::vector<std::string>& NovaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NovaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SourceFileContext ------------------------------------------------------------------

NovaParser::SourceFileContext::SourceFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NovaParser::SourceFileContext::EOF() {
  return getToken(NovaParser::EOF, 0);
}

NovaParser::ModuleDeclarationContext* NovaParser::SourceFileContext::moduleDeclaration() {
  return getRuleContext<NovaParser::ModuleDeclarationContext>(0);
}

std::vector<NovaParser::ImportDeclarationContext *> NovaParser::SourceFileContext::importDeclaration() {
  return getRuleContexts<NovaParser::ImportDeclarationContext>();
}

NovaParser::ImportDeclarationContext* NovaParser::SourceFileContext::importDeclaration(size_t i) {
  return getRuleContext<NovaParser::ImportDeclarationContext>(i);
}

std::vector<NovaParser::TopLevelDeclarationContext *> NovaParser::SourceFileContext::topLevelDeclaration() {
  return getRuleContexts<NovaParser::TopLevelDeclarationContext>();
}

NovaParser::TopLevelDeclarationContext* NovaParser::SourceFileContext::topLevelDeclaration(size_t i) {
  return getRuleContext<NovaParser::TopLevelDeclarationContext>(i);
}


size_t NovaParser::SourceFileContext::getRuleIndex() const {
  return NovaParser::RuleSourceFile;
}

void NovaParser::SourceFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceFile(this);
}

void NovaParser::SourceFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceFile(this);
}


antlrcpp::Any NovaParser::SourceFileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitSourceFile(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::SourceFileContext* NovaParser::sourceFile() {
  SourceFileContext *_localctx = _tracker.createInstance<SourceFileContext>(_ctx, getState());
  enterRule(_localctx, 0, NovaParser::RuleSourceFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__0) {
      setState(204);
      moduleDeclaration();
    }
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__2

    || _la == NovaParser::T__4) {
      setState(207);
      importDeclaration();
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__5)
      | (1ULL << NovaParser::T__7)
      | (1ULL << NovaParser::T__16)
      | (1ULL << NovaParser::T__19)
      | (1ULL << NovaParser::T__20)
      | (1ULL << NovaParser::T__22)
      | (1ULL << NovaParser::T__23)
      | (1ULL << NovaParser::T__24)
      | (1ULL << NovaParser::T__25))) != 0)) {
      setState(213);
      topLevelDeclaration();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    match(NovaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationContext ------------------------------------------------------------------

NovaParser::ModuleDeclarationContext::ModuleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::QualifiedNameContext* NovaParser::ModuleDeclarationContext::qualifiedName() {
  return getRuleContext<NovaParser::QualifiedNameContext>(0);
}


size_t NovaParser::ModuleDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleModuleDeclaration;
}

void NovaParser::ModuleDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleDeclaration(this);
}

void NovaParser::ModuleDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleDeclaration(this);
}


antlrcpp::Any NovaParser::ModuleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitModuleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ModuleDeclarationContext* NovaParser::moduleDeclaration() {
  ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, NovaParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(NovaParser::T__0);
    setState(222);
    qualifiedName();
    setState(223);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclarationContext ------------------------------------------------------------------

NovaParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::QualifiedNameContext* NovaParser::ImportDeclarationContext::qualifiedName() {
  return getRuleContext<NovaParser::QualifiedNameContext>(0);
}

NovaParser::IdentifierContext* NovaParser::ImportDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}


size_t NovaParser::ImportDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleImportDeclaration;
}

void NovaParser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclaration(this);
}

void NovaParser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclaration(this);
}


antlrcpp::Any NovaParser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ImportDeclarationContext* NovaParser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, NovaParser::RuleImportDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(225);
        match(NovaParser::T__2);
        setState(226);
        qualifiedName();
        setState(229);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__3) {
          setState(227);
          match(NovaParser::T__3);
          setState(228);
          identifier();
        }
        setState(231);
        match(NovaParser::T__1);
        break;
      }

      case NovaParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(233);
        match(NovaParser::T__4);
        setState(234);
        qualifiedName();
        setState(235);
        match(NovaParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDeclarationContext ------------------------------------------------------------------

NovaParser::TopLevelDeclarationContext::TopLevelDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::FunctionDeclarationContext* NovaParser::TopLevelDeclarationContext::functionDeclaration() {
  return getRuleContext<NovaParser::FunctionDeclarationContext>(0);
}

NovaParser::StructDeclarationContext* NovaParser::TopLevelDeclarationContext::structDeclaration() {
  return getRuleContext<NovaParser::StructDeclarationContext>(0);
}

NovaParser::TraitDeclarationContext* NovaParser::TopLevelDeclarationContext::traitDeclaration() {
  return getRuleContext<NovaParser::TraitDeclarationContext>(0);
}

NovaParser::ImplDeclarationContext* NovaParser::TopLevelDeclarationContext::implDeclaration() {
  return getRuleContext<NovaParser::ImplDeclarationContext>(0);
}

NovaParser::EnumDeclarationContext* NovaParser::TopLevelDeclarationContext::enumDeclaration() {
  return getRuleContext<NovaParser::EnumDeclarationContext>(0);
}

NovaParser::TypeAliasDeclarationContext* NovaParser::TopLevelDeclarationContext::typeAliasDeclaration() {
  return getRuleContext<NovaParser::TypeAliasDeclarationContext>(0);
}

NovaParser::ConstantDeclarationContext* NovaParser::TopLevelDeclarationContext::constantDeclaration() {
  return getRuleContext<NovaParser::ConstantDeclarationContext>(0);
}

NovaParser::ExternDeclarationContext* NovaParser::TopLevelDeclarationContext::externDeclaration() {
  return getRuleContext<NovaParser::ExternDeclarationContext>(0);
}


size_t NovaParser::TopLevelDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleTopLevelDeclaration;
}

void NovaParser::TopLevelDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDeclaration(this);
}

void NovaParser::TopLevelDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDeclaration(this);
}


antlrcpp::Any NovaParser::TopLevelDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTopLevelDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TopLevelDeclarationContext* NovaParser::topLevelDeclaration() {
  TopLevelDeclarationContext *_localctx = _tracker.createInstance<TopLevelDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, NovaParser::RuleTopLevelDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__5:
      case NovaParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(239);
        functionDeclaration();
        break;
      }

      case NovaParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(240);
        structDeclaration();
        break;
      }

      case NovaParser::T__19: {
        enterOuterAlt(_localctx, 3);
        setState(241);
        traitDeclaration();
        break;
      }

      case NovaParser::T__20: {
        enterOuterAlt(_localctx, 4);
        setState(242);
        implDeclaration();
        break;
      }

      case NovaParser::T__22: {
        enterOuterAlt(_localctx, 5);
        setState(243);
        enumDeclaration();
        break;
      }

      case NovaParser::T__23: {
        enterOuterAlt(_localctx, 6);
        setState(244);
        typeAliasDeclaration();
        break;
      }

      case NovaParser::T__24: {
        enterOuterAlt(_localctx, 7);
        setState(245);
        constantDeclaration();
        break;
      }

      case NovaParser::T__25: {
        enterOuterAlt(_localctx, 8);
        setState(246);
        externDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

NovaParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::FunctionDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::FunctionParametersContext* NovaParser::FunctionDeclarationContext::functionParameters() {
  return getRuleContext<NovaParser::FunctionParametersContext>(0);
}

NovaParser::BlockContext* NovaParser::FunctionDeclarationContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::FunctionDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

NovaParser::ReturnTypeContext* NovaParser::FunctionDeclarationContext::returnType() {
  return getRuleContext<NovaParser::ReturnTypeContext>(0);
}

NovaParser::ConstraintListContext* NovaParser::FunctionDeclarationContext::constraintList() {
  return getRuleContext<NovaParser::ConstraintListContext>(0);
}


size_t NovaParser::FunctionDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleFunctionDeclaration;
}

void NovaParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void NovaParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any NovaParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FunctionDeclarationContext* NovaParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, NovaParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(249);
        match(NovaParser::T__5);
        setState(250);
        identifier();
        setState(252);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__43) {
          setState(251);
          typeParameterList();
        }
        setState(254);
        functionParameters();
        setState(256);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__15) {
          setState(255);
          returnType();
        }
        setState(260);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__6) {
          setState(258);
          match(NovaParser::T__6);
          setState(259);
          constraintList();
        }
        setState(262);
        block();
        break;
      }

      case NovaParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(264);
        match(NovaParser::T__7);
        setState(265);
        match(NovaParser::T__5);
        setState(266);
        identifier();
        setState(268);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__43) {
          setState(267);
          typeParameterList();
        }
        setState(270);
        functionParameters();
        setState(272);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__15) {
          setState(271);
          returnType();
        }
        setState(276);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__6) {
          setState(274);
          match(NovaParser::T__6);
          setState(275);
          constraintList();
        }
        setState(278);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParametersContext ------------------------------------------------------------------

NovaParser::FunctionParametersContext::FunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ParameterListContext* NovaParser::FunctionParametersContext::parameterList() {
  return getRuleContext<NovaParser::ParameterListContext>(0);
}


size_t NovaParser::FunctionParametersContext::getRuleIndex() const {
  return NovaParser::RuleFunctionParameters;
}

void NovaParser::FunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameters(this);
}

void NovaParser::FunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameters(this);
}


antlrcpp::Any NovaParser::FunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FunctionParametersContext* NovaParser::functionParameters() {
  FunctionParametersContext *_localctx = _tracker.createInstance<FunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 10, NovaParser::RuleFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(282);
      match(NovaParser::T__8);
      setState(284);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__13 || _la == NovaParser::Keyword

      || _la == NovaParser::Identifier) {
        setState(283);
        parameterList();
      }
      setState(286);
      match(NovaParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(287);
      match(NovaParser::T__8);
      setState(289);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__13 || _la == NovaParser::Keyword

      || _la == NovaParser::Identifier) {
        setState(288);
        parameterList();
      }
      setState(292);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__10) {
        setState(291);
        match(NovaParser::T__10);
      }
      setState(294);
      match(NovaParser::T__9);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

NovaParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ParameterContext *> NovaParser::ParameterListContext::parameter() {
  return getRuleContexts<NovaParser::ParameterContext>();
}

NovaParser::ParameterContext* NovaParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<NovaParser::ParameterContext>(i);
}


size_t NovaParser::ParameterListContext::getRuleIndex() const {
  return NovaParser::RuleParameterList;
}

void NovaParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void NovaParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


antlrcpp::Any NovaParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ParameterListContext* NovaParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 12, NovaParser::RuleParameterList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(297);
    parameter();
    setState(302);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(298);
        match(NovaParser::T__10);
        setState(299);
        parameter(); 
      }
      setState(304);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(306);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(305);
      match(NovaParser::T__10);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

NovaParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::ParameterContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::Type_Context* NovaParser::ParameterContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::ExpressionContext* NovaParser::ParameterContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::ParameterContext::getRuleIndex() const {
  return NovaParser::RuleParameter;
}

void NovaParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void NovaParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any NovaParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ParameterContext* NovaParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, NovaParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::Keyword:
      case NovaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(308);
        identifier();
        setState(309);
        match(NovaParser::T__11);
        setState(310);
        type_();
        setState(313);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__12) {
          setState(311);
          match(NovaParser::T__12);
          setState(312);
          expression();
        }
        break;
      }

      case NovaParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(315);
        match(NovaParser::T__13);
        setState(317);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__14) {
          setState(316);
          match(NovaParser::T__14);
        }
        setState(319);
        identifier();
        setState(320);
        match(NovaParser::T__11);
        setState(321);
        type_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnTypeContext ------------------------------------------------------------------

NovaParser::ReturnTypeContext::ReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::Type_Context* NovaParser::ReturnTypeContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}


size_t NovaParser::ReturnTypeContext::getRuleIndex() const {
  return NovaParser::RuleReturnType;
}

void NovaParser::ReturnTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnType(this);
}

void NovaParser::ReturnTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnType(this);
}


antlrcpp::Any NovaParser::ReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitReturnType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ReturnTypeContext* NovaParser::returnType() {
  ReturnTypeContext *_localctx = _tracker.createInstance<ReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 16, NovaParser::RuleReturnType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(NovaParser::T__15);
    setState(326);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

NovaParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::StructDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::StructDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

NovaParser::ConstraintListContext* NovaParser::StructDeclarationContext::constraintList() {
  return getRuleContext<NovaParser::ConstraintListContext>(0);
}

std::vector<NovaParser::StructFieldContext *> NovaParser::StructDeclarationContext::structField() {
  return getRuleContexts<NovaParser::StructFieldContext>();
}

NovaParser::StructFieldContext* NovaParser::StructDeclarationContext::structField(size_t i) {
  return getRuleContext<NovaParser::StructFieldContext>(i);
}


size_t NovaParser::StructDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleStructDeclaration;
}

void NovaParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void NovaParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


antlrcpp::Any NovaParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::StructDeclarationContext* NovaParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, NovaParser::RuleStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(NovaParser::T__16);
    setState(329);
    identifier();
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__43) {
      setState(330);
      typeParameterList();
    }
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__6) {
      setState(333);
      match(NovaParser::T__6);
      setState(334);
      constraintList();
    }
    setState(337);
    match(NovaParser::T__17);
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 98) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 98)) & ((1ULL << (NovaParser::T__97 - 98))
      | (1ULL << (NovaParser::Keyword - 98))
      | (1ULL << (NovaParser::Identifier - 98)))) != 0)) {
      setState(338);
      structField();
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(344);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructFieldContext ------------------------------------------------------------------

NovaParser::StructFieldContext::StructFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::StructFieldContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::Type_Context* NovaParser::StructFieldContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::VisibilityContext* NovaParser::StructFieldContext::visibility() {
  return getRuleContext<NovaParser::VisibilityContext>(0);
}


size_t NovaParser::StructFieldContext::getRuleIndex() const {
  return NovaParser::RuleStructField;
}

void NovaParser::StructFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructField(this);
}

void NovaParser::StructFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructField(this);
}


antlrcpp::Any NovaParser::StructFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitStructField(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::StructFieldContext* NovaParser::structField() {
  StructFieldContext *_localctx = _tracker.createInstance<StructFieldContext>(_ctx, getState());
  enterRule(_localctx, 20, NovaParser::RuleStructField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(347);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__97) {
        setState(346);
        visibility();
      }
      setState(349);
      identifier();
      setState(350);
      match(NovaParser::T__11);
      setState(351);
      type_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(354);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__97) {
        setState(353);
        visibility();
      }
      setState(356);
      identifier();
      setState(357);
      match(NovaParser::T__10);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TraitDeclarationContext ------------------------------------------------------------------

NovaParser::TraitDeclarationContext::TraitDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::TraitDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::TraitDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

NovaParser::IdentifierListContext* NovaParser::TraitDeclarationContext::identifierList() {
  return getRuleContext<NovaParser::IdentifierListContext>(0);
}

std::vector<NovaParser::TraitMethodContext *> NovaParser::TraitDeclarationContext::traitMethod() {
  return getRuleContexts<NovaParser::TraitMethodContext>();
}

NovaParser::TraitMethodContext* NovaParser::TraitDeclarationContext::traitMethod(size_t i) {
  return getRuleContext<NovaParser::TraitMethodContext>(i);
}


size_t NovaParser::TraitDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleTraitDeclaration;
}

void NovaParser::TraitDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTraitDeclaration(this);
}

void NovaParser::TraitDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTraitDeclaration(this);
}


antlrcpp::Any NovaParser::TraitDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTraitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TraitDeclarationContext* NovaParser::traitDeclaration() {
  TraitDeclarationContext *_localctx = _tracker.createInstance<TraitDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, NovaParser::RuleTraitDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(NovaParser::T__19);
    setState(362);
    identifier();
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__43) {
      setState(363);
      typeParameterList();
    }
    setState(368);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__11) {
      setState(366);
      match(NovaParser::T__11);
      setState(367);
      identifierList();
    }
    setState(370);
    match(NovaParser::T__17);
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__5

    || _la == NovaParser::T__7 || _la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(371);
      traitMethod();
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(377);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TraitMethodContext ------------------------------------------------------------------

NovaParser::TraitMethodContext::TraitMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::FunctionDeclarationContext* NovaParser::TraitMethodContext::functionDeclaration() {
  return getRuleContext<NovaParser::FunctionDeclarationContext>(0);
}

NovaParser::FunctionSignatureContext* NovaParser::TraitMethodContext::functionSignature() {
  return getRuleContext<NovaParser::FunctionSignatureContext>(0);
}


size_t NovaParser::TraitMethodContext::getRuleIndex() const {
  return NovaParser::RuleTraitMethod;
}

void NovaParser::TraitMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTraitMethod(this);
}

void NovaParser::TraitMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTraitMethod(this);
}


antlrcpp::Any NovaParser::TraitMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTraitMethod(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TraitMethodContext* NovaParser::traitMethod() {
  TraitMethodContext *_localctx = _tracker.createInstance<TraitMethodContext>(_ctx, getState());
  enterRule(_localctx, 24, NovaParser::RuleTraitMethod);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__5:
      case NovaParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(379);
        functionDeclaration();
        break;
      }

      case NovaParser::Keyword:
      case NovaParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(380);
        functionSignature();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSignatureContext ------------------------------------------------------------------

NovaParser::FunctionSignatureContext::FunctionSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::FunctionSignatureContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::FunctionParametersContext* NovaParser::FunctionSignatureContext::functionParameters() {
  return getRuleContext<NovaParser::FunctionParametersContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::FunctionSignatureContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

NovaParser::Type_Context* NovaParser::FunctionSignatureContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}


size_t NovaParser::FunctionSignatureContext::getRuleIndex() const {
  return NovaParser::RuleFunctionSignature;
}

void NovaParser::FunctionSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSignature(this);
}

void NovaParser::FunctionSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSignature(this);
}


antlrcpp::Any NovaParser::FunctionSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFunctionSignature(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FunctionSignatureContext* NovaParser::functionSignature() {
  FunctionSignatureContext *_localctx = _tracker.createInstance<FunctionSignatureContext>(_ctx, getState());
  enterRule(_localctx, 26, NovaParser::RuleFunctionSignature);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    identifier();
    setState(385);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__43) {
      setState(384);
      typeParameterList();
    }
    setState(387);
    functionParameters();
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__15) {
      setState(388);
      match(NovaParser::T__15);
      setState(389);
      type_();
    }
    setState(392);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImplDeclarationContext ------------------------------------------------------------------

NovaParser::ImplDeclarationContext::ImplDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::Type_Context *> NovaParser::ImplDeclarationContext::type_() {
  return getRuleContexts<NovaParser::Type_Context>();
}

NovaParser::Type_Context* NovaParser::ImplDeclarationContext::type_(size_t i) {
  return getRuleContext<NovaParser::Type_Context>(i);
}

NovaParser::TypeParameterListContext* NovaParser::ImplDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

std::vector<NovaParser::ImplMemberContext *> NovaParser::ImplDeclarationContext::implMember() {
  return getRuleContexts<NovaParser::ImplMemberContext>();
}

NovaParser::ImplMemberContext* NovaParser::ImplDeclarationContext::implMember(size_t i) {
  return getRuleContext<NovaParser::ImplMemberContext>(i);
}


size_t NovaParser::ImplDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleImplDeclaration;
}

void NovaParser::ImplDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplDeclaration(this);
}

void NovaParser::ImplDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplDeclaration(this);
}


antlrcpp::Any NovaParser::ImplDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitImplDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ImplDeclarationContext* NovaParser::implDeclaration() {
  ImplDeclarationContext *_localctx = _tracker.createInstance<ImplDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, NovaParser::RuleImplDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(NovaParser::T__20);
    setState(396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__43) {
      setState(395);
      typeParameterList();
    }
    setState(398);
    type_();
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__21) {
      setState(399);
      match(NovaParser::T__21);
      setState(400);
      type_();
    }
    setState(403);
    match(NovaParser::T__17);
    setState(407);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__5)
      | (1ULL << NovaParser::T__7)
      | (1ULL << NovaParser::T__24))) != 0)) {
      setState(404);
      implMember();
      setState(409);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(410);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImplMemberContext ------------------------------------------------------------------

NovaParser::ImplMemberContext::ImplMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::FunctionDeclarationContext* NovaParser::ImplMemberContext::functionDeclaration() {
  return getRuleContext<NovaParser::FunctionDeclarationContext>(0);
}

NovaParser::ConstantDeclarationContext* NovaParser::ImplMemberContext::constantDeclaration() {
  return getRuleContext<NovaParser::ConstantDeclarationContext>(0);
}


size_t NovaParser::ImplMemberContext::getRuleIndex() const {
  return NovaParser::RuleImplMember;
}

void NovaParser::ImplMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplMember(this);
}

void NovaParser::ImplMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplMember(this);
}


antlrcpp::Any NovaParser::ImplMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitImplMember(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ImplMemberContext* NovaParser::implMember() {
  ImplMemberContext *_localctx = _tracker.createInstance<ImplMemberContext>(_ctx, getState());
  enterRule(_localctx, 30, NovaParser::RuleImplMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(414);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__5:
      case NovaParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(412);
        functionDeclaration();
        break;
      }

      case NovaParser::T__24: {
        enterOuterAlt(_localctx, 2);
        setState(413);
        constantDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

NovaParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::EnumDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::EnumDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

NovaParser::ConstraintListContext* NovaParser::EnumDeclarationContext::constraintList() {
  return getRuleContext<NovaParser::ConstraintListContext>(0);
}

std::vector<NovaParser::EnumVariantContext *> NovaParser::EnumDeclarationContext::enumVariant() {
  return getRuleContexts<NovaParser::EnumVariantContext>();
}

NovaParser::EnumVariantContext* NovaParser::EnumDeclarationContext::enumVariant(size_t i) {
  return getRuleContext<NovaParser::EnumVariantContext>(i);
}


size_t NovaParser::EnumDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleEnumDeclaration;
}

void NovaParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void NovaParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}


antlrcpp::Any NovaParser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::EnumDeclarationContext* NovaParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, NovaParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(NovaParser::T__22);
    setState(417);
    identifier();
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__43) {
      setState(418);
      typeParameterList();
    }
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__6) {
      setState(421);
      match(NovaParser::T__6);
      setState(422);
      constraintList();
    }
    setState(425);
    match(NovaParser::T__17);
    setState(429);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(426);
      enumVariant();
      setState(431);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(432);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumVariantContext ------------------------------------------------------------------

NovaParser::EnumVariantContext::EnumVariantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::EnumVariantContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::TypeListContext* NovaParser::EnumVariantContext::typeList() {
  return getRuleContext<NovaParser::TypeListContext>(0);
}


size_t NovaParser::EnumVariantContext::getRuleIndex() const {
  return NovaParser::RuleEnumVariant;
}

void NovaParser::EnumVariantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumVariant(this);
}

void NovaParser::EnumVariantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumVariant(this);
}


antlrcpp::Any NovaParser::EnumVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitEnumVariant(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::EnumVariantContext* NovaParser::enumVariant() {
  EnumVariantContext *_localctx = _tracker.createInstance<EnumVariantContext>(_ctx, getState());
  enterRule(_localctx, 34, NovaParser::RuleEnumVariant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    identifier();
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__8) {
      setState(435);
      match(NovaParser::T__8);
      setState(436);
      typeList();
      setState(437);
      match(NovaParser::T__9);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAliasDeclarationContext ------------------------------------------------------------------

NovaParser::TypeAliasDeclarationContext::TypeAliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::TypeAliasDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::Type_Context* NovaParser::TypeAliasDeclarationContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::TypeParameterListContext* NovaParser::TypeAliasDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}


size_t NovaParser::TypeAliasDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleTypeAliasDeclaration;
}

void NovaParser::TypeAliasDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAliasDeclaration(this);
}

void NovaParser::TypeAliasDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAliasDeclaration(this);
}


antlrcpp::Any NovaParser::TypeAliasDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTypeAliasDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TypeAliasDeclarationContext* NovaParser::typeAliasDeclaration() {
  TypeAliasDeclarationContext *_localctx = _tracker.createInstance<TypeAliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, NovaParser::RuleTypeAliasDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(NovaParser::T__23);
    setState(442);
    identifier();
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__43) {
      setState(443);
      typeParameterList();
    }
    setState(446);
    match(NovaParser::T__12);
    setState(447);
    type_();
    setState(448);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

NovaParser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::ConstantDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::Type_Context* NovaParser::ConstantDeclarationContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::ExpressionContext* NovaParser::ConstantDeclarationContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::ConstantDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleConstantDeclaration;
}

void NovaParser::ConstantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDeclaration(this);
}

void NovaParser::ConstantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDeclaration(this);
}


antlrcpp::Any NovaParser::ConstantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitConstantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ConstantDeclarationContext* NovaParser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 38, NovaParser::RuleConstantDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    match(NovaParser::T__24);
    setState(451);
    identifier();
    setState(452);
    match(NovaParser::T__11);
    setState(453);
    type_();
    setState(454);
    match(NovaParser::T__12);
    setState(455);
    expression();
    setState(456);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternDeclarationContext ------------------------------------------------------------------

NovaParser::ExternDeclarationContext::ExternDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::ExternDeclarationContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::FunctionParametersContext* NovaParser::ExternDeclarationContext::functionParameters() {
  return getRuleContext<NovaParser::FunctionParametersContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::ExternDeclarationContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}

NovaParser::ReturnTypeContext* NovaParser::ExternDeclarationContext::returnType() {
  return getRuleContext<NovaParser::ReturnTypeContext>(0);
}

std::vector<NovaParser::ExternFunctionContext *> NovaParser::ExternDeclarationContext::externFunction() {
  return getRuleContexts<NovaParser::ExternFunctionContext>();
}

NovaParser::ExternFunctionContext* NovaParser::ExternDeclarationContext::externFunction(size_t i) {
  return getRuleContext<NovaParser::ExternFunctionContext>(i);
}


size_t NovaParser::ExternDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleExternDeclaration;
}

void NovaParser::ExternDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternDeclaration(this);
}

void NovaParser::ExternDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternDeclaration(this);
}


antlrcpp::Any NovaParser::ExternDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitExternDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ExternDeclarationContext* NovaParser::externDeclaration() {
  ExternDeclarationContext *_localctx = _tracker.createInstance<ExternDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, NovaParser::RuleExternDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(458);
      match(NovaParser::T__25);
      setState(459);
      match(NovaParser::T__5);
      setState(460);
      identifier();
      setState(462);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__43) {
        setState(461);
        typeParameterList();
      }
      setState(464);
      functionParameters();
      setState(466);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__15) {
        setState(465);
        returnType();
      }
      setState(468);
      match(NovaParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(470);
      match(NovaParser::T__25);
      setState(471);
      match(NovaParser::T__26);
      setState(472);
      match(NovaParser::T__17);
      setState(476);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NovaParser::Keyword

      || _la == NovaParser::Identifier) {
        setState(473);
        externFunction();
        setState(478);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(479);
      match(NovaParser::T__18);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternFunctionContext ------------------------------------------------------------------

NovaParser::ExternFunctionContext::ExternFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::FunctionSignatureContext* NovaParser::ExternFunctionContext::functionSignature() {
  return getRuleContext<NovaParser::FunctionSignatureContext>(0);
}


size_t NovaParser::ExternFunctionContext::getRuleIndex() const {
  return NovaParser::RuleExternFunction;
}

void NovaParser::ExternFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternFunction(this);
}

void NovaParser::ExternFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternFunction(this);
}


antlrcpp::Any NovaParser::ExternFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitExternFunction(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ExternFunctionContext* NovaParser::externFunction() {
  ExternFunctionContext *_localctx = _tracker.createInstance<ExternFunctionContext>(_ctx, getState());
  enterRule(_localctx, 42, NovaParser::RuleExternFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    functionSignature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

NovaParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::PrimitiveTypeContext* NovaParser::Type_Context::primitiveType() {
  return getRuleContext<NovaParser::PrimitiveTypeContext>(0);
}

NovaParser::TypeReferenceContext* NovaParser::Type_Context::typeReference() {
  return getRuleContext<NovaParser::TypeReferenceContext>(0);
}

NovaParser::GenericTypeContext* NovaParser::Type_Context::genericType() {
  return getRuleContext<NovaParser::GenericTypeContext>(0);
}

NovaParser::FunctionTypeContext* NovaParser::Type_Context::functionType() {
  return getRuleContext<NovaParser::FunctionTypeContext>(0);
}

NovaParser::TupleTypeContext* NovaParser::Type_Context::tupleType() {
  return getRuleContext<NovaParser::TupleTypeContext>(0);
}

NovaParser::ArrayTypeContext* NovaParser::Type_Context::arrayType() {
  return getRuleContext<NovaParser::ArrayTypeContext>(0);
}

NovaParser::ReferenceTypeContext* NovaParser::Type_Context::referenceType() {
  return getRuleContext<NovaParser::ReferenceTypeContext>(0);
}

NovaParser::OwnershipTypeContext* NovaParser::Type_Context::ownershipType() {
  return getRuleContext<NovaParser::OwnershipTypeContext>(0);
}


size_t NovaParser::Type_Context::getRuleIndex() const {
  return NovaParser::RuleType_;
}

void NovaParser::Type_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_(this);
}

void NovaParser::Type_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_(this);
}


antlrcpp::Any NovaParser::Type_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitType_(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::Type_Context* NovaParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 44, NovaParser::RuleType_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(492);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(484);
      primitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(485);
      typeReference();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(486);
      genericType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(487);
      functionType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(488);
      tupleType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(489);
      arrayType();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(490);
      referenceType();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(491);
      ownershipType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

NovaParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NovaParser::PrimitiveTypeContext::getRuleIndex() const {
  return NovaParser::RulePrimitiveType;
}

void NovaParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void NovaParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


antlrcpp::Any NovaParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::PrimitiveTypeContext* NovaParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, NovaParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__23)
      | (1ULL << NovaParser::T__27)
      | (1ULL << NovaParser::T__28)
      | (1ULL << NovaParser::T__29)
      | (1ULL << NovaParser::T__30)
      | (1ULL << NovaParser::T__31)
      | (1ULL << NovaParser::T__32)
      | (1ULL << NovaParser::T__33)
      | (1ULL << NovaParser::T__34)
      | (1ULL << NovaParser::T__35)
      | (1ULL << NovaParser::T__36)
      | (1ULL << NovaParser::T__37)
      | (1ULL << NovaParser::T__38)
      | (1ULL << NovaParser::T__39)
      | (1ULL << NovaParser::T__40)
      | (1ULL << NovaParser::T__41)
      | (1ULL << NovaParser::T__42))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeReferenceContext ------------------------------------------------------------------

NovaParser::TypeReferenceContext::TypeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::QualifiedNameContext* NovaParser::TypeReferenceContext::qualifiedName() {
  return getRuleContext<NovaParser::QualifiedNameContext>(0);
}

NovaParser::TypeListContext* NovaParser::TypeReferenceContext::typeList() {
  return getRuleContext<NovaParser::TypeListContext>(0);
}


size_t NovaParser::TypeReferenceContext::getRuleIndex() const {
  return NovaParser::RuleTypeReference;
}

void NovaParser::TypeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeReference(this);
}

void NovaParser::TypeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeReference(this);
}


antlrcpp::Any NovaParser::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TypeReferenceContext* NovaParser::typeReference() {
  TypeReferenceContext *_localctx = _tracker.createInstance<TypeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 48, NovaParser::RuleTypeReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    qualifiedName();
    setState(501);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(497);
      match(NovaParser::T__43);
      setState(498);
      typeList();
      setState(499);
      match(NovaParser::T__44);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericTypeContext ------------------------------------------------------------------

NovaParser::GenericTypeContext::GenericTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::TypeReferenceContext* NovaParser::GenericTypeContext::typeReference() {
  return getRuleContext<NovaParser::TypeReferenceContext>(0);
}


size_t NovaParser::GenericTypeContext::getRuleIndex() const {
  return NovaParser::RuleGenericType;
}

void NovaParser::GenericTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericType(this);
}

void NovaParser::GenericTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericType(this);
}


antlrcpp::Any NovaParser::GenericTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitGenericType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::GenericTypeContext* NovaParser::genericType() {
  GenericTypeContext *_localctx = _tracker.createInstance<GenericTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, NovaParser::RuleGenericType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    typeReference();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

NovaParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::Type_Context *> NovaParser::TypeListContext::type_() {
  return getRuleContexts<NovaParser::Type_Context>();
}

NovaParser::Type_Context* NovaParser::TypeListContext::type_(size_t i) {
  return getRuleContext<NovaParser::Type_Context>(i);
}


size_t NovaParser::TypeListContext::getRuleIndex() const {
  return NovaParser::RuleTypeList;
}

void NovaParser::TypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeList(this);
}

void NovaParser::TypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeList(this);
}


antlrcpp::Any NovaParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TypeListContext* NovaParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 52, NovaParser::RuleTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    type_();
    setState(510);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__10) {
      setState(506);
      match(NovaParser::T__10);
      setState(507);
      type_();
      setState(512);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeContext ------------------------------------------------------------------

NovaParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::TypeListContext* NovaParser::FunctionTypeContext::typeList() {
  return getRuleContext<NovaParser::TypeListContext>(0);
}

NovaParser::ReturnTypeContext* NovaParser::FunctionTypeContext::returnType() {
  return getRuleContext<NovaParser::ReturnTypeContext>(0);
}


size_t NovaParser::FunctionTypeContext::getRuleIndex() const {
  return NovaParser::RuleFunctionType;
}

void NovaParser::FunctionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionType(this);
}

void NovaParser::FunctionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionType(this);
}


antlrcpp::Any NovaParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FunctionTypeContext* NovaParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, NovaParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(NovaParser::T__45);
    setState(514);
    match(NovaParser::T__8);
    setState(516);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__23)
      | (1ULL << NovaParser::T__27)
      | (1ULL << NovaParser::T__28)
      | (1ULL << NovaParser::T__29)
      | (1ULL << NovaParser::T__30)
      | (1ULL << NovaParser::T__31)
      | (1ULL << NovaParser::T__32)
      | (1ULL << NovaParser::T__33)
      | (1ULL << NovaParser::T__34)
      | (1ULL << NovaParser::T__35)
      | (1ULL << NovaParser::T__36)
      | (1ULL << NovaParser::T__37)
      | (1ULL << NovaParser::T__38)
      | (1ULL << NovaParser::T__39)
      | (1ULL << NovaParser::T__40)
      | (1ULL << NovaParser::T__41)
      | (1ULL << NovaParser::T__42)
      | (1ULL << NovaParser::T__45)
      | (1ULL << NovaParser::T__46))) != 0) || _la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(515);
      typeList();
    }
    setState(518);
    match(NovaParser::T__9);
    setState(520);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(519);
      returnType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleTypeContext ------------------------------------------------------------------

NovaParser::TupleTypeContext::TupleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::Type_Context *> NovaParser::TupleTypeContext::type_() {
  return getRuleContexts<NovaParser::Type_Context>();
}

NovaParser::Type_Context* NovaParser::TupleTypeContext::type_(size_t i) {
  return getRuleContext<NovaParser::Type_Context>(i);
}


size_t NovaParser::TupleTypeContext::getRuleIndex() const {
  return NovaParser::RuleTupleType;
}

void NovaParser::TupleTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleType(this);
}

void NovaParser::TupleTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleType(this);
}


antlrcpp::Any NovaParser::TupleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTupleType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TupleTypeContext* NovaParser::tupleType() {
  TupleTypeContext *_localctx = _tracker.createInstance<TupleTypeContext>(_ctx, getState());
  enterRule(_localctx, 56, NovaParser::RuleTupleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(NovaParser::T__8);
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__23)
      | (1ULL << NovaParser::T__27)
      | (1ULL << NovaParser::T__28)
      | (1ULL << NovaParser::T__29)
      | (1ULL << NovaParser::T__30)
      | (1ULL << NovaParser::T__31)
      | (1ULL << NovaParser::T__32)
      | (1ULL << NovaParser::T__33)
      | (1ULL << NovaParser::T__34)
      | (1ULL << NovaParser::T__35)
      | (1ULL << NovaParser::T__36)
      | (1ULL << NovaParser::T__37)
      | (1ULL << NovaParser::T__38)
      | (1ULL << NovaParser::T__39)
      | (1ULL << NovaParser::T__40)
      | (1ULL << NovaParser::T__41)
      | (1ULL << NovaParser::T__42)
      | (1ULL << NovaParser::T__45)
      | (1ULL << NovaParser::T__46))) != 0) || _la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(523);
      type_();
      setState(526); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(524);
        match(NovaParser::T__10);
        setState(525);
        type_();
        setState(528); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == NovaParser::T__10);
    }
    setState(532);
    match(NovaParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

NovaParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::Type_Context* NovaParser::ArrayTypeContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::ExpressionContext* NovaParser::ArrayTypeContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::ArrayTypeContext::getRuleIndex() const {
  return NovaParser::RuleArrayType;
}

void NovaParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void NovaParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


antlrcpp::Any NovaParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ArrayTypeContext* NovaParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 58, NovaParser::RuleArrayType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(NovaParser::T__46);
    setState(535);
    type_();
    setState(536);
    match(NovaParser::T__1);
    setState(537);
    expression();
    setState(538);
    match(NovaParser::T__47);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceTypeContext ------------------------------------------------------------------

NovaParser::ReferenceTypeContext::ReferenceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::Type_Context* NovaParser::ReferenceTypeContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::LifetimeContext* NovaParser::ReferenceTypeContext::lifetime() {
  return getRuleContext<NovaParser::LifetimeContext>(0);
}


size_t NovaParser::ReferenceTypeContext::getRuleIndex() const {
  return NovaParser::RuleReferenceType;
}

void NovaParser::ReferenceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferenceType(this);
}

void NovaParser::ReferenceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferenceType(this);
}


antlrcpp::Any NovaParser::ReferenceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitReferenceType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ReferenceTypeContext* NovaParser::referenceType() {
  ReferenceTypeContext *_localctx = _tracker.createInstance<ReferenceTypeContext>(_ctx, getState());
  enterRule(_localctx, 60, NovaParser::RuleReferenceType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    match(NovaParser::T__13);
    setState(542);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__14) {
      setState(541);
      match(NovaParser::T__14);
    }
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__49) {
      setState(544);
      lifetime();
    }
    setState(547);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OwnershipTypeContext ------------------------------------------------------------------

NovaParser::OwnershipTypeContext::OwnershipTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::OwnershipTypeContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::TypeParameterListContext* NovaParser::OwnershipTypeContext::typeParameterList() {
  return getRuleContext<NovaParser::TypeParameterListContext>(0);
}


size_t NovaParser::OwnershipTypeContext::getRuleIndex() const {
  return NovaParser::RuleOwnershipType;
}

void NovaParser::OwnershipTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOwnershipType(this);
}

void NovaParser::OwnershipTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOwnershipType(this);
}


antlrcpp::Any NovaParser::OwnershipTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitOwnershipType(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::OwnershipTypeContext* NovaParser::ownershipType() {
  OwnershipTypeContext *_localctx = _tracker.createInstance<OwnershipTypeContext>(_ctx, getState());
  enterRule(_localctx, 62, NovaParser::RuleOwnershipType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    identifier();
    setState(551);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(550);
      typeParameterList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterListContext ------------------------------------------------------------------

NovaParser::TypeParameterListContext::TypeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::TypeParameterContext *> NovaParser::TypeParameterListContext::typeParameter() {
  return getRuleContexts<NovaParser::TypeParameterContext>();
}

NovaParser::TypeParameterContext* NovaParser::TypeParameterListContext::typeParameter(size_t i) {
  return getRuleContext<NovaParser::TypeParameterContext>(i);
}


size_t NovaParser::TypeParameterListContext::getRuleIndex() const {
  return NovaParser::RuleTypeParameterList;
}

void NovaParser::TypeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterList(this);
}

void NovaParser::TypeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterList(this);
}


antlrcpp::Any NovaParser::TypeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTypeParameterList(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TypeParameterListContext* NovaParser::typeParameterList() {
  TypeParameterListContext *_localctx = _tracker.createInstance<TypeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 64, NovaParser::RuleTypeParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(NovaParser::T__43);
    setState(554);
    typeParameter();
    setState(559);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__10) {
      setState(555);
      match(NovaParser::T__10);
      setState(556);
      typeParameter();
      setState(561);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(562);
    match(NovaParser::T__44);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

NovaParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::TypeParameterContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::IdentifierListContext* NovaParser::TypeParameterContext::identifierList() {
  return getRuleContext<NovaParser::IdentifierListContext>(0);
}


size_t NovaParser::TypeParameterContext::getRuleIndex() const {
  return NovaParser::RuleTypeParameter;
}

void NovaParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void NovaParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}


antlrcpp::Any NovaParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TypeParameterContext* NovaParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 66, NovaParser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    identifier();
    setState(567);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__11) {
      setState(565);
      match(NovaParser::T__11);
      setState(566);
      identifierList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintListContext ------------------------------------------------------------------

NovaParser::ConstraintListContext::ConstraintListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ConstraintContext *> NovaParser::ConstraintListContext::constraint() {
  return getRuleContexts<NovaParser::ConstraintContext>();
}

NovaParser::ConstraintContext* NovaParser::ConstraintListContext::constraint(size_t i) {
  return getRuleContext<NovaParser::ConstraintContext>(i);
}


size_t NovaParser::ConstraintListContext::getRuleIndex() const {
  return NovaParser::RuleConstraintList;
}

void NovaParser::ConstraintListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraintList(this);
}

void NovaParser::ConstraintListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraintList(this);
}


antlrcpp::Any NovaParser::ConstraintListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitConstraintList(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ConstraintListContext* NovaParser::constraintList() {
  ConstraintListContext *_localctx = _tracker.createInstance<ConstraintListContext>(_ctx, getState());
  enterRule(_localctx, 68, NovaParser::RuleConstraintList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    constraint();
    setState(574);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__10) {
      setState(570);
      match(NovaParser::T__10);
      setState(571);
      constraint();
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

NovaParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::ConstraintContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::TypeListContext* NovaParser::ConstraintContext::typeList() {
  return getRuleContext<NovaParser::TypeListContext>(0);
}

NovaParser::Type_Context* NovaParser::ConstraintContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}


size_t NovaParser::ConstraintContext::getRuleIndex() const {
  return NovaParser::RuleConstraint;
}

void NovaParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void NovaParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any NovaParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ConstraintContext* NovaParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 70, NovaParser::RuleConstraint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::Keyword:
      case NovaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(577);
        identifier();
        setState(582);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__8) {
          setState(578);
          match(NovaParser::T__8);
          setState(579);
          typeList();
          setState(580);
          match(NovaParser::T__9);
        }
        break;
      }

      case NovaParser::T__48: {
        enterOuterAlt(_localctx, 2);
        setState(584);
        match(NovaParser::T__48);
        setState(585);
        type_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

NovaParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::IdentifierContext *> NovaParser::IdentifierListContext::identifier() {
  return getRuleContexts<NovaParser::IdentifierContext>();
}

NovaParser::IdentifierContext* NovaParser::IdentifierListContext::identifier(size_t i) {
  return getRuleContext<NovaParser::IdentifierContext>(i);
}


size_t NovaParser::IdentifierListContext::getRuleIndex() const {
  return NovaParser::RuleIdentifierList;
}

void NovaParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void NovaParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any NovaParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IdentifierListContext* NovaParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 72, NovaParser::RuleIdentifierList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(588);
    identifier();
    setState(593);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(589);
        match(NovaParser::T__10);
        setState(590);
        identifier(); 
      }
      setState(595);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LifetimeContext ------------------------------------------------------------------

NovaParser::LifetimeContext::LifetimeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::LifetimeContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}


size_t NovaParser::LifetimeContext::getRuleIndex() const {
  return NovaParser::RuleLifetime;
}

void NovaParser::LifetimeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLifetime(this);
}

void NovaParser::LifetimeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLifetime(this);
}


antlrcpp::Any NovaParser::LifetimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLifetime(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LifetimeContext* NovaParser::lifetime() {
  LifetimeContext *_localctx = _tracker.createInstance<LifetimeContext>(_ctx, getState());
  enterRule(_localctx, 74, NovaParser::RuleLifetime);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(NovaParser::T__49);
    setState(597);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

NovaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::AssignmentExpressionContext* NovaParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<NovaParser::AssignmentExpressionContext>(0);
}


size_t NovaParser::ExpressionContext::getRuleIndex() const {
  return NovaParser::RuleExpression;
}

void NovaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void NovaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any NovaParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ExpressionContext* NovaParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, NovaParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

NovaParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::LogicalExpressionContext* NovaParser::AssignmentExpressionContext::logicalExpression() {
  return getRuleContext<NovaParser::LogicalExpressionContext>(0);
}

NovaParser::AssignmentExpressionContext* NovaParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<NovaParser::AssignmentExpressionContext>(0);
}

NovaParser::CompoundAssignmentOperatorContext* NovaParser::AssignmentExpressionContext::compoundAssignmentOperator() {
  return getRuleContext<NovaParser::CompoundAssignmentOperatorContext>(0);
}

NovaParser::ExpressionContext* NovaParser::AssignmentExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::AssignmentExpressionContext::getRuleIndex() const {
  return NovaParser::RuleAssignmentExpression;
}

void NovaParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void NovaParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any NovaParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::AssignmentExpressionContext* NovaParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 78, NovaParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(610);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(601);
      logicalExpression(0);
      setState(602);
      match(NovaParser::T__12);
      setState(603);
      assignmentExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(605);
      logicalExpression(0);
      setState(606);
      compoundAssignmentOperator();
      setState(607);
      expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(609);
      logicalExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundAssignmentOperatorContext ------------------------------------------------------------------

NovaParser::CompoundAssignmentOperatorContext::CompoundAssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NovaParser::CompoundAssignmentOperatorContext::getRuleIndex() const {
  return NovaParser::RuleCompoundAssignmentOperator;
}

void NovaParser::CompoundAssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundAssignmentOperator(this);
}

void NovaParser::CompoundAssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundAssignmentOperator(this);
}


antlrcpp::Any NovaParser::CompoundAssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitCompoundAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::CompoundAssignmentOperatorContext* NovaParser::compoundAssignmentOperator() {
  CompoundAssignmentOperatorContext *_localctx = _tracker.createInstance<CompoundAssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 80, NovaParser::RuleCompoundAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__50)
      | (1ULL << NovaParser::T__51)
      | (1ULL << NovaParser::T__52)
      | (1ULL << NovaParser::T__53)
      | (1ULL << NovaParser::T__54)
      | (1ULL << NovaParser::T__55)
      | (1ULL << NovaParser::T__56)
      | (1ULL << NovaParser::T__57)
      | (1ULL << NovaParser::T__58)
      | (1ULL << NovaParser::T__59))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalExpressionContext ------------------------------------------------------------------

NovaParser::LogicalExpressionContext::LogicalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ComparisonExpressionContext* NovaParser::LogicalExpressionContext::comparisonExpression() {
  return getRuleContext<NovaParser::ComparisonExpressionContext>(0);
}

NovaParser::LogicalExpressionContext* NovaParser::LogicalExpressionContext::logicalExpression() {
  return getRuleContext<NovaParser::LogicalExpressionContext>(0);
}


size_t NovaParser::LogicalExpressionContext::getRuleIndex() const {
  return NovaParser::RuleLogicalExpression;
}

void NovaParser::LogicalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpression(this);
}

void NovaParser::LogicalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpression(this);
}


antlrcpp::Any NovaParser::LogicalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLogicalExpression(this);
  else
    return visitor->visitChildren(this);
}


NovaParser::LogicalExpressionContext* NovaParser::logicalExpression() {
   return logicalExpression(0);
}

NovaParser::LogicalExpressionContext* NovaParser::logicalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NovaParser::LogicalExpressionContext *_localctx = _tracker.createInstance<LogicalExpressionContext>(_ctx, parentState);
  NovaParser::LogicalExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, NovaParser::RuleLogicalExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(615);
    comparisonExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(622);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalExpression);
        setState(617);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(618);
        _la = _input->LA(1);
        if (!(_la == NovaParser::T__60

        || _la == NovaParser::T__61)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(619);
        comparisonExpression(0); 
      }
      setState(624);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ComparisonExpressionContext ------------------------------------------------------------------

NovaParser::ComparisonExpressionContext::ComparisonExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::BitwiseExpressionContext* NovaParser::ComparisonExpressionContext::bitwiseExpression() {
  return getRuleContext<NovaParser::BitwiseExpressionContext>(0);
}

NovaParser::ComparisonExpressionContext* NovaParser::ComparisonExpressionContext::comparisonExpression() {
  return getRuleContext<NovaParser::ComparisonExpressionContext>(0);
}


size_t NovaParser::ComparisonExpressionContext::getRuleIndex() const {
  return NovaParser::RuleComparisonExpression;
}

void NovaParser::ComparisonExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpression(this);
}

void NovaParser::ComparisonExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpression(this);
}


antlrcpp::Any NovaParser::ComparisonExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitComparisonExpression(this);
  else
    return visitor->visitChildren(this);
}


NovaParser::ComparisonExpressionContext* NovaParser::comparisonExpression() {
   return comparisonExpression(0);
}

NovaParser::ComparisonExpressionContext* NovaParser::comparisonExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NovaParser::ComparisonExpressionContext *_localctx = _tracker.createInstance<ComparisonExpressionContext>(_ctx, parentState);
  NovaParser::ComparisonExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, NovaParser::RuleComparisonExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(626);
    bitwiseExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(633);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ComparisonExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleComparisonExpression);
        setState(628);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(629);
        _la = _input->LA(1);
        if (!(((((_la - 44) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 44)) & ((1ULL << (NovaParser::T__43 - 44))
          | (1ULL << (NovaParser::T__44 - 44))
          | (1ULL << (NovaParser::T__62 - 44))
          | (1ULL << (NovaParser::T__63 - 44))
          | (1ULL << (NovaParser::T__64 - 44))
          | (1ULL << (NovaParser::T__65 - 44)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(630);
        bitwiseExpression(0); 
      }
      setState(635);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BitwiseExpressionContext ------------------------------------------------------------------

NovaParser::BitwiseExpressionContext::BitwiseExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ArithmeticExpressionContext* NovaParser::BitwiseExpressionContext::arithmeticExpression() {
  return getRuleContext<NovaParser::ArithmeticExpressionContext>(0);
}

NovaParser::BitwiseExpressionContext* NovaParser::BitwiseExpressionContext::bitwiseExpression() {
  return getRuleContext<NovaParser::BitwiseExpressionContext>(0);
}


size_t NovaParser::BitwiseExpressionContext::getRuleIndex() const {
  return NovaParser::RuleBitwiseExpression;
}

void NovaParser::BitwiseExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwiseExpression(this);
}

void NovaParser::BitwiseExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwiseExpression(this);
}


antlrcpp::Any NovaParser::BitwiseExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitBitwiseExpression(this);
  else
    return visitor->visitChildren(this);
}


NovaParser::BitwiseExpressionContext* NovaParser::bitwiseExpression() {
   return bitwiseExpression(0);
}

NovaParser::BitwiseExpressionContext* NovaParser::bitwiseExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NovaParser::BitwiseExpressionContext *_localctx = _tracker.createInstance<BitwiseExpressionContext>(_ctx, parentState);
  NovaParser::BitwiseExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, NovaParser::RuleBitwiseExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(637);
    arithmeticExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(644);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BitwiseExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBitwiseExpression);
        setState(639);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(640);
        _la = _input->LA(1);
        if (!(((((_la - 14) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 14)) & ((1ULL << (NovaParser::T__13 - 14))
          | (1ULL << (NovaParser::T__66 - 14))
          | (1ULL << (NovaParser::T__67 - 14))
          | (1ULL << (NovaParser::T__68 - 14))
          | (1ULL << (NovaParser::T__69 - 14)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(641);
        arithmeticExpression(0); 
      }
      setState(646);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArithmeticExpressionContext ------------------------------------------------------------------

NovaParser::ArithmeticExpressionContext::ArithmeticExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::TermExpressionContext* NovaParser::ArithmeticExpressionContext::termExpression() {
  return getRuleContext<NovaParser::TermExpressionContext>(0);
}

NovaParser::ArithmeticExpressionContext* NovaParser::ArithmeticExpressionContext::arithmeticExpression() {
  return getRuleContext<NovaParser::ArithmeticExpressionContext>(0);
}


size_t NovaParser::ArithmeticExpressionContext::getRuleIndex() const {
  return NovaParser::RuleArithmeticExpression;
}

void NovaParser::ArithmeticExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticExpression(this);
}

void NovaParser::ArithmeticExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticExpression(this);
}


antlrcpp::Any NovaParser::ArithmeticExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpression(this);
  else
    return visitor->visitChildren(this);
}


NovaParser::ArithmeticExpressionContext* NovaParser::arithmeticExpression() {
   return arithmeticExpression(0);
}

NovaParser::ArithmeticExpressionContext* NovaParser::arithmeticExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NovaParser::ArithmeticExpressionContext *_localctx = _tracker.createInstance<ArithmeticExpressionContext>(_ctx, parentState);
  NovaParser::ArithmeticExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, NovaParser::RuleArithmeticExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(648);
    termExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(655);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArithmeticExpression);
        setState(650);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(651);
        _la = _input->LA(1);
        if (!(_la == NovaParser::T__70

        || _la == NovaParser::T__71)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(652);
        termExpression(0); 
      }
      setState(657);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermExpressionContext ------------------------------------------------------------------

NovaParser::TermExpressionContext::TermExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::UnaryExpressionContext* NovaParser::TermExpressionContext::unaryExpression() {
  return getRuleContext<NovaParser::UnaryExpressionContext>(0);
}

NovaParser::TermExpressionContext* NovaParser::TermExpressionContext::termExpression() {
  return getRuleContext<NovaParser::TermExpressionContext>(0);
}


size_t NovaParser::TermExpressionContext::getRuleIndex() const {
  return NovaParser::RuleTermExpression;
}

void NovaParser::TermExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermExpression(this);
}

void NovaParser::TermExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermExpression(this);
}


antlrcpp::Any NovaParser::TermExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTermExpression(this);
  else
    return visitor->visitChildren(this);
}


NovaParser::TermExpressionContext* NovaParser::termExpression() {
   return termExpression(0);
}

NovaParser::TermExpressionContext* NovaParser::termExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NovaParser::TermExpressionContext *_localctx = _tracker.createInstance<TermExpressionContext>(_ctx, parentState);
  NovaParser::TermExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 90;
  enterRecursionRule(_localctx, 90, NovaParser::RuleTermExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(659);
    unaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(666);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTermExpression);
        setState(661);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(662);
        _la = _input->LA(1);
        if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 73)) & ((1ULL << (NovaParser::T__72 - 73))
          | (1ULL << (NovaParser::T__73 - 73))
          | (1ULL << (NovaParser::T__74 - 73)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(663);
        unaryExpression(); 
      }
      setState(668);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PowerExpressionContext ------------------------------------------------------------------

NovaParser::PowerExpressionContext::PowerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::UnaryExpressionContext* NovaParser::PowerExpressionContext::unaryExpression() {
  return getRuleContext<NovaParser::UnaryExpressionContext>(0);
}


size_t NovaParser::PowerExpressionContext::getRuleIndex() const {
  return NovaParser::RulePowerExpression;
}

void NovaParser::PowerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpression(this);
}

void NovaParser::PowerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpression(this);
}


antlrcpp::Any NovaParser::PowerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitPowerExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::PowerExpressionContext* NovaParser::powerExpression() {
  PowerExpressionContext *_localctx = _tracker.createInstance<PowerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 92, NovaParser::RulePowerExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(672);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__75: {
        enterOuterAlt(_localctx, 1);
        setState(669);
        match(NovaParser::T__75);
        setState(670);
        unaryExpression();
        break;
      }

      case NovaParser::T__8:
      case NovaParser::T__13:
      case NovaParser::T__17:
      case NovaParser::T__21:
      case NovaParser::T__46:
      case NovaParser::T__49:
      case NovaParser::T__71:
      case NovaParser::T__72:
      case NovaParser::T__76:
      case NovaParser::T__80:
      case NovaParser::T__81:
      case NovaParser::T__82:
      case NovaParser::T__85:
      case NovaParser::T__87:
      case NovaParser::T__89:
      case NovaParser::T__90:
      case NovaParser::T__92:
      case NovaParser::T__93:
      case NovaParser::T__94:
      case NovaParser::T__95:
      case NovaParser::T__96:
      case NovaParser::Keyword:
      case NovaParser::Identifier:
      case NovaParser::DecimalLiteral:
      case NovaParser::HexLiteral:
      case NovaParser::OctalLiteral:
      case NovaParser::BinaryLiteral:
      case NovaParser::DecimalFloatLiteral:
      case NovaParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(671);
        unaryExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

NovaParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::UnaryExpressionContext* NovaParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<NovaParser::UnaryExpressionContext>(0);
}

NovaParser::PostfixExpressionContext* NovaParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<NovaParser::PostfixExpressionContext>(0);
}


size_t NovaParser::UnaryExpressionContext::getRuleIndex() const {
  return NovaParser::RuleUnaryExpression;
}

void NovaParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void NovaParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any NovaParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::UnaryExpressionContext* NovaParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 94, NovaParser::RuleUnaryExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(686);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__71: {
        enterOuterAlt(_localctx, 1);
        setState(674);
        match(NovaParser::T__71);
        setState(675);
        unaryExpression();
        break;
      }

      case NovaParser::T__76: {
        enterOuterAlt(_localctx, 2);
        setState(676);
        match(NovaParser::T__76);
        setState(677);
        unaryExpression();
        break;
      }

      case NovaParser::T__72: {
        enterOuterAlt(_localctx, 3);
        setState(678);
        match(NovaParser::T__72);
        setState(679);
        unaryExpression();
        break;
      }

      case NovaParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(680);
        match(NovaParser::T__13);
        setState(682);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == NovaParser::T__14) {
          setState(681);
          match(NovaParser::T__14);
        }
        setState(684);
        unaryExpression();
        break;
      }

      case NovaParser::T__8:
      case NovaParser::T__17:
      case NovaParser::T__21:
      case NovaParser::T__46:
      case NovaParser::T__49:
      case NovaParser::T__80:
      case NovaParser::T__81:
      case NovaParser::T__82:
      case NovaParser::T__85:
      case NovaParser::T__87:
      case NovaParser::T__89:
      case NovaParser::T__90:
      case NovaParser::T__92:
      case NovaParser::T__93:
      case NovaParser::T__94:
      case NovaParser::T__95:
      case NovaParser::T__96:
      case NovaParser::Keyword:
      case NovaParser::Identifier:
      case NovaParser::DecimalLiteral:
      case NovaParser::HexLiteral:
      case NovaParser::OctalLiteral:
      case NovaParser::BinaryLiteral:
      case NovaParser::DecimalFloatLiteral:
      case NovaParser::StringLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(685);
        postfixExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

NovaParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::PrimaryExpressionContext* NovaParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<NovaParser::PrimaryExpressionContext>(0);
}

NovaParser::ArgumentListContext* NovaParser::PostfixExpressionContext::argumentList() {
  return getRuleContext<NovaParser::ArgumentListContext>(0);
}

NovaParser::IdentifierContext* NovaParser::PostfixExpressionContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

tree::TerminalNode* NovaParser::PostfixExpressionContext::DecimalLiteral() {
  return getToken(NovaParser::DecimalLiteral, 0);
}

NovaParser::Type_Context* NovaParser::PostfixExpressionContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}

NovaParser::ExpressionContext* NovaParser::PostfixExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::PostfixExpressionContext::getRuleIndex() const {
  return NovaParser::RulePostfixExpression;
}

void NovaParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void NovaParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any NovaParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::PostfixExpressionContext* NovaParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 96, NovaParser::RulePostfixExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(717);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(688);
      primaryExpression();
      setState(689);
      match(NovaParser::T__8);
      setState(691);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << NovaParser::T__8)
        | (1ULL << NovaParser::T__13)
        | (1ULL << NovaParser::T__17)
        | (1ULL << NovaParser::T__21)
        | (1ULL << NovaParser::T__46)
        | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
        | (1ULL << (NovaParser::T__72 - 72))
        | (1ULL << (NovaParser::T__76 - 72))
        | (1ULL << (NovaParser::T__80 - 72))
        | (1ULL << (NovaParser::T__81 - 72))
        | (1ULL << (NovaParser::T__82 - 72))
        | (1ULL << (NovaParser::T__85 - 72))
        | (1ULL << (NovaParser::T__87 - 72))
        | (1ULL << (NovaParser::T__89 - 72))
        | (1ULL << (NovaParser::T__90 - 72))
        | (1ULL << (NovaParser::T__92 - 72))
        | (1ULL << (NovaParser::T__93 - 72))
        | (1ULL << (NovaParser::T__94 - 72))
        | (1ULL << (NovaParser::T__95 - 72))
        | (1ULL << (NovaParser::T__96 - 72))
        | (1ULL << (NovaParser::Keyword - 72))
        | (1ULL << (NovaParser::Identifier - 72))
        | (1ULL << (NovaParser::DecimalLiteral - 72))
        | (1ULL << (NovaParser::HexLiteral - 72))
        | (1ULL << (NovaParser::OctalLiteral - 72))
        | (1ULL << (NovaParser::BinaryLiteral - 72))
        | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
        | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
        setState(690);
        argumentList();
      }
      setState(693);
      match(NovaParser::T__9);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(695);
      primaryExpression();
      setState(696);
      match(NovaParser::T__77);
      setState(697);
      identifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(699);
      primaryExpression();
      setState(700);
      match(NovaParser::T__77);
      setState(701);
      match(NovaParser::DecimalLiteral);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(703);
      primaryExpression();
      setState(704);
      match(NovaParser::T__3);
      setState(705);
      type_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(707);
      primaryExpression();
      setState(708);
      match(NovaParser::T__11);
      setState(709);
      type_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(711);
      primaryExpression();
      setState(712);
      _la = _input->LA(1);
      if (!(_la == NovaParser::T__78

      || _la == NovaParser::T__79)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(714);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
      case 1: {
        setState(713);
        expression();
        break;
      }

      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(716);
      primaryExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

NovaParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::LiteralExpressionContext* NovaParser::PrimaryExpressionContext::literalExpression() {
  return getRuleContext<NovaParser::LiteralExpressionContext>(0);
}

NovaParser::IdentifierExpressionContext* NovaParser::PrimaryExpressionContext::identifierExpression() {
  return getRuleContext<NovaParser::IdentifierExpressionContext>(0);
}

NovaParser::BlockExpressionContext* NovaParser::PrimaryExpressionContext::blockExpression() {
  return getRuleContext<NovaParser::BlockExpressionContext>(0);
}

NovaParser::TupleExpressionContext* NovaParser::PrimaryExpressionContext::tupleExpression() {
  return getRuleContext<NovaParser::TupleExpressionContext>(0);
}

NovaParser::ArrayExpressionContext* NovaParser::PrimaryExpressionContext::arrayExpression() {
  return getRuleContext<NovaParser::ArrayExpressionContext>(0);
}

NovaParser::StructExpressionContext* NovaParser::PrimaryExpressionContext::structExpression() {
  return getRuleContext<NovaParser::StructExpressionContext>(0);
}

NovaParser::EnumVariantExpressionContext* NovaParser::PrimaryExpressionContext::enumVariantExpression() {
  return getRuleContext<NovaParser::EnumVariantExpressionContext>(0);
}

NovaParser::IfExpressionContext* NovaParser::PrimaryExpressionContext::ifExpression() {
  return getRuleContext<NovaParser::IfExpressionContext>(0);
}

NovaParser::MatchExpressionContext* NovaParser::PrimaryExpressionContext::matchExpression() {
  return getRuleContext<NovaParser::MatchExpressionContext>(0);
}

NovaParser::LoopExpressionContext* NovaParser::PrimaryExpressionContext::loopExpression() {
  return getRuleContext<NovaParser::LoopExpressionContext>(0);
}

NovaParser::BreakExpressionContext* NovaParser::PrimaryExpressionContext::breakExpression() {
  return getRuleContext<NovaParser::BreakExpressionContext>(0);
}

NovaParser::ContinueExpressionContext* NovaParser::PrimaryExpressionContext::continueExpression() {
  return getRuleContext<NovaParser::ContinueExpressionContext>(0);
}

NovaParser::ReturnExpressionContext* NovaParser::PrimaryExpressionContext::returnExpression() {
  return getRuleContext<NovaParser::ReturnExpressionContext>(0);
}

NovaParser::AwaitExpressionContext* NovaParser::PrimaryExpressionContext::awaitExpression() {
  return getRuleContext<NovaParser::AwaitExpressionContext>(0);
}

NovaParser::UnsafeExpressionContext* NovaParser::PrimaryExpressionContext::unsafeExpression() {
  return getRuleContext<NovaParser::UnsafeExpressionContext>(0);
}

NovaParser::ParenthesizedExpressionContext* NovaParser::PrimaryExpressionContext::parenthesizedExpression() {
  return getRuleContext<NovaParser::ParenthesizedExpressionContext>(0);
}


size_t NovaParser::PrimaryExpressionContext::getRuleIndex() const {
  return NovaParser::RulePrimaryExpression;
}

void NovaParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void NovaParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any NovaParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::PrimaryExpressionContext* NovaParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 98, NovaParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(735);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(719);
      literalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(720);
      identifierExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(721);
      blockExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(722);
      tupleExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(723);
      arrayExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(724);
      structExpression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(725);
      enumVariantExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(726);
      ifExpression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(727);
      matchExpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(728);
      loopExpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(729);
      breakExpression();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(730);
      continueExpression();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(731);
      returnExpression();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(732);
      awaitExpression();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(733);
      unsafeExpression();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(734);
      parenthesizedExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

NovaParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::ParenthesizedExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::ParenthesizedExpressionContext::getRuleIndex() const {
  return NovaParser::RuleParenthesizedExpression;
}

void NovaParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}

void NovaParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}


antlrcpp::Any NovaParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ParenthesizedExpressionContext* NovaParser::parenthesizedExpression() {
  ParenthesizedExpressionContext *_localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_ctx, getState());
  enterRule(_localctx, 100, NovaParser::RuleParenthesizedExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(737);
    match(NovaParser::T__8);
    setState(738);
    expression();
    setState(739);
    match(NovaParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralExpressionContext ------------------------------------------------------------------

NovaParser::LiteralExpressionContext::LiteralExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IntegerLiteralContext* NovaParser::LiteralExpressionContext::integerLiteral() {
  return getRuleContext<NovaParser::IntegerLiteralContext>(0);
}

NovaParser::FloatLiteralContext* NovaParser::LiteralExpressionContext::floatLiteral() {
  return getRuleContext<NovaParser::FloatLiteralContext>(0);
}

NovaParser::BooleanLiteralContext* NovaParser::LiteralExpressionContext::booleanLiteral() {
  return getRuleContext<NovaParser::BooleanLiteralContext>(0);
}

NovaParser::CharacterLiteralContext* NovaParser::LiteralExpressionContext::characterLiteral() {
  return getRuleContext<NovaParser::CharacterLiteralContext>(0);
}

NovaParser::StringLiteralContext* NovaParser::LiteralExpressionContext::stringLiteral() {
  return getRuleContext<NovaParser::StringLiteralContext>(0);
}

NovaParser::NullLiteralContext* NovaParser::LiteralExpressionContext::nullLiteral() {
  return getRuleContext<NovaParser::NullLiteralContext>(0);
}


size_t NovaParser::LiteralExpressionContext::getRuleIndex() const {
  return NovaParser::RuleLiteralExpression;
}

void NovaParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}

void NovaParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}


antlrcpp::Any NovaParser::LiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LiteralExpressionContext* NovaParser::literalExpression() {
  LiteralExpressionContext *_localctx = _tracker.createInstance<LiteralExpressionContext>(_ctx, getState());
  enterRule(_localctx, 102, NovaParser::RuleLiteralExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(747);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::DecimalLiteral:
      case NovaParser::HexLiteral:
      case NovaParser::OctalLiteral:
      case NovaParser::BinaryLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(741);
        integerLiteral();
        break;
      }

      case NovaParser::DecimalFloatLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(742);
        floatLiteral();
        break;
      }

      case NovaParser::T__80:
      case NovaParser::T__81: {
        enterOuterAlt(_localctx, 3);
        setState(743);
        booleanLiteral();
        break;
      }

      case NovaParser::T__49: {
        enterOuterAlt(_localctx, 4);
        setState(744);
        characterLiteral();
        break;
      }

      case NovaParser::StringLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(745);
        stringLiteral();
        break;
      }

      case NovaParser::T__82: {
        enterOuterAlt(_localctx, 6);
        setState(746);
        nullLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

NovaParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NovaParser::IntegerLiteralContext::DecimalLiteral() {
  return getToken(NovaParser::DecimalLiteral, 0);
}

tree::TerminalNode* NovaParser::IntegerLiteralContext::HexLiteral() {
  return getToken(NovaParser::HexLiteral, 0);
}

tree::TerminalNode* NovaParser::IntegerLiteralContext::OctalLiteral() {
  return getToken(NovaParser::OctalLiteral, 0);
}

tree::TerminalNode* NovaParser::IntegerLiteralContext::BinaryLiteral() {
  return getToken(NovaParser::BinaryLiteral, 0);
}


size_t NovaParser::IntegerLiteralContext::getRuleIndex() const {
  return NovaParser::RuleIntegerLiteral;
}

void NovaParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void NovaParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any NovaParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IntegerLiteralContext* NovaParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 104, NovaParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(749);
    _la = _input->LA(1);
    if (!(((((_la - 104) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 104)) & ((1ULL << (NovaParser::DecimalLiteral - 104))
      | (1ULL << (NovaParser::HexLiteral - 104))
      | (1ULL << (NovaParser::OctalLiteral - 104))
      | (1ULL << (NovaParser::BinaryLiteral - 104)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

NovaParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NovaParser::FloatLiteralContext::DecimalFloatLiteral() {
  return getToken(NovaParser::DecimalFloatLiteral, 0);
}


size_t NovaParser::FloatLiteralContext::getRuleIndex() const {
  return NovaParser::RuleFloatLiteral;
}

void NovaParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void NovaParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any NovaParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FloatLiteralContext* NovaParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 106, NovaParser::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    match(NovaParser::DecimalFloatLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

NovaParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NovaParser::BooleanLiteralContext::getRuleIndex() const {
  return NovaParser::RuleBooleanLiteral;
}

void NovaParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void NovaParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any NovaParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::BooleanLiteralContext* NovaParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 108, NovaParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(753);
    _la = _input->LA(1);
    if (!(_la == NovaParser::T__80

    || _la == NovaParser::T__81)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterLiteralContext ------------------------------------------------------------------

NovaParser::CharacterLiteralContext::CharacterLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NovaParser::CharacterLiteralContext::EscapeSequence() {
  return getToken(NovaParser::EscapeSequence, 0);
}


size_t NovaParser::CharacterLiteralContext::getRuleIndex() const {
  return NovaParser::RuleCharacterLiteral;
}

void NovaParser::CharacterLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharacterLiteral(this);
}

void NovaParser::CharacterLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharacterLiteral(this);
}


antlrcpp::Any NovaParser::CharacterLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitCharacterLiteral(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::CharacterLiteralContext* NovaParser::characterLiteral() {
  CharacterLiteralContext *_localctx = _tracker.createInstance<CharacterLiteralContext>(_ctx, getState());
  enterRule(_localctx, 110, NovaParser::RuleCharacterLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(755);
    match(NovaParser::T__49);
    setState(758);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(756);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == NovaParser::T__49)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      setState(757);
      match(NovaParser::EscapeSequence);
      break;
    }

    }
    setState(760);
    match(NovaParser::T__49);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

NovaParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NovaParser::StringLiteralContext::StringLiteral() {
  return getToken(NovaParser::StringLiteral, 0);
}


size_t NovaParser::StringLiteralContext::getRuleIndex() const {
  return NovaParser::RuleStringLiteral;
}

void NovaParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void NovaParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any NovaParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::StringLiteralContext* NovaParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 112, NovaParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(762);
    match(NovaParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullLiteralContext ------------------------------------------------------------------

NovaParser::NullLiteralContext::NullLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NovaParser::NullLiteralContext::getRuleIndex() const {
  return NovaParser::RuleNullLiteral;
}

void NovaParser::NullLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullLiteral(this);
}

void NovaParser::NullLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullLiteral(this);
}


antlrcpp::Any NovaParser::NullLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitNullLiteral(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::NullLiteralContext* NovaParser::nullLiteral() {
  NullLiteralContext *_localctx = _tracker.createInstance<NullLiteralContext>(_ctx, getState());
  enterRule(_localctx, 114, NovaParser::RuleNullLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(764);
    match(NovaParser::T__82);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierExpressionContext ------------------------------------------------------------------

NovaParser::IdentifierExpressionContext::IdentifierExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::IdentifierExpressionContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}


size_t NovaParser::IdentifierExpressionContext::getRuleIndex() const {
  return NovaParser::RuleIdentifierExpression;
}

void NovaParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}

void NovaParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}


antlrcpp::Any NovaParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IdentifierExpressionContext* NovaParser::identifierExpression() {
  IdentifierExpressionContext *_localctx = _tracker.createInstance<IdentifierExpressionContext>(_ctx, getState());
  enterRule(_localctx, 116, NovaParser::RuleIdentifierExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(766);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockExpressionContext ------------------------------------------------------------------

NovaParser::BlockExpressionContext::BlockExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::BlockContext* NovaParser::BlockExpressionContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}


size_t NovaParser::BlockExpressionContext::getRuleIndex() const {
  return NovaParser::RuleBlockExpression;
}

void NovaParser::BlockExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockExpression(this);
}

void NovaParser::BlockExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockExpression(this);
}


antlrcpp::Any NovaParser::BlockExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitBlockExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::BlockExpressionContext* NovaParser::blockExpression() {
  BlockExpressionContext *_localctx = _tracker.createInstance<BlockExpressionContext>(_ctx, getState());
  enterRule(_localctx, 118, NovaParser::RuleBlockExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(768);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

NovaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::StatementContext *> NovaParser::BlockContext::statement() {
  return getRuleContexts<NovaParser::StatementContext>();
}

NovaParser::StatementContext* NovaParser::BlockContext::statement(size_t i) {
  return getRuleContext<NovaParser::StatementContext>(i);
}

NovaParser::ExpressionContext* NovaParser::BlockContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::BlockContext::getRuleIndex() const {
  return NovaParser::RuleBlock;
}

void NovaParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void NovaParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any NovaParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::BlockContext* NovaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 120, NovaParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(770);
    match(NovaParser::T__17);
    setState(774);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(771);
        statement(); 
      }
      setState(776);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
    setState(778);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__17)
      | (1ULL << NovaParser::T__21)
      | (1ULL << NovaParser::T__46)
      | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
      | (1ULL << (NovaParser::T__72 - 72))
      | (1ULL << (NovaParser::T__76 - 72))
      | (1ULL << (NovaParser::T__80 - 72))
      | (1ULL << (NovaParser::T__81 - 72))
      | (1ULL << (NovaParser::T__82 - 72))
      | (1ULL << (NovaParser::T__85 - 72))
      | (1ULL << (NovaParser::T__87 - 72))
      | (1ULL << (NovaParser::T__89 - 72))
      | (1ULL << (NovaParser::T__90 - 72))
      | (1ULL << (NovaParser::T__92 - 72))
      | (1ULL << (NovaParser::T__93 - 72))
      | (1ULL << (NovaParser::T__94 - 72))
      | (1ULL << (NovaParser::T__95 - 72))
      | (1ULL << (NovaParser::T__96 - 72))
      | (1ULL << (NovaParser::Keyword - 72))
      | (1ULL << (NovaParser::Identifier - 72))
      | (1ULL << (NovaParser::DecimalLiteral - 72))
      | (1ULL << (NovaParser::HexLiteral - 72))
      | (1ULL << (NovaParser::OctalLiteral - 72))
      | (1ULL << (NovaParser::BinaryLiteral - 72))
      | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
      | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
      setState(777);
      expression();
    }
    setState(780);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

NovaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::DeclarationStatementContext* NovaParser::StatementContext::declarationStatement() {
  return getRuleContext<NovaParser::DeclarationStatementContext>(0);
}

NovaParser::ExpressionStatementContext* NovaParser::StatementContext::expressionStatement() {
  return getRuleContext<NovaParser::ExpressionStatementContext>(0);
}

NovaParser::AssignmentStatementContext* NovaParser::StatementContext::assignmentStatement() {
  return getRuleContext<NovaParser::AssignmentStatementContext>(0);
}

NovaParser::IfStatementContext* NovaParser::StatementContext::ifStatement() {
  return getRuleContext<NovaParser::IfStatementContext>(0);
}

NovaParser::LoopStatementContext* NovaParser::StatementContext::loopStatement() {
  return getRuleContext<NovaParser::LoopStatementContext>(0);
}

NovaParser::MatchStatementContext* NovaParser::StatementContext::matchStatement() {
  return getRuleContext<NovaParser::MatchStatementContext>(0);
}

NovaParser::JumpStatementContext* NovaParser::StatementContext::jumpStatement() {
  return getRuleContext<NovaParser::JumpStatementContext>(0);
}


size_t NovaParser::StatementContext::getRuleIndex() const {
  return NovaParser::RuleStatement;
}

void NovaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void NovaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any NovaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::StatementContext* NovaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 122, NovaParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(789);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(782);
      declarationStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(783);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(784);
      assignmentStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(785);
      ifStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(786);
      loopStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(787);
      matchStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(788);
      jumpStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

NovaParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::VariableDeclarationContext* NovaParser::DeclarationStatementContext::variableDeclaration() {
  return getRuleContext<NovaParser::VariableDeclarationContext>(0);
}

NovaParser::ConstantDeclarationContext* NovaParser::DeclarationStatementContext::constantDeclaration() {
  return getRuleContext<NovaParser::ConstantDeclarationContext>(0);
}


size_t NovaParser::DeclarationStatementContext::getRuleIndex() const {
  return NovaParser::RuleDeclarationStatement;
}

void NovaParser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}

void NovaParser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}


antlrcpp::Any NovaParser::DeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::DeclarationStatementContext* NovaParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 124, NovaParser::RuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(793);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__14:
      case NovaParser::T__83: {
        enterOuterAlt(_localctx, 1);
        setState(791);
        variableDeclaration();
        break;
      }

      case NovaParser::T__24: {
        enterOuterAlt(_localctx, 2);
        setState(792);
        constantDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

NovaParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::PatternContext* NovaParser::VariableDeclarationContext::pattern() {
  return getRuleContext<NovaParser::PatternContext>(0);
}

NovaParser::ExpressionContext* NovaParser::VariableDeclarationContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

NovaParser::Type_Context* NovaParser::VariableDeclarationContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}


size_t NovaParser::VariableDeclarationContext::getRuleIndex() const {
  return NovaParser::RuleVariableDeclaration;
}

void NovaParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void NovaParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any NovaParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::VariableDeclarationContext* NovaParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 126, NovaParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(817);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(796);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__14) {
        setState(795);
        match(NovaParser::T__14);
      }
      setState(798);
      match(NovaParser::T__83);
      setState(799);
      pattern();
      setState(800);
      match(NovaParser::T__12);
      setState(801);
      expression();
      setState(802);
      match(NovaParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(805);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__14) {
        setState(804);
        match(NovaParser::T__14);
      }
      setState(807);
      match(NovaParser::T__83);
      setState(808);
      pattern();
      setState(809);
      match(NovaParser::T__11);
      setState(810);
      type_();
      setState(813);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == NovaParser::T__12) {
        setState(811);
        match(NovaParser::T__12);
        setState(812);
        expression();
      }
      setState(815);
      match(NovaParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatternContext ------------------------------------------------------------------

NovaParser::PatternContext::PatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierPatternContext* NovaParser::PatternContext::identifierPattern() {
  return getRuleContext<NovaParser::IdentifierPatternContext>(0);
}

NovaParser::TuplePatternContext* NovaParser::PatternContext::tuplePattern() {
  return getRuleContext<NovaParser::TuplePatternContext>(0);
}

NovaParser::StructPatternContext* NovaParser::PatternContext::structPattern() {
  return getRuleContext<NovaParser::StructPatternContext>(0);
}

NovaParser::WildcardPatternContext* NovaParser::PatternContext::wildcardPattern() {
  return getRuleContext<NovaParser::WildcardPatternContext>(0);
}


size_t NovaParser::PatternContext::getRuleIndex() const {
  return NovaParser::RulePattern;
}

void NovaParser::PatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPattern(this);
}

void NovaParser::PatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPattern(this);
}


antlrcpp::Any NovaParser::PatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitPattern(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::PatternContext* NovaParser::pattern() {
  PatternContext *_localctx = _tracker.createInstance<PatternContext>(_ctx, getState());
  enterRule(_localctx, 128, NovaParser::RulePattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(823);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(819);
      identifierPattern();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(820);
      tuplePattern();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(821);
      structPattern();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(822);
      wildcardPattern();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierPatternContext ------------------------------------------------------------------

NovaParser::IdentifierPatternContext::IdentifierPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::IdentifierPatternContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}


size_t NovaParser::IdentifierPatternContext::getRuleIndex() const {
  return NovaParser::RuleIdentifierPattern;
}

void NovaParser::IdentifierPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierPattern(this);
}

void NovaParser::IdentifierPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierPattern(this);
}


antlrcpp::Any NovaParser::IdentifierPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIdentifierPattern(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IdentifierPatternContext* NovaParser::identifierPattern() {
  IdentifierPatternContext *_localctx = _tracker.createInstance<IdentifierPatternContext>(_ctx, getState());
  enterRule(_localctx, 130, NovaParser::RuleIdentifierPattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(826);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__14) {
      setState(825);
      match(NovaParser::T__14);
    }
    setState(828);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TuplePatternContext ------------------------------------------------------------------

NovaParser::TuplePatternContext::TuplePatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::PatternContext *> NovaParser::TuplePatternContext::pattern() {
  return getRuleContexts<NovaParser::PatternContext>();
}

NovaParser::PatternContext* NovaParser::TuplePatternContext::pattern(size_t i) {
  return getRuleContext<NovaParser::PatternContext>(i);
}


size_t NovaParser::TuplePatternContext::getRuleIndex() const {
  return NovaParser::RuleTuplePattern;
}

void NovaParser::TuplePatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuplePattern(this);
}

void NovaParser::TuplePatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuplePattern(this);
}


antlrcpp::Any NovaParser::TuplePatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTuplePattern(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TuplePatternContext* NovaParser::tuplePattern() {
  TuplePatternContext *_localctx = _tracker.createInstance<TuplePatternContext>(_ctx, getState());
  enterRule(_localctx, 132, NovaParser::RuleTuplePattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(830);
    match(NovaParser::T__8);
    setState(831);
    pattern();
    setState(836);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__10) {
      setState(832);
      match(NovaParser::T__10);
      setState(833);
      pattern();
      setState(838);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(839);
    match(NovaParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructPatternContext ------------------------------------------------------------------

NovaParser::StructPatternContext::StructPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::IdentifierContext *> NovaParser::StructPatternContext::identifier() {
  return getRuleContexts<NovaParser::IdentifierContext>();
}

NovaParser::IdentifierContext* NovaParser::StructPatternContext::identifier(size_t i) {
  return getRuleContext<NovaParser::IdentifierContext>(i);
}

std::vector<NovaParser::PatternContext *> NovaParser::StructPatternContext::pattern() {
  return getRuleContexts<NovaParser::PatternContext>();
}

NovaParser::PatternContext* NovaParser::StructPatternContext::pattern(size_t i) {
  return getRuleContext<NovaParser::PatternContext>(i);
}


size_t NovaParser::StructPatternContext::getRuleIndex() const {
  return NovaParser::RuleStructPattern;
}

void NovaParser::StructPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructPattern(this);
}

void NovaParser::StructPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructPattern(this);
}


antlrcpp::Any NovaParser::StructPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitStructPattern(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::StructPatternContext* NovaParser::structPattern() {
  StructPatternContext *_localctx = _tracker.createInstance<StructPatternContext>(_ctx, getState());
  enterRule(_localctx, 134, NovaParser::RuleStructPattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(841);
    identifier();
    setState(842);
    match(NovaParser::T__17);
    setState(856);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(843);
      identifier();
      setState(844);
      match(NovaParser::T__11);
      setState(845);
      pattern();
      setState(853);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NovaParser::T__10) {
        setState(846);
        match(NovaParser::T__10);
        setState(847);
        identifier();
        setState(848);
        match(NovaParser::T__11);
        setState(849);
        pattern();
        setState(855);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(858);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardPatternContext ------------------------------------------------------------------

NovaParser::WildcardPatternContext::WildcardPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NovaParser::WildcardPatternContext::getRuleIndex() const {
  return NovaParser::RuleWildcardPattern;
}

void NovaParser::WildcardPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcardPattern(this);
}

void NovaParser::WildcardPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcardPattern(this);
}


antlrcpp::Any NovaParser::WildcardPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitWildcardPattern(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::WildcardPatternContext* NovaParser::wildcardPattern() {
  WildcardPatternContext *_localctx = _tracker.createInstance<WildcardPatternContext>(_ctx, getState());
  enterRule(_localctx, 136, NovaParser::RuleWildcardPattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(860);
    match(NovaParser::T__84);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

NovaParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::ExpressionStatementContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::ExpressionStatementContext::getRuleIndex() const {
  return NovaParser::RuleExpressionStatement;
}

void NovaParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void NovaParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any NovaParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ExpressionStatementContext* NovaParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 138, NovaParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    expression();
    setState(863);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

NovaParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ExpressionContext *> NovaParser::AssignmentStatementContext::expression() {
  return getRuleContexts<NovaParser::ExpressionContext>();
}

NovaParser::ExpressionContext* NovaParser::AssignmentStatementContext::expression(size_t i) {
  return getRuleContext<NovaParser::ExpressionContext>(i);
}


size_t NovaParser::AssignmentStatementContext::getRuleIndex() const {
  return NovaParser::RuleAssignmentStatement;
}

void NovaParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void NovaParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}


antlrcpp::Any NovaParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::AssignmentStatementContext* NovaParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, NovaParser::RuleAssignmentStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(865);
    expression();
    setState(866);
    match(NovaParser::T__12);
    setState(867);
    expression();
    setState(868);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

NovaParser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::BlockContext* NovaParser::LambdaExpressionContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}

NovaParser::ParameterListContext* NovaParser::LambdaExpressionContext::parameterList() {
  return getRuleContext<NovaParser::ParameterListContext>(0);
}

NovaParser::Type_Context* NovaParser::LambdaExpressionContext::type_() {
  return getRuleContext<NovaParser::Type_Context>(0);
}


size_t NovaParser::LambdaExpressionContext::getRuleIndex() const {
  return NovaParser::RuleLambdaExpression;
}

void NovaParser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void NovaParser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
}


antlrcpp::Any NovaParser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LambdaExpressionContext* NovaParser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 142, NovaParser::RuleLambdaExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(870);
    match(NovaParser::T__66);
    setState(872);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__13 || _la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(871);
      parameterList();
    }
    setState(874);
    match(NovaParser::T__66);
    setState(877);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__15) {
      setState(875);
      match(NovaParser::T__15);
      setState(876);
      type_();
    }
    setState(879);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleExpressionContext ------------------------------------------------------------------

NovaParser::TupleExpressionContext::TupleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ExpressionContext *> NovaParser::TupleExpressionContext::expression() {
  return getRuleContexts<NovaParser::ExpressionContext>();
}

NovaParser::ExpressionContext* NovaParser::TupleExpressionContext::expression(size_t i) {
  return getRuleContext<NovaParser::ExpressionContext>(i);
}


size_t NovaParser::TupleExpressionContext::getRuleIndex() const {
  return NovaParser::RuleTupleExpression;
}

void NovaParser::TupleExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTupleExpression(this);
}

void NovaParser::TupleExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTupleExpression(this);
}


antlrcpp::Any NovaParser::TupleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitTupleExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::TupleExpressionContext* NovaParser::tupleExpression() {
  TupleExpressionContext *_localctx = _tracker.createInstance<TupleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 144, NovaParser::RuleTupleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(881);
    match(NovaParser::T__8);
    setState(889);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__17)
      | (1ULL << NovaParser::T__21)
      | (1ULL << NovaParser::T__46)
      | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
      | (1ULL << (NovaParser::T__72 - 72))
      | (1ULL << (NovaParser::T__76 - 72))
      | (1ULL << (NovaParser::T__80 - 72))
      | (1ULL << (NovaParser::T__81 - 72))
      | (1ULL << (NovaParser::T__82 - 72))
      | (1ULL << (NovaParser::T__85 - 72))
      | (1ULL << (NovaParser::T__87 - 72))
      | (1ULL << (NovaParser::T__89 - 72))
      | (1ULL << (NovaParser::T__90 - 72))
      | (1ULL << (NovaParser::T__92 - 72))
      | (1ULL << (NovaParser::T__93 - 72))
      | (1ULL << (NovaParser::T__94 - 72))
      | (1ULL << (NovaParser::T__95 - 72))
      | (1ULL << (NovaParser::T__96 - 72))
      | (1ULL << (NovaParser::Keyword - 72))
      | (1ULL << (NovaParser::Identifier - 72))
      | (1ULL << (NovaParser::DecimalLiteral - 72))
      | (1ULL << (NovaParser::HexLiteral - 72))
      | (1ULL << (NovaParser::OctalLiteral - 72))
      | (1ULL << (NovaParser::BinaryLiteral - 72))
      | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
      | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
      setState(882);
      expression();
      setState(885); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(883);
        match(NovaParser::T__10);
        setState(884);
        expression();
        setState(887); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == NovaParser::T__10);
    }
    setState(891);
    match(NovaParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayExpressionContext ------------------------------------------------------------------

NovaParser::ArrayExpressionContext::ArrayExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ExpressionContext *> NovaParser::ArrayExpressionContext::expression() {
  return getRuleContexts<NovaParser::ExpressionContext>();
}

NovaParser::ExpressionContext* NovaParser::ArrayExpressionContext::expression(size_t i) {
  return getRuleContext<NovaParser::ExpressionContext>(i);
}


size_t NovaParser::ArrayExpressionContext::getRuleIndex() const {
  return NovaParser::RuleArrayExpression;
}

void NovaParser::ArrayExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayExpression(this);
}

void NovaParser::ArrayExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayExpression(this);
}


antlrcpp::Any NovaParser::ArrayExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitArrayExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ArrayExpressionContext* NovaParser::arrayExpression() {
  ArrayExpressionContext *_localctx = _tracker.createInstance<ArrayExpressionContext>(_ctx, getState());
  enterRule(_localctx, 146, NovaParser::RuleArrayExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(893);
    match(NovaParser::T__46);
    setState(902);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__17)
      | (1ULL << NovaParser::T__21)
      | (1ULL << NovaParser::T__46)
      | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
      | (1ULL << (NovaParser::T__72 - 72))
      | (1ULL << (NovaParser::T__76 - 72))
      | (1ULL << (NovaParser::T__80 - 72))
      | (1ULL << (NovaParser::T__81 - 72))
      | (1ULL << (NovaParser::T__82 - 72))
      | (1ULL << (NovaParser::T__85 - 72))
      | (1ULL << (NovaParser::T__87 - 72))
      | (1ULL << (NovaParser::T__89 - 72))
      | (1ULL << (NovaParser::T__90 - 72))
      | (1ULL << (NovaParser::T__92 - 72))
      | (1ULL << (NovaParser::T__93 - 72))
      | (1ULL << (NovaParser::T__94 - 72))
      | (1ULL << (NovaParser::T__95 - 72))
      | (1ULL << (NovaParser::T__96 - 72))
      | (1ULL << (NovaParser::Keyword - 72))
      | (1ULL << (NovaParser::Identifier - 72))
      | (1ULL << (NovaParser::DecimalLiteral - 72))
      | (1ULL << (NovaParser::HexLiteral - 72))
      | (1ULL << (NovaParser::OctalLiteral - 72))
      | (1ULL << (NovaParser::BinaryLiteral - 72))
      | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
      | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
      setState(894);
      expression();
      setState(899);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NovaParser::T__10) {
        setState(895);
        match(NovaParser::T__10);
        setState(896);
        expression();
        setState(901);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(904);
    match(NovaParser::T__47);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructExpressionContext ------------------------------------------------------------------

NovaParser::StructExpressionContext::StructExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::TypeReferenceContext* NovaParser::StructExpressionContext::typeReference() {
  return getRuleContext<NovaParser::TypeReferenceContext>(0);
}

std::vector<NovaParser::FieldInitializerContext *> NovaParser::StructExpressionContext::fieldInitializer() {
  return getRuleContexts<NovaParser::FieldInitializerContext>();
}

NovaParser::FieldInitializerContext* NovaParser::StructExpressionContext::fieldInitializer(size_t i) {
  return getRuleContext<NovaParser::FieldInitializerContext>(i);
}


size_t NovaParser::StructExpressionContext::getRuleIndex() const {
  return NovaParser::RuleStructExpression;
}

void NovaParser::StructExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructExpression(this);
}

void NovaParser::StructExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructExpression(this);
}


antlrcpp::Any NovaParser::StructExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitStructExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::StructExpressionContext* NovaParser::structExpression() {
  StructExpressionContext *_localctx = _tracker.createInstance<StructExpressionContext>(_ctx, getState());
  enterRule(_localctx, 148, NovaParser::RuleStructExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(906);
    typeReference();
    setState(907);
    match(NovaParser::T__17);
    setState(916);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::Keyword

    || _la == NovaParser::Identifier) {
      setState(908);
      fieldInitializer();
      setState(913);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NovaParser::T__10) {
        setState(909);
        match(NovaParser::T__10);
        setState(910);
        fieldInitializer();
        setState(915);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(918);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldInitializerContext ------------------------------------------------------------------

NovaParser::FieldInitializerContext::FieldInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::FieldInitializerContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::ExpressionContext* NovaParser::FieldInitializerContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::FieldInitializerContext::getRuleIndex() const {
  return NovaParser::RuleFieldInitializer;
}

void NovaParser::FieldInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldInitializer(this);
}

void NovaParser::FieldInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldInitializer(this);
}


antlrcpp::Any NovaParser::FieldInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFieldInitializer(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FieldInitializerContext* NovaParser::fieldInitializer() {
  FieldInitializerContext *_localctx = _tracker.createInstance<FieldInitializerContext>(_ctx, getState());
  enterRule(_localctx, 150, NovaParser::RuleFieldInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(920);
    identifier();
    setState(923);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__12) {
      setState(921);
      match(NovaParser::T__12);
      setState(922);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumVariantExpressionContext ------------------------------------------------------------------

NovaParser::EnumVariantExpressionContext::EnumVariantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::EnumVariantExpressionContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}

NovaParser::ExpressionContext* NovaParser::EnumVariantExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::EnumVariantExpressionContext::getRuleIndex() const {
  return NovaParser::RuleEnumVariantExpression;
}

void NovaParser::EnumVariantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumVariantExpression(this);
}

void NovaParser::EnumVariantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumVariantExpression(this);
}


antlrcpp::Any NovaParser::EnumVariantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitEnumVariantExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::EnumVariantExpressionContext* NovaParser::enumVariantExpression() {
  EnumVariantExpressionContext *_localctx = _tracker.createInstance<EnumVariantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 152, NovaParser::RuleEnumVariantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(925);
    identifier();
    setState(930);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      setState(926);
      match(NovaParser::T__8);
      setState(927);
      expression();
      setState(928);
      match(NovaParser::T__9);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallExpressionContext ------------------------------------------------------------------

NovaParser::CallExpressionContext::CallExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::CallExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

NovaParser::ArgumentListContext* NovaParser::CallExpressionContext::argumentList() {
  return getRuleContext<NovaParser::ArgumentListContext>(0);
}


size_t NovaParser::CallExpressionContext::getRuleIndex() const {
  return NovaParser::RuleCallExpression;
}

void NovaParser::CallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpression(this);
}

void NovaParser::CallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpression(this);
}


antlrcpp::Any NovaParser::CallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitCallExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::CallExpressionContext* NovaParser::callExpression() {
  CallExpressionContext *_localctx = _tracker.createInstance<CallExpressionContext>(_ctx, getState());
  enterRule(_localctx, 154, NovaParser::RuleCallExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
    expression();
    setState(933);
    match(NovaParser::T__8);
    setState(935);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__17)
      | (1ULL << NovaParser::T__21)
      | (1ULL << NovaParser::T__46)
      | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
      | (1ULL << (NovaParser::T__72 - 72))
      | (1ULL << (NovaParser::T__76 - 72))
      | (1ULL << (NovaParser::T__80 - 72))
      | (1ULL << (NovaParser::T__81 - 72))
      | (1ULL << (NovaParser::T__82 - 72))
      | (1ULL << (NovaParser::T__85 - 72))
      | (1ULL << (NovaParser::T__87 - 72))
      | (1ULL << (NovaParser::T__89 - 72))
      | (1ULL << (NovaParser::T__90 - 72))
      | (1ULL << (NovaParser::T__92 - 72))
      | (1ULL << (NovaParser::T__93 - 72))
      | (1ULL << (NovaParser::T__94 - 72))
      | (1ULL << (NovaParser::T__95 - 72))
      | (1ULL << (NovaParser::T__96 - 72))
      | (1ULL << (NovaParser::Keyword - 72))
      | (1ULL << (NovaParser::Identifier - 72))
      | (1ULL << (NovaParser::DecimalLiteral - 72))
      | (1ULL << (NovaParser::HexLiteral - 72))
      | (1ULL << (NovaParser::OctalLiteral - 72))
      | (1ULL << (NovaParser::BinaryLiteral - 72))
      | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
      | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
      setState(934);
      argumentList();
    }
    setState(937);
    match(NovaParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

NovaParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ExpressionContext *> NovaParser::ArgumentListContext::expression() {
  return getRuleContexts<NovaParser::ExpressionContext>();
}

NovaParser::ExpressionContext* NovaParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<NovaParser::ExpressionContext>(i);
}


size_t NovaParser::ArgumentListContext::getRuleIndex() const {
  return NovaParser::RuleArgumentList;
}

void NovaParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void NovaParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


antlrcpp::Any NovaParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ArgumentListContext* NovaParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 156, NovaParser::RuleArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(939);
    expression();
    setState(944);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__10) {
      setState(940);
      match(NovaParser::T__10);
      setState(941);
      expression();
      setState(946);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldExpressionContext ------------------------------------------------------------------

NovaParser::FieldExpressionContext::FieldExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::FieldExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

NovaParser::IdentifierContext* NovaParser::FieldExpressionContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}


size_t NovaParser::FieldExpressionContext::getRuleIndex() const {
  return NovaParser::RuleFieldExpression;
}

void NovaParser::FieldExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldExpression(this);
}

void NovaParser::FieldExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldExpression(this);
}


antlrcpp::Any NovaParser::FieldExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitFieldExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::FieldExpressionContext* NovaParser::fieldExpression() {
  FieldExpressionContext *_localctx = _tracker.createInstance<FieldExpressionContext>(_ctx, getState());
  enterRule(_localctx, 158, NovaParser::RuleFieldExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    expression();
    setState(948);
    match(NovaParser::T__77);
    setState(949);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundAssignmentExpressionContext ------------------------------------------------------------------

NovaParser::CompoundAssignmentExpressionContext::CompoundAssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::ExpressionContext *> NovaParser::CompoundAssignmentExpressionContext::expression() {
  return getRuleContexts<NovaParser::ExpressionContext>();
}

NovaParser::ExpressionContext* NovaParser::CompoundAssignmentExpressionContext::expression(size_t i) {
  return getRuleContext<NovaParser::ExpressionContext>(i);
}


size_t NovaParser::CompoundAssignmentExpressionContext::getRuleIndex() const {
  return NovaParser::RuleCompoundAssignmentExpression;
}

void NovaParser::CompoundAssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundAssignmentExpression(this);
}

void NovaParser::CompoundAssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundAssignmentExpression(this);
}


antlrcpp::Any NovaParser::CompoundAssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitCompoundAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::CompoundAssignmentExpressionContext* NovaParser::compoundAssignmentExpression() {
  CompoundAssignmentExpressionContext *_localctx = _tracker.createInstance<CompoundAssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 160, NovaParser::RuleCompoundAssignmentExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);
    expression();
    setState(952);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__50)
      | (1ULL << NovaParser::T__51)
      | (1ULL << NovaParser::T__52)
      | (1ULL << NovaParser::T__53)
      | (1ULL << NovaParser::T__54)
      | (1ULL << NovaParser::T__55)
      | (1ULL << NovaParser::T__56)
      | (1ULL << NovaParser::T__57)
      | (1ULL << NovaParser::T__58)
      | (1ULL << NovaParser::T__59))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(953);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExpressionContext ------------------------------------------------------------------

NovaParser::IfExpressionContext::IfExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ConditionContext* NovaParser::IfExpressionContext::condition() {
  return getRuleContext<NovaParser::ConditionContext>(0);
}

std::vector<NovaParser::BlockContext *> NovaParser::IfExpressionContext::block() {
  return getRuleContexts<NovaParser::BlockContext>();
}

NovaParser::BlockContext* NovaParser::IfExpressionContext::block(size_t i) {
  return getRuleContext<NovaParser::BlockContext>(i);
}

NovaParser::IfExpressionContext* NovaParser::IfExpressionContext::ifExpression() {
  return getRuleContext<NovaParser::IfExpressionContext>(0);
}


size_t NovaParser::IfExpressionContext::getRuleIndex() const {
  return NovaParser::RuleIfExpression;
}

void NovaParser::IfExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpression(this);
}

void NovaParser::IfExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpression(this);
}


antlrcpp::Any NovaParser::IfExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIfExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IfExpressionContext* NovaParser::ifExpression() {
  IfExpressionContext *_localctx = _tracker.createInstance<IfExpressionContext>(_ctx, getState());
  enterRule(_localctx, 162, NovaParser::RuleIfExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(955);
    match(NovaParser::T__85);
    setState(956);
    condition();
    setState(957);
    block();
    setState(963);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      setState(958);
      match(NovaParser::T__86);
      setState(961);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case NovaParser::T__17: {
          setState(959);
          block();
          break;
        }

        case NovaParser::T__85: {
          setState(960);
          ifExpression();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

NovaParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ConditionContext* NovaParser::IfStatementContext::condition() {
  return getRuleContext<NovaParser::ConditionContext>(0);
}

std::vector<NovaParser::BlockContext *> NovaParser::IfStatementContext::block() {
  return getRuleContexts<NovaParser::BlockContext>();
}

NovaParser::BlockContext* NovaParser::IfStatementContext::block(size_t i) {
  return getRuleContext<NovaParser::BlockContext>(i);
}


size_t NovaParser::IfStatementContext::getRuleIndex() const {
  return NovaParser::RuleIfStatement;
}

void NovaParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void NovaParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any NovaParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IfStatementContext* NovaParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 164, NovaParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(965);
    match(NovaParser::T__85);
    setState(966);
    condition();
    setState(967);
    block();
    setState(970);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NovaParser::T__86) {
      setState(968);
      match(NovaParser::T__86);
      setState(969);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

NovaParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::ConditionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

NovaParser::LetConditionContext* NovaParser::ConditionContext::letCondition() {
  return getRuleContext<NovaParser::LetConditionContext>(0);
}


size_t NovaParser::ConditionContext::getRuleIndex() const {
  return NovaParser::RuleCondition;
}

void NovaParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void NovaParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any NovaParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ConditionContext* NovaParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 166, NovaParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(974);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__8:
      case NovaParser::T__13:
      case NovaParser::T__17:
      case NovaParser::T__21:
      case NovaParser::T__46:
      case NovaParser::T__49:
      case NovaParser::T__71:
      case NovaParser::T__72:
      case NovaParser::T__76:
      case NovaParser::T__80:
      case NovaParser::T__81:
      case NovaParser::T__82:
      case NovaParser::T__85:
      case NovaParser::T__87:
      case NovaParser::T__89:
      case NovaParser::T__90:
      case NovaParser::T__92:
      case NovaParser::T__93:
      case NovaParser::T__94:
      case NovaParser::T__95:
      case NovaParser::T__96:
      case NovaParser::Keyword:
      case NovaParser::Identifier:
      case NovaParser::DecimalLiteral:
      case NovaParser::HexLiteral:
      case NovaParser::OctalLiteral:
      case NovaParser::BinaryLiteral:
      case NovaParser::DecimalFloatLiteral:
      case NovaParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(972);
        expression();
        break;
      }

      case NovaParser::T__83: {
        enterOuterAlt(_localctx, 2);
        setState(973);
        letCondition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LetConditionContext ------------------------------------------------------------------

NovaParser::LetConditionContext::LetConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::PatternContext* NovaParser::LetConditionContext::pattern() {
  return getRuleContext<NovaParser::PatternContext>(0);
}

NovaParser::ExpressionContext* NovaParser::LetConditionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::LetConditionContext::getRuleIndex() const {
  return NovaParser::RuleLetCondition;
}

void NovaParser::LetConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLetCondition(this);
}

void NovaParser::LetConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLetCondition(this);
}


antlrcpp::Any NovaParser::LetConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLetCondition(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LetConditionContext* NovaParser::letCondition() {
  LetConditionContext *_localctx = _tracker.createInstance<LetConditionContext>(_ctx, getState());
  enterRule(_localctx, 168, NovaParser::RuleLetCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(976);
    match(NovaParser::T__83);
    setState(977);
    pattern();
    setState(978);
    match(NovaParser::T__12);
    setState(979);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchExpressionContext ------------------------------------------------------------------

NovaParser::MatchExpressionContext::MatchExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::MatchExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

std::vector<NovaParser::MatchArmContext *> NovaParser::MatchExpressionContext::matchArm() {
  return getRuleContexts<NovaParser::MatchArmContext>();
}

NovaParser::MatchArmContext* NovaParser::MatchExpressionContext::matchArm(size_t i) {
  return getRuleContext<NovaParser::MatchArmContext>(i);
}


size_t NovaParser::MatchExpressionContext::getRuleIndex() const {
  return NovaParser::RuleMatchExpression;
}

void NovaParser::MatchExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchExpression(this);
}

void NovaParser::MatchExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchExpression(this);
}


antlrcpp::Any NovaParser::MatchExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitMatchExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::MatchExpressionContext* NovaParser::matchExpression() {
  MatchExpressionContext *_localctx = _tracker.createInstance<MatchExpressionContext>(_ctx, getState());
  enterRule(_localctx, 170, NovaParser::RuleMatchExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(981);
    match(NovaParser::T__87);
    setState(982);
    expression();
    setState(983);
    match(NovaParser::T__17);
    setState(987);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__8

    || _la == NovaParser::T__14 || ((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (NovaParser::T__84 - 85))
      | (1ULL << (NovaParser::Keyword - 85))
      | (1ULL << (NovaParser::Identifier - 85)))) != 0)) {
      setState(984);
      matchArm();
      setState(989);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(990);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchStatementContext ------------------------------------------------------------------

NovaParser::MatchStatementContext::MatchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::MatchStatementContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

std::vector<NovaParser::MatchArmContext *> NovaParser::MatchStatementContext::matchArm() {
  return getRuleContexts<NovaParser::MatchArmContext>();
}

NovaParser::MatchArmContext* NovaParser::MatchStatementContext::matchArm(size_t i) {
  return getRuleContext<NovaParser::MatchArmContext>(i);
}


size_t NovaParser::MatchStatementContext::getRuleIndex() const {
  return NovaParser::RuleMatchStatement;
}

void NovaParser::MatchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchStatement(this);
}

void NovaParser::MatchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchStatement(this);
}


antlrcpp::Any NovaParser::MatchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitMatchStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::MatchStatementContext* NovaParser::matchStatement() {
  MatchStatementContext *_localctx = _tracker.createInstance<MatchStatementContext>(_ctx, getState());
  enterRule(_localctx, 172, NovaParser::RuleMatchStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(992);
    match(NovaParser::T__87);
    setState(993);
    expression();
    setState(994);
    match(NovaParser::T__17);
    setState(998);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NovaParser::T__8

    || _la == NovaParser::T__14 || ((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (NovaParser::T__84 - 85))
      | (1ULL << (NovaParser::Keyword - 85))
      | (1ULL << (NovaParser::Identifier - 85)))) != 0)) {
      setState(995);
      matchArm();
      setState(1000);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1001);
    match(NovaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchArmContext ------------------------------------------------------------------

NovaParser::MatchArmContext::MatchArmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::PatternContext* NovaParser::MatchArmContext::pattern() {
  return getRuleContext<NovaParser::PatternContext>(0);
}

NovaParser::ExpressionContext* NovaParser::MatchArmContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

NovaParser::BlockContext* NovaParser::MatchArmContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}


size_t NovaParser::MatchArmContext::getRuleIndex() const {
  return NovaParser::RuleMatchArm;
}

void NovaParser::MatchArmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchArm(this);
}

void NovaParser::MatchArmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchArm(this);
}


antlrcpp::Any NovaParser::MatchArmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitMatchArm(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::MatchArmContext* NovaParser::matchArm() {
  MatchArmContext *_localctx = _tracker.createInstance<MatchArmContext>(_ctx, getState());
  enterRule(_localctx, 174, NovaParser::RuleMatchArm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1012);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1003);
      pattern();
      setState(1004);
      match(NovaParser::T__88);
      setState(1005);
      expression();
      setState(1006);
      match(NovaParser::T__10);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1008);
      pattern();
      setState(1009);
      match(NovaParser::T__88);
      setState(1010);
      block();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopExpressionContext ------------------------------------------------------------------

NovaParser::LoopExpressionContext::LoopExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::LoopBlockContext* NovaParser::LoopExpressionContext::loopBlock() {
  return getRuleContext<NovaParser::LoopBlockContext>(0);
}

NovaParser::WhileBlockContext* NovaParser::LoopExpressionContext::whileBlock() {
  return getRuleContext<NovaParser::WhileBlockContext>(0);
}

NovaParser::ForBlockContext* NovaParser::LoopExpressionContext::forBlock() {
  return getRuleContext<NovaParser::ForBlockContext>(0);
}


size_t NovaParser::LoopExpressionContext::getRuleIndex() const {
  return NovaParser::RuleLoopExpression;
}

void NovaParser::LoopExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopExpression(this);
}

void NovaParser::LoopExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopExpression(this);
}


antlrcpp::Any NovaParser::LoopExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLoopExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LoopExpressionContext* NovaParser::loopExpression() {
  LoopExpressionContext *_localctx = _tracker.createInstance<LoopExpressionContext>(_ctx, getState());
  enterRule(_localctx, 176, NovaParser::RuleLoopExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1017);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__89: {
        enterOuterAlt(_localctx, 1);
        setState(1014);
        loopBlock();
        break;
      }

      case NovaParser::T__90: {
        enterOuterAlt(_localctx, 2);
        setState(1015);
        whileBlock();
        break;
      }

      case NovaParser::T__21: {
        enterOuterAlt(_localctx, 3);
        setState(1016);
        forBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStatementContext ------------------------------------------------------------------

NovaParser::LoopStatementContext::LoopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::LoopBlockContext* NovaParser::LoopStatementContext::loopBlock() {
  return getRuleContext<NovaParser::LoopBlockContext>(0);
}

NovaParser::WhileBlockContext* NovaParser::LoopStatementContext::whileBlock() {
  return getRuleContext<NovaParser::WhileBlockContext>(0);
}

NovaParser::ForBlockContext* NovaParser::LoopStatementContext::forBlock() {
  return getRuleContext<NovaParser::ForBlockContext>(0);
}


size_t NovaParser::LoopStatementContext::getRuleIndex() const {
  return NovaParser::RuleLoopStatement;
}

void NovaParser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}

void NovaParser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}


antlrcpp::Any NovaParser::LoopStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLoopStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LoopStatementContext* NovaParser::loopStatement() {
  LoopStatementContext *_localctx = _tracker.createInstance<LoopStatementContext>(_ctx, getState());
  enterRule(_localctx, 178, NovaParser::RuleLoopStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1022);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__89: {
        enterOuterAlt(_localctx, 1);
        setState(1019);
        loopBlock();
        break;
      }

      case NovaParser::T__90: {
        enterOuterAlt(_localctx, 2);
        setState(1020);
        whileBlock();
        break;
      }

      case NovaParser::T__21: {
        enterOuterAlt(_localctx, 3);
        setState(1021);
        forBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopBlockContext ------------------------------------------------------------------

NovaParser::LoopBlockContext::LoopBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::BlockContext* NovaParser::LoopBlockContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}


size_t NovaParser::LoopBlockContext::getRuleIndex() const {
  return NovaParser::RuleLoopBlock;
}

void NovaParser::LoopBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopBlock(this);
}

void NovaParser::LoopBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopBlock(this);
}


antlrcpp::Any NovaParser::LoopBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitLoopBlock(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::LoopBlockContext* NovaParser::loopBlock() {
  LoopBlockContext *_localctx = _tracker.createInstance<LoopBlockContext>(_ctx, getState());
  enterRule(_localctx, 180, NovaParser::RuleLoopBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1024);
    match(NovaParser::T__89);
    setState(1025);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileBlockContext ------------------------------------------------------------------

NovaParser::WhileBlockContext::WhileBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ConditionContext* NovaParser::WhileBlockContext::condition() {
  return getRuleContext<NovaParser::ConditionContext>(0);
}

NovaParser::BlockContext* NovaParser::WhileBlockContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}


size_t NovaParser::WhileBlockContext::getRuleIndex() const {
  return NovaParser::RuleWhileBlock;
}

void NovaParser::WhileBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileBlock(this);
}

void NovaParser::WhileBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileBlock(this);
}


antlrcpp::Any NovaParser::WhileBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitWhileBlock(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::WhileBlockContext* NovaParser::whileBlock() {
  WhileBlockContext *_localctx = _tracker.createInstance<WhileBlockContext>(_ctx, getState());
  enterRule(_localctx, 182, NovaParser::RuleWhileBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1027);
    match(NovaParser::T__90);
    setState(1028);
    condition();
    setState(1029);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForBlockContext ------------------------------------------------------------------

NovaParser::ForBlockContext::ForBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::PatternContext* NovaParser::ForBlockContext::pattern() {
  return getRuleContext<NovaParser::PatternContext>(0);
}

NovaParser::ExpressionContext* NovaParser::ForBlockContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}

NovaParser::BlockContext* NovaParser::ForBlockContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}


size_t NovaParser::ForBlockContext::getRuleIndex() const {
  return NovaParser::RuleForBlock;
}

void NovaParser::ForBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForBlock(this);
}

void NovaParser::ForBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForBlock(this);
}


antlrcpp::Any NovaParser::ForBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitForBlock(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ForBlockContext* NovaParser::forBlock() {
  ForBlockContext *_localctx = _tracker.createInstance<ForBlockContext>(_ctx, getState());
  enterRule(_localctx, 184, NovaParser::RuleForBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1031);
    match(NovaParser::T__21);
    setState(1032);
    pattern();
    setState(1033);
    match(NovaParser::T__91);
    setState(1034);
    expression();
    setState(1035);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

NovaParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::BreakExpressionContext* NovaParser::JumpStatementContext::breakExpression() {
  return getRuleContext<NovaParser::BreakExpressionContext>(0);
}

NovaParser::ContinueExpressionContext* NovaParser::JumpStatementContext::continueExpression() {
  return getRuleContext<NovaParser::ContinueExpressionContext>(0);
}

NovaParser::ReturnExpressionContext* NovaParser::JumpStatementContext::returnExpression() {
  return getRuleContext<NovaParser::ReturnExpressionContext>(0);
}


size_t NovaParser::JumpStatementContext::getRuleIndex() const {
  return NovaParser::RuleJumpStatement;
}

void NovaParser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void NovaParser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}


antlrcpp::Any NovaParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::JumpStatementContext* NovaParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 186, NovaParser::RuleJumpStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1040);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NovaParser::T__92: {
        enterOuterAlt(_localctx, 1);
        setState(1037);
        breakExpression();
        break;
      }

      case NovaParser::T__93: {
        enterOuterAlt(_localctx, 2);
        setState(1038);
        continueExpression();
        break;
      }

      case NovaParser::T__94: {
        enterOuterAlt(_localctx, 3);
        setState(1039);
        returnExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakExpressionContext ------------------------------------------------------------------

NovaParser::BreakExpressionContext::BreakExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::BreakExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::BreakExpressionContext::getRuleIndex() const {
  return NovaParser::RuleBreakExpression;
}

void NovaParser::BreakExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakExpression(this);
}

void NovaParser::BreakExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakExpression(this);
}


antlrcpp::Any NovaParser::BreakExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitBreakExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::BreakExpressionContext* NovaParser::breakExpression() {
  BreakExpressionContext *_localctx = _tracker.createInstance<BreakExpressionContext>(_ctx, getState());
  enterRule(_localctx, 188, NovaParser::RuleBreakExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1042);
    match(NovaParser::T__92);
    setState(1044);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__17)
      | (1ULL << NovaParser::T__21)
      | (1ULL << NovaParser::T__46)
      | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
      | (1ULL << (NovaParser::T__72 - 72))
      | (1ULL << (NovaParser::T__76 - 72))
      | (1ULL << (NovaParser::T__80 - 72))
      | (1ULL << (NovaParser::T__81 - 72))
      | (1ULL << (NovaParser::T__82 - 72))
      | (1ULL << (NovaParser::T__85 - 72))
      | (1ULL << (NovaParser::T__87 - 72))
      | (1ULL << (NovaParser::T__89 - 72))
      | (1ULL << (NovaParser::T__90 - 72))
      | (1ULL << (NovaParser::T__92 - 72))
      | (1ULL << (NovaParser::T__93 - 72))
      | (1ULL << (NovaParser::T__94 - 72))
      | (1ULL << (NovaParser::T__95 - 72))
      | (1ULL << (NovaParser::T__96 - 72))
      | (1ULL << (NovaParser::Keyword - 72))
      | (1ULL << (NovaParser::Identifier - 72))
      | (1ULL << (NovaParser::DecimalLiteral - 72))
      | (1ULL << (NovaParser::HexLiteral - 72))
      | (1ULL << (NovaParser::OctalLiteral - 72))
      | (1ULL << (NovaParser::BinaryLiteral - 72))
      | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
      | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
      setState(1043);
      expression();
    }
    setState(1046);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueExpressionContext ------------------------------------------------------------------

NovaParser::ContinueExpressionContext::ContinueExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NovaParser::ContinueExpressionContext::getRuleIndex() const {
  return NovaParser::RuleContinueExpression;
}

void NovaParser::ContinueExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueExpression(this);
}

void NovaParser::ContinueExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueExpression(this);
}


antlrcpp::Any NovaParser::ContinueExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitContinueExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ContinueExpressionContext* NovaParser::continueExpression() {
  ContinueExpressionContext *_localctx = _tracker.createInstance<ContinueExpressionContext>(_ctx, getState());
  enterRule(_localctx, 190, NovaParser::RuleContinueExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1048);
    match(NovaParser::T__93);
    setState(1049);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnExpressionContext ------------------------------------------------------------------

NovaParser::ReturnExpressionContext::ReturnExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::ReturnExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::ReturnExpressionContext::getRuleIndex() const {
  return NovaParser::RuleReturnExpression;
}

void NovaParser::ReturnExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnExpression(this);
}

void NovaParser::ReturnExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnExpression(this);
}


antlrcpp::Any NovaParser::ReturnExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitReturnExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::ReturnExpressionContext* NovaParser::returnExpression() {
  ReturnExpressionContext *_localctx = _tracker.createInstance<ReturnExpressionContext>(_ctx, getState());
  enterRule(_localctx, 192, NovaParser::RuleReturnExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1051);
    match(NovaParser::T__94);
    setState(1053);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NovaParser::T__8)
      | (1ULL << NovaParser::T__13)
      | (1ULL << NovaParser::T__17)
      | (1ULL << NovaParser::T__21)
      | (1ULL << NovaParser::T__46)
      | (1ULL << NovaParser::T__49))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (NovaParser::T__71 - 72))
      | (1ULL << (NovaParser::T__72 - 72))
      | (1ULL << (NovaParser::T__76 - 72))
      | (1ULL << (NovaParser::T__80 - 72))
      | (1ULL << (NovaParser::T__81 - 72))
      | (1ULL << (NovaParser::T__82 - 72))
      | (1ULL << (NovaParser::T__85 - 72))
      | (1ULL << (NovaParser::T__87 - 72))
      | (1ULL << (NovaParser::T__89 - 72))
      | (1ULL << (NovaParser::T__90 - 72))
      | (1ULL << (NovaParser::T__92 - 72))
      | (1ULL << (NovaParser::T__93 - 72))
      | (1ULL << (NovaParser::T__94 - 72))
      | (1ULL << (NovaParser::T__95 - 72))
      | (1ULL << (NovaParser::T__96 - 72))
      | (1ULL << (NovaParser::Keyword - 72))
      | (1ULL << (NovaParser::Identifier - 72))
      | (1ULL << (NovaParser::DecimalLiteral - 72))
      | (1ULL << (NovaParser::HexLiteral - 72))
      | (1ULL << (NovaParser::OctalLiteral - 72))
      | (1ULL << (NovaParser::BinaryLiteral - 72))
      | (1ULL << (NovaParser::DecimalFloatLiteral - 72))
      | (1ULL << (NovaParser::StringLiteral - 72)))) != 0)) {
      setState(1052);
      expression();
    }
    setState(1055);
    match(NovaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AwaitExpressionContext ------------------------------------------------------------------

NovaParser::AwaitExpressionContext::AwaitExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::ExpressionContext* NovaParser::AwaitExpressionContext::expression() {
  return getRuleContext<NovaParser::ExpressionContext>(0);
}


size_t NovaParser::AwaitExpressionContext::getRuleIndex() const {
  return NovaParser::RuleAwaitExpression;
}

void NovaParser::AwaitExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAwaitExpression(this);
}

void NovaParser::AwaitExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAwaitExpression(this);
}


antlrcpp::Any NovaParser::AwaitExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitAwaitExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::AwaitExpressionContext* NovaParser::awaitExpression() {
  AwaitExpressionContext *_localctx = _tracker.createInstance<AwaitExpressionContext>(_ctx, getState());
  enterRule(_localctx, 194, NovaParser::RuleAwaitExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1057);
    match(NovaParser::T__95);
    setState(1058);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsafeExpressionContext ------------------------------------------------------------------

NovaParser::UnsafeExpressionContext::UnsafeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::BlockContext* NovaParser::UnsafeExpressionContext::block() {
  return getRuleContext<NovaParser::BlockContext>(0);
}


size_t NovaParser::UnsafeExpressionContext::getRuleIndex() const {
  return NovaParser::RuleUnsafeExpression;
}

void NovaParser::UnsafeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsafeExpression(this);
}

void NovaParser::UnsafeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsafeExpression(this);
}


antlrcpp::Any NovaParser::UnsafeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitUnsafeExpression(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::UnsafeExpressionContext* NovaParser::unsafeExpression() {
  UnsafeExpressionContext *_localctx = _tracker.createInstance<UnsafeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 196, NovaParser::RuleUnsafeExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1060);
    match(NovaParser::T__96);
    setState(1061);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VisibilityContext ------------------------------------------------------------------

NovaParser::VisibilityContext::VisibilityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NovaParser::IdentifierContext* NovaParser::VisibilityContext::identifier() {
  return getRuleContext<NovaParser::IdentifierContext>(0);
}


size_t NovaParser::VisibilityContext::getRuleIndex() const {
  return NovaParser::RuleVisibility;
}

void NovaParser::VisibilityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVisibility(this);
}

void NovaParser::VisibilityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVisibility(this);
}


antlrcpp::Any NovaParser::VisibilityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitVisibility(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::VisibilityContext* NovaParser::visibility() {
  VisibilityContext *_localctx = _tracker.createInstance<VisibilityContext>(_ctx, getState());
  enterRule(_localctx, 198, NovaParser::RuleVisibility);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1063);
    match(NovaParser::T__97);
    setState(1074);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      setState(1064);
      match(NovaParser::T__8);
      setState(1065);
      match(NovaParser::T__98);
      setState(1066);
      match(NovaParser::T__9);
      break;
    }

    case 2: {
      setState(1067);
      match(NovaParser::T__8);
      setState(1068);
      match(NovaParser::T__99);
      setState(1069);
      match(NovaParser::T__9);
      break;
    }

    case 3: {
      setState(1070);
      match(NovaParser::T__8);
      setState(1071);
      identifier();
      setState(1072);
      match(NovaParser::T__9);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameContext ------------------------------------------------------------------

NovaParser::QualifiedNameContext::QualifiedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NovaParser::IdentifierContext *> NovaParser::QualifiedNameContext::identifier() {
  return getRuleContexts<NovaParser::IdentifierContext>();
}

NovaParser::IdentifierContext* NovaParser::QualifiedNameContext::identifier(size_t i) {
  return getRuleContext<NovaParser::IdentifierContext>(i);
}


size_t NovaParser::QualifiedNameContext::getRuleIndex() const {
  return NovaParser::RuleQualifiedName;
}

void NovaParser::QualifiedNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedName(this);
}

void NovaParser::QualifiedNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedName(this);
}


antlrcpp::Any NovaParser::QualifiedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitQualifiedName(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::QualifiedNameContext* NovaParser::qualifiedName() {
  QualifiedNameContext *_localctx = _tracker.createInstance<QualifiedNameContext>(_ctx, getState());
  enterRule(_localctx, 200, NovaParser::RuleQualifiedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1076);
    identifier();
    setState(1081);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1077);
        match(NovaParser::T__100);
        setState(1078);
        identifier(); 
      }
      setState(1083);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

NovaParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NovaParser::IdentifierContext::Identifier() {
  return getToken(NovaParser::Identifier, 0);
}

tree::TerminalNode* NovaParser::IdentifierContext::Keyword() {
  return getToken(NovaParser::Keyword, 0);
}


size_t NovaParser::IdentifierContext::getRuleIndex() const {
  return NovaParser::RuleIdentifier;
}

void NovaParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void NovaParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NovaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any NovaParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NovaVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

NovaParser::IdentifierContext* NovaParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 202, NovaParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1084);
    _la = _input->LA(1);
    if (!(_la == NovaParser::Keyword

    || _la == NovaParser::Identifier)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool NovaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 41: return logicalExpressionSempred(dynamic_cast<LogicalExpressionContext *>(context), predicateIndex);
    case 42: return comparisonExpressionSempred(dynamic_cast<ComparisonExpressionContext *>(context), predicateIndex);
    case 43: return bitwiseExpressionSempred(dynamic_cast<BitwiseExpressionContext *>(context), predicateIndex);
    case 44: return arithmeticExpressionSempred(dynamic_cast<ArithmeticExpressionContext *>(context), predicateIndex);
    case 45: return termExpressionSempred(dynamic_cast<TermExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NovaParser::logicalExpressionSempred(LogicalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NovaParser::comparisonExpressionSempred(ComparisonExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NovaParser::bitwiseExpressionSempred(BitwiseExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NovaParser::arithmeticExpressionSempred(ArithmeticExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool NovaParser::termExpressionSempred(TermExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> NovaParser::_decisionToDFA;
atn::PredictionContextCache NovaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NovaParser::_atn;
std::vector<uint16_t> NovaParser::_serializedATN;

std::vector<std::string> NovaParser::_ruleNames = {
  "sourceFile", "moduleDeclaration", "importDeclaration", "topLevelDeclaration", 
  "functionDeclaration", "functionParameters", "parameterList", "parameter", 
  "returnType", "structDeclaration", "structField", "traitDeclaration", 
  "traitMethod", "functionSignature", "implDeclaration", "implMember", "enumDeclaration", 
  "enumVariant", "typeAliasDeclaration", "constantDeclaration", "externDeclaration", 
  "externFunction", "type_", "primitiveType", "typeReference", "genericType", 
  "typeList", "functionType", "tupleType", "arrayType", "referenceType", 
  "ownershipType", "typeParameterList", "typeParameter", "constraintList", 
  "constraint", "identifierList", "lifetime", "expression", "assignmentExpression", 
  "compoundAssignmentOperator", "logicalExpression", "comparisonExpression", 
  "bitwiseExpression", "arithmeticExpression", "termExpression", "powerExpression", 
  "unaryExpression", "postfixExpression", "primaryExpression", "parenthesizedExpression", 
  "literalExpression", "integerLiteral", "floatLiteral", "booleanLiteral", 
  "characterLiteral", "stringLiteral", "nullLiteral", "identifierExpression", 
  "blockExpression", "block", "statement", "declarationStatement", "variableDeclaration", 
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

std::vector<std::string> NovaParser::_literalNames = {
  "", "'module'", "';'", "'import'", "'as'", "'use'", "'func'", "'where'", 
  "'async'", "'('", "')'", "','", "':'", "'='", "'&'", "'mut'", "'->'", 
  "'struct'", "'{'", "'}'", "'trait'", "'impl'", "'for'", "'enum'", "'type'", 
  "'const'", "'extern'", "'C'", "'i8'", "'i16'", "'i32'", "'i64'", "'isize'", 
  "'u8'", "'u16'", "'u32'", "'u64'", "'usize'", "'f32'", "'f64'", "'bool'", 
  "'char'", "'str'", "'void'", "'<'", "'>'", "'fn'", "'['", "']'", "'?'", 
  "'''", "'+='", "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", 
  "'<<='", "'>>='", "'&&'", "'||'", "'=='", "'!='", "'<='", "'>='", "'|'", 
  "'^'", "'<<'", "'>>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'**'", "'!'", 
  "'.'", "'..'", "'...'", "'true'", "'false'", "'null'", "'let'", "'_'", 
  "'if'", "'else'", "'match'", "'=>'", "'loop'", "'while'", "'in'", "'break'", 
  "'continue'", "'return'", "'await'", "'unsafe'", "'pub'", "'crate'", "'super'", 
  "'::'"
};

std::vector<std::string> NovaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "Keyword", "Identifier", 
  "DecimalLiteral", "HexLiteral", "OctalLiteral", "BinaryLiteral", "DecimalFloatLiteral", 
  "StringLiteral", "EscapeSequence", "Comment", "BlockComment", "Whitespace"
};

dfa::Vocabulary NovaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NovaParser::_tokenNames;

NovaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x73, 0x441, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x3, 0x2, 0x5, 0x2, 0xd0, 0xa, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0xd3, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xd6, 0xb, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0xd9, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xdc, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xe8, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xf0, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0xfa, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0xff, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x103, 0xa, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x107, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x10f, 0xa, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x113, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x117, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x11b, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x11f, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x124, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x127, 0xa, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x12a, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x12f, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x132, 0xb, 0x8, 0x3, 0x8, 0x5, 0x8, 0x135, 
    0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x13c, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x140, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x146, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x14e, 0xa, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x152, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x7, 0xb, 0x156, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x159, 0xb, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x5, 0xc, 0x15e, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x165, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x16a, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x16f, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x173, 0xa, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x177, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x17a, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x180, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x184, 0xa, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0x189, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x18f, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x194, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x198, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x19b, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1a1, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0x1a6, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x1aa, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x1ae, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x1b1, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1ba, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1bf, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1d1, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x1d5, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x1dd, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x1e0, 0xb, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1e3, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1ef, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0x1f8, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x1ff, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x202, 
    0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x207, 0xa, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x20b, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x211, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 
    0x212, 0x5, 0x1e, 0x215, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 
    0x20, 0x5, 0x20, 0x221, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x224, 0xa, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x22a, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x230, 
    0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x233, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x23a, 0xa, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x23f, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 
    0x242, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x249, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x24d, 
    0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x252, 0xa, 0x26, 
    0xc, 0x26, 0xe, 0x26, 0x255, 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x265, 
    0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x26f, 0xa, 0x2b, 0xc, 0x2b, 
    0xe, 0x2b, 0x272, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x27a, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 
    0x27d, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x7, 0x2d, 0x285, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x288, 
    0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x7, 0x2e, 0x290, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x293, 0xb, 
    0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x7, 0x2f, 0x29b, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x29e, 0xb, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x2a3, 0xa, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x5, 0x31, 0x2ad, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 
    0x2b1, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2b6, 
    0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2cd, 0xa, 0x32, 0x3, 0x32, 
    0x5, 0x32, 0x2d0, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
    0x2e2, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x2ee, 
    0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x2f9, 0xa, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x7, 0x3e, 
    0x307, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x30a, 0xb, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x30d, 0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x318, 
    0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x31c, 0xa, 0x40, 0x3, 0x41, 
    0x5, 0x41, 0x31f, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x328, 0xa, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x330, 
    0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x334, 0xa, 0x41, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x33a, 0xa, 0x42, 0x3, 0x43, 
    0x5, 0x43, 0x33d, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x345, 0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 
    0x348, 0xb, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x7, 0x45, 0x356, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x359, 0xb, 
    0x45, 0x5, 0x45, 0x35b, 0xa, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x36b, 
    0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x370, 0xa, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x6, 
    0x4a, 0x378, 0xa, 0x4a, 0xd, 0x4a, 0xe, 0x4a, 0x379, 0x5, 0x4a, 0x37c, 
    0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
    0x4b, 0x7, 0x4b, 0x384, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x387, 0xb, 
    0x4b, 0x5, 0x4b, 0x389, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x7, 0x4c, 0x392, 0xa, 0x4c, 
    0xc, 0x4c, 0xe, 0x4c, 0x395, 0xb, 0x4c, 0x5, 0x4c, 0x397, 0xa, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x39e, 
    0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3a5, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
    0x3aa, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x7, 0x50, 0x3b1, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x3b4, 0xb, 0x50, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x5, 0x53, 0x3c4, 0xa, 0x53, 0x5, 0x53, 0x3c6, 0xa, 0x53, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x3cd, 
    0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3d1, 0xa, 0x55, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x57, 0x7, 0x57, 0x3dc, 0xa, 0x57, 0xc, 0x57, 0xe, 0x57, 
    0x3df, 0xb, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x7, 0x58, 0x3e7, 0xa, 0x58, 0xc, 0x58, 0xe, 0x58, 0x3ea, 
    0xb, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
    0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 
    0x3f7, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x3fc, 
    0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 0x401, 0xa, 0x5b, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
    0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x413, 0xa, 0x5f, 0x3, 0x60, 
    0x3, 0x60, 0x5, 0x60, 0x417, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x420, 0xa, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 
    0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 
    0x65, 0x435, 0xa, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x7, 0x66, 
    0x43a, 0xa, 0x66, 0xc, 0x66, 0xe, 0x66, 0x43d, 0xb, 0x66, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x2, 0x7, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x68, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
    0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 
    0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 
    0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 
    0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 
    0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0x2, 0xe, 0x4, 0x2, 0x1a, 0x1a, 0x1e, 
    0x2d, 0x3, 0x2, 0x35, 0x3e, 0x3, 0x2, 0x3f, 0x40, 0x4, 0x2, 0x2e, 0x2f, 
    0x41, 0x44, 0x4, 0x2, 0x10, 0x10, 0x45, 0x48, 0x3, 0x2, 0x49, 0x4a, 
    0x3, 0x2, 0x4b, 0x4d, 0x3, 0x2, 0x51, 0x52, 0x3, 0x2, 0x6a, 0x6d, 0x3, 
    0x2, 0x53, 0x54, 0x3, 0x2, 0x34, 0x34, 0x3, 0x2, 0x68, 0x69, 0x2, 0x482, 
    0x2, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x4, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x6, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xa, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0xc, 0x129, 0x3, 0x2, 0x2, 0x2, 0xe, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x145, 0x3, 0x2, 0x2, 0x2, 0x12, 0x147, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x169, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1c4, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x1fb, 0x3, 0x2, 0x2, 0x2, 0x38, 0x203, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x218, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x21e, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x227, 0x3, 0x2, 0x2, 0x2, 0x42, 0x22b, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x236, 0x3, 0x2, 0x2, 0x2, 0x46, 0x23b, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x24e, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x256, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x259, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x264, 0x3, 0x2, 0x2, 0x2, 0x52, 0x266, 0x3, 0x2, 0x2, 0x2, 0x54, 0x268, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x273, 0x3, 0x2, 0x2, 0x2, 0x58, 0x27e, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x289, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x294, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2b0, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2e1, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x2ef, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2f3, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2fc, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x76, 0x300, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x302, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x304, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x317, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x333, 0x3, 0x2, 0x2, 0x2, 0x82, 0x339, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x33c, 0x3, 0x2, 0x2, 0x2, 0x86, 0x340, 0x3, 0x2, 0x2, 0x2, 0x88, 0x34b, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x360, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x363, 0x3, 0x2, 0x2, 0x2, 0x90, 0x368, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x373, 0x3, 0x2, 0x2, 0x2, 0x94, 0x37f, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x98, 0x39a, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0x3ad, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3b9, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3c7, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x3d2, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0xae, 0x3e2, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x3fb, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0x400, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x402, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0x405, 0x3, 0x2, 0x2, 0x2, 0xba, 0x409, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x412, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0x414, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x41a, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0x41d, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x423, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0x426, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x429, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0x436, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x43e, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xd0, 0x5, 0x4, 0x3, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 
    0x5, 0x6, 0x4, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd9, 0x5, 0x8, 0x5, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x2, 0x2, 0x3, 0xde, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x3, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0xca, 
    0x66, 0x2, 0xe1, 0xe2, 0x7, 0x4, 0x2, 0x2, 0xe2, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe4, 0x7, 0x5, 0x2, 0x2, 0xe4, 0xe7, 0x5, 0xca, 0x66, 0x2, 
    0xe5, 0xe6, 0x7, 0x6, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0xcc, 0x67, 0x2, 0xe7, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x4, 0x2, 0x2, 0xea, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x7, 0x2, 0x2, 0xec, 0xed, 0x5, 0xca, 
    0x66, 0x2, 0xed, 0xee, 0x7, 0x4, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xef, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0x7, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xfa, 0x5, 0xa, 0x6, 0x2, 0xf2, 
    0xfa, 0x5, 0x14, 0xb, 0x2, 0xf3, 0xfa, 0x5, 0x18, 0xd, 0x2, 0xf4, 0xfa, 
    0x5, 0x1e, 0x10, 0x2, 0xf5, 0xfa, 0x5, 0x22, 0x12, 0x2, 0xf6, 0xfa, 
    0x5, 0x26, 0x14, 0x2, 0xf7, 0xfa, 0x5, 0x28, 0x15, 0x2, 0xf8, 0xfa, 
    0x5, 0x2a, 0x16, 0x2, 0xf9, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0x9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x8, 0x2, 0x2, 0xfc, 
    0xfe, 0x5, 0xcc, 0x67, 0x2, 0xfd, 0xff, 0x5, 0x42, 0x22, 0x2, 0xfe, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x5, 0xc, 0x7, 0x2, 0x101, 0x103, 
    0x5, 0x12, 0xa, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
    0x7, 0x9, 0x2, 0x2, 0x105, 0x107, 0x5, 0x46, 0x24, 0x2, 0x106, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x5, 0x7a, 0x3e, 0x2, 0x109, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0xa, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0x8, 0x2, 0x2, 0x10c, 0x10e, 0x5, 0xcc, 0x67, 0x2, 0x10d, 0x10f, 
    0x5, 0x42, 0x22, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 
    0x5, 0xc, 0x7, 0x2, 0x111, 0x113, 0x5, 0x12, 0xa, 0x2, 0x112, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x9, 0x2, 0x2, 0x115, 0x117, 
    0x5, 0x46, 0x24, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
    0x5, 0x7a, 0x3e, 0x2, 0x119, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0xfb, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x11b, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11e, 0x7, 0xb, 0x2, 0x2, 0x11d, 0x11f, 0x5, 
    0xe, 0x8, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x12a, 0x7, 
    0xc, 0x2, 0x2, 0x121, 0x123, 0x7, 0xb, 0x2, 0x2, 0x122, 0x124, 0x5, 
    0xe, 0x8, 0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x126, 0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 0x7, 
    0xd, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x7, 
    0xc, 0x2, 0x2, 0x129, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x129, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x130, 0x5, 0x10, 
    0x9, 0x2, 0x12c, 0x12d, 0x7, 0xd, 0x2, 0x2, 0x12d, 0x12f, 0x5, 0x10, 
    0x9, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x135, 0x7, 0xd, 0x2, 0x2, 0x134, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x134, 0x135, 0x3, 0x2, 0x2, 0x2, 0x135, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x137, 0x5, 0xcc, 0x67, 0x2, 0x137, 0x138, 0x7, 0xe, 0x2, 
    0x2, 0x138, 0x13b, 0x5, 0x2e, 0x18, 0x2, 0x139, 0x13a, 0x7, 0xf, 0x2, 
    0x2, 0x13a, 0x13c, 0x5, 0x4e, 0x28, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x13f, 0x7, 0x10, 0x2, 0x2, 0x13e, 0x140, 0x7, 0x11, 0x2, 
    0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x5, 0xcc, 0x67, 
    0x2, 0x142, 0x143, 0x7, 0xe, 0x2, 0x2, 0x143, 0x144, 0x5, 0x2e, 0x18, 
    0x2, 0x144, 0x146, 0x3, 0x2, 0x2, 0x2, 0x145, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x146, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x148, 0x7, 0x12, 0x2, 0x2, 0x148, 0x149, 0x5, 0x2e, 0x18, 0x2, 
    0x149, 0x13, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x13, 0x2, 0x2, 
    0x14b, 0x14d, 0x5, 0xcc, 0x67, 0x2, 0x14c, 0x14e, 0x5, 0x42, 0x22, 0x2, 
    0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x9, 0x2, 0x2, 
    0x150, 0x152, 0x5, 0x46, 0x24, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x157, 0x7, 0x14, 0x2, 0x2, 0x154, 0x156, 0x5, 0x16, 0xc, 0x2, 
    0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 0x3, 0x2, 0x2, 0x2, 
    0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x158, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x15b, 0x7, 0x15, 0x2, 0x2, 0x15b, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x15c, 0x15e, 0x5, 0xc8, 0x65, 0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 
    0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x15f, 0x160, 0x5, 0xcc, 0x67, 0x2, 0x160, 0x161, 0x7, 0xe, 0x2, 0x2, 
    0x161, 0x162, 0x5, 0x2e, 0x18, 0x2, 0x162, 0x16a, 0x3, 0x2, 0x2, 0x2, 
    0x163, 0x165, 0x5, 0xc8, 0x65, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x166, 0x167, 0x5, 0xcc, 0x67, 0x2, 0x167, 0x168, 0x7, 0xd, 0x2, 0x2, 
    0x168, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x169, 0x15d, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x164, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16c, 0x7, 0x16, 0x2, 0x2, 0x16c, 0x16e, 0x5, 0xcc, 0x67, 0x2, 0x16d, 
    0x16f, 0x5, 0x42, 0x22, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16e, 
    0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x171, 0x7, 0xe, 0x2, 0x2, 0x171, 0x173, 0x5, 0x4a, 0x26, 0x2, 0x172, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x178, 0x7, 0x14, 0x2, 0x2, 0x175, 
    0x177, 0x5, 0x1a, 0xe, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17a, 
    0x178, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x15, 0x2, 0x2, 0x17c, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x180, 0x5, 0xa, 0x6, 0x2, 0x17e, 0x180, 
    0x5, 0x1c, 0xf, 0x2, 0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x17e, 
    0x3, 0x2, 0x2, 0x2, 0x180, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x181, 0x183, 0x5, 
    0xcc, 0x67, 0x2, 0x182, 0x184, 0x5, 0x42, 0x22, 0x2, 0x183, 0x182, 0x3, 
    0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 
    0x2, 0x2, 0x2, 0x185, 0x188, 0x5, 0xc, 0x7, 0x2, 0x186, 0x187, 0x7, 
    0x12, 0x2, 0x2, 0x187, 0x189, 0x5, 0x2e, 0x18, 0x2, 0x188, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 
    0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x4, 0x2, 0x2, 0x18b, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x18c, 0x18e, 0x7, 0x17, 0x2, 0x2, 0x18d, 0x18f, 0x5, 0x42, 
    0x22, 0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 0x5, 0x2e, 
    0x18, 0x2, 0x191, 0x192, 0x7, 0x18, 0x2, 0x2, 0x192, 0x194, 0x5, 0x2e, 
    0x18, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x199, 0x7, 0x14, 
    0x2, 0x2, 0x196, 0x198, 0x5, 0x20, 0x11, 0x2, 0x197, 0x196, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x15, 
    0x2, 0x2, 0x19d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a1, 0x5, 0xa, 0x6, 
    0x2, 0x19f, 0x1a1, 0x5, 0x28, 0x15, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x1a0, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x1a3, 0x7, 0x19, 0x2, 0x2, 0x1a3, 0x1a5, 0x5, 0xcc, 0x67, 0x2, 
    0x1a4, 0x1a6, 0x5, 0x42, 0x22, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1a8, 0x7, 0x9, 0x2, 0x2, 0x1a8, 0x1aa, 0x5, 0x46, 0x24, 0x2, 
    0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1af, 0x7, 0x14, 0x2, 0x2, 
    0x1ac, 0x1ae, 0x5, 0x24, 0x13, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x7, 0x15, 0x2, 0x2, 
    0x1b3, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b9, 0x5, 0xcc, 0x67, 0x2, 
    0x1b5, 0x1b6, 0x7, 0xb, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x36, 0x1c, 0x2, 
    0x1b7, 0x1b8, 0x7, 0xc, 0x2, 0x2, 0x1b8, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1ba, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x1a, 0x2, 0x2, 
    0x1bc, 0x1be, 0x5, 0xcc, 0x67, 0x2, 0x1bd, 0x1bf, 0x5, 0x42, 0x22, 0x2, 
    0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0xf, 0x2, 0x2, 
    0x1c1, 0x1c2, 0x5, 0x2e, 0x18, 0x2, 0x1c2, 0x1c3, 0x7, 0x4, 0x2, 0x2, 
    0x1c3, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x1b, 0x2, 0x2, 
    0x1c5, 0x1c6, 0x5, 0xcc, 0x67, 0x2, 0x1c6, 0x1c7, 0x7, 0xe, 0x2, 0x2, 
    0x1c7, 0x1c8, 0x5, 0x2e, 0x18, 0x2, 0x1c8, 0x1c9, 0x7, 0xf, 0x2, 0x2, 
    0x1c9, 0x1ca, 0x5, 0x4e, 0x28, 0x2, 0x1ca, 0x1cb, 0x7, 0x4, 0x2, 0x2, 
    0x1cb, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x1c, 0x2, 0x2, 
    0x1cd, 0x1ce, 0x7, 0x8, 0x2, 0x2, 0x1ce, 0x1d0, 0x5, 0xcc, 0x67, 0x2, 
    0x1cf, 0x1d1, 0x5, 0x42, 0x22, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1d4, 0x5, 0xc, 0x7, 0x2, 0x1d3, 0x1d5, 0x5, 0x12, 0xa, 0x2, 
    0x1d4, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x7, 0x4, 0x2, 0x2, 
    0x1d7, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x1c, 0x2, 0x2, 
    0x1d9, 0x1da, 0x7, 0x1d, 0x2, 0x2, 0x1da, 0x1de, 0x7, 0x14, 0x2, 0x2, 
    0x1db, 0x1dd, 0x5, 0x2c, 0x17, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e3, 0x7, 0x15, 0x2, 0x2, 
    0x1e2, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x1e3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x1c, 0xf, 0x2, 
    0x1e5, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1ef, 0x5, 0x30, 0x19, 0x2, 
    0x1e7, 0x1ef, 0x5, 0x32, 0x1a, 0x2, 0x1e8, 0x1ef, 0x5, 0x34, 0x1b, 0x2, 
    0x1e9, 0x1ef, 0x5, 0x38, 0x1d, 0x2, 0x1ea, 0x1ef, 0x5, 0x3a, 0x1e, 0x2, 
    0x1eb, 0x1ef, 0x5, 0x3c, 0x1f, 0x2, 0x1ec, 0x1ef, 0x5, 0x3e, 0x20, 0x2, 
    0x1ed, 0x1ef, 0x5, 0x40, 0x21, 0x2, 0x1ee, 0x1e6, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ea, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1f1, 0x9, 0x2, 0x2, 0x2, 0x1f1, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f7, 
    0x5, 0xca, 0x66, 0x2, 0x1f3, 0x1f4, 0x7, 0x2e, 0x2, 0x2, 0x1f4, 0x1f5, 
    0x5, 0x36, 0x1c, 0x2, 0x1f5, 0x1f6, 0x7, 0x2f, 0x2, 0x2, 0x1f6, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x1f8, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x5, 
    0x32, 0x1a, 0x2, 0x1fa, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x200, 0x5, 
    0x2e, 0x18, 0x2, 0x1fc, 0x1fd, 0x7, 0xd, 0x2, 0x2, 0x1fd, 0x1ff, 0x5, 
    0x2e, 0x18, 0x2, 0x1fe, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x202, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 
    0x2, 0x2, 0x2, 0x201, 0x37, 0x3, 0x2, 0x2, 0x2, 0x202, 0x200, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x204, 0x7, 0x30, 0x2, 0x2, 0x204, 0x206, 0x7, 0xb, 
    0x2, 0x2, 0x205, 0x207, 0x5, 0x36, 0x1c, 0x2, 0x206, 0x205, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x3, 0x2, 
    0x2, 0x2, 0x208, 0x20a, 0x7, 0xc, 0x2, 0x2, 0x209, 0x20b, 0x5, 0x12, 
    0xa, 0x2, 0x20a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x20b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x214, 0x7, 0xb, 0x2, 
    0x2, 0x20d, 0x210, 0x5, 0x2e, 0x18, 0x2, 0x20e, 0x20f, 0x7, 0xd, 0x2, 
    0x2, 0x20f, 0x211, 0x5, 0x2e, 0x18, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x215, 0x3, 0x2, 0x2, 
    0x2, 0x214, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 
    0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x7, 0xc, 0x2, 
    0x2, 0x217, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x7, 0x31, 0x2, 
    0x2, 0x219, 0x21a, 0x5, 0x2e, 0x18, 0x2, 0x21a, 0x21b, 0x7, 0x4, 0x2, 
    0x2, 0x21b, 0x21c, 0x5, 0x4e, 0x28, 0x2, 0x21c, 0x21d, 0x7, 0x32, 0x2, 
    0x2, 0x21d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 0x7, 0x10, 0x2, 
    0x2, 0x21f, 0x221, 0x7, 0x11, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 
    0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x223, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x224, 0x5, 0x4c, 0x27, 0x2, 0x223, 0x222, 0x3, 0x2, 0x2, 
    0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 0x2, 
    0x2, 0x225, 0x226, 0x5, 0x2e, 0x18, 0x2, 0x226, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x229, 0x5, 0xcc, 0x67, 0x2, 0x228, 0x22a, 0x5, 0x42, 0x22, 
    0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x3, 0x2, 0x2, 
    0x2, 0x22a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x2e, 0x2, 
    0x2, 0x22c, 0x231, 0x5, 0x44, 0x23, 0x2, 0x22d, 0x22e, 0x7, 0xd, 0x2, 
    0x2, 0x22e, 0x230, 0x5, 0x44, 0x23, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x233, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x234, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x7, 0x2f, 0x2, 
    0x2, 0x235, 0x43, 0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 0x5, 0xcc, 0x67, 
    0x2, 0x237, 0x238, 0x7, 0xe, 0x2, 0x2, 0x238, 0x23a, 0x5, 0x4a, 0x26, 
    0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 0x2, 
    0x2, 0x23a, 0x45, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x240, 0x5, 0x48, 0x25, 
    0x2, 0x23c, 0x23d, 0x7, 0xd, 0x2, 0x2, 0x23d, 0x23f, 0x5, 0x48, 0x25, 
    0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x47, 0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x248, 0x5, 0xcc, 0x67, 0x2, 0x244, 0x245, 0x7, 0xb, 0x2, 0x2, 
    0x245, 0x246, 0x5, 0x36, 0x1c, 0x2, 0x246, 0x247, 0x7, 0xc, 0x2, 0x2, 
    0x247, 0x249, 0x3, 0x2, 0x2, 0x2, 0x248, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x24a, 0x24b, 0x7, 0x33, 0x2, 0x2, 0x24b, 0x24d, 0x5, 0x2e, 0x18, 0x2, 
    0x24c, 0x243, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x49, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x253, 0x5, 0xcc, 0x67, 0x2, 
    0x24f, 0x250, 0x7, 0xd, 0x2, 0x2, 0x250, 0x252, 0x5, 0xcc, 0x67, 0x2, 
    0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x252, 0x255, 0x3, 0x2, 0x2, 0x2, 
    0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x3, 0x2, 0x2, 0x2, 
    0x254, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x255, 0x253, 0x3, 0x2, 0x2, 0x2, 0x256, 
    0x257, 0x7, 0x34, 0x2, 0x2, 0x257, 0x258, 0x5, 0xcc, 0x67, 0x2, 0x258, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x5, 0x50, 0x29, 0x2, 0x25a, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x5, 0x54, 0x2b, 0x2, 0x25c, 
    0x25d, 0x7, 0xf, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x50, 0x29, 0x2, 0x25e, 
    0x265, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x5, 0x54, 0x2b, 0x2, 0x260, 
    0x261, 0x5, 0x52, 0x2a, 0x2, 0x261, 0x262, 0x5, 0x4e, 0x28, 0x2, 0x262, 
    0x265, 0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 0x5, 0x54, 0x2b, 0x2, 0x264, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x264, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x264, 
    0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x51, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
    0x9, 0x3, 0x2, 0x2, 0x267, 0x53, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x8, 
    0x2b, 0x1, 0x2, 0x269, 0x26a, 0x5, 0x56, 0x2c, 0x2, 0x26a, 0x270, 0x3, 
    0x2, 0x2, 0x2, 0x26b, 0x26c, 0xc, 0x4, 0x2, 0x2, 0x26c, 0x26d, 0x9, 
    0x4, 0x2, 0x2, 0x26d, 0x26f, 0x5, 0x56, 0x2c, 0x2, 0x26e, 0x26b, 0x3, 
    0x2, 0x2, 0x2, 0x26f, 0x272, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26e, 0x3, 
    0x2, 0x2, 0x2, 0x270, 0x271, 0x3, 0x2, 0x2, 0x2, 0x271, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x8, 0x2c, 
    0x1, 0x2, 0x274, 0x275, 0x5, 0x58, 0x2d, 0x2, 0x275, 0x27b, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x277, 0xc, 0x4, 0x2, 0x2, 0x277, 0x278, 0x9, 0x5, 
    0x2, 0x2, 0x278, 0x27a, 0x5, 0x58, 0x2d, 0x2, 0x279, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x27a, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x8, 0x2d, 0x1, 
    0x2, 0x27f, 0x280, 0x5, 0x5a, 0x2e, 0x2, 0x280, 0x286, 0x3, 0x2, 0x2, 
    0x2, 0x281, 0x282, 0xc, 0x4, 0x2, 0x2, 0x282, 0x283, 0x9, 0x6, 0x2, 
    0x2, 0x283, 0x285, 0x5, 0x5a, 0x2e, 0x2, 0x284, 0x281, 0x3, 0x2, 0x2, 
    0x2, 0x285, 0x288, 0x3, 0x2, 0x2, 0x2, 0x286, 0x284, 0x3, 0x2, 0x2, 
    0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x8, 0x2e, 0x1, 0x2, 
    0x28a, 0x28b, 0x5, 0x5c, 0x2f, 0x2, 0x28b, 0x291, 0x3, 0x2, 0x2, 0x2, 
    0x28c, 0x28d, 0xc, 0x4, 0x2, 0x2, 0x28d, 0x28e, 0x9, 0x7, 0x2, 0x2, 
    0x28e, 0x290, 0x5, 0x5c, 0x2f, 0x2, 0x28f, 0x28c, 0x3, 0x2, 0x2, 0x2, 
    0x290, 0x293, 0x3, 0x2, 0x2, 0x2, 0x291, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x293, 
    0x291, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x8, 0x2f, 0x1, 0x2, 0x295, 
    0x296, 0x5, 0x60, 0x31, 0x2, 0x296, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x297, 
    0x298, 0xc, 0x4, 0x2, 0x2, 0x298, 0x299, 0x9, 0x8, 0x2, 0x2, 0x299, 
    0x29b, 0x5, 0x60, 0x31, 0x2, 0x29a, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x29e, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29c, 
    0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29c, 
    0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x7, 0x4e, 0x2, 0x2, 0x2a0, 0x2a3, 
    0x5, 0x60, 0x31, 0x2, 0x2a1, 0x2a3, 0x5, 0x60, 0x31, 0x2, 0x2a2, 0x29f, 
    0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x4a, 0x2, 0x2, 0x2a5, 0x2b1, 0x5, 
    0x60, 0x31, 0x2, 0x2a6, 0x2a7, 0x7, 0x4f, 0x2, 0x2, 0x2a7, 0x2b1, 0x5, 
    0x60, 0x31, 0x2, 0x2a8, 0x2a9, 0x7, 0x4b, 0x2, 0x2, 0x2a9, 0x2b1, 0x5, 
    0x60, 0x31, 0x2, 0x2aa, 0x2ac, 0x7, 0x10, 0x2, 0x2, 0x2ab, 0x2ad, 0x7, 
    0x11, 0x2, 0x2, 0x2ac, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 
    0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b1, 0x5, 
    0x60, 0x31, 0x2, 0x2af, 0x2b1, 0x5, 0x62, 0x32, 0x2, 0x2b0, 0x2a4, 0x3, 
    0x2, 0x2, 0x2, 0x2b0, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2a8, 0x3, 
    0x2, 0x2, 0x2, 0x2b0, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2af, 0x3, 
    0x2, 0x2, 0x2, 0x2b1, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x5, 0x64, 
    0x33, 0x2, 0x2b3, 0x2b5, 0x7, 0xb, 0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x9e, 
    0x50, 0x2, 0x2b5, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 
    0x2, 0x2, 0x2b6, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0xc, 
    0x2, 0x2, 0x2b8, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0x64, 
    0x33, 0x2, 0x2ba, 0x2bb, 0x7, 0x50, 0x2, 0x2, 0x2bb, 0x2bc, 0x5, 0xcc, 
    0x67, 0x2, 0x2bc, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 0x5, 0x64, 
    0x33, 0x2, 0x2be, 0x2bf, 0x7, 0x50, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 0x6a, 
    0x2, 0x2, 0x2c0, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x5, 0x64, 
    0x33, 0x2, 0x2c2, 0x2c3, 0x7, 0x6, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 0x2e, 
    0x18, 0x2, 0x2c4, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x5, 0x64, 
    0x33, 0x2, 0x2c6, 0x2c7, 0x7, 0xe, 0x2, 0x2, 0x2c7, 0x2c8, 0x5, 0x2e, 
    0x18, 0x2, 0x2c8, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x5, 0x64, 
    0x33, 0x2, 0x2ca, 0x2cc, 0x9, 0x9, 0x2, 0x2, 0x2cb, 0x2cd, 0x5, 0x4e, 
    0x28, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 
    0x2, 0x2, 0x2cd, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d0, 0x5, 0x64, 
    0x33, 0x2, 0x2cf, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2b9, 0x3, 0x2, 
    0x2, 0x2, 0x2cf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2c1, 0x3, 0x2, 
    0x2, 0x2, 0x2cf, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2c9, 0x3, 0x2, 
    0x2, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x2d1, 0x2e2, 0x5, 0x68, 0x35, 0x2, 0x2d2, 0x2e2, 0x5, 0x76, 0x3c, 
    0x2, 0x2d3, 0x2e2, 0x5, 0x78, 0x3d, 0x2, 0x2d4, 0x2e2, 0x5, 0x92, 0x4a, 
    0x2, 0x2d5, 0x2e2, 0x5, 0x94, 0x4b, 0x2, 0x2d6, 0x2e2, 0x5, 0x96, 0x4c, 
    0x2, 0x2d7, 0x2e2, 0x5, 0x9a, 0x4e, 0x2, 0x2d8, 0x2e2, 0x5, 0xa4, 0x53, 
    0x2, 0x2d9, 0x2e2, 0x5, 0xac, 0x57, 0x2, 0x2da, 0x2e2, 0x5, 0xb2, 0x5a, 
    0x2, 0x2db, 0x2e2, 0x5, 0xbe, 0x60, 0x2, 0x2dc, 0x2e2, 0x5, 0xc0, 0x61, 
    0x2, 0x2dd, 0x2e2, 0x5, 0xc2, 0x62, 0x2, 0x2de, 0x2e2, 0x5, 0xc4, 0x63, 
    0x2, 0x2df, 0x2e2, 0x5, 0xc6, 0x64, 0x2, 0x2e0, 0x2e2, 0x5, 0x66, 0x34, 
    0x2, 0x2e1, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2d2, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2d4, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2d6, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2d8, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2dc, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2de, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e0, 0x3, 0x2, 0x2, 
    0x2, 0x2e2, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 0xb, 0x2, 0x2, 
    0x2e4, 0x2e5, 0x5, 0x4e, 0x28, 0x2, 0x2e5, 0x2e6, 0x7, 0xc, 0x2, 0x2, 
    0x2e6, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2ee, 0x5, 0x6a, 0x36, 0x2, 
    0x2e8, 0x2ee, 0x5, 0x6c, 0x37, 0x2, 0x2e9, 0x2ee, 0x5, 0x6e, 0x38, 0x2, 
    0x2ea, 0x2ee, 0x5, 0x70, 0x39, 0x2, 0x2eb, 0x2ee, 0x5, 0x72, 0x3a, 0x2, 
    0x2ec, 0x2ee, 0x5, 0x74, 0x3b, 0x2, 0x2ed, 0x2e7, 0x3, 0x2, 0x2, 0x2, 
    0x2ed, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2e9, 0x3, 0x2, 0x2, 0x2, 
    0x2ed, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2eb, 0x3, 0x2, 0x2, 0x2, 
    0x2ed, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2ef, 
    0x2f0, 0x9, 0xa, 0x2, 0x2, 0x2f0, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 
    0x7, 0x6e, 0x2, 0x2, 0x2f2, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 
    0x9, 0xb, 0x2, 0x2, 0x2f4, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f8, 0x7, 
    0x34, 0x2, 0x2, 0x2f6, 0x2f9, 0xa, 0xc, 0x2, 0x2, 0x2f7, 0x2f9, 0x7, 
    0x70, 0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f7, 0x3, 
    0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x7, 
    0x34, 0x2, 0x2, 0x2fb, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x7, 
    0x6f, 0x2, 0x2, 0x2fd, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x7, 
    0x55, 0x2, 0x2, 0x2ff, 0x75, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x5, 
    0xcc, 0x67, 0x2, 0x301, 0x77, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x5, 
    0x7a, 0x3e, 0x2, 0x303, 0x79, 0x3, 0x2, 0x2, 0x2, 0x304, 0x308, 0x7, 
    0x14, 0x2, 0x2, 0x305, 0x307, 0x5, 0x7c, 0x3f, 0x2, 0x306, 0x305, 0x3, 
    0x2, 0x2, 0x2, 0x307, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x308, 0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30c, 0x3, 
    0x2, 0x2, 0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30d, 0x5, 
    0x4e, 0x28, 0x2, 0x30c, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 0x3, 
    0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x7, 
    0x15, 0x2, 0x2, 0x30f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x310, 0x318, 0x5, 
    0x7e, 0x40, 0x2, 0x311, 0x318, 0x5, 0x8c, 0x47, 0x2, 0x312, 0x318, 0x5, 
    0x8e, 0x48, 0x2, 0x313, 0x318, 0x5, 0xa6, 0x54, 0x2, 0x314, 0x318, 0x5, 
    0xb4, 0x5b, 0x2, 0x315, 0x318, 0x5, 0xae, 0x58, 0x2, 0x316, 0x318, 0x5, 
    0xbc, 0x5f, 0x2, 0x317, 0x310, 0x3, 0x2, 0x2, 0x2, 0x317, 0x311, 0x3, 
    0x2, 0x2, 0x2, 0x317, 0x312, 0x3, 0x2, 0x2, 0x2, 0x317, 0x313, 0x3, 
    0x2, 0x2, 0x2, 0x317, 0x314, 0x3, 0x2, 0x2, 0x2, 0x317, 0x315, 0x3, 
    0x2, 0x2, 0x2, 0x317, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x319, 0x31c, 0x5, 0x80, 0x41, 0x2, 0x31a, 0x31c, 0x5, 0x28, 
    0x15, 0x2, 0x31b, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31a, 0x3, 0x2, 
    0x2, 0x2, 0x31c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31f, 0x7, 0x11, 
    0x2, 0x2, 0x31e, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 
    0x2, 0x2, 0x31f, 0x320, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x7, 0x56, 
    0x2, 0x2, 0x321, 0x322, 0x5, 0x82, 0x42, 0x2, 0x322, 0x323, 0x7, 0xf, 
    0x2, 0x2, 0x323, 0x324, 0x5, 0x4e, 0x28, 0x2, 0x324, 0x325, 0x7, 0x4, 
    0x2, 0x2, 0x325, 0x334, 0x3, 0x2, 0x2, 0x2, 0x326, 0x328, 0x7, 0x11, 
    0x2, 0x2, 0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x3, 0x2, 
    0x2, 0x2, 0x328, 0x329, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x56, 
    0x2, 0x2, 0x32a, 0x32b, 0x5, 0x82, 0x42, 0x2, 0x32b, 0x32c, 0x7, 0xe, 
    0x2, 0x2, 0x32c, 0x32f, 0x5, 0x2e, 0x18, 0x2, 0x32d, 0x32e, 0x7, 0xf, 
    0x2, 0x2, 0x32e, 0x330, 0x5, 0x4e, 0x28, 0x2, 0x32f, 0x32d, 0x3, 0x2, 
    0x2, 0x2, 0x32f, 0x330, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 
    0x2, 0x2, 0x331, 0x332, 0x7, 0x4, 0x2, 0x2, 0x332, 0x334, 0x3, 0x2, 
    0x2, 0x2, 0x333, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x333, 0x327, 0x3, 0x2, 
    0x2, 0x2, 0x334, 0x81, 0x3, 0x2, 0x2, 0x2, 0x335, 0x33a, 0x5, 0x84, 
    0x43, 0x2, 0x336, 0x33a, 0x5, 0x86, 0x44, 0x2, 0x337, 0x33a, 0x5, 0x88, 
    0x45, 0x2, 0x338, 0x33a, 0x5, 0x8a, 0x46, 0x2, 0x339, 0x335, 0x3, 0x2, 
    0x2, 0x2, 0x339, 0x336, 0x3, 0x2, 0x2, 0x2, 0x339, 0x337, 0x3, 0x2, 
    0x2, 0x2, 0x339, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x33b, 0x33d, 0x7, 0x11, 0x2, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 
    0x2, 0x33c, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 
    0x2, 0x33e, 0x33f, 0x5, 0xcc, 0x67, 0x2, 0x33f, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x340, 0x341, 0x7, 0xb, 0x2, 0x2, 0x341, 0x346, 0x5, 0x82, 0x42, 
    0x2, 0x342, 0x343, 0x7, 0xd, 0x2, 0x2, 0x343, 0x345, 0x5, 0x82, 0x42, 
    0x2, 0x344, 0x342, 0x3, 0x2, 0x2, 0x2, 0x345, 0x348, 0x3, 0x2, 0x2, 
    0x2, 0x346, 0x344, 0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 0x3, 0x2, 0x2, 
    0x2, 0x347, 0x349, 0x3, 0x2, 0x2, 0x2, 0x348, 0x346, 0x3, 0x2, 0x2, 
    0x2, 0x349, 0x34a, 0x7, 0xc, 0x2, 0x2, 0x34a, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x34b, 0x34c, 0x5, 0xcc, 0x67, 0x2, 0x34c, 0x35a, 0x7, 0x14, 0x2, 0x2, 
    0x34d, 0x34e, 0x5, 0xcc, 0x67, 0x2, 0x34e, 0x34f, 0x7, 0xe, 0x2, 0x2, 
    0x34f, 0x357, 0x5, 0x82, 0x42, 0x2, 0x350, 0x351, 0x7, 0xd, 0x2, 0x2, 
    0x351, 0x352, 0x5, 0xcc, 0x67, 0x2, 0x352, 0x353, 0x7, 0xe, 0x2, 0x2, 
    0x353, 0x354, 0x5, 0x82, 0x42, 0x2, 0x354, 0x356, 0x3, 0x2, 0x2, 0x2, 
    0x355, 0x350, 0x3, 0x2, 0x2, 0x2, 0x356, 0x359, 0x3, 0x2, 0x2, 0x2, 
    0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 0x2, 
    0x358, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x359, 0x357, 0x3, 0x2, 0x2, 0x2, 
    0x35a, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 
    0x35b, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x7, 0x15, 0x2, 0x2, 
    0x35d, 0x89, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35f, 0x7, 0x57, 0x2, 0x2, 
    0x35f, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x5, 0x4e, 0x28, 0x2, 
    0x361, 0x362, 0x7, 0x4, 0x2, 0x2, 0x362, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x363, 
    0x364, 0x5, 0x4e, 0x28, 0x2, 0x364, 0x365, 0x7, 0xf, 0x2, 0x2, 0x365, 
    0x366, 0x5, 0x4e, 0x28, 0x2, 0x366, 0x367, 0x7, 0x4, 0x2, 0x2, 0x367, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x368, 0x36a, 0x7, 0x45, 0x2, 0x2, 0x369, 
    0x36b, 0x5, 0xe, 0x8, 0x2, 0x36a, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36a, 
    0x36b, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36c, 
    0x36f, 0x7, 0x45, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x12, 0x2, 0x2, 0x36e, 
    0x370, 0x5, 0x2e, 0x18, 0x2, 0x36f, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36f, 
    0x370, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 0x2, 0x2, 0x2, 0x371, 
    0x372, 0x5, 0x7a, 0x3e, 0x2, 0x372, 0x91, 0x3, 0x2, 0x2, 0x2, 0x373, 
    0x37b, 0x7, 0xb, 0x2, 0x2, 0x374, 0x377, 0x5, 0x4e, 0x28, 0x2, 0x375, 
    0x376, 0x7, 0xd, 0x2, 0x2, 0x376, 0x378, 0x5, 0x4e, 0x28, 0x2, 0x377, 
    0x375, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 
    0x377, 0x3, 0x2, 0x2, 0x2, 0x379, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37a, 
    0x37c, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x374, 0x3, 0x2, 0x2, 0x2, 0x37b, 
    0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37d, 
    0x37e, 0x7, 0xc, 0x2, 0x2, 0x37e, 0x93, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x388, 
    0x7, 0x31, 0x2, 0x2, 0x380, 0x385, 0x5, 0x4e, 0x28, 0x2, 0x381, 0x382, 
    0x7, 0xd, 0x2, 0x2, 0x382, 0x384, 0x5, 0x4e, 0x28, 0x2, 0x383, 0x381, 
    0x3, 0x2, 0x2, 0x2, 0x384, 0x387, 0x3, 0x2, 0x2, 0x2, 0x385, 0x383, 
    0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x3, 0x2, 0x2, 0x2, 0x386, 0x389, 
    0x3, 0x2, 0x2, 0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 0x2, 0x388, 0x380, 
    0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 
    0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x32, 0x2, 0x2, 0x38b, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x5, 0x32, 0x1a, 0x2, 0x38d, 0x396, 
    0x7, 0x14, 0x2, 0x2, 0x38e, 0x393, 0x5, 0x98, 0x4d, 0x2, 0x38f, 0x390, 
    0x7, 0xd, 0x2, 0x2, 0x390, 0x392, 0x5, 0x98, 0x4d, 0x2, 0x391, 0x38f, 
    0x3, 0x2, 0x2, 0x2, 0x392, 0x395, 0x3, 0x2, 0x2, 0x2, 0x393, 0x391, 
    0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x3, 0x2, 0x2, 0x2, 0x394, 0x397, 
    0x3, 0x2, 0x2, 0x2, 0x395, 0x393, 0x3, 0x2, 0x2, 0x2, 0x396, 0x38e, 
    0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 
    0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 0x7, 0x15, 0x2, 0x2, 0x399, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x39a, 0x39d, 0x5, 0xcc, 0x67, 0x2, 0x39b, 0x39c, 
    0x7, 0xf, 0x2, 0x2, 0x39c, 0x39e, 0x5, 0x4e, 0x28, 0x2, 0x39d, 0x39b, 
    0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x39f, 0x3a4, 0x5, 0xcc, 0x67, 0x2, 0x3a0, 0x3a1, 0x7, 
    0xb, 0x2, 0x2, 0x3a1, 0x3a2, 0x5, 0x4e, 0x28, 0x2, 0x3a2, 0x3a3, 0x7, 
    0xc, 0x2, 0x2, 0x3a3, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a0, 0x3, 
    0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x3a6, 0x3a7, 0x5, 0x4e, 0x28, 0x2, 0x3a7, 0x3a9, 0x7, 0xb, 
    0x2, 0x2, 0x3a8, 0x3aa, 0x5, 0x9e, 0x50, 0x2, 0x3a9, 0x3a8, 0x3, 0x2, 
    0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 
    0x2, 0x2, 0x3ab, 0x3ac, 0x7, 0xc, 0x2, 0x2, 0x3ac, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0x3ad, 0x3b2, 0x5, 0x4e, 0x28, 0x2, 0x3ae, 0x3af, 0x7, 0xd, 0x2, 
    0x2, 0x3af, 0x3b1, 0x5, 0x4e, 0x28, 0x2, 0x3b0, 0x3ae, 0x3, 0x2, 0x2, 
    0x2, 0x3b1, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b0, 0x3, 0x2, 0x2, 
    0x2, 0x3b2, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x3b4, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x5, 0x4e, 0x28, 0x2, 
    0x3b6, 0x3b7, 0x7, 0x50, 0x2, 0x2, 0x3b7, 0x3b8, 0x5, 0xcc, 0x67, 0x2, 
    0x3b8, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x5, 0x4e, 0x28, 0x2, 
    0x3ba, 0x3bb, 0x9, 0x3, 0x2, 0x2, 0x3bb, 0x3bc, 0x5, 0x4e, 0x28, 0x2, 
    0x3bc, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x7, 0x58, 0x2, 0x2, 
    0x3be, 0x3bf, 0x5, 0xa8, 0x55, 0x2, 0x3bf, 0x3c5, 0x5, 0x7a, 0x3e, 0x2, 
    0x3c0, 0x3c3, 0x7, 0x59, 0x2, 0x2, 0x3c1, 0x3c4, 0x5, 0x7a, 0x3e, 0x2, 
    0x3c2, 0x3c4, 0x5, 0xa4, 0x53, 0x2, 0x3c3, 0x3c1, 0x3, 0x2, 0x2, 0x2, 
    0x3c3, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c6, 0x3, 0x2, 0x2, 0x2, 
    0x3c5, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x3, 0x2, 0x2, 0x2, 
    0x3c6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x7, 0x58, 0x2, 0x2, 
    0x3c8, 0x3c9, 0x5, 0xa8, 0x55, 0x2, 0x3c9, 0x3cc, 0x5, 0x7a, 0x3e, 0x2, 
    0x3ca, 0x3cb, 0x7, 0x59, 0x2, 0x2, 0x3cb, 0x3cd, 0x5, 0x7a, 0x3e, 0x2, 
    0x3cc, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x3, 0x2, 0x2, 0x2, 
    0x3cd, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3d1, 0x5, 0x4e, 0x28, 0x2, 
    0x3cf, 0x3d1, 0x5, 0xaa, 0x56, 0x2, 0x3d0, 0x3ce, 0x3, 0x2, 0x2, 0x2, 
    0x3d0, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3d2, 
    0x3d3, 0x7, 0x56, 0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0x82, 0x42, 0x2, 0x3d4, 
    0x3d5, 0x7, 0xf, 0x2, 0x2, 0x3d5, 0x3d6, 0x5, 0x4e, 0x28, 0x2, 0x3d6, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x7, 0x5a, 0x2, 0x2, 0x3d8, 
    0x3d9, 0x5, 0x4e, 0x28, 0x2, 0x3d9, 0x3dd, 0x7, 0x14, 0x2, 0x2, 0x3da, 
    0x3dc, 0x5, 0xb0, 0x59, 0x2, 0x3db, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3dc, 
    0x3df, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
    0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3df, 
    0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x7, 0x15, 0x2, 0x2, 0x3e1, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x7, 0x5a, 0x2, 0x2, 0x3e3, 
    0x3e4, 0x5, 0x4e, 0x28, 0x2, 0x3e4, 0x3e8, 0x7, 0x14, 0x2, 0x2, 0x3e5, 
    0x3e7, 0x5, 0xb0, 0x59, 0x2, 0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e7, 
    0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
    0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ea, 
    0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x7, 0x15, 0x2, 0x2, 0x3ec, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 0x5, 0x82, 0x42, 0x2, 0x3ee, 
    0x3ef, 0x7, 0x5b, 0x2, 0x2, 0x3ef, 0x3f0, 0x5, 0x4e, 0x28, 0x2, 0x3f0, 
    0x3f1, 0x7, 0xd, 0x2, 0x2, 0x3f1, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3f3, 0x5, 0x82, 0x42, 0x2, 0x3f3, 0x3f4, 0x7, 0x5b, 0x2, 0x2, 0x3f4, 
    0x3f5, 0x5, 0x7a, 0x3e, 0x2, 0x3f5, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
    0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fc, 0x5, 0xb6, 0x5c, 0x2, 0x3f9, 
    0x3fc, 0x5, 0xb8, 0x5d, 0x2, 0x3fa, 0x3fc, 0x5, 0xba, 0x5e, 0x2, 0x3fb, 
    0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fb, 
    0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x401, 
    0x5, 0xb6, 0x5c, 0x2, 0x3fe, 0x401, 0x5, 0xb8, 0x5d, 0x2, 0x3ff, 0x401, 
    0x5, 0xba, 0x5e, 0x2, 0x400, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x400, 0x3fe, 
    0x3, 0x2, 0x2, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x401, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0x402, 0x403, 0x7, 0x5c, 0x2, 0x2, 0x403, 0x404, 0x5, 
    0x7a, 0x3e, 0x2, 0x404, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x7, 
    0x5d, 0x2, 0x2, 0x406, 0x407, 0x5, 0xa8, 0x55, 0x2, 0x407, 0x408, 0x5, 
    0x7a, 0x3e, 0x2, 0x408, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 
    0x18, 0x2, 0x2, 0x40a, 0x40b, 0x5, 0x82, 0x42, 0x2, 0x40b, 0x40c, 0x7, 
    0x5e, 0x2, 0x2, 0x40c, 0x40d, 0x5, 0x4e, 0x28, 0x2, 0x40d, 0x40e, 0x5, 
    0x7a, 0x3e, 0x2, 0x40e, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x413, 0x5, 
    0xbe, 0x60, 0x2, 0x410, 0x413, 0x5, 0xc0, 0x61, 0x2, 0x411, 0x413, 0x5, 
    0xc2, 0x62, 0x2, 0x412, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x412, 0x410, 0x3, 
    0x2, 0x2, 0x2, 0x412, 0x411, 0x3, 0x2, 0x2, 0x2, 0x413, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0x414, 0x416, 0x7, 0x5f, 0x2, 0x2, 0x415, 0x417, 0x5, 0x4e, 
    0x28, 0x2, 0x416, 0x415, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x3, 0x2, 
    0x2, 0x2, 0x417, 0x418, 0x3, 0x2, 0x2, 0x2, 0x418, 0x419, 0x7, 0x4, 
    0x2, 0x2, 0x419, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x7, 0x60, 
    0x2, 0x2, 0x41b, 0x41c, 0x7, 0x4, 0x2, 0x2, 0x41c, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0x41d, 0x41f, 0x7, 0x61, 0x2, 0x2, 0x41e, 0x420, 0x5, 0x4e, 0x28, 
    0x2, 0x41f, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x3, 0x2, 0x2, 
    0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 0x7, 0x4, 0x2, 
    0x2, 0x422, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x7, 0x62, 0x2, 
    0x2, 0x424, 0x425, 0x5, 0x4e, 0x28, 0x2, 0x425, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0x426, 0x427, 0x7, 0x63, 0x2, 0x2, 0x427, 0x428, 0x5, 0x7a, 0x3e, 
    0x2, 0x428, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x429, 0x434, 0x7, 0x64, 0x2, 
    0x2, 0x42a, 0x42b, 0x7, 0xb, 0x2, 0x2, 0x42b, 0x42c, 0x7, 0x65, 0x2, 
    0x2, 0x42c, 0x435, 0x7, 0xc, 0x2, 0x2, 0x42d, 0x42e, 0x7, 0xb, 0x2, 
    0x2, 0x42e, 0x42f, 0x7, 0x66, 0x2, 0x2, 0x42f, 0x435, 0x7, 0xc, 0x2, 
    0x2, 0x430, 0x431, 0x7, 0xb, 0x2, 0x2, 0x431, 0x432, 0x5, 0xcc, 0x67, 
    0x2, 0x432, 0x433, 0x7, 0xc, 0x2, 0x2, 0x433, 0x435, 0x3, 0x2, 0x2, 
    0x2, 0x434, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x434, 0x42d, 0x3, 0x2, 0x2, 
    0x2, 0x434, 0x430, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x3, 0x2, 0x2, 
    0x2, 0x435, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x436, 0x43b, 0x5, 0xcc, 0x67, 
    0x2, 0x437, 0x438, 0x7, 0x67, 0x2, 0x2, 0x438, 0x43a, 0x5, 0xcc, 0x67, 
    0x2, 0x439, 0x437, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43d, 0x3, 0x2, 0x2, 
    0x2, 0x43b, 0x439, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 
    0x2, 0x43c, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43b, 0x3, 0x2, 0x2, 0x2, 
    0x43e, 0x43f, 0x9, 0xd, 0x2, 0x2, 0x43f, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0xcf, 0xd4, 0xda, 0xe7, 0xef, 0xf9, 0xfe, 0x102, 0x106, 0x10e, 0x112, 
    0x116, 0x11a, 0x11e, 0x123, 0x126, 0x129, 0x130, 0x134, 0x13b, 0x13f, 
    0x145, 0x14d, 0x151, 0x157, 0x15d, 0x164, 0x169, 0x16e, 0x172, 0x178, 
    0x17f, 0x183, 0x188, 0x18e, 0x193, 0x199, 0x1a0, 0x1a5, 0x1a9, 0x1af, 
    0x1b9, 0x1be, 0x1d0, 0x1d4, 0x1de, 0x1e2, 0x1ee, 0x1f7, 0x200, 0x206, 
    0x20a, 0x212, 0x214, 0x220, 0x223, 0x229, 0x231, 0x239, 0x240, 0x248, 
    0x24c, 0x253, 0x264, 0x270, 0x27b, 0x286, 0x291, 0x29c, 0x2a2, 0x2ac, 
    0x2b0, 0x2b5, 0x2cc, 0x2cf, 0x2e1, 0x2ed, 0x2f8, 0x308, 0x30c, 0x317, 
    0x31b, 0x31e, 0x327, 0x32f, 0x333, 0x339, 0x33c, 0x346, 0x357, 0x35a, 
    0x36a, 0x36f, 0x379, 0x37b, 0x385, 0x388, 0x393, 0x396, 0x39d, 0x3a4, 
    0x3a9, 0x3b2, 0x3c3, 0x3c5, 0x3cc, 0x3d0, 0x3dd, 0x3e8, 0x3f6, 0x3fb, 
    0x400, 0x412, 0x416, 0x41f, 0x434, 0x43b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

NovaParser::Initializer NovaParser::_init;
