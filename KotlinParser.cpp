
// Generated from KotlinParser.g4 by ANTLR 4.9


#include "KotlinParserListener.h"

#include "KotlinParser.h"


using namespace antlrcpp;
using namespace antlr4;

KotlinParser::KotlinParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KotlinParser::~KotlinParser() {
  delete _interpreter;
}

std::string KotlinParser::getGrammarFileName() const {
  return "KotlinParser.g4";
}

const std::vector<std::string>& KotlinParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KotlinParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- KotlinFileContext ------------------------------------------------------------------

KotlinParser::KotlinFileContext::KotlinFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PackageHeaderContext* KotlinParser::KotlinFileContext::packageHeader() {
  return getRuleContext<KotlinParser::PackageHeaderContext>(0);
}

KotlinParser::ImportListContext* KotlinParser::KotlinFileContext::importList() {
  return getRuleContext<KotlinParser::ImportListContext>(0);
}

tree::TerminalNode* KotlinParser::KotlinFileContext::EOF() {
  return getToken(KotlinParser::EOF, 0);
}

KotlinParser::ShebangLineContext* KotlinParser::KotlinFileContext::shebangLine() {
  return getRuleContext<KotlinParser::ShebangLineContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::KotlinFileContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::KotlinFileContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::FileAnnotationContext *> KotlinParser::KotlinFileContext::fileAnnotation() {
  return getRuleContexts<KotlinParser::FileAnnotationContext>();
}

KotlinParser::FileAnnotationContext* KotlinParser::KotlinFileContext::fileAnnotation(size_t i) {
  return getRuleContext<KotlinParser::FileAnnotationContext>(i);
}

std::vector<KotlinParser::TopLevelObjectContext *> KotlinParser::KotlinFileContext::topLevelObject() {
  return getRuleContexts<KotlinParser::TopLevelObjectContext>();
}

KotlinParser::TopLevelObjectContext* KotlinParser::KotlinFileContext::topLevelObject(size_t i) {
  return getRuleContext<KotlinParser::TopLevelObjectContext>(i);
}


size_t KotlinParser::KotlinFileContext::getRuleIndex() const {
  return KotlinParser::RuleKotlinFile;
}

void KotlinParser::KotlinFileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKotlinFile(this);
}

void KotlinParser::KotlinFileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKotlinFile(this);
}

KotlinParser::KotlinFileContext* KotlinParser::kotlinFile() {
  KotlinFileContext *_localctx = _tracker.createInstance<KotlinFileContext>(_ctx, getState());
  enterRule(_localctx, 0, KotlinParser::RuleKotlinFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::ShebangLine) {
      setState(346);
      shebangLine();
    }
    setState(352);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(349);
      match(KotlinParser::NL);
      setState(354);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(358);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(355);
        fileAnnotation(); 
      }
      setState(360);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(361);
    packageHeader();
    setState(362);
    importList();
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (KotlinParser::CLASS - 72))
      | (1ULL << (KotlinParser::INTERFACE - 72))
      | (1ULL << (KotlinParser::FUN - 72))
      | (1ULL << (KotlinParser::OBJECT - 72))
      | (1ULL << (KotlinParser::VAL - 72))
      | (1ULL << (KotlinParser::VAR - 72))
      | (1ULL << (KotlinParser::TYPE_ALIAS - 72))
      | (1ULL << (KotlinParser::PUBLIC - 72))
      | (1ULL << (KotlinParser::PRIVATE - 72))
      | (1ULL << (KotlinParser::PROTECTED - 72))
      | (1ULL << (KotlinParser::INTERNAL - 72))
      | (1ULL << (KotlinParser::ENUM - 72))
      | (1ULL << (KotlinParser::SEALED - 72))
      | (1ULL << (KotlinParser::ANNOTATION - 72))
      | (1ULL << (KotlinParser::DATA - 72))
      | (1ULL << (KotlinParser::INNER - 72))
      | (1ULL << (KotlinParser::VALUE - 72))
      | (1ULL << (KotlinParser::TAILREC - 72))
      | (1ULL << (KotlinParser::OPERATOR - 72))
      | (1ULL << (KotlinParser::INLINE - 72))
      | (1ULL << (KotlinParser::INFIX - 72))
      | (1ULL << (KotlinParser::EXTERNAL - 72))
      | (1ULL << (KotlinParser::SUSPEND - 72))
      | (1ULL << (KotlinParser::OVERRIDE - 72))
      | (1ULL << (KotlinParser::ABSTRACT - 72))
      | (1ULL << (KotlinParser::FINAL - 72))
      | (1ULL << (KotlinParser::OPEN - 72))
      | (1ULL << (KotlinParser::CONST - 72))
      | (1ULL << (KotlinParser::LATEINIT - 72))
      | (1ULL << (KotlinParser::VARARG - 72))
      | (1ULL << (KotlinParser::NOINLINE - 72))
      | (1ULL << (KotlinParser::CROSSINLINE - 72))
      | (1ULL << (KotlinParser::EXPECT - 72))
      | (1ULL << (KotlinParser::ACTUAL - 72)))) != 0)) {
      setState(363);
      topLevelObject();
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(369);
    match(KotlinParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScriptContext ------------------------------------------------------------------

KotlinParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PackageHeaderContext* KotlinParser::ScriptContext::packageHeader() {
  return getRuleContext<KotlinParser::PackageHeaderContext>(0);
}

KotlinParser::ImportListContext* KotlinParser::ScriptContext::importList() {
  return getRuleContext<KotlinParser::ImportListContext>(0);
}

tree::TerminalNode* KotlinParser::ScriptContext::EOF() {
  return getToken(KotlinParser::EOF, 0);
}

KotlinParser::ShebangLineContext* KotlinParser::ScriptContext::shebangLine() {
  return getRuleContext<KotlinParser::ShebangLineContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ScriptContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ScriptContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::FileAnnotationContext *> KotlinParser::ScriptContext::fileAnnotation() {
  return getRuleContexts<KotlinParser::FileAnnotationContext>();
}

KotlinParser::FileAnnotationContext* KotlinParser::ScriptContext::fileAnnotation(size_t i) {
  return getRuleContext<KotlinParser::FileAnnotationContext>(i);
}

std::vector<KotlinParser::StatementContext *> KotlinParser::ScriptContext::statement() {
  return getRuleContexts<KotlinParser::StatementContext>();
}

KotlinParser::StatementContext* KotlinParser::ScriptContext::statement(size_t i) {
  return getRuleContext<KotlinParser::StatementContext>(i);
}

std::vector<KotlinParser::SemiContext *> KotlinParser::ScriptContext::semi() {
  return getRuleContexts<KotlinParser::SemiContext>();
}

KotlinParser::SemiContext* KotlinParser::ScriptContext::semi(size_t i) {
  return getRuleContext<KotlinParser::SemiContext>(i);
}


size_t KotlinParser::ScriptContext::getRuleIndex() const {
  return KotlinParser::RuleScript;
}

void KotlinParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void KotlinParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}

KotlinParser::ScriptContext* KotlinParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 2, KotlinParser::RuleScript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::ShebangLine) {
      setState(371);
      shebangLine();
    }
    setState(377);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(374);
      match(KotlinParser::NL);
      setState(379);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(383);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(380);
        fileAnnotation(); 
      }
      setState(385);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(386);
    packageHeader();
    setState(387);
    importList();
    setState(393);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::LPAREN)
      | (1ULL << KotlinParser::LSQUARE)
      | (1ULL << KotlinParser::LCURL)
      | (1ULL << KotlinParser::ADD)
      | (1ULL << KotlinParser::SUB)
      | (1ULL << KotlinParser::INCR)
      | (1ULL << KotlinParser::DECR)
      | (1ULL << KotlinParser::EXCL_WS)
      | (1ULL << KotlinParser::EXCL_NO_WS)
      | (1ULL << KotlinParser::COLONCOLON)
      | (1ULL << KotlinParser::AT_NO_WS)
      | (1ULL << KotlinParser::AT_PRE_WS)
      | (1ULL << KotlinParser::RETURN_AT)
      | (1ULL << KotlinParser::CONTINUE_AT)
      | (1ULL << KotlinParser::BREAK_AT)
      | (1ULL << KotlinParser::THIS_AT)
      | (1ULL << KotlinParser::SUPER_AT)
      | (1ULL << KotlinParser::FILE)
      | (1ULL << KotlinParser::FIELD)
      | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
      | (1ULL << (KotlinParser::SET - 64))
      | (1ULL << (KotlinParser::RECEIVER - 64))
      | (1ULL << (KotlinParser::PARAM - 64))
      | (1ULL << (KotlinParser::SETPARAM - 64))
      | (1ULL << (KotlinParser::DELEGATE - 64))
      | (1ULL << (KotlinParser::IMPORT - 64))
      | (1ULL << (KotlinParser::CLASS - 64))
      | (1ULL << (KotlinParser::INTERFACE - 64))
      | (1ULL << (KotlinParser::FUN - 64))
      | (1ULL << (KotlinParser::OBJECT - 64))
      | (1ULL << (KotlinParser::VAL - 64))
      | (1ULL << (KotlinParser::VAR - 64))
      | (1ULL << (KotlinParser::TYPE_ALIAS - 64))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
      | (1ULL << (KotlinParser::BY - 64))
      | (1ULL << (KotlinParser::COMPANION - 64))
      | (1ULL << (KotlinParser::INIT - 64))
      | (1ULL << (KotlinParser::THIS - 64))
      | (1ULL << (KotlinParser::SUPER - 64))
      | (1ULL << (KotlinParser::WHERE - 64))
      | (1ULL << (KotlinParser::IF - 64))
      | (1ULL << (KotlinParser::WHEN - 64))
      | (1ULL << (KotlinParser::TRY - 64))
      | (1ULL << (KotlinParser::CATCH - 64))
      | (1ULL << (KotlinParser::FINALLY - 64))
      | (1ULL << (KotlinParser::FOR - 64))
      | (1ULL << (KotlinParser::DO - 64))
      | (1ULL << (KotlinParser::WHILE - 64))
      | (1ULL << (KotlinParser::THROW - 64))
      | (1ULL << (KotlinParser::RETURN - 64))
      | (1ULL << (KotlinParser::CONTINUE - 64))
      | (1ULL << (KotlinParser::BREAK - 64))
      | (1ULL << (KotlinParser::OUT - 64))
      | (1ULL << (KotlinParser::DYNAMIC - 64))
      | (1ULL << (KotlinParser::PUBLIC - 64))
      | (1ULL << (KotlinParser::PRIVATE - 64))
      | (1ULL << (KotlinParser::PROTECTED - 64))
      | (1ULL << (KotlinParser::INTERNAL - 64))
      | (1ULL << (KotlinParser::ENUM - 64))
      | (1ULL << (KotlinParser::SEALED - 64))
      | (1ULL << (KotlinParser::ANNOTATION - 64))
      | (1ULL << (KotlinParser::DATA - 64))
      | (1ULL << (KotlinParser::INNER - 64))
      | (1ULL << (KotlinParser::VALUE - 64))
      | (1ULL << (KotlinParser::TAILREC - 64))
      | (1ULL << (KotlinParser::OPERATOR - 64))
      | (1ULL << (KotlinParser::INLINE - 64))
      | (1ULL << (KotlinParser::INFIX - 64))
      | (1ULL << (KotlinParser::EXTERNAL - 64))
      | (1ULL << (KotlinParser::SUSPEND - 64))
      | (1ULL << (KotlinParser::OVERRIDE - 64))
      | (1ULL << (KotlinParser::ABSTRACT - 64))
      | (1ULL << (KotlinParser::FINAL - 64))
      | (1ULL << (KotlinParser::OPEN - 64))
      | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
      | (1ULL << (KotlinParser::VARARG - 128))
      | (1ULL << (KotlinParser::NOINLINE - 128))
      | (1ULL << (KotlinParser::CROSSINLINE - 128))
      | (1ULL << (KotlinParser::REIFIED - 128))
      | (1ULL << (KotlinParser::EXPECT - 128))
      | (1ULL << (KotlinParser::ACTUAL - 128))
      | (1ULL << (KotlinParser::RealLiteral - 128))
      | (1ULL << (KotlinParser::IntegerLiteral - 128))
      | (1ULL << (KotlinParser::HexLiteral - 128))
      | (1ULL << (KotlinParser::BinLiteral - 128))
      | (1ULL << (KotlinParser::UnsignedLiteral - 128))
      | (1ULL << (KotlinParser::LongLiteral - 128))
      | (1ULL << (KotlinParser::BooleanLiteral - 128))
      | (1ULL << (KotlinParser::NullLiteral - 128))
      | (1ULL << (KotlinParser::CharacterLiteral - 128))
      | (1ULL << (KotlinParser::Identifier - 128))
      | (1ULL << (KotlinParser::QUOTE_OPEN - 128))
      | (1ULL << (KotlinParser::TRIPLE_QUOTE_OPEN - 128)))) != 0)) {
      setState(388);
      statement();
      setState(389);
      semi();
      setState(395);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(396);
    match(KotlinParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShebangLineContext ------------------------------------------------------------------

KotlinParser::ShebangLineContext::ShebangLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ShebangLineContext::ShebangLine() {
  return getToken(KotlinParser::ShebangLine, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ShebangLineContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ShebangLineContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ShebangLineContext::getRuleIndex() const {
  return KotlinParser::RuleShebangLine;
}

void KotlinParser::ShebangLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShebangLine(this);
}

void KotlinParser::ShebangLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShebangLine(this);
}

KotlinParser::ShebangLineContext* KotlinParser::shebangLine() {
  ShebangLineContext *_localctx = _tracker.createInstance<ShebangLineContext>(_ctx, getState());
  enterRule(_localctx, 4, KotlinParser::RuleShebangLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(398);
    match(KotlinParser::ShebangLine);
    setState(400); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(399);
              match(KotlinParser::NL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(402); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileAnnotationContext ------------------------------------------------------------------

KotlinParser::FileAnnotationContext::FileAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::FILE() {
  return getToken(KotlinParser::FILE, 0);
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::AT_NO_WS() {
  return getToken(KotlinParser::AT_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::AT_PRE_WS() {
  return getToken(KotlinParser::AT_PRE_WS, 0);
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::LSQUARE() {
  return getToken(KotlinParser::LSQUARE, 0);
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::RSQUARE() {
  return getToken(KotlinParser::RSQUARE, 0);
}

std::vector<KotlinParser::UnescapedAnnotationContext *> KotlinParser::FileAnnotationContext::unescapedAnnotation() {
  return getRuleContexts<KotlinParser::UnescapedAnnotationContext>();
}

KotlinParser::UnescapedAnnotationContext* KotlinParser::FileAnnotationContext::unescapedAnnotation(size_t i) {
  return getRuleContext<KotlinParser::UnescapedAnnotationContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::FileAnnotationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FileAnnotationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::FileAnnotationContext::getRuleIndex() const {
  return KotlinParser::RuleFileAnnotation;
}

void KotlinParser::FileAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileAnnotation(this);
}

void KotlinParser::FileAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileAnnotation(this);
}

KotlinParser::FileAnnotationContext* KotlinParser::fileAnnotation() {
  FileAnnotationContext *_localctx = _tracker.createInstance<FileAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 6, KotlinParser::RuleFileAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(405);
    match(KotlinParser::FILE);
    setState(409);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(406);
      match(KotlinParser::NL);
      setState(411);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(412);
    match(KotlinParser::COLON);
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(413);
      match(KotlinParser::NL);
      setState(418);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(428);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LSQUARE: {
        setState(419);
        match(KotlinParser::LSQUARE);
        setState(421); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(420);
          unescapedAnnotation();
          setState(423); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (((((_la - 61) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 61)) & ((1ULL << (KotlinParser::FILE - 61))
          | (1ULL << (KotlinParser::FIELD - 61))
          | (1ULL << (KotlinParser::PROPERTY - 61))
          | (1ULL << (KotlinParser::GET - 61))
          | (1ULL << (KotlinParser::SET - 61))
          | (1ULL << (KotlinParser::RECEIVER - 61))
          | (1ULL << (KotlinParser::PARAM - 61))
          | (1ULL << (KotlinParser::SETPARAM - 61))
          | (1ULL << (KotlinParser::DELEGATE - 61))
          | (1ULL << (KotlinParser::IMPORT - 61))
          | (1ULL << (KotlinParser::CONSTRUCTOR - 61))
          | (1ULL << (KotlinParser::BY - 61))
          | (1ULL << (KotlinParser::COMPANION - 61))
          | (1ULL << (KotlinParser::INIT - 61))
          | (1ULL << (KotlinParser::WHERE - 61))
          | (1ULL << (KotlinParser::CATCH - 61))
          | (1ULL << (KotlinParser::FINALLY - 61))
          | (1ULL << (KotlinParser::OUT - 61))
          | (1ULL << (KotlinParser::DYNAMIC - 61))
          | (1ULL << (KotlinParser::PUBLIC - 61))
          | (1ULL << (KotlinParser::PRIVATE - 61))
          | (1ULL << (KotlinParser::PROTECTED - 61))
          | (1ULL << (KotlinParser::INTERNAL - 61))
          | (1ULL << (KotlinParser::ENUM - 61))
          | (1ULL << (KotlinParser::SEALED - 61))
          | (1ULL << (KotlinParser::ANNOTATION - 61))
          | (1ULL << (KotlinParser::DATA - 61))
          | (1ULL << (KotlinParser::INNER - 61))
          | (1ULL << (KotlinParser::VALUE - 61))
          | (1ULL << (KotlinParser::TAILREC - 61))
          | (1ULL << (KotlinParser::OPERATOR - 61))
          | (1ULL << (KotlinParser::INLINE - 61))
          | (1ULL << (KotlinParser::INFIX - 61))
          | (1ULL << (KotlinParser::EXTERNAL - 61))
          | (1ULL << (KotlinParser::SUSPEND - 61))
          | (1ULL << (KotlinParser::OVERRIDE - 61))
          | (1ULL << (KotlinParser::ABSTRACT - 61)))) != 0) || ((((_la - 125) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 125)) & ((1ULL << (KotlinParser::FINAL - 125))
          | (1ULL << (KotlinParser::OPEN - 125))
          | (1ULL << (KotlinParser::CONST - 125))
          | (1ULL << (KotlinParser::LATEINIT - 125))
          | (1ULL << (KotlinParser::VARARG - 125))
          | (1ULL << (KotlinParser::NOINLINE - 125))
          | (1ULL << (KotlinParser::CROSSINLINE - 125))
          | (1ULL << (KotlinParser::REIFIED - 125))
          | (1ULL << (KotlinParser::EXPECT - 125))
          | (1ULL << (KotlinParser::ACTUAL - 125))
          | (1ULL << (KotlinParser::Identifier - 125)))) != 0));
        setState(425);
        match(KotlinParser::RSQUARE);
        break;
      }

      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(427);
        unescapedAnnotation();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(433);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(430);
      match(KotlinParser::NL);
      setState(435);
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

//----------------- PackageHeaderContext ------------------------------------------------------------------

KotlinParser::PackageHeaderContext::PackageHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PackageHeaderContext::PACKAGE() {
  return getToken(KotlinParser::PACKAGE, 0);
}

KotlinParser::IdentifierContext* KotlinParser::PackageHeaderContext::identifier() {
  return getRuleContext<KotlinParser::IdentifierContext>(0);
}

KotlinParser::SemiContext* KotlinParser::PackageHeaderContext::semi() {
  return getRuleContext<KotlinParser::SemiContext>(0);
}


size_t KotlinParser::PackageHeaderContext::getRuleIndex() const {
  return KotlinParser::RulePackageHeader;
}

void KotlinParser::PackageHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageHeader(this);
}

void KotlinParser::PackageHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageHeader(this);
}

KotlinParser::PackageHeaderContext* KotlinParser::packageHeader() {
  PackageHeaderContext *_localctx = _tracker.createInstance<PackageHeaderContext>(_ctx, getState());
  enterRule(_localctx, 8, KotlinParser::RulePackageHeader);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::PACKAGE) {
      setState(436);
      match(KotlinParser::PACKAGE);
      setState(437);
      identifier();
      setState(439);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(438);
        semi();
        break;
      }

      default:
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

//----------------- ImportListContext ------------------------------------------------------------------

KotlinParser::ImportListContext::ImportListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ImportHeaderContext *> KotlinParser::ImportListContext::importHeader() {
  return getRuleContexts<KotlinParser::ImportHeaderContext>();
}

KotlinParser::ImportHeaderContext* KotlinParser::ImportListContext::importHeader(size_t i) {
  return getRuleContext<KotlinParser::ImportHeaderContext>(i);
}


size_t KotlinParser::ImportListContext::getRuleIndex() const {
  return KotlinParser::RuleImportList;
}

void KotlinParser::ImportListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportList(this);
}

void KotlinParser::ImportListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportList(this);
}

KotlinParser::ImportListContext* KotlinParser::importList() {
  ImportListContext *_localctx = _tracker.createInstance<ImportListContext>(_ctx, getState());
  enterRule(_localctx, 10, KotlinParser::RuleImportList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(446);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(443);
        importHeader(); 
      }
      setState(448);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportHeaderContext ------------------------------------------------------------------

KotlinParser::ImportHeaderContext::ImportHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ImportHeaderContext::IMPORT() {
  return getToken(KotlinParser::IMPORT, 0);
}

KotlinParser::IdentifierContext* KotlinParser::ImportHeaderContext::identifier() {
  return getRuleContext<KotlinParser::IdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::ImportHeaderContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}

tree::TerminalNode* KotlinParser::ImportHeaderContext::MULT() {
  return getToken(KotlinParser::MULT, 0);
}

KotlinParser::ImportAliasContext* KotlinParser::ImportHeaderContext::importAlias() {
  return getRuleContext<KotlinParser::ImportAliasContext>(0);
}

KotlinParser::SemiContext* KotlinParser::ImportHeaderContext::semi() {
  return getRuleContext<KotlinParser::SemiContext>(0);
}


size_t KotlinParser::ImportHeaderContext::getRuleIndex() const {
  return KotlinParser::RuleImportHeader;
}

void KotlinParser::ImportHeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportHeader(this);
}

void KotlinParser::ImportHeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportHeader(this);
}

KotlinParser::ImportHeaderContext* KotlinParser::importHeader() {
  ImportHeaderContext *_localctx = _tracker.createInstance<ImportHeaderContext>(_ctx, getState());
  enterRule(_localctx, 12, KotlinParser::RuleImportHeader);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(KotlinParser::IMPORT);
    setState(450);
    identifier();
    setState(454);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::DOT: {
        setState(451);
        match(KotlinParser::DOT);
        setState(452);
        match(KotlinParser::MULT);
        break;
      }

      case KotlinParser::AS: {
        setState(453);
        importAlias();
        break;
      }

      case KotlinParser::EOF:
      case KotlinParser::NL:
      case KotlinParser::LPAREN:
      case KotlinParser::LSQUARE:
      case KotlinParser::LCURL:
      case KotlinParser::ADD:
      case KotlinParser::SUB:
      case KotlinParser::INCR:
      case KotlinParser::DECR:
      case KotlinParser::EXCL_WS:
      case KotlinParser::EXCL_NO_WS:
      case KotlinParser::SEMICOLON:
      case KotlinParser::COLONCOLON:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::RETURN_AT:
      case KotlinParser::CONTINUE_AT:
      case KotlinParser::BREAK_AT:
      case KotlinParser::THIS_AT:
      case KotlinParser::SUPER_AT:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CLASS:
      case KotlinParser::INTERFACE:
      case KotlinParser::FUN:
      case KotlinParser::OBJECT:
      case KotlinParser::VAL:
      case KotlinParser::VAR:
      case KotlinParser::TYPE_ALIAS:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::THIS:
      case KotlinParser::SUPER:
      case KotlinParser::WHERE:
      case KotlinParser::IF:
      case KotlinParser::WHEN:
      case KotlinParser::TRY:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::FOR:
      case KotlinParser::DO:
      case KotlinParser::WHILE:
      case KotlinParser::THROW:
      case KotlinParser::RETURN:
      case KotlinParser::CONTINUE:
      case KotlinParser::BREAK:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::RealLiteral:
      case KotlinParser::IntegerLiteral:
      case KotlinParser::HexLiteral:
      case KotlinParser::BinLiteral:
      case KotlinParser::UnsignedLiteral:
      case KotlinParser::LongLiteral:
      case KotlinParser::BooleanLiteral:
      case KotlinParser::NullLiteral:
      case KotlinParser::CharacterLiteral:
      case KotlinParser::Identifier:
      case KotlinParser::QUOTE_OPEN:
      case KotlinParser::TRIPLE_QUOTE_OPEN: {
        break;
      }

    default:
      break;
    }
    setState(457);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(456);
      semi();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportAliasContext ------------------------------------------------------------------

KotlinParser::ImportAliasContext::ImportAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ImportAliasContext::AS() {
  return getToken(KotlinParser::AS, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ImportAliasContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}


size_t KotlinParser::ImportAliasContext::getRuleIndex() const {
  return KotlinParser::RuleImportAlias;
}

void KotlinParser::ImportAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportAlias(this);
}

void KotlinParser::ImportAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportAlias(this);
}

KotlinParser::ImportAliasContext* KotlinParser::importAlias() {
  ImportAliasContext *_localctx = _tracker.createInstance<ImportAliasContext>(_ctx, getState());
  enterRule(_localctx, 14, KotlinParser::RuleImportAlias);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(KotlinParser::AS);
    setState(460);
    simpleIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelObjectContext ------------------------------------------------------------------

KotlinParser::TopLevelObjectContext::TopLevelObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::DeclarationContext* KotlinParser::TopLevelObjectContext::declaration() {
  return getRuleContext<KotlinParser::DeclarationContext>(0);
}

KotlinParser::SemisContext* KotlinParser::TopLevelObjectContext::semis() {
  return getRuleContext<KotlinParser::SemisContext>(0);
}


size_t KotlinParser::TopLevelObjectContext::getRuleIndex() const {
  return KotlinParser::RuleTopLevelObject;
}

void KotlinParser::TopLevelObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelObject(this);
}

void KotlinParser::TopLevelObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelObject(this);
}

KotlinParser::TopLevelObjectContext* KotlinParser::topLevelObject() {
  TopLevelObjectContext *_localctx = _tracker.createInstance<TopLevelObjectContext>(_ctx, getState());
  enterRule(_localctx, 16, KotlinParser::RuleTopLevelObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    declaration();
    setState(464);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(463);
      semis();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAliasContext ------------------------------------------------------------------

KotlinParser::TypeAliasContext::TypeAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::TypeAliasContext::TYPE_ALIAS() {
  return getToken(KotlinParser::TYPE_ALIAS, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::TypeAliasContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::TypeAliasContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::TypeContext* KotlinParser::TypeAliasContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

KotlinParser::ModifiersContext* KotlinParser::TypeAliasContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeAliasContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeAliasContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::TypeParametersContext* KotlinParser::TypeAliasContext::typeParameters() {
  return getRuleContext<KotlinParser::TypeParametersContext>(0);
}


size_t KotlinParser::TypeAliasContext::getRuleIndex() const {
  return KotlinParser::RuleTypeAlias;
}

void KotlinParser::TypeAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAlias(this);
}

void KotlinParser::TypeAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAlias(this);
}

KotlinParser::TypeAliasContext* KotlinParser::typeAlias() {
  TypeAliasContext *_localctx = _tracker.createInstance<TypeAliasContext>(_ctx, getState());
  enterRule(_localctx, 18, KotlinParser::RuleTypeAlias);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(466);
      modifiers();
    }
    setState(469);
    match(KotlinParser::TYPE_ALIAS);
    setState(473);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(470);
      match(KotlinParser::NL);
      setState(475);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(476);
    simpleIdentifier();
    setState(484);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(480);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(477);
        match(KotlinParser::NL);
        setState(482);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(483);
      typeParameters();
      break;
    }

    default:
      break;
    }
    setState(489);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(486);
      match(KotlinParser::NL);
      setState(491);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(492);
    match(KotlinParser::ASSIGNMENT);
    setState(496);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(493);
      match(KotlinParser::NL);
      setState(498);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(499);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

KotlinParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ClassDeclarationContext* KotlinParser::DeclarationContext::classDeclaration() {
  return getRuleContext<KotlinParser::ClassDeclarationContext>(0);
}

KotlinParser::ObjectDeclarationContext* KotlinParser::DeclarationContext::objectDeclaration() {
  return getRuleContext<KotlinParser::ObjectDeclarationContext>(0);
}

KotlinParser::FunctionDeclarationContext* KotlinParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<KotlinParser::FunctionDeclarationContext>(0);
}

KotlinParser::PropertyDeclarationContext* KotlinParser::DeclarationContext::propertyDeclaration() {
  return getRuleContext<KotlinParser::PropertyDeclarationContext>(0);
}

KotlinParser::TypeAliasContext* KotlinParser::DeclarationContext::typeAlias() {
  return getRuleContext<KotlinParser::TypeAliasContext>(0);
}


size_t KotlinParser::DeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleDeclaration;
}

void KotlinParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void KotlinParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

KotlinParser::DeclarationContext* KotlinParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, KotlinParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(506);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(501);
      classDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(502);
      objectDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(503);
      functionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(504);
      propertyDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(505);
      typeAlias();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

KotlinParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ClassDeclarationContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::ClassDeclarationContext::CLASS() {
  return getToken(KotlinParser::CLASS, 0);
}

tree::TerminalNode* KotlinParser::ClassDeclarationContext::INTERFACE() {
  return getToken(KotlinParser::INTERFACE, 0);
}

KotlinParser::ModifiersContext* KotlinParser::ClassDeclarationContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ClassDeclarationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ClassDeclarationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::TypeParametersContext* KotlinParser::ClassDeclarationContext::typeParameters() {
  return getRuleContext<KotlinParser::TypeParametersContext>(0);
}

KotlinParser::PrimaryConstructorContext* KotlinParser::ClassDeclarationContext::primaryConstructor() {
  return getRuleContext<KotlinParser::PrimaryConstructorContext>(0);
}

tree::TerminalNode* KotlinParser::ClassDeclarationContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::DelegationSpecifiersContext* KotlinParser::ClassDeclarationContext::delegationSpecifiers() {
  return getRuleContext<KotlinParser::DelegationSpecifiersContext>(0);
}

KotlinParser::TypeConstraintsContext* KotlinParser::ClassDeclarationContext::typeConstraints() {
  return getRuleContext<KotlinParser::TypeConstraintsContext>(0);
}

KotlinParser::ClassBodyContext* KotlinParser::ClassDeclarationContext::classBody() {
  return getRuleContext<KotlinParser::ClassBodyContext>(0);
}

KotlinParser::EnumClassBodyContext* KotlinParser::ClassDeclarationContext::enumClassBody() {
  return getRuleContext<KotlinParser::EnumClassBodyContext>(0);
}

tree::TerminalNode* KotlinParser::ClassDeclarationContext::FUN() {
  return getToken(KotlinParser::FUN, 0);
}


size_t KotlinParser::ClassDeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleClassDeclaration;
}

void KotlinParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void KotlinParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

KotlinParser::ClassDeclarationContext* KotlinParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, KotlinParser::RuleClassDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(508);
      modifiers();
    }
    setState(522);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::CLASS: {
        setState(511);
        match(KotlinParser::CLASS);
        break;
      }

      case KotlinParser::INTERFACE:
      case KotlinParser::FUN: {
        setState(519);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == KotlinParser::FUN) {
          setState(512);
          match(KotlinParser::FUN);
          setState(516);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(513);
            match(KotlinParser::NL);
            setState(518);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(521);
        match(KotlinParser::INTERFACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(527);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(524);
      match(KotlinParser::NL);
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(530);
    simpleIdentifier();
    setState(538);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(534);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(531);
        match(KotlinParser::NL);
        setState(536);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(537);
      typeParameters();
      break;
    }

    default:
      break;
    }
    setState(547);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(543);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(540);
        match(KotlinParser::NL);
        setState(545);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(546);
      primaryConstructor();
      break;
    }

    default:
      break;
    }
    setState(563);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(552);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(549);
        match(KotlinParser::NL);
        setState(554);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(555);
      match(KotlinParser::COLON);
      setState(559);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(556);
          match(KotlinParser::NL); 
        }
        setState(561);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      }
      setState(562);
      delegationSpecifiers();
      break;
    }

    default:
      break;
    }
    setState(572);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(568);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(565);
        match(KotlinParser::NL);
        setState(570);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(571);
      typeConstraints();
      break;
    }

    default:
      break;
    }
    setState(588);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(577);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(574);
        match(KotlinParser::NL);
        setState(579);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(580);
      classBody();
      break;
    }

    case 2: {
      setState(584);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(581);
        match(KotlinParser::NL);
        setState(586);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(587);
      enumClassBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryConstructorContext ------------------------------------------------------------------

KotlinParser::PrimaryConstructorContext::PrimaryConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ClassParametersContext* KotlinParser::PrimaryConstructorContext::classParameters() {
  return getRuleContext<KotlinParser::ClassParametersContext>(0);
}

tree::TerminalNode* KotlinParser::PrimaryConstructorContext::CONSTRUCTOR() {
  return getToken(KotlinParser::CONSTRUCTOR, 0);
}

KotlinParser::ModifiersContext* KotlinParser::PrimaryConstructorContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::PrimaryConstructorContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::PrimaryConstructorContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::PrimaryConstructorContext::getRuleIndex() const {
  return KotlinParser::RulePrimaryConstructor;
}

void KotlinParser::PrimaryConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryConstructor(this);
}

void KotlinParser::PrimaryConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryConstructor(this);
}

KotlinParser::PrimaryConstructorContext* KotlinParser::primaryConstructor() {
  PrimaryConstructorContext *_localctx = _tracker.createInstance<PrimaryConstructorContext>(_ctx, getState());
  enterRule(_localctx, 24, KotlinParser::RulePrimaryConstructor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (KotlinParser::CONSTRUCTOR - 79))
      | (1ULL << (KotlinParser::PUBLIC - 79))
      | (1ULL << (KotlinParser::PRIVATE - 79))
      | (1ULL << (KotlinParser::PROTECTED - 79))
      | (1ULL << (KotlinParser::INTERNAL - 79))
      | (1ULL << (KotlinParser::ENUM - 79))
      | (1ULL << (KotlinParser::SEALED - 79))
      | (1ULL << (KotlinParser::ANNOTATION - 79))
      | (1ULL << (KotlinParser::DATA - 79))
      | (1ULL << (KotlinParser::INNER - 79))
      | (1ULL << (KotlinParser::VALUE - 79))
      | (1ULL << (KotlinParser::TAILREC - 79))
      | (1ULL << (KotlinParser::OPERATOR - 79))
      | (1ULL << (KotlinParser::INLINE - 79))
      | (1ULL << (KotlinParser::INFIX - 79))
      | (1ULL << (KotlinParser::EXTERNAL - 79))
      | (1ULL << (KotlinParser::SUSPEND - 79))
      | (1ULL << (KotlinParser::OVERRIDE - 79))
      | (1ULL << (KotlinParser::ABSTRACT - 79))
      | (1ULL << (KotlinParser::FINAL - 79))
      | (1ULL << (KotlinParser::OPEN - 79))
      | (1ULL << (KotlinParser::CONST - 79))
      | (1ULL << (KotlinParser::LATEINIT - 79))
      | (1ULL << (KotlinParser::VARARG - 79))
      | (1ULL << (KotlinParser::NOINLINE - 79))
      | (1ULL << (KotlinParser::CROSSINLINE - 79))
      | (1ULL << (KotlinParser::EXPECT - 79))
      | (1ULL << (KotlinParser::ACTUAL - 79)))) != 0)) {
      setState(591);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == KotlinParser::AT_NO_WS

      || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
        | (1ULL << (KotlinParser::PRIVATE - 107))
        | (1ULL << (KotlinParser::PROTECTED - 107))
        | (1ULL << (KotlinParser::INTERNAL - 107))
        | (1ULL << (KotlinParser::ENUM - 107))
        | (1ULL << (KotlinParser::SEALED - 107))
        | (1ULL << (KotlinParser::ANNOTATION - 107))
        | (1ULL << (KotlinParser::DATA - 107))
        | (1ULL << (KotlinParser::INNER - 107))
        | (1ULL << (KotlinParser::VALUE - 107))
        | (1ULL << (KotlinParser::TAILREC - 107))
        | (1ULL << (KotlinParser::OPERATOR - 107))
        | (1ULL << (KotlinParser::INLINE - 107))
        | (1ULL << (KotlinParser::INFIX - 107))
        | (1ULL << (KotlinParser::EXTERNAL - 107))
        | (1ULL << (KotlinParser::SUSPEND - 107))
        | (1ULL << (KotlinParser::OVERRIDE - 107))
        | (1ULL << (KotlinParser::ABSTRACT - 107))
        | (1ULL << (KotlinParser::FINAL - 107))
        | (1ULL << (KotlinParser::OPEN - 107))
        | (1ULL << (KotlinParser::CONST - 107))
        | (1ULL << (KotlinParser::LATEINIT - 107))
        | (1ULL << (KotlinParser::VARARG - 107))
        | (1ULL << (KotlinParser::NOINLINE - 107))
        | (1ULL << (KotlinParser::CROSSINLINE - 107))
        | (1ULL << (KotlinParser::EXPECT - 107))
        | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
        setState(590);
        modifiers();
      }
      setState(593);
      match(KotlinParser::CONSTRUCTOR);
      setState(597);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(594);
        match(KotlinParser::NL);
        setState(599);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(602);
    classParameters();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

KotlinParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ClassBodyContext::LCURL() {
  return getToken(KotlinParser::LCURL, 0);
}

KotlinParser::ClassMemberDeclarationsContext* KotlinParser::ClassBodyContext::classMemberDeclarations() {
  return getRuleContext<KotlinParser::ClassMemberDeclarationsContext>(0);
}

tree::TerminalNode* KotlinParser::ClassBodyContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ClassBodyContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ClassBodyContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ClassBodyContext::getRuleIndex() const {
  return KotlinParser::RuleClassBody;
}

void KotlinParser::ClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassBody(this);
}

void KotlinParser::ClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassBody(this);
}

KotlinParser::ClassBodyContext* KotlinParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 26, KotlinParser::RuleClassBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(KotlinParser::LCURL);
    setState(608);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(605);
        match(KotlinParser::NL); 
      }
      setState(610);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(611);
    classMemberDeclarations();
    setState(615);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(612);
      match(KotlinParser::NL);
      setState(617);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(618);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassParametersContext ------------------------------------------------------------------

KotlinParser::ClassParametersContext::ClassParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ClassParametersContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::ClassParametersContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ClassParametersContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ClassParametersContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::ClassParameterContext *> KotlinParser::ClassParametersContext::classParameter() {
  return getRuleContexts<KotlinParser::ClassParameterContext>();
}

KotlinParser::ClassParameterContext* KotlinParser::ClassParametersContext::classParameter(size_t i) {
  return getRuleContext<KotlinParser::ClassParameterContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::ClassParametersContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::ClassParametersContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::ClassParametersContext::getRuleIndex() const {
  return KotlinParser::RuleClassParameters;
}

void KotlinParser::ClassParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassParameters(this);
}

void KotlinParser::ClassParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassParameters(this);
}

KotlinParser::ClassParametersContext* KotlinParser::classParameters() {
  ClassParametersContext *_localctx = _tracker.createInstance<ClassParametersContext>(_ctx, getState());
  enterRule(_localctx, 28, KotlinParser::RuleClassParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(KotlinParser::LPAREN);
    setState(624);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(621);
        match(KotlinParser::NL); 
      }
      setState(626);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(656);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(627);
      classParameter();
      setState(644);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(631);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(628);
            match(KotlinParser::NL);
            setState(633);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(634);
          match(KotlinParser::COMMA);
          setState(638);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(635);
              match(KotlinParser::NL); 
            }
            setState(640);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
          }
          setState(641);
          classParameter(); 
        }
        setState(646);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
      }
      setState(654);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
      case 1: {
        setState(650);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(647);
          match(KotlinParser::NL);
          setState(652);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(653);
        match(KotlinParser::COMMA);
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
    setState(661);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(658);
      match(KotlinParser::NL);
      setState(663);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(664);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassParameterContext ------------------------------------------------------------------

KotlinParser::ClassParameterContext::ClassParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ClassParameterContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::ClassParameterContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::ClassParameterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

KotlinParser::ModifiersContext* KotlinParser::ClassParameterContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ClassParameterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ClassParameterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::ClassParameterContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::ExpressionContext* KotlinParser::ClassParameterContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::ClassParameterContext::VAL() {
  return getToken(KotlinParser::VAL, 0);
}

tree::TerminalNode* KotlinParser::ClassParameterContext::VAR() {
  return getToken(KotlinParser::VAR, 0);
}


size_t KotlinParser::ClassParameterContext::getRuleIndex() const {
  return KotlinParser::RuleClassParameter;
}

void KotlinParser::ClassParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassParameter(this);
}

void KotlinParser::ClassParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassParameter(this);
}

KotlinParser::ClassParameterContext* KotlinParser::classParameter() {
  ClassParameterContext *_localctx = _tracker.createInstance<ClassParameterContext>(_ctx, getState());
  enterRule(_localctx, 30, KotlinParser::RuleClassParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(667);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(666);
      modifiers();
      break;
    }

    default:
      break;
    }
    setState(670);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::VAL

    || _la == KotlinParser::VAR) {
      setState(669);
      _la = _input->LA(1);
      if (!(_la == KotlinParser::VAL

      || _la == KotlinParser::VAR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(675);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(672);
      match(KotlinParser::NL);
      setState(677);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(678);
    simpleIdentifier();
    setState(679);
    match(KotlinParser::COLON);
    setState(683);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(680);
      match(KotlinParser::NL);
      setState(685);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(686);
    type();
    setState(701);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(690);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(687);
        match(KotlinParser::NL);
        setState(692);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(693);
      match(KotlinParser::ASSIGNMENT);
      setState(697);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(694);
        match(KotlinParser::NL);
        setState(699);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(700);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DelegationSpecifiersContext ------------------------------------------------------------------

KotlinParser::DelegationSpecifiersContext::DelegationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::AnnotatedDelegationSpecifierContext *> KotlinParser::DelegationSpecifiersContext::annotatedDelegationSpecifier() {
  return getRuleContexts<KotlinParser::AnnotatedDelegationSpecifierContext>();
}

KotlinParser::AnnotatedDelegationSpecifierContext* KotlinParser::DelegationSpecifiersContext::annotatedDelegationSpecifier(size_t i) {
  return getRuleContext<KotlinParser::AnnotatedDelegationSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::DelegationSpecifiersContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::DelegationSpecifiersContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}

std::vector<tree::TerminalNode *> KotlinParser::DelegationSpecifiersContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::DelegationSpecifiersContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::DelegationSpecifiersContext::getRuleIndex() const {
  return KotlinParser::RuleDelegationSpecifiers;
}

void KotlinParser::DelegationSpecifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegationSpecifiers(this);
}

void KotlinParser::DelegationSpecifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegationSpecifiers(this);
}

KotlinParser::DelegationSpecifiersContext* KotlinParser::delegationSpecifiers() {
  DelegationSpecifiersContext *_localctx = _tracker.createInstance<DelegationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 32, KotlinParser::RuleDelegationSpecifiers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(703);
    annotatedDelegationSpecifier();
    setState(720);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(707);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(704);
          match(KotlinParser::NL);
          setState(709);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(710);
        match(KotlinParser::COMMA);
        setState(714);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(711);
            match(KotlinParser::NL); 
          }
          setState(716);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
        }
        setState(717);
        annotatedDelegationSpecifier(); 
      }
      setState(722);
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

//----------------- DelegationSpecifierContext ------------------------------------------------------------------

KotlinParser::DelegationSpecifierContext::DelegationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ConstructorInvocationContext* KotlinParser::DelegationSpecifierContext::constructorInvocation() {
  return getRuleContext<KotlinParser::ConstructorInvocationContext>(0);
}

KotlinParser::ExplicitDelegationContext* KotlinParser::DelegationSpecifierContext::explicitDelegation() {
  return getRuleContext<KotlinParser::ExplicitDelegationContext>(0);
}

KotlinParser::UserTypeContext* KotlinParser::DelegationSpecifierContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}

KotlinParser::FunctionTypeContext* KotlinParser::DelegationSpecifierContext::functionType() {
  return getRuleContext<KotlinParser::FunctionTypeContext>(0);
}


size_t KotlinParser::DelegationSpecifierContext::getRuleIndex() const {
  return KotlinParser::RuleDelegationSpecifier;
}

void KotlinParser::DelegationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDelegationSpecifier(this);
}

void KotlinParser::DelegationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDelegationSpecifier(this);
}

KotlinParser::DelegationSpecifierContext* KotlinParser::delegationSpecifier() {
  DelegationSpecifierContext *_localctx = _tracker.createInstance<DelegationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 34, KotlinParser::RuleDelegationSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(727);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(723);
      constructorInvocation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(724);
      explicitDelegation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(725);
      userType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(726);
      functionType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorInvocationContext ------------------------------------------------------------------

KotlinParser::ConstructorInvocationContext::ConstructorInvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::UserTypeContext* KotlinParser::ConstructorInvocationContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}

KotlinParser::ValueArgumentsContext* KotlinParser::ConstructorInvocationContext::valueArguments() {
  return getRuleContext<KotlinParser::ValueArgumentsContext>(0);
}


size_t KotlinParser::ConstructorInvocationContext::getRuleIndex() const {
  return KotlinParser::RuleConstructorInvocation;
}

void KotlinParser::ConstructorInvocationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorInvocation(this);
}

void KotlinParser::ConstructorInvocationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorInvocation(this);
}

KotlinParser::ConstructorInvocationContext* KotlinParser::constructorInvocation() {
  ConstructorInvocationContext *_localctx = _tracker.createInstance<ConstructorInvocationContext>(_ctx, getState());
  enterRule(_localctx, 36, KotlinParser::RuleConstructorInvocation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(729);
    userType();
    setState(730);
    valueArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotatedDelegationSpecifierContext ------------------------------------------------------------------

KotlinParser::AnnotatedDelegationSpecifierContext::AnnotatedDelegationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::DelegationSpecifierContext* KotlinParser::AnnotatedDelegationSpecifierContext::delegationSpecifier() {
  return getRuleContext<KotlinParser::DelegationSpecifierContext>(0);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::AnnotatedDelegationSpecifierContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::AnnotatedDelegationSpecifierContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::AnnotatedDelegationSpecifierContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AnnotatedDelegationSpecifierContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AnnotatedDelegationSpecifierContext::getRuleIndex() const {
  return KotlinParser::RuleAnnotatedDelegationSpecifier;
}

void KotlinParser::AnnotatedDelegationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotatedDelegationSpecifier(this);
}

void KotlinParser::AnnotatedDelegationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotatedDelegationSpecifier(this);
}

KotlinParser::AnnotatedDelegationSpecifierContext* KotlinParser::annotatedDelegationSpecifier() {
  AnnotatedDelegationSpecifierContext *_localctx = _tracker.createInstance<AnnotatedDelegationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 38, KotlinParser::RuleAnnotatedDelegationSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(735);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(732);
        annotation(); 
      }
      setState(737);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
    setState(741);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(738);
      match(KotlinParser::NL);
      setState(743);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(744);
    delegationSpecifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitDelegationContext ------------------------------------------------------------------

KotlinParser::ExplicitDelegationContext::ExplicitDelegationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ExplicitDelegationContext::BY() {
  return getToken(KotlinParser::BY, 0);
}

KotlinParser::ExpressionContext* KotlinParser::ExplicitDelegationContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

KotlinParser::UserTypeContext* KotlinParser::ExplicitDelegationContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}

KotlinParser::FunctionTypeContext* KotlinParser::ExplicitDelegationContext::functionType() {
  return getRuleContext<KotlinParser::FunctionTypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ExplicitDelegationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ExplicitDelegationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ExplicitDelegationContext::getRuleIndex() const {
  return KotlinParser::RuleExplicitDelegation;
}

void KotlinParser::ExplicitDelegationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitDelegation(this);
}

void KotlinParser::ExplicitDelegationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitDelegation(this);
}

KotlinParser::ExplicitDelegationContext* KotlinParser::explicitDelegation() {
  ExplicitDelegationContext *_localctx = _tracker.createInstance<ExplicitDelegationContext>(_ctx, getState());
  enterRule(_localctx, 40, KotlinParser::RuleExplicitDelegation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(746);
      userType();
      break;
    }

    case 2: {
      setState(747);
      functionType();
      break;
    }

    default:
      break;
    }
    setState(753);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(750);
      match(KotlinParser::NL);
      setState(755);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(756);
    match(KotlinParser::BY);
    setState(760);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(757);
      match(KotlinParser::NL);
      setState(762);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(763);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParametersContext ------------------------------------------------------------------

KotlinParser::TypeParametersContext::TypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::TypeParametersContext::LANGLE() {
  return getToken(KotlinParser::LANGLE, 0);
}

std::vector<KotlinParser::TypeParameterContext *> KotlinParser::TypeParametersContext::typeParameter() {
  return getRuleContexts<KotlinParser::TypeParameterContext>();
}

KotlinParser::TypeParameterContext* KotlinParser::TypeParametersContext::typeParameter(size_t i) {
  return getRuleContext<KotlinParser::TypeParameterContext>(i);
}

tree::TerminalNode* KotlinParser::TypeParametersContext::RANGLE() {
  return getToken(KotlinParser::RANGLE, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeParametersContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeParametersContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeParametersContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::TypeParametersContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::TypeParametersContext::getRuleIndex() const {
  return KotlinParser::RuleTypeParameters;
}

void KotlinParser::TypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameters(this);
}

void KotlinParser::TypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameters(this);
}

KotlinParser::TypeParametersContext* KotlinParser::typeParameters() {
  TypeParametersContext *_localctx = _tracker.createInstance<TypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 42, KotlinParser::RuleTypeParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(765);
    match(KotlinParser::LANGLE);
    setState(769);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(766);
        match(KotlinParser::NL); 
      }
      setState(771);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
    setState(772);
    typeParameter();
    setState(789);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(776);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(773);
          match(KotlinParser::NL);
          setState(778);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(779);
        match(KotlinParser::COMMA);
        setState(783);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(780);
            match(KotlinParser::NL); 
          }
          setState(785);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
        }
        setState(786);
        typeParameter(); 
      }
      setState(791);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    }
    setState(799);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      setState(795);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(792);
        match(KotlinParser::NL);
        setState(797);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(798);
      match(KotlinParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(804);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(801);
      match(KotlinParser::NL);
      setState(806);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(807);
    match(KotlinParser::RANGLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

KotlinParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::TypeParameterContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::TypeParameterModifiersContext* KotlinParser::TypeParameterContext::typeParameterModifiers() {
  return getRuleContext<KotlinParser::TypeParameterModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeParameterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeParameterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::TypeParameterContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::TypeParameterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::TypeParameterContext::getRuleIndex() const {
  return KotlinParser::RuleTypeParameter;
}

void KotlinParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void KotlinParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}

KotlinParser::TypeParameterContext* KotlinParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 44, KotlinParser::RuleTypeParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      setState(809);
      typeParameterModifiers();
      break;
    }

    default:
      break;
    }
    setState(815);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(812);
      match(KotlinParser::NL);
      setState(817);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(818);
    simpleIdentifier();
    setState(833);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      setState(822);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(819);
        match(KotlinParser::NL);
        setState(824);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(825);
      match(KotlinParser::COLON);
      setState(829);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(826);
        match(KotlinParser::NL);
        setState(831);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(832);
      type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeConstraintsContext ------------------------------------------------------------------

KotlinParser::TypeConstraintsContext::TypeConstraintsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::TypeConstraintsContext::WHERE() {
  return getToken(KotlinParser::WHERE, 0);
}

std::vector<KotlinParser::TypeConstraintContext *> KotlinParser::TypeConstraintsContext::typeConstraint() {
  return getRuleContexts<KotlinParser::TypeConstraintContext>();
}

KotlinParser::TypeConstraintContext* KotlinParser::TypeConstraintsContext::typeConstraint(size_t i) {
  return getRuleContext<KotlinParser::TypeConstraintContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeConstraintsContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeConstraintsContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeConstraintsContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::TypeConstraintsContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::TypeConstraintsContext::getRuleIndex() const {
  return KotlinParser::RuleTypeConstraints;
}

void KotlinParser::TypeConstraintsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeConstraints(this);
}

void KotlinParser::TypeConstraintsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeConstraints(this);
}

KotlinParser::TypeConstraintsContext* KotlinParser::typeConstraints() {
  TypeConstraintsContext *_localctx = _tracker.createInstance<TypeConstraintsContext>(_ctx, getState());
  enterRule(_localctx, 46, KotlinParser::RuleTypeConstraints);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(835);
    match(KotlinParser::WHERE);
    setState(839);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(836);
      match(KotlinParser::NL);
      setState(841);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(842);
    typeConstraint();
    setState(859);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(846);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(843);
          match(KotlinParser::NL);
          setState(848);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(849);
        match(KotlinParser::COMMA);
        setState(853);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(850);
          match(KotlinParser::NL);
          setState(855);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(856);
        typeConstraint(); 
      }
      setState(861);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeConstraintContext ------------------------------------------------------------------

KotlinParser::TypeConstraintContext::TypeConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::TypeConstraintContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::TypeConstraintContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::TypeConstraintContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::TypeConstraintContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::TypeConstraintContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeConstraintContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeConstraintContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::TypeConstraintContext::getRuleIndex() const {
  return KotlinParser::RuleTypeConstraint;
}

void KotlinParser::TypeConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeConstraint(this);
}

void KotlinParser::TypeConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeConstraint(this);
}

KotlinParser::TypeConstraintContext* KotlinParser::typeConstraint() {
  TypeConstraintContext *_localctx = _tracker.createInstance<TypeConstraintContext>(_ctx, getState());
  enterRule(_localctx, 48, KotlinParser::RuleTypeConstraint);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(865);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS) {
      setState(862);
      annotation();
      setState(867);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(868);
    simpleIdentifier();
    setState(872);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(869);
      match(KotlinParser::NL);
      setState(874);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(875);
    match(KotlinParser::COLON);
    setState(879);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(876);
      match(KotlinParser::NL);
      setState(881);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(882);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberDeclarationsContext ------------------------------------------------------------------

KotlinParser::ClassMemberDeclarationsContext::ClassMemberDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ClassMemberDeclarationContext *> KotlinParser::ClassMemberDeclarationsContext::classMemberDeclaration() {
  return getRuleContexts<KotlinParser::ClassMemberDeclarationContext>();
}

KotlinParser::ClassMemberDeclarationContext* KotlinParser::ClassMemberDeclarationsContext::classMemberDeclaration(size_t i) {
  return getRuleContext<KotlinParser::ClassMemberDeclarationContext>(i);
}

std::vector<KotlinParser::SemisContext *> KotlinParser::ClassMemberDeclarationsContext::semis() {
  return getRuleContexts<KotlinParser::SemisContext>();
}

KotlinParser::SemisContext* KotlinParser::ClassMemberDeclarationsContext::semis(size_t i) {
  return getRuleContext<KotlinParser::SemisContext>(i);
}


size_t KotlinParser::ClassMemberDeclarationsContext::getRuleIndex() const {
  return KotlinParser::RuleClassMemberDeclarations;
}

void KotlinParser::ClassMemberDeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMemberDeclarations(this);
}

void KotlinParser::ClassMemberDeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMemberDeclarations(this);
}

KotlinParser::ClassMemberDeclarationsContext* KotlinParser::classMemberDeclarations() {
  ClassMemberDeclarationsContext *_localctx = _tracker.createInstance<ClassMemberDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 50, KotlinParser::RuleClassMemberDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(890);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (KotlinParser::CLASS - 72))
      | (1ULL << (KotlinParser::INTERFACE - 72))
      | (1ULL << (KotlinParser::FUN - 72))
      | (1ULL << (KotlinParser::OBJECT - 72))
      | (1ULL << (KotlinParser::VAL - 72))
      | (1ULL << (KotlinParser::VAR - 72))
      | (1ULL << (KotlinParser::TYPE_ALIAS - 72))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 72))
      | (1ULL << (KotlinParser::COMPANION - 72))
      | (1ULL << (KotlinParser::INIT - 72))
      | (1ULL << (KotlinParser::PUBLIC - 72))
      | (1ULL << (KotlinParser::PRIVATE - 72))
      | (1ULL << (KotlinParser::PROTECTED - 72))
      | (1ULL << (KotlinParser::INTERNAL - 72))
      | (1ULL << (KotlinParser::ENUM - 72))
      | (1ULL << (KotlinParser::SEALED - 72))
      | (1ULL << (KotlinParser::ANNOTATION - 72))
      | (1ULL << (KotlinParser::DATA - 72))
      | (1ULL << (KotlinParser::INNER - 72))
      | (1ULL << (KotlinParser::VALUE - 72))
      | (1ULL << (KotlinParser::TAILREC - 72))
      | (1ULL << (KotlinParser::OPERATOR - 72))
      | (1ULL << (KotlinParser::INLINE - 72))
      | (1ULL << (KotlinParser::INFIX - 72))
      | (1ULL << (KotlinParser::EXTERNAL - 72))
      | (1ULL << (KotlinParser::SUSPEND - 72))
      | (1ULL << (KotlinParser::OVERRIDE - 72))
      | (1ULL << (KotlinParser::ABSTRACT - 72))
      | (1ULL << (KotlinParser::FINAL - 72))
      | (1ULL << (KotlinParser::OPEN - 72))
      | (1ULL << (KotlinParser::CONST - 72))
      | (1ULL << (KotlinParser::LATEINIT - 72))
      | (1ULL << (KotlinParser::VARARG - 72))
      | (1ULL << (KotlinParser::NOINLINE - 72))
      | (1ULL << (KotlinParser::CROSSINLINE - 72))
      | (1ULL << (KotlinParser::EXPECT - 72))
      | (1ULL << (KotlinParser::ACTUAL - 72)))) != 0)) {
      setState(884);
      classMemberDeclaration();
      setState(886);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
      case 1: {
        setState(885);
        semis();
        break;
      }

      default:
        break;
      }
      setState(892);
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

//----------------- ClassMemberDeclarationContext ------------------------------------------------------------------

KotlinParser::ClassMemberDeclarationContext::ClassMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::DeclarationContext* KotlinParser::ClassMemberDeclarationContext::declaration() {
  return getRuleContext<KotlinParser::DeclarationContext>(0);
}

KotlinParser::CompanionObjectContext* KotlinParser::ClassMemberDeclarationContext::companionObject() {
  return getRuleContext<KotlinParser::CompanionObjectContext>(0);
}

KotlinParser::AnonymousInitializerContext* KotlinParser::ClassMemberDeclarationContext::anonymousInitializer() {
  return getRuleContext<KotlinParser::AnonymousInitializerContext>(0);
}

KotlinParser::SecondaryConstructorContext* KotlinParser::ClassMemberDeclarationContext::secondaryConstructor() {
  return getRuleContext<KotlinParser::SecondaryConstructorContext>(0);
}


size_t KotlinParser::ClassMemberDeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleClassMemberDeclaration;
}

void KotlinParser::ClassMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMemberDeclaration(this);
}

void KotlinParser::ClassMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMemberDeclaration(this);
}

KotlinParser::ClassMemberDeclarationContext* KotlinParser::classMemberDeclaration() {
  ClassMemberDeclarationContext *_localctx = _tracker.createInstance<ClassMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 52, KotlinParser::RuleClassMemberDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(897);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(893);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(894);
      companionObject();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(895);
      anonymousInitializer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(896);
      secondaryConstructor();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousInitializerContext ------------------------------------------------------------------

KotlinParser::AnonymousInitializerContext::AnonymousInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::AnonymousInitializerContext::INIT() {
  return getToken(KotlinParser::INIT, 0);
}

KotlinParser::BlockContext* KotlinParser::AnonymousInitializerContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::AnonymousInitializerContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AnonymousInitializerContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AnonymousInitializerContext::getRuleIndex() const {
  return KotlinParser::RuleAnonymousInitializer;
}

void KotlinParser::AnonymousInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousInitializer(this);
}

void KotlinParser::AnonymousInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousInitializer(this);
}

KotlinParser::AnonymousInitializerContext* KotlinParser::anonymousInitializer() {
  AnonymousInitializerContext *_localctx = _tracker.createInstance<AnonymousInitializerContext>(_ctx, getState());
  enterRule(_localctx, 54, KotlinParser::RuleAnonymousInitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(899);
    match(KotlinParser::INIT);
    setState(903);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(900);
      match(KotlinParser::NL);
      setState(905);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(906);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompanionObjectContext ------------------------------------------------------------------

KotlinParser::CompanionObjectContext::CompanionObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::CompanionObjectContext::COMPANION() {
  return getToken(KotlinParser::COMPANION, 0);
}

tree::TerminalNode* KotlinParser::CompanionObjectContext::OBJECT() {
  return getToken(KotlinParser::OBJECT, 0);
}

KotlinParser::ModifiersContext* KotlinParser::CompanionObjectContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::CompanionObjectContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::CompanionObjectContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::CompanionObjectContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::CompanionObjectContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::DelegationSpecifiersContext* KotlinParser::CompanionObjectContext::delegationSpecifiers() {
  return getRuleContext<KotlinParser::DelegationSpecifiersContext>(0);
}

KotlinParser::ClassBodyContext* KotlinParser::CompanionObjectContext::classBody() {
  return getRuleContext<KotlinParser::ClassBodyContext>(0);
}


size_t KotlinParser::CompanionObjectContext::getRuleIndex() const {
  return KotlinParser::RuleCompanionObject;
}

void KotlinParser::CompanionObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompanionObject(this);
}

void KotlinParser::CompanionObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompanionObject(this);
}

KotlinParser::CompanionObjectContext* KotlinParser::companionObject() {
  CompanionObjectContext *_localctx = _tracker.createInstance<CompanionObjectContext>(_ctx, getState());
  enterRule(_localctx, 56, KotlinParser::RuleCompanionObject);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(909);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(908);
      modifiers();
    }
    setState(911);
    match(KotlinParser::COMPANION);
    setState(915);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(912);
      match(KotlinParser::NL);
      setState(917);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(918);
    match(KotlinParser::OBJECT);
    setState(926);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      setState(922);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(919);
        match(KotlinParser::NL);
        setState(924);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(925);
      simpleIdentifier();
      break;
    }

    default:
      break;
    }
    setState(942);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(931);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(928);
        match(KotlinParser::NL);
        setState(933);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(934);
      match(KotlinParser::COLON);
      setState(938);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(935);
          match(KotlinParser::NL); 
        }
        setState(940);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
      }
      setState(941);
      delegationSpecifiers();
      break;
    }

    default:
      break;
    }
    setState(951);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      setState(947);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(944);
        match(KotlinParser::NL);
        setState(949);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(950);
      classBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionValueParametersContext ------------------------------------------------------------------

KotlinParser::FunctionValueParametersContext::FunctionValueParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FunctionValueParametersContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::FunctionValueParametersContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionValueParametersContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionValueParametersContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::FunctionValueParameterContext *> KotlinParser::FunctionValueParametersContext::functionValueParameter() {
  return getRuleContexts<KotlinParser::FunctionValueParameterContext>();
}

KotlinParser::FunctionValueParameterContext* KotlinParser::FunctionValueParametersContext::functionValueParameter(size_t i) {
  return getRuleContext<KotlinParser::FunctionValueParameterContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionValueParametersContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::FunctionValueParametersContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::FunctionValueParametersContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionValueParameters;
}

void KotlinParser::FunctionValueParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionValueParameters(this);
}

void KotlinParser::FunctionValueParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionValueParameters(this);
}

KotlinParser::FunctionValueParametersContext* KotlinParser::functionValueParameters() {
  FunctionValueParametersContext *_localctx = _tracker.createInstance<FunctionValueParametersContext>(_ctx, getState());
  enterRule(_localctx, 58, KotlinParser::RuleFunctionValueParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(953);
    match(KotlinParser::LPAREN);
    setState(957);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(954);
        match(KotlinParser::NL); 
      }
      setState(959);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    }
    setState(989);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 40) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 40)) & ((1ULL << (KotlinParser::AT_NO_WS - 40))
      | (1ULL << (KotlinParser::AT_PRE_WS - 40))
      | (1ULL << (KotlinParser::FILE - 40))
      | (1ULL << (KotlinParser::FIELD - 40))
      | (1ULL << (KotlinParser::PROPERTY - 40))
      | (1ULL << (KotlinParser::GET - 40))
      | (1ULL << (KotlinParser::SET - 40))
      | (1ULL << (KotlinParser::RECEIVER - 40))
      | (1ULL << (KotlinParser::PARAM - 40))
      | (1ULL << (KotlinParser::SETPARAM - 40))
      | (1ULL << (KotlinParser::DELEGATE - 40))
      | (1ULL << (KotlinParser::IMPORT - 40))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 40))
      | (1ULL << (KotlinParser::BY - 40))
      | (1ULL << (KotlinParser::COMPANION - 40))
      | (1ULL << (KotlinParser::INIT - 40))
      | (1ULL << (KotlinParser::WHERE - 40))
      | (1ULL << (KotlinParser::CATCH - 40))
      | (1ULL << (KotlinParser::FINALLY - 40)))) != 0) || ((((_la - 105) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 105)) & ((1ULL << (KotlinParser::OUT - 105))
      | (1ULL << (KotlinParser::DYNAMIC - 105))
      | (1ULL << (KotlinParser::PUBLIC - 105))
      | (1ULL << (KotlinParser::PRIVATE - 105))
      | (1ULL << (KotlinParser::PROTECTED - 105))
      | (1ULL << (KotlinParser::INTERNAL - 105))
      | (1ULL << (KotlinParser::ENUM - 105))
      | (1ULL << (KotlinParser::SEALED - 105))
      | (1ULL << (KotlinParser::ANNOTATION - 105))
      | (1ULL << (KotlinParser::DATA - 105))
      | (1ULL << (KotlinParser::INNER - 105))
      | (1ULL << (KotlinParser::VALUE - 105))
      | (1ULL << (KotlinParser::TAILREC - 105))
      | (1ULL << (KotlinParser::OPERATOR - 105))
      | (1ULL << (KotlinParser::INLINE - 105))
      | (1ULL << (KotlinParser::INFIX - 105))
      | (1ULL << (KotlinParser::EXTERNAL - 105))
      | (1ULL << (KotlinParser::SUSPEND - 105))
      | (1ULL << (KotlinParser::OVERRIDE - 105))
      | (1ULL << (KotlinParser::ABSTRACT - 105))
      | (1ULL << (KotlinParser::FINAL - 105))
      | (1ULL << (KotlinParser::OPEN - 105))
      | (1ULL << (KotlinParser::CONST - 105))
      | (1ULL << (KotlinParser::LATEINIT - 105))
      | (1ULL << (KotlinParser::VARARG - 105))
      | (1ULL << (KotlinParser::NOINLINE - 105))
      | (1ULL << (KotlinParser::CROSSINLINE - 105))
      | (1ULL << (KotlinParser::REIFIED - 105))
      | (1ULL << (KotlinParser::EXPECT - 105))
      | (1ULL << (KotlinParser::ACTUAL - 105))
      | (1ULL << (KotlinParser::Identifier - 105)))) != 0)) {
      setState(960);
      functionValueParameter();
      setState(977);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(964);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(961);
            match(KotlinParser::NL);
            setState(966);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(967);
          match(KotlinParser::COMMA);
          setState(971);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(968);
            match(KotlinParser::NL);
            setState(973);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(974);
          functionValueParameter(); 
        }
        setState(979);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
      }
      setState(987);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
      case 1: {
        setState(983);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(980);
          match(KotlinParser::NL);
          setState(985);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(986);
        match(KotlinParser::COMMA);
        break;
      }

      default:
        break;
      }
    }
    setState(994);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(991);
      match(KotlinParser::NL);
      setState(996);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(997);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionValueParameterContext ------------------------------------------------------------------

KotlinParser::FunctionValueParameterContext::FunctionValueParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ParameterContext* KotlinParser::FunctionValueParameterContext::parameter() {
  return getRuleContext<KotlinParser::ParameterContext>(0);
}

KotlinParser::ParameterModifiersContext* KotlinParser::FunctionValueParameterContext::parameterModifiers() {
  return getRuleContext<KotlinParser::ParameterModifiersContext>(0);
}

tree::TerminalNode* KotlinParser::FunctionValueParameterContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::ExpressionContext* KotlinParser::FunctionValueParameterContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionValueParameterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionValueParameterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::FunctionValueParameterContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionValueParameter;
}

void KotlinParser::FunctionValueParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionValueParameter(this);
}

void KotlinParser::FunctionValueParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionValueParameter(this);
}

KotlinParser::FunctionValueParameterContext* KotlinParser::functionValueParameter() {
  FunctionValueParameterContext *_localctx = _tracker.createInstance<FunctionValueParameterContext>(_ctx, getState());
  enterRule(_localctx, 60, KotlinParser::RuleFunctionValueParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1000);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      setState(999);
      parameterModifiers();
      break;
    }

    default:
      break;
    }
    setState(1002);
    parameter();
    setState(1017);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      setState(1006);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1003);
        match(KotlinParser::NL);
        setState(1008);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1009);
      match(KotlinParser::ASSIGNMENT);
      setState(1013);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1010);
        match(KotlinParser::NL);
        setState(1015);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1016);
      expression();
      break;
    }

    default:
      break;
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

KotlinParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FunctionDeclarationContext::FUN() {
  return getToken(KotlinParser::FUN, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::FunctionDeclarationContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::FunctionValueParametersContext* KotlinParser::FunctionDeclarationContext::functionValueParameters() {
  return getRuleContext<KotlinParser::FunctionValueParametersContext>(0);
}

KotlinParser::ModifiersContext* KotlinParser::FunctionDeclarationContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

KotlinParser::TypeParametersContext* KotlinParser::FunctionDeclarationContext::typeParameters() {
  return getRuleContext<KotlinParser::TypeParametersContext>(0);
}

KotlinParser::ReceiverTypeContext* KotlinParser::FunctionDeclarationContext::receiverType() {
  return getRuleContext<KotlinParser::ReceiverTypeContext>(0);
}

tree::TerminalNode* KotlinParser::FunctionDeclarationContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionDeclarationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionDeclarationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::FunctionDeclarationContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::FunctionDeclarationContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

KotlinParser::TypeConstraintsContext* KotlinParser::FunctionDeclarationContext::typeConstraints() {
  return getRuleContext<KotlinParser::TypeConstraintsContext>(0);
}

KotlinParser::FunctionBodyContext* KotlinParser::FunctionDeclarationContext::functionBody() {
  return getRuleContext<KotlinParser::FunctionBodyContext>(0);
}


size_t KotlinParser::FunctionDeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionDeclaration;
}

void KotlinParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void KotlinParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

KotlinParser::FunctionDeclarationContext* KotlinParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 62, KotlinParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1020);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(1019);
      modifiers();
    }
    setState(1022);
    match(KotlinParser::FUN);
    setState(1030);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      setState(1026);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1023);
        match(KotlinParser::NL);
        setState(1028);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1029);
      typeParameters();
      break;
    }

    default:
      break;
    }
    setState(1047);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
    case 1: {
      setState(1035);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1032);
        match(KotlinParser::NL);
        setState(1037);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1038);
      receiverType();
      setState(1042);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1039);
        match(KotlinParser::NL);
        setState(1044);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1045);
      match(KotlinParser::DOT);
      break;
    }

    default:
      break;
    }
    setState(1052);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1049);
      match(KotlinParser::NL);
      setState(1054);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1055);
    simpleIdentifier();
    setState(1059);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1056);
      match(KotlinParser::NL);
      setState(1061);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1062);
    functionValueParameters();
    setState(1077);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      setState(1066);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1063);
        match(KotlinParser::NL);
        setState(1068);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1069);
      match(KotlinParser::COLON);
      setState(1073);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1070);
        match(KotlinParser::NL);
        setState(1075);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1076);
      type();
      break;
    }

    default:
      break;
    }
    setState(1086);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      setState(1082);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1079);
        match(KotlinParser::NL);
        setState(1084);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1085);
      typeConstraints();
      break;
    }

    default:
      break;
    }
    setState(1095);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx)) {
    case 1: {
      setState(1091);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1088);
        match(KotlinParser::NL);
        setState(1093);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1094);
      functionBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

KotlinParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::BlockContext* KotlinParser::FunctionBodyContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}

tree::TerminalNode* KotlinParser::FunctionBodyContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::ExpressionContext* KotlinParser::FunctionBodyContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionBodyContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionBodyContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::FunctionBodyContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionBody;
}

void KotlinParser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void KotlinParser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}

KotlinParser::FunctionBodyContext* KotlinParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 64, KotlinParser::RuleFunctionBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LCURL: {
        enterOuterAlt(_localctx, 1);
        setState(1097);
        block();
        break;
      }

      case KotlinParser::ASSIGNMENT: {
        enterOuterAlt(_localctx, 2);
        setState(1098);
        match(KotlinParser::ASSIGNMENT);
        setState(1102);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1099);
          match(KotlinParser::NL);
          setState(1104);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1105);
        expression();
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

KotlinParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::VariableDeclarationContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::VariableDeclarationContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::VariableDeclarationContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::VariableDeclarationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::VariableDeclarationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::VariableDeclarationContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::VariableDeclarationContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::VariableDeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleVariableDeclaration;
}

void KotlinParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void KotlinParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

KotlinParser::VariableDeclarationContext* KotlinParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 66, KotlinParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS) {
      setState(1108);
      annotation();
      setState(1113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1114);
      match(KotlinParser::NL);
      setState(1119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1120);
    simpleIdentifier();
    setState(1135);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      setState(1124);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1121);
        match(KotlinParser::NL);
        setState(1126);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1127);
      match(KotlinParser::COLON);
      setState(1131);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1128);
        match(KotlinParser::NL);
        setState(1133);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1134);
      type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiVariableDeclarationContext ------------------------------------------------------------------

KotlinParser::MultiVariableDeclarationContext::MultiVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MultiVariableDeclarationContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

std::vector<KotlinParser::VariableDeclarationContext *> KotlinParser::MultiVariableDeclarationContext::variableDeclaration() {
  return getRuleContexts<KotlinParser::VariableDeclarationContext>();
}

KotlinParser::VariableDeclarationContext* KotlinParser::MultiVariableDeclarationContext::variableDeclaration(size_t i) {
  return getRuleContext<KotlinParser::VariableDeclarationContext>(i);
}

tree::TerminalNode* KotlinParser::MultiVariableDeclarationContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::MultiVariableDeclarationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::MultiVariableDeclarationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<tree::TerminalNode *> KotlinParser::MultiVariableDeclarationContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::MultiVariableDeclarationContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::MultiVariableDeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleMultiVariableDeclaration;
}

void KotlinParser::MultiVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiVariableDeclaration(this);
}

void KotlinParser::MultiVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiVariableDeclaration(this);
}

KotlinParser::MultiVariableDeclarationContext* KotlinParser::multiVariableDeclaration() {
  MultiVariableDeclarationContext *_localctx = _tracker.createInstance<MultiVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 68, KotlinParser::RuleMultiVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1137);
    match(KotlinParser::LPAREN);
    setState(1141);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1138);
        match(KotlinParser::NL); 
      }
      setState(1143);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx);
    }
    setState(1144);
    variableDeclaration();
    setState(1161);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1148);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1145);
          match(KotlinParser::NL);
          setState(1150);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1151);
        match(KotlinParser::COMMA);
        setState(1155);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1152);
            match(KotlinParser::NL); 
          }
          setState(1157);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
        }
        setState(1158);
        variableDeclaration(); 
      }
      setState(1163);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
    }
    setState(1171);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      setState(1167);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1164);
        match(KotlinParser::NL);
        setState(1169);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1170);
      match(KotlinParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(1176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1173);
      match(KotlinParser::NL);
      setState(1178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1179);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyDeclarationContext ------------------------------------------------------------------

KotlinParser::PropertyDeclarationContext::PropertyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PropertyDeclarationContext::VAL() {
  return getToken(KotlinParser::VAL, 0);
}

tree::TerminalNode* KotlinParser::PropertyDeclarationContext::VAR() {
  return getToken(KotlinParser::VAR, 0);
}

KotlinParser::ModifiersContext* KotlinParser::PropertyDeclarationContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

KotlinParser::TypeParametersContext* KotlinParser::PropertyDeclarationContext::typeParameters() {
  return getRuleContext<KotlinParser::TypeParametersContext>(0);
}

KotlinParser::ReceiverTypeContext* KotlinParser::PropertyDeclarationContext::receiverType() {
  return getRuleContext<KotlinParser::ReceiverTypeContext>(0);
}

tree::TerminalNode* KotlinParser::PropertyDeclarationContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}

KotlinParser::TypeConstraintsContext* KotlinParser::PropertyDeclarationContext::typeConstraints() {
  return getRuleContext<KotlinParser::TypeConstraintsContext>(0);
}

tree::TerminalNode* KotlinParser::PropertyDeclarationContext::SEMICOLON() {
  return getToken(KotlinParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::PropertyDeclarationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::PropertyDeclarationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::MultiVariableDeclarationContext* KotlinParser::PropertyDeclarationContext::multiVariableDeclaration() {
  return getRuleContext<KotlinParser::MultiVariableDeclarationContext>(0);
}

KotlinParser::VariableDeclarationContext* KotlinParser::PropertyDeclarationContext::variableDeclaration() {
  return getRuleContext<KotlinParser::VariableDeclarationContext>(0);
}

tree::TerminalNode* KotlinParser::PropertyDeclarationContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::ExpressionContext* KotlinParser::PropertyDeclarationContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

KotlinParser::PropertyDelegateContext* KotlinParser::PropertyDeclarationContext::propertyDelegate() {
  return getRuleContext<KotlinParser::PropertyDelegateContext>(0);
}

KotlinParser::GetterContext* KotlinParser::PropertyDeclarationContext::getter() {
  return getRuleContext<KotlinParser::GetterContext>(0);
}

KotlinParser::SetterContext* KotlinParser::PropertyDeclarationContext::setter() {
  return getRuleContext<KotlinParser::SetterContext>(0);
}

KotlinParser::SemiContext* KotlinParser::PropertyDeclarationContext::semi() {
  return getRuleContext<KotlinParser::SemiContext>(0);
}


size_t KotlinParser::PropertyDeclarationContext::getRuleIndex() const {
  return KotlinParser::RulePropertyDeclaration;
}

void KotlinParser::PropertyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyDeclaration(this);
}

void KotlinParser::PropertyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyDeclaration(this);
}

KotlinParser::PropertyDeclarationContext* KotlinParser::propertyDeclaration() {
  PropertyDeclarationContext *_localctx = _tracker.createInstance<PropertyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 70, KotlinParser::RulePropertyDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(1181);
      modifiers();
    }
    setState(1184);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::VAL

    || _la == KotlinParser::VAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1192);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
    case 1: {
      setState(1188);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1185);
        match(KotlinParser::NL);
        setState(1190);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1191);
      typeParameters();
      break;
    }

    default:
      break;
    }
    setState(1209);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      setState(1197);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1194);
        match(KotlinParser::NL);
        setState(1199);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1200);
      receiverType();
      setState(1204);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1201);
        match(KotlinParser::NL);
        setState(1206);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1207);
      match(KotlinParser::DOT);
      break;
    }

    default:
      break;
    }

    setState(1214);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1211);
        match(KotlinParser::NL); 
      }
      setState(1216);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
    }
    setState(1219);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LPAREN: {
        setState(1217);
        multiVariableDeclaration();
        break;
      }

      case KotlinParser::NL:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(1218);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1228);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx)) {
    case 1: {
      setState(1224);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1221);
        match(KotlinParser::NL);
        setState(1226);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1227);
      typeConstraints();
      break;
    }

    default:
      break;
    }
    setState(1247);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1233);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1230);
        match(KotlinParser::NL);
        setState(1235);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1245);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case KotlinParser::ASSIGNMENT: {
          setState(1236);
          match(KotlinParser::ASSIGNMENT);
          setState(1240);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(1237);
            match(KotlinParser::NL);
            setState(1242);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(1243);
          expression();
          break;
        }

        case KotlinParser::BY: {
          setState(1244);
          propertyDelegate();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
    setState(1255);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
    case 1: {
      setState(1250); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(1249);
        match(KotlinParser::NL);
        setState(1252); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == KotlinParser::NL);
      setState(1254);
      match(KotlinParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
    setState(1260);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1257);
        match(KotlinParser::NL); 
      }
      setState(1262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    }
    setState(1293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      setState(1264);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
      case 1: {
        setState(1263);
        getter();
        break;
      }

      default:
        break;
      }
      setState(1276);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
      case 1: {
        setState(1269);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1266);
            match(KotlinParser::NL); 
          }
          setState(1271);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx);
        }
        setState(1273);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - -1) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - -1)) & ((1ULL << (KotlinParser::EOF - -1))
          | (1ULL << (KotlinParser::NL - -1))
          | (1ULL << (KotlinParser::SEMICOLON - -1)))) != 0)) {
          setState(1272);
          semi();
        }
        setState(1275);
        setter();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(1279);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
      case 1: {
        setState(1278);
        setter();
        break;
      }

      default:
        break;
      }
      setState(1291);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
      case 1: {
        setState(1284);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1281);
            match(KotlinParser::NL); 
          }
          setState(1286);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx);
        }
        setState(1288);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - -1) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - -1)) & ((1ULL << (KotlinParser::EOF - -1))
          | (1ULL << (KotlinParser::NL - -1))
          | (1ULL << (KotlinParser::SEMICOLON - -1)))) != 0)) {
          setState(1287);
          semi();
        }
        setState(1290);
        getter();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyDelegateContext ------------------------------------------------------------------

KotlinParser::PropertyDelegateContext::PropertyDelegateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PropertyDelegateContext::BY() {
  return getToken(KotlinParser::BY, 0);
}

KotlinParser::ExpressionContext* KotlinParser::PropertyDelegateContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::PropertyDelegateContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::PropertyDelegateContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::PropertyDelegateContext::getRuleIndex() const {
  return KotlinParser::RulePropertyDelegate;
}

void KotlinParser::PropertyDelegateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyDelegate(this);
}

void KotlinParser::PropertyDelegateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyDelegate(this);
}

KotlinParser::PropertyDelegateContext* KotlinParser::propertyDelegate() {
  PropertyDelegateContext *_localctx = _tracker.createInstance<PropertyDelegateContext>(_ctx, getState());
  enterRule(_localctx, 72, KotlinParser::RulePropertyDelegate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1295);
    match(KotlinParser::BY);
    setState(1299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1296);
      match(KotlinParser::NL);
      setState(1301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1302);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetterContext ------------------------------------------------------------------

KotlinParser::GetterContext::GetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::GetterContext::GET() {
  return getToken(KotlinParser::GET, 0);
}

KotlinParser::ModifiersContext* KotlinParser::GetterContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

tree::TerminalNode* KotlinParser::GetterContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::GetterContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

KotlinParser::FunctionBodyContext* KotlinParser::GetterContext::functionBody() {
  return getRuleContext<KotlinParser::FunctionBodyContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::GetterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::GetterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::GetterContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::GetterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::GetterContext::getRuleIndex() const {
  return KotlinParser::RuleGetter;
}

void KotlinParser::GetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetter(this);
}

void KotlinParser::GetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetter(this);
}

KotlinParser::GetterContext* KotlinParser::getter() {
  GetterContext *_localctx = _tracker.createInstance<GetterContext>(_ctx, getState());
  enterRule(_localctx, 74, KotlinParser::RuleGetter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(1304);
      modifiers();
    }
    setState(1307);
    match(KotlinParser::GET);
    setState(1345);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      setState(1311);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1308);
        match(KotlinParser::NL);
        setState(1313);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1314);
      match(KotlinParser::LPAREN);
      setState(1318);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1315);
        match(KotlinParser::NL);
        setState(1320);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1321);
      match(KotlinParser::RPAREN);
      setState(1336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
      case 1: {
        setState(1325);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1322);
          match(KotlinParser::NL);
          setState(1327);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1328);
        match(KotlinParser::COLON);
        setState(1332);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1329);
          match(KotlinParser::NL);
          setState(1334);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1335);
        type();
        break;
      }

      default:
        break;
      }
      setState(1341);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1338);
        match(KotlinParser::NL);
        setState(1343);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1344);
      functionBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetterContext ------------------------------------------------------------------

KotlinParser::SetterContext::SetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::SetterContext::SET() {
  return getToken(KotlinParser::SET, 0);
}

KotlinParser::ModifiersContext* KotlinParser::SetterContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

tree::TerminalNode* KotlinParser::SetterContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::FunctionValueParameterWithOptionalTypeContext* KotlinParser::SetterContext::functionValueParameterWithOptionalType() {
  return getRuleContext<KotlinParser::FunctionValueParameterWithOptionalTypeContext>(0);
}

tree::TerminalNode* KotlinParser::SetterContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

KotlinParser::FunctionBodyContext* KotlinParser::SetterContext::functionBody() {
  return getRuleContext<KotlinParser::FunctionBodyContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::SetterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SetterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::SetterContext::COMMA() {
  return getToken(KotlinParser::COMMA, 0);
}

tree::TerminalNode* KotlinParser::SetterContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::SetterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::SetterContext::getRuleIndex() const {
  return KotlinParser::RuleSetter;
}

void KotlinParser::SetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetter(this);
}

void KotlinParser::SetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetter(this);
}

KotlinParser::SetterContext* KotlinParser::setter() {
  SetterContext *_localctx = _tracker.createInstance<SetterContext>(_ctx, getState());
  enterRule(_localctx, 76, KotlinParser::RuleSetter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(1347);
      modifiers();
    }
    setState(1350);
    match(KotlinParser::SET);
    setState(1405);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      setState(1354);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1351);
        match(KotlinParser::NL);
        setState(1356);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1357);
      match(KotlinParser::LPAREN);
      setState(1361);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1358);
        match(KotlinParser::NL);
        setState(1363);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1364);
      functionValueParameterWithOptionalType();
      setState(1372);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
      case 1: {
        setState(1368);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1365);
          match(KotlinParser::NL);
          setState(1370);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1371);
        match(KotlinParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(1377);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1374);
        match(KotlinParser::NL);
        setState(1379);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1380);
      match(KotlinParser::RPAREN);
      setState(1395);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
      case 1: {
        setState(1384);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1381);
          match(KotlinParser::NL);
          setState(1386);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1387);
        match(KotlinParser::COLON);
        setState(1391);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1388);
          match(KotlinParser::NL);
          setState(1393);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1394);
        type();
        break;
      }

      default:
        break;
      }
      setState(1400);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1397);
        match(KotlinParser::NL);
        setState(1402);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1403);
      functionBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersWithOptionalTypeContext ------------------------------------------------------------------

KotlinParser::ParametersWithOptionalTypeContext::ParametersWithOptionalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParametersWithOptionalTypeContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::ParametersWithOptionalTypeContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParametersWithOptionalTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParametersWithOptionalTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::FunctionValueParameterWithOptionalTypeContext *> KotlinParser::ParametersWithOptionalTypeContext::functionValueParameterWithOptionalType() {
  return getRuleContexts<KotlinParser::FunctionValueParameterWithOptionalTypeContext>();
}

KotlinParser::FunctionValueParameterWithOptionalTypeContext* KotlinParser::ParametersWithOptionalTypeContext::functionValueParameterWithOptionalType(size_t i) {
  return getRuleContext<KotlinParser::FunctionValueParameterWithOptionalTypeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::ParametersWithOptionalTypeContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::ParametersWithOptionalTypeContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::ParametersWithOptionalTypeContext::getRuleIndex() const {
  return KotlinParser::RuleParametersWithOptionalType;
}

void KotlinParser::ParametersWithOptionalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersWithOptionalType(this);
}

void KotlinParser::ParametersWithOptionalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersWithOptionalType(this);
}

KotlinParser::ParametersWithOptionalTypeContext* KotlinParser::parametersWithOptionalType() {
  ParametersWithOptionalTypeContext *_localctx = _tracker.createInstance<ParametersWithOptionalTypeContext>(_ctx, getState());
  enterRule(_localctx, 78, KotlinParser::RuleParametersWithOptionalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1407);
    match(KotlinParser::LPAREN);
    setState(1411);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1408);
        match(KotlinParser::NL); 
      }
      setState(1413);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx);
    }
    setState(1443);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 40) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 40)) & ((1ULL << (KotlinParser::AT_NO_WS - 40))
      | (1ULL << (KotlinParser::AT_PRE_WS - 40))
      | (1ULL << (KotlinParser::FILE - 40))
      | (1ULL << (KotlinParser::FIELD - 40))
      | (1ULL << (KotlinParser::PROPERTY - 40))
      | (1ULL << (KotlinParser::GET - 40))
      | (1ULL << (KotlinParser::SET - 40))
      | (1ULL << (KotlinParser::RECEIVER - 40))
      | (1ULL << (KotlinParser::PARAM - 40))
      | (1ULL << (KotlinParser::SETPARAM - 40))
      | (1ULL << (KotlinParser::DELEGATE - 40))
      | (1ULL << (KotlinParser::IMPORT - 40))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 40))
      | (1ULL << (KotlinParser::BY - 40))
      | (1ULL << (KotlinParser::COMPANION - 40))
      | (1ULL << (KotlinParser::INIT - 40))
      | (1ULL << (KotlinParser::WHERE - 40))
      | (1ULL << (KotlinParser::CATCH - 40))
      | (1ULL << (KotlinParser::FINALLY - 40)))) != 0) || ((((_la - 105) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 105)) & ((1ULL << (KotlinParser::OUT - 105))
      | (1ULL << (KotlinParser::DYNAMIC - 105))
      | (1ULL << (KotlinParser::PUBLIC - 105))
      | (1ULL << (KotlinParser::PRIVATE - 105))
      | (1ULL << (KotlinParser::PROTECTED - 105))
      | (1ULL << (KotlinParser::INTERNAL - 105))
      | (1ULL << (KotlinParser::ENUM - 105))
      | (1ULL << (KotlinParser::SEALED - 105))
      | (1ULL << (KotlinParser::ANNOTATION - 105))
      | (1ULL << (KotlinParser::DATA - 105))
      | (1ULL << (KotlinParser::INNER - 105))
      | (1ULL << (KotlinParser::VALUE - 105))
      | (1ULL << (KotlinParser::TAILREC - 105))
      | (1ULL << (KotlinParser::OPERATOR - 105))
      | (1ULL << (KotlinParser::INLINE - 105))
      | (1ULL << (KotlinParser::INFIX - 105))
      | (1ULL << (KotlinParser::EXTERNAL - 105))
      | (1ULL << (KotlinParser::SUSPEND - 105))
      | (1ULL << (KotlinParser::OVERRIDE - 105))
      | (1ULL << (KotlinParser::ABSTRACT - 105))
      | (1ULL << (KotlinParser::FINAL - 105))
      | (1ULL << (KotlinParser::OPEN - 105))
      | (1ULL << (KotlinParser::CONST - 105))
      | (1ULL << (KotlinParser::LATEINIT - 105))
      | (1ULL << (KotlinParser::VARARG - 105))
      | (1ULL << (KotlinParser::NOINLINE - 105))
      | (1ULL << (KotlinParser::CROSSINLINE - 105))
      | (1ULL << (KotlinParser::REIFIED - 105))
      | (1ULL << (KotlinParser::EXPECT - 105))
      | (1ULL << (KotlinParser::ACTUAL - 105))
      | (1ULL << (KotlinParser::Identifier - 105)))) != 0)) {
      setState(1414);
      functionValueParameterWithOptionalType();
      setState(1431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1418);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(1415);
            match(KotlinParser::NL);
            setState(1420);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(1421);
          match(KotlinParser::COMMA);
          setState(1425);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(1422);
            match(KotlinParser::NL);
            setState(1427);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(1428);
          functionValueParameterWithOptionalType(); 
        }
        setState(1433);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx);
      }
      setState(1441);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
      case 1: {
        setState(1437);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1434);
          match(KotlinParser::NL);
          setState(1439);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1440);
        match(KotlinParser::COMMA);
        break;
      }

      default:
        break;
      }
    }
    setState(1448);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1445);
      match(KotlinParser::NL);
      setState(1450);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1451);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionValueParameterWithOptionalTypeContext ------------------------------------------------------------------

KotlinParser::FunctionValueParameterWithOptionalTypeContext::FunctionValueParameterWithOptionalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ParameterWithOptionalTypeContext* KotlinParser::FunctionValueParameterWithOptionalTypeContext::parameterWithOptionalType() {
  return getRuleContext<KotlinParser::ParameterWithOptionalTypeContext>(0);
}

KotlinParser::ParameterModifiersContext* KotlinParser::FunctionValueParameterWithOptionalTypeContext::parameterModifiers() {
  return getRuleContext<KotlinParser::ParameterModifiersContext>(0);
}

tree::TerminalNode* KotlinParser::FunctionValueParameterWithOptionalTypeContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::ExpressionContext* KotlinParser::FunctionValueParameterWithOptionalTypeContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionValueParameterWithOptionalTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionValueParameterWithOptionalTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::FunctionValueParameterWithOptionalTypeContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionValueParameterWithOptionalType;
}

void KotlinParser::FunctionValueParameterWithOptionalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionValueParameterWithOptionalType(this);
}

void KotlinParser::FunctionValueParameterWithOptionalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionValueParameterWithOptionalType(this);
}

KotlinParser::FunctionValueParameterWithOptionalTypeContext* KotlinParser::functionValueParameterWithOptionalType() {
  FunctionValueParameterWithOptionalTypeContext *_localctx = _tracker.createInstance<FunctionValueParameterWithOptionalTypeContext>(_ctx, getState());
  enterRule(_localctx, 80, KotlinParser::RuleFunctionValueParameterWithOptionalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1454);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      setState(1453);
      parameterModifiers();
      break;
    }

    default:
      break;
    }
    setState(1456);
    parameterWithOptionalType();
    setState(1471);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
    case 1: {
      setState(1460);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1457);
        match(KotlinParser::NL);
        setState(1462);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1463);
      match(KotlinParser::ASSIGNMENT);
      setState(1467);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1464);
        match(KotlinParser::NL);
        setState(1469);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1470);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterWithOptionalTypeContext ------------------------------------------------------------------

KotlinParser::ParameterWithOptionalTypeContext::ParameterWithOptionalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ParameterWithOptionalTypeContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParameterWithOptionalTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParameterWithOptionalTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::ParameterWithOptionalTypeContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::ParameterWithOptionalTypeContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}


size_t KotlinParser::ParameterWithOptionalTypeContext::getRuleIndex() const {
  return KotlinParser::RuleParameterWithOptionalType;
}

void KotlinParser::ParameterWithOptionalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterWithOptionalType(this);
}

void KotlinParser::ParameterWithOptionalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterWithOptionalType(this);
}

KotlinParser::ParameterWithOptionalTypeContext* KotlinParser::parameterWithOptionalType() {
  ParameterWithOptionalTypeContext *_localctx = _tracker.createInstance<ParameterWithOptionalTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, KotlinParser::RuleParameterWithOptionalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1473);
    simpleIdentifier();
    setState(1477);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1474);
        match(KotlinParser::NL); 
      }
      setState(1479);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    }
    setState(1488);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::COLON) {
      setState(1480);
      match(KotlinParser::COLON);
      setState(1484);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1481);
        match(KotlinParser::NL);
        setState(1486);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1487);
      type();
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

KotlinParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ParameterContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::ParameterContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::ParameterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParameterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParameterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ParameterContext::getRuleIndex() const {
  return KotlinParser::RuleParameter;
}

void KotlinParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void KotlinParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

KotlinParser::ParameterContext* KotlinParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 84, KotlinParser::RuleParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1490);
    simpleIdentifier();
    setState(1494);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1491);
      match(KotlinParser::NL);
      setState(1496);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1497);
    match(KotlinParser::COLON);
    setState(1501);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1498);
      match(KotlinParser::NL);
      setState(1503);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1504);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectDeclarationContext ------------------------------------------------------------------

KotlinParser::ObjectDeclarationContext::ObjectDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ObjectDeclarationContext::OBJECT() {
  return getToken(KotlinParser::OBJECT, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ObjectDeclarationContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::ModifiersContext* KotlinParser::ObjectDeclarationContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ObjectDeclarationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ObjectDeclarationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::ObjectDeclarationContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::DelegationSpecifiersContext* KotlinParser::ObjectDeclarationContext::delegationSpecifiers() {
  return getRuleContext<KotlinParser::DelegationSpecifiersContext>(0);
}

KotlinParser::ClassBodyContext* KotlinParser::ObjectDeclarationContext::classBody() {
  return getRuleContext<KotlinParser::ClassBodyContext>(0);
}


size_t KotlinParser::ObjectDeclarationContext::getRuleIndex() const {
  return KotlinParser::RuleObjectDeclaration;
}

void KotlinParser::ObjectDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectDeclaration(this);
}

void KotlinParser::ObjectDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectDeclaration(this);
}

KotlinParser::ObjectDeclarationContext* KotlinParser::objectDeclaration() {
  ObjectDeclarationContext *_localctx = _tracker.createInstance<ObjectDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 86, KotlinParser::RuleObjectDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(1506);
      modifiers();
    }
    setState(1509);
    match(KotlinParser::OBJECT);
    setState(1513);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1510);
      match(KotlinParser::NL);
      setState(1515);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1516);
    simpleIdentifier();
    setState(1531);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
    case 1: {
      setState(1520);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1517);
        match(KotlinParser::NL);
        setState(1522);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1523);
      match(KotlinParser::COLON);
      setState(1527);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1524);
          match(KotlinParser::NL); 
        }
        setState(1529);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx);
      }
      setState(1530);
      delegationSpecifiers();
      break;
    }

    default:
      break;
    }
    setState(1540);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
    case 1: {
      setState(1536);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1533);
        match(KotlinParser::NL);
        setState(1538);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1539);
      classBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SecondaryConstructorContext ------------------------------------------------------------------

KotlinParser::SecondaryConstructorContext::SecondaryConstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::SecondaryConstructorContext::CONSTRUCTOR() {
  return getToken(KotlinParser::CONSTRUCTOR, 0);
}

KotlinParser::FunctionValueParametersContext* KotlinParser::SecondaryConstructorContext::functionValueParameters() {
  return getRuleContext<KotlinParser::FunctionValueParametersContext>(0);
}

KotlinParser::ModifiersContext* KotlinParser::SecondaryConstructorContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::SecondaryConstructorContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SecondaryConstructorContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::SecondaryConstructorContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::ConstructorDelegationCallContext* KotlinParser::SecondaryConstructorContext::constructorDelegationCall() {
  return getRuleContext<KotlinParser::ConstructorDelegationCallContext>(0);
}

KotlinParser::BlockContext* KotlinParser::SecondaryConstructorContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}


size_t KotlinParser::SecondaryConstructorContext::getRuleIndex() const {
  return KotlinParser::RuleSecondaryConstructor;
}

void KotlinParser::SecondaryConstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSecondaryConstructor(this);
}

void KotlinParser::SecondaryConstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSecondaryConstructor(this);
}

KotlinParser::SecondaryConstructorContext* KotlinParser::secondaryConstructor() {
  SecondaryConstructorContext *_localctx = _tracker.createInstance<SecondaryConstructorContext>(_ctx, getState());
  enterRule(_localctx, 88, KotlinParser::RuleSecondaryConstructor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1543);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS || ((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107))
      | (1ULL << (KotlinParser::ENUM - 107))
      | (1ULL << (KotlinParser::SEALED - 107))
      | (1ULL << (KotlinParser::ANNOTATION - 107))
      | (1ULL << (KotlinParser::DATA - 107))
      | (1ULL << (KotlinParser::INNER - 107))
      | (1ULL << (KotlinParser::VALUE - 107))
      | (1ULL << (KotlinParser::TAILREC - 107))
      | (1ULL << (KotlinParser::OPERATOR - 107))
      | (1ULL << (KotlinParser::INLINE - 107))
      | (1ULL << (KotlinParser::INFIX - 107))
      | (1ULL << (KotlinParser::EXTERNAL - 107))
      | (1ULL << (KotlinParser::SUSPEND - 107))
      | (1ULL << (KotlinParser::OVERRIDE - 107))
      | (1ULL << (KotlinParser::ABSTRACT - 107))
      | (1ULL << (KotlinParser::FINAL - 107))
      | (1ULL << (KotlinParser::OPEN - 107))
      | (1ULL << (KotlinParser::CONST - 107))
      | (1ULL << (KotlinParser::LATEINIT - 107))
      | (1ULL << (KotlinParser::VARARG - 107))
      | (1ULL << (KotlinParser::NOINLINE - 107))
      | (1ULL << (KotlinParser::CROSSINLINE - 107))
      | (1ULL << (KotlinParser::EXPECT - 107))
      | (1ULL << (KotlinParser::ACTUAL - 107)))) != 0)) {
      setState(1542);
      modifiers();
    }
    setState(1545);
    match(KotlinParser::CONSTRUCTOR);
    setState(1549);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1546);
      match(KotlinParser::NL);
      setState(1551);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1552);
    functionValueParameters();
    setState(1567);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx)) {
    case 1: {
      setState(1556);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1553);
        match(KotlinParser::NL);
        setState(1558);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1559);
      match(KotlinParser::COLON);
      setState(1563);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1560);
        match(KotlinParser::NL);
        setState(1565);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1566);
      constructorDelegationCall();
      break;
    }

    default:
      break;
    }
    setState(1572);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1569);
        match(KotlinParser::NL); 
      }
      setState(1574);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx);
    }
    setState(1576);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::LCURL) {
      setState(1575);
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

//----------------- ConstructorDelegationCallContext ------------------------------------------------------------------

KotlinParser::ConstructorDelegationCallContext::ConstructorDelegationCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ValueArgumentsContext* KotlinParser::ConstructorDelegationCallContext::valueArguments() {
  return getRuleContext<KotlinParser::ValueArgumentsContext>(0);
}

tree::TerminalNode* KotlinParser::ConstructorDelegationCallContext::THIS() {
  return getToken(KotlinParser::THIS, 0);
}

tree::TerminalNode* KotlinParser::ConstructorDelegationCallContext::SUPER() {
  return getToken(KotlinParser::SUPER, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ConstructorDelegationCallContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ConstructorDelegationCallContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ConstructorDelegationCallContext::getRuleIndex() const {
  return KotlinParser::RuleConstructorDelegationCall;
}

void KotlinParser::ConstructorDelegationCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDelegationCall(this);
}

void KotlinParser::ConstructorDelegationCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDelegationCall(this);
}

KotlinParser::ConstructorDelegationCallContext* KotlinParser::constructorDelegationCall() {
  ConstructorDelegationCallContext *_localctx = _tracker.createInstance<ConstructorDelegationCallContext>(_ctx, getState());
  enterRule(_localctx, 90, KotlinParser::RuleConstructorDelegationCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1578);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::THIS

    || _la == KotlinParser::SUPER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1582);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1579);
      match(KotlinParser::NL);
      setState(1584);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1585);
    valueArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumClassBodyContext ------------------------------------------------------------------

KotlinParser::EnumClassBodyContext::EnumClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::EnumClassBodyContext::LCURL() {
  return getToken(KotlinParser::LCURL, 0);
}

tree::TerminalNode* KotlinParser::EnumClassBodyContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::EnumClassBodyContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::EnumClassBodyContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::EnumEntriesContext* KotlinParser::EnumClassBodyContext::enumEntries() {
  return getRuleContext<KotlinParser::EnumEntriesContext>(0);
}

tree::TerminalNode* KotlinParser::EnumClassBodyContext::SEMICOLON() {
  return getToken(KotlinParser::SEMICOLON, 0);
}

KotlinParser::ClassMemberDeclarationsContext* KotlinParser::EnumClassBodyContext::classMemberDeclarations() {
  return getRuleContext<KotlinParser::ClassMemberDeclarationsContext>(0);
}


size_t KotlinParser::EnumClassBodyContext::getRuleIndex() const {
  return KotlinParser::RuleEnumClassBody;
}

void KotlinParser::EnumClassBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumClassBody(this);
}

void KotlinParser::EnumClassBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumClassBody(this);
}

KotlinParser::EnumClassBodyContext* KotlinParser::enumClassBody() {
  EnumClassBodyContext *_localctx = _tracker.createInstance<EnumClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 92, KotlinParser::RuleEnumClassBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1587);
    match(KotlinParser::LCURL);
    setState(1591);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1588);
        match(KotlinParser::NL); 
      }
      setState(1593);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx);
    }
    setState(1595);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 40) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 40)) & ((1ULL << (KotlinParser::AT_NO_WS - 40))
      | (1ULL << (KotlinParser::AT_PRE_WS - 40))
      | (1ULL << (KotlinParser::FILE - 40))
      | (1ULL << (KotlinParser::FIELD - 40))
      | (1ULL << (KotlinParser::PROPERTY - 40))
      | (1ULL << (KotlinParser::GET - 40))
      | (1ULL << (KotlinParser::SET - 40))
      | (1ULL << (KotlinParser::RECEIVER - 40))
      | (1ULL << (KotlinParser::PARAM - 40))
      | (1ULL << (KotlinParser::SETPARAM - 40))
      | (1ULL << (KotlinParser::DELEGATE - 40))
      | (1ULL << (KotlinParser::IMPORT - 40))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 40))
      | (1ULL << (KotlinParser::BY - 40))
      | (1ULL << (KotlinParser::COMPANION - 40))
      | (1ULL << (KotlinParser::INIT - 40))
      | (1ULL << (KotlinParser::WHERE - 40))
      | (1ULL << (KotlinParser::CATCH - 40))
      | (1ULL << (KotlinParser::FINALLY - 40)))) != 0) || ((((_la - 105) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 105)) & ((1ULL << (KotlinParser::OUT - 105))
      | (1ULL << (KotlinParser::DYNAMIC - 105))
      | (1ULL << (KotlinParser::PUBLIC - 105))
      | (1ULL << (KotlinParser::PRIVATE - 105))
      | (1ULL << (KotlinParser::PROTECTED - 105))
      | (1ULL << (KotlinParser::INTERNAL - 105))
      | (1ULL << (KotlinParser::ENUM - 105))
      | (1ULL << (KotlinParser::SEALED - 105))
      | (1ULL << (KotlinParser::ANNOTATION - 105))
      | (1ULL << (KotlinParser::DATA - 105))
      | (1ULL << (KotlinParser::INNER - 105))
      | (1ULL << (KotlinParser::VALUE - 105))
      | (1ULL << (KotlinParser::TAILREC - 105))
      | (1ULL << (KotlinParser::OPERATOR - 105))
      | (1ULL << (KotlinParser::INLINE - 105))
      | (1ULL << (KotlinParser::INFIX - 105))
      | (1ULL << (KotlinParser::EXTERNAL - 105))
      | (1ULL << (KotlinParser::SUSPEND - 105))
      | (1ULL << (KotlinParser::OVERRIDE - 105))
      | (1ULL << (KotlinParser::ABSTRACT - 105))
      | (1ULL << (KotlinParser::FINAL - 105))
      | (1ULL << (KotlinParser::OPEN - 105))
      | (1ULL << (KotlinParser::CONST - 105))
      | (1ULL << (KotlinParser::LATEINIT - 105))
      | (1ULL << (KotlinParser::VARARG - 105))
      | (1ULL << (KotlinParser::NOINLINE - 105))
      | (1ULL << (KotlinParser::CROSSINLINE - 105))
      | (1ULL << (KotlinParser::REIFIED - 105))
      | (1ULL << (KotlinParser::EXPECT - 105))
      | (1ULL << (KotlinParser::ACTUAL - 105))
      | (1ULL << (KotlinParser::Identifier - 105)))) != 0)) {
      setState(1594);
      enumEntries();
    }
    setState(1611);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx)) {
    case 1: {
      setState(1600);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1597);
        match(KotlinParser::NL);
        setState(1602);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1603);
      match(KotlinParser::SEMICOLON);
      setState(1607);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 227, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1604);
          match(KotlinParser::NL); 
        }
        setState(1609);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 227, _ctx);
      }
      setState(1610);
      classMemberDeclarations();
      break;
    }

    default:
      break;
    }
    setState(1616);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1613);
      match(KotlinParser::NL);
      setState(1618);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1619);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumEntriesContext ------------------------------------------------------------------

KotlinParser::EnumEntriesContext::EnumEntriesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::EnumEntryContext *> KotlinParser::EnumEntriesContext::enumEntry() {
  return getRuleContexts<KotlinParser::EnumEntryContext>();
}

KotlinParser::EnumEntryContext* KotlinParser::EnumEntriesContext::enumEntry(size_t i) {
  return getRuleContext<KotlinParser::EnumEntryContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::EnumEntriesContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::EnumEntriesContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}

std::vector<tree::TerminalNode *> KotlinParser::EnumEntriesContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::EnumEntriesContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::EnumEntriesContext::getRuleIndex() const {
  return KotlinParser::RuleEnumEntries;
}

void KotlinParser::EnumEntriesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumEntries(this);
}

void KotlinParser::EnumEntriesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumEntries(this);
}

KotlinParser::EnumEntriesContext* KotlinParser::enumEntries() {
  EnumEntriesContext *_localctx = _tracker.createInstance<EnumEntriesContext>(_ctx, getState());
  enterRule(_localctx, 94, KotlinParser::RuleEnumEntries);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1621);
    enumEntry();
    setState(1638);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1625);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1622);
          match(KotlinParser::NL);
          setState(1627);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1628);
        match(KotlinParser::COMMA);
        setState(1632);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1629);
          match(KotlinParser::NL);
          setState(1634);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1635);
        enumEntry(); 
      }
      setState(1640);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx);
    }
    setState(1644);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1641);
        match(KotlinParser::NL); 
      }
      setState(1646);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx);
    }
    setState(1648);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::COMMA) {
      setState(1647);
      match(KotlinParser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumEntryContext ------------------------------------------------------------------

KotlinParser::EnumEntryContext::EnumEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::EnumEntryContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::ModifiersContext* KotlinParser::EnumEntryContext::modifiers() {
  return getRuleContext<KotlinParser::ModifiersContext>(0);
}

KotlinParser::ValueArgumentsContext* KotlinParser::EnumEntryContext::valueArguments() {
  return getRuleContext<KotlinParser::ValueArgumentsContext>(0);
}

KotlinParser::ClassBodyContext* KotlinParser::EnumEntryContext::classBody() {
  return getRuleContext<KotlinParser::ClassBodyContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::EnumEntryContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::EnumEntryContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::EnumEntryContext::getRuleIndex() const {
  return KotlinParser::RuleEnumEntry;
}

void KotlinParser::EnumEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumEntry(this);
}

void KotlinParser::EnumEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumEntry(this);
}

KotlinParser::EnumEntryContext* KotlinParser::enumEntry() {
  EnumEntryContext *_localctx = _tracker.createInstance<EnumEntryContext>(_ctx, getState());
  enterRule(_localctx, 96, KotlinParser::RuleEnumEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1657);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 236, _ctx)) {
    case 1: {
      setState(1650);
      modifiers();
      setState(1654);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1651);
        match(KotlinParser::NL);
        setState(1656);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
    setState(1659);
    simpleIdentifier();
    setState(1667);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 238, _ctx)) {
    case 1: {
      setState(1663);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1660);
        match(KotlinParser::NL);
        setState(1665);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1666);
      valueArguments();
      break;
    }

    default:
      break;
    }
    setState(1676);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      setState(1672);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1669);
        match(KotlinParser::NL);
        setState(1674);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1675);
      classBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

KotlinParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ParenthesizedTypeContext* KotlinParser::TypeContext::parenthesizedType() {
  return getRuleContext<KotlinParser::ParenthesizedTypeContext>(0);
}

KotlinParser::NullableTypeContext* KotlinParser::TypeContext::nullableType() {
  return getRuleContext<KotlinParser::NullableTypeContext>(0);
}

KotlinParser::TypeReferenceContext* KotlinParser::TypeContext::typeReference() {
  return getRuleContext<KotlinParser::TypeReferenceContext>(0);
}

KotlinParser::FunctionTypeContext* KotlinParser::TypeContext::functionType() {
  return getRuleContext<KotlinParser::FunctionTypeContext>(0);
}

KotlinParser::TypeModifiersContext* KotlinParser::TypeContext::typeModifiers() {
  return getRuleContext<KotlinParser::TypeModifiersContext>(0);
}


size_t KotlinParser::TypeContext::getRuleIndex() const {
  return KotlinParser::RuleType;
}

void KotlinParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void KotlinParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

KotlinParser::TypeContext* KotlinParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 98, KotlinParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1679);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      setState(1678);
      typeModifiers();
      break;
    }

    default:
      break;
    }
    setState(1685);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx)) {
    case 1: {
      setState(1681);
      parenthesizedType();
      break;
    }

    case 2: {
      setState(1682);
      nullableType();
      break;
    }

    case 3: {
      setState(1683);
      typeReference();
      break;
    }

    case 4: {
      setState(1684);
      functionType();
      break;
    }

    default:
      break;
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

KotlinParser::TypeReferenceContext::TypeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::UserTypeContext* KotlinParser::TypeReferenceContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}

tree::TerminalNode* KotlinParser::TypeReferenceContext::DYNAMIC() {
  return getToken(KotlinParser::DYNAMIC, 0);
}


size_t KotlinParser::TypeReferenceContext::getRuleIndex() const {
  return KotlinParser::RuleTypeReference;
}

void KotlinParser::TypeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeReference(this);
}

void KotlinParser::TypeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeReference(this);
}

KotlinParser::TypeReferenceContext* KotlinParser::typeReference() {
  TypeReferenceContext *_localctx = _tracker.createInstance<TypeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 100, KotlinParser::RuleTypeReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1689);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 243, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1687);
      userType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1688);
      match(KotlinParser::DYNAMIC);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullableTypeContext ------------------------------------------------------------------

KotlinParser::NullableTypeContext::NullableTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::TypeReferenceContext* KotlinParser::NullableTypeContext::typeReference() {
  return getRuleContext<KotlinParser::TypeReferenceContext>(0);
}

KotlinParser::ParenthesizedTypeContext* KotlinParser::NullableTypeContext::parenthesizedType() {
  return getRuleContext<KotlinParser::ParenthesizedTypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::NullableTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::NullableTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::QuestContext *> KotlinParser::NullableTypeContext::quest() {
  return getRuleContexts<KotlinParser::QuestContext>();
}

KotlinParser::QuestContext* KotlinParser::NullableTypeContext::quest(size_t i) {
  return getRuleContext<KotlinParser::QuestContext>(i);
}


size_t KotlinParser::NullableTypeContext::getRuleIndex() const {
  return KotlinParser::RuleNullableType;
}

void KotlinParser::NullableTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullableType(this);
}

void KotlinParser::NullableTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullableType(this);
}

KotlinParser::NullableTypeContext* KotlinParser::nullableType() {
  NullableTypeContext *_localctx = _tracker.createInstance<NullableTypeContext>(_ctx, getState());
  enterRule(_localctx, 102, KotlinParser::RuleNullableType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1693);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(1691);
        typeReference();
        break;
      }

      case KotlinParser::LPAREN: {
        setState(1692);
        parenthesizedType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1698);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1695);
      match(KotlinParser::NL);
      setState(1700);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1702); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1701);
              quest();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1704); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuestContext ------------------------------------------------------------------

KotlinParser::QuestContext::QuestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::QuestContext::QUEST_NO_WS() {
  return getToken(KotlinParser::QUEST_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::QuestContext::QUEST_WS() {
  return getToken(KotlinParser::QUEST_WS, 0);
}


size_t KotlinParser::QuestContext::getRuleIndex() const {
  return KotlinParser::RuleQuest;
}

void KotlinParser::QuestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuest(this);
}

void KotlinParser::QuestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuest(this);
}

KotlinParser::QuestContext* KotlinParser::quest() {
  QuestContext *_localctx = _tracker.createInstance<QuestContext>(_ctx, getState());
  enterRule(_localctx, 104, KotlinParser::RuleQuest);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1706);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::QUEST_WS

    || _la == KotlinParser::QUEST_NO_WS)) {
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

//----------------- UserTypeContext ------------------------------------------------------------------

KotlinParser::UserTypeContext::UserTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::SimpleUserTypeContext *> KotlinParser::UserTypeContext::simpleUserType() {
  return getRuleContexts<KotlinParser::SimpleUserTypeContext>();
}

KotlinParser::SimpleUserTypeContext* KotlinParser::UserTypeContext::simpleUserType(size_t i) {
  return getRuleContext<KotlinParser::SimpleUserTypeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::UserTypeContext::DOT() {
  return getTokens(KotlinParser::DOT);
}

tree::TerminalNode* KotlinParser::UserTypeContext::DOT(size_t i) {
  return getToken(KotlinParser::DOT, i);
}

std::vector<tree::TerminalNode *> KotlinParser::UserTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::UserTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::UserTypeContext::getRuleIndex() const {
  return KotlinParser::RuleUserType;
}

void KotlinParser::UserTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserType(this);
}

void KotlinParser::UserTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserType(this);
}

KotlinParser::UserTypeContext* KotlinParser::userType() {
  UserTypeContext *_localctx = _tracker.createInstance<UserTypeContext>(_ctx, getState());
  enterRule(_localctx, 106, KotlinParser::RuleUserType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1708);
    simpleUserType();
    setState(1725);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1712);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1709);
          match(KotlinParser::NL);
          setState(1714);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1715);
        match(KotlinParser::DOT);
        setState(1719);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1716);
          match(KotlinParser::NL);
          setState(1721);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1722);
        simpleUserType(); 
      }
      setState(1727);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleUserTypeContext ------------------------------------------------------------------

KotlinParser::SimpleUserTypeContext::SimpleUserTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::SimpleUserTypeContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::TypeArgumentsContext* KotlinParser::SimpleUserTypeContext::typeArguments() {
  return getRuleContext<KotlinParser::TypeArgumentsContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::SimpleUserTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SimpleUserTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::SimpleUserTypeContext::getRuleIndex() const {
  return KotlinParser::RuleSimpleUserType;
}

void KotlinParser::SimpleUserTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleUserType(this);
}

void KotlinParser::SimpleUserTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleUserType(this);
}

KotlinParser::SimpleUserTypeContext* KotlinParser::simpleUserType() {
  SimpleUserTypeContext *_localctx = _tracker.createInstance<SimpleUserTypeContext>(_ctx, getState());
  enterRule(_localctx, 108, KotlinParser::RuleSimpleUserType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1728);
    simpleIdentifier();
    setState(1736);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
    case 1: {
      setState(1732);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1729);
        match(KotlinParser::NL);
        setState(1734);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1735);
      typeArguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeProjectionContext ------------------------------------------------------------------

KotlinParser::TypeProjectionContext::TypeProjectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::TypeContext* KotlinParser::TypeProjectionContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

KotlinParser::TypeProjectionModifiersContext* KotlinParser::TypeProjectionContext::typeProjectionModifiers() {
  return getRuleContext<KotlinParser::TypeProjectionModifiersContext>(0);
}

tree::TerminalNode* KotlinParser::TypeProjectionContext::MULT() {
  return getToken(KotlinParser::MULT, 0);
}


size_t KotlinParser::TypeProjectionContext::getRuleIndex() const {
  return KotlinParser::RuleTypeProjection;
}

void KotlinParser::TypeProjectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeProjection(this);
}

void KotlinParser::TypeProjectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeProjection(this);
}

KotlinParser::TypeProjectionContext* KotlinParser::typeProjection() {
  TypeProjectionContext *_localctx = _tracker.createInstance<TypeProjectionContext>(_ctx, getState());
  enterRule(_localctx, 110, KotlinParser::RuleTypeProjection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1743);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LPAREN:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::IN:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1739);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
        case 1: {
          setState(1738);
          typeProjectionModifiers();
          break;
        }

        default:
          break;
        }
        setState(1741);
        type();
        break;
      }

      case KotlinParser::MULT: {
        enterOuterAlt(_localctx, 2);
        setState(1742);
        match(KotlinParser::MULT);
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

//----------------- TypeProjectionModifiersContext ------------------------------------------------------------------

KotlinParser::TypeProjectionModifiersContext::TypeProjectionModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::TypeProjectionModifierContext *> KotlinParser::TypeProjectionModifiersContext::typeProjectionModifier() {
  return getRuleContexts<KotlinParser::TypeProjectionModifierContext>();
}

KotlinParser::TypeProjectionModifierContext* KotlinParser::TypeProjectionModifiersContext::typeProjectionModifier(size_t i) {
  return getRuleContext<KotlinParser::TypeProjectionModifierContext>(i);
}


size_t KotlinParser::TypeProjectionModifiersContext::getRuleIndex() const {
  return KotlinParser::RuleTypeProjectionModifiers;
}

void KotlinParser::TypeProjectionModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeProjectionModifiers(this);
}

void KotlinParser::TypeProjectionModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeProjectionModifiers(this);
}

KotlinParser::TypeProjectionModifiersContext* KotlinParser::typeProjectionModifiers() {
  TypeProjectionModifiersContext *_localctx = _tracker.createInstance<TypeProjectionModifiersContext>(_ctx, getState());
  enterRule(_localctx, 112, KotlinParser::RuleTypeProjectionModifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1746); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1745);
              typeProjectionModifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1748); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 254, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeProjectionModifierContext ------------------------------------------------------------------

KotlinParser::TypeProjectionModifierContext::TypeProjectionModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::VarianceModifierContext* KotlinParser::TypeProjectionModifierContext::varianceModifier() {
  return getRuleContext<KotlinParser::VarianceModifierContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeProjectionModifierContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeProjectionModifierContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::AnnotationContext* KotlinParser::TypeProjectionModifierContext::annotation() {
  return getRuleContext<KotlinParser::AnnotationContext>(0);
}


size_t KotlinParser::TypeProjectionModifierContext::getRuleIndex() const {
  return KotlinParser::RuleTypeProjectionModifier;
}

void KotlinParser::TypeProjectionModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeProjectionModifier(this);
}

void KotlinParser::TypeProjectionModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeProjectionModifier(this);
}

KotlinParser::TypeProjectionModifierContext* KotlinParser::typeProjectionModifier() {
  TypeProjectionModifierContext *_localctx = _tracker.createInstance<TypeProjectionModifierContext>(_ctx, getState());
  enterRule(_localctx, 114, KotlinParser::RuleTypeProjectionModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1758);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::IN:
      case KotlinParser::OUT: {
        enterOuterAlt(_localctx, 1);
        setState(1750);
        varianceModifier();
        setState(1754);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1751);
          match(KotlinParser::NL);
          setState(1756);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS: {
        enterOuterAlt(_localctx, 2);
        setState(1757);
        annotation();
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

//----------------- FunctionTypeContext ------------------------------------------------------------------

KotlinParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::FunctionTypeParametersContext* KotlinParser::FunctionTypeContext::functionTypeParameters() {
  return getRuleContext<KotlinParser::FunctionTypeParametersContext>(0);
}

tree::TerminalNode* KotlinParser::FunctionTypeContext::ARROW() {
  return getToken(KotlinParser::ARROW, 0);
}

KotlinParser::TypeContext* KotlinParser::FunctionTypeContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

KotlinParser::ReceiverTypeContext* KotlinParser::FunctionTypeContext::receiverType() {
  return getRuleContext<KotlinParser::ReceiverTypeContext>(0);
}

tree::TerminalNode* KotlinParser::FunctionTypeContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::FunctionTypeContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionType;
}

void KotlinParser::FunctionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionType(this);
}

void KotlinParser::FunctionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionType(this);
}

KotlinParser::FunctionTypeContext* KotlinParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 116, KotlinParser::RuleFunctionType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1774);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
    case 1: {
      setState(1760);
      receiverType();
      setState(1764);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1761);
        match(KotlinParser::NL);
        setState(1766);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1767);
      match(KotlinParser::DOT);
      setState(1771);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1768);
        match(KotlinParser::NL);
        setState(1773);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
    setState(1776);
    functionTypeParameters();
    setState(1780);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1777);
      match(KotlinParser::NL);
      setState(1782);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1783);
    match(KotlinParser::ARROW);
    setState(1787);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1784);
      match(KotlinParser::NL);
      setState(1789);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1790);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeParametersContext ------------------------------------------------------------------

KotlinParser::FunctionTypeParametersContext::FunctionTypeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FunctionTypeParametersContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::FunctionTypeParametersContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionTypeParametersContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FunctionTypeParametersContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::ParameterContext *> KotlinParser::FunctionTypeParametersContext::parameter() {
  return getRuleContexts<KotlinParser::ParameterContext>();
}

KotlinParser::ParameterContext* KotlinParser::FunctionTypeParametersContext::parameter(size_t i) {
  return getRuleContext<KotlinParser::ParameterContext>(i);
}

std::vector<KotlinParser::TypeContext *> KotlinParser::FunctionTypeParametersContext::type() {
  return getRuleContexts<KotlinParser::TypeContext>();
}

KotlinParser::TypeContext* KotlinParser::FunctionTypeParametersContext::type(size_t i) {
  return getRuleContext<KotlinParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::FunctionTypeParametersContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::FunctionTypeParametersContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::FunctionTypeParametersContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionTypeParameters;
}

void KotlinParser::FunctionTypeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionTypeParameters(this);
}

void KotlinParser::FunctionTypeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionTypeParameters(this);
}

KotlinParser::FunctionTypeParametersContext* KotlinParser::functionTypeParameters() {
  FunctionTypeParametersContext *_localctx = _tracker.createInstance<FunctionTypeParametersContext>(_ctx, getState());
  enterRule(_localctx, 118, KotlinParser::RuleFunctionTypeParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1792);
    match(KotlinParser::LPAREN);
    setState(1796);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1793);
        match(KotlinParser::NL); 
      }
      setState(1798);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx);
    }
    setState(1801);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 263, _ctx)) {
    case 1: {
      setState(1799);
      parameter();
      break;
    }

    case 2: {
      setState(1800);
      type();
      break;
    }

    default:
      break;
    }
    setState(1822);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1806);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1803);
          match(KotlinParser::NL);
          setState(1808);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1809);
        match(KotlinParser::COMMA);
        setState(1813);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(1810);
          match(KotlinParser::NL);
          setState(1815);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1818);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
        case 1: {
          setState(1816);
          parameter();
          break;
        }

        case 2: {
          setState(1817);
          type();
          break;
        }

        default:
          break;
        } 
      }
      setState(1824);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx);
    }
    setState(1832);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
    case 1: {
      setState(1828);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(1825);
        match(KotlinParser::NL);
        setState(1830);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1831);
      match(KotlinParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(1837);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1834);
      match(KotlinParser::NL);
      setState(1839);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1840);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesizedTypeContext ------------------------------------------------------------------

KotlinParser::ParenthesizedTypeContext::ParenthesizedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParenthesizedTypeContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::TypeContext* KotlinParser::ParenthesizedTypeContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

tree::TerminalNode* KotlinParser::ParenthesizedTypeContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParenthesizedTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParenthesizedTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ParenthesizedTypeContext::getRuleIndex() const {
  return KotlinParser::RuleParenthesizedType;
}

void KotlinParser::ParenthesizedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedType(this);
}

void KotlinParser::ParenthesizedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedType(this);
}

KotlinParser::ParenthesizedTypeContext* KotlinParser::parenthesizedType() {
  ParenthesizedTypeContext *_localctx = _tracker.createInstance<ParenthesizedTypeContext>(_ctx, getState());
  enterRule(_localctx, 120, KotlinParser::RuleParenthesizedType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1842);
    match(KotlinParser::LPAREN);
    setState(1846);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1843);
      match(KotlinParser::NL);
      setState(1848);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1849);
    type();
    setState(1853);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1850);
      match(KotlinParser::NL);
      setState(1855);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1856);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverTypeContext ------------------------------------------------------------------

KotlinParser::ReceiverTypeContext::ReceiverTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ParenthesizedTypeContext* KotlinParser::ReceiverTypeContext::parenthesizedType() {
  return getRuleContext<KotlinParser::ParenthesizedTypeContext>(0);
}

KotlinParser::NullableTypeContext* KotlinParser::ReceiverTypeContext::nullableType() {
  return getRuleContext<KotlinParser::NullableTypeContext>(0);
}

KotlinParser::TypeReferenceContext* KotlinParser::ReceiverTypeContext::typeReference() {
  return getRuleContext<KotlinParser::TypeReferenceContext>(0);
}

KotlinParser::TypeModifiersContext* KotlinParser::ReceiverTypeContext::typeModifiers() {
  return getRuleContext<KotlinParser::TypeModifiersContext>(0);
}


size_t KotlinParser::ReceiverTypeContext::getRuleIndex() const {
  return KotlinParser::RuleReceiverType;
}

void KotlinParser::ReceiverTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReceiverType(this);
}

void KotlinParser::ReceiverTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReceiverType(this);
}

KotlinParser::ReceiverTypeContext* KotlinParser::receiverType() {
  ReceiverTypeContext *_localctx = _tracker.createInstance<ReceiverTypeContext>(_ctx, getState());
  enterRule(_localctx, 122, KotlinParser::RuleReceiverType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1859);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
    case 1: {
      setState(1858);
      typeModifiers();
      break;
    }

    default:
      break;
    }
    setState(1864);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 274, _ctx)) {
    case 1: {
      setState(1861);
      parenthesizedType();
      break;
    }

    case 2: {
      setState(1862);
      nullableType();
      break;
    }

    case 3: {
      setState(1863);
      typeReference();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesizedUserTypeContext ------------------------------------------------------------------

KotlinParser::ParenthesizedUserTypeContext::ParenthesizedUserTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParenthesizedUserTypeContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::ParenthesizedUserTypeContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

KotlinParser::UserTypeContext* KotlinParser::ParenthesizedUserTypeContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}

KotlinParser::ParenthesizedUserTypeContext* KotlinParser::ParenthesizedUserTypeContext::parenthesizedUserType() {
  return getRuleContext<KotlinParser::ParenthesizedUserTypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParenthesizedUserTypeContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParenthesizedUserTypeContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ParenthesizedUserTypeContext::getRuleIndex() const {
  return KotlinParser::RuleParenthesizedUserType;
}

void KotlinParser::ParenthesizedUserTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedUserType(this);
}

void KotlinParser::ParenthesizedUserTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedUserType(this);
}

KotlinParser::ParenthesizedUserTypeContext* KotlinParser::parenthesizedUserType() {
  ParenthesizedUserTypeContext *_localctx = _tracker.createInstance<ParenthesizedUserTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, KotlinParser::RuleParenthesizedUserType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1866);
    match(KotlinParser::LPAREN);
    setState(1870);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1867);
      match(KotlinParser::NL);
      setState(1872);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1875);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(1873);
        userType();
        break;
      }

      case KotlinParser::LPAREN: {
        setState(1874);
        parenthesizedUserType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1880);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1877);
      match(KotlinParser::NL);
      setState(1882);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1883);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

KotlinParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::StatementContext *> KotlinParser::StatementsContext::statement() {
  return getRuleContexts<KotlinParser::StatementContext>();
}

KotlinParser::StatementContext* KotlinParser::StatementsContext::statement(size_t i) {
  return getRuleContext<KotlinParser::StatementContext>(i);
}

std::vector<KotlinParser::SemisContext *> KotlinParser::StatementsContext::semis() {
  return getRuleContexts<KotlinParser::SemisContext>();
}

KotlinParser::SemisContext* KotlinParser::StatementsContext::semis(size_t i) {
  return getRuleContext<KotlinParser::SemisContext>(i);
}


size_t KotlinParser::StatementsContext::getRuleIndex() const {
  return KotlinParser::RuleStatements;
}

void KotlinParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void KotlinParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}

KotlinParser::StatementsContext* KotlinParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 126, KotlinParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1894);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::LPAREN)
      | (1ULL << KotlinParser::LSQUARE)
      | (1ULL << KotlinParser::LCURL)
      | (1ULL << KotlinParser::ADD)
      | (1ULL << KotlinParser::SUB)
      | (1ULL << KotlinParser::INCR)
      | (1ULL << KotlinParser::DECR)
      | (1ULL << KotlinParser::EXCL_WS)
      | (1ULL << KotlinParser::EXCL_NO_WS)
      | (1ULL << KotlinParser::COLONCOLON)
      | (1ULL << KotlinParser::AT_NO_WS)
      | (1ULL << KotlinParser::AT_PRE_WS)
      | (1ULL << KotlinParser::RETURN_AT)
      | (1ULL << KotlinParser::CONTINUE_AT)
      | (1ULL << KotlinParser::BREAK_AT)
      | (1ULL << KotlinParser::THIS_AT)
      | (1ULL << KotlinParser::SUPER_AT)
      | (1ULL << KotlinParser::FILE)
      | (1ULL << KotlinParser::FIELD)
      | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
      | (1ULL << (KotlinParser::SET - 64))
      | (1ULL << (KotlinParser::RECEIVER - 64))
      | (1ULL << (KotlinParser::PARAM - 64))
      | (1ULL << (KotlinParser::SETPARAM - 64))
      | (1ULL << (KotlinParser::DELEGATE - 64))
      | (1ULL << (KotlinParser::IMPORT - 64))
      | (1ULL << (KotlinParser::CLASS - 64))
      | (1ULL << (KotlinParser::INTERFACE - 64))
      | (1ULL << (KotlinParser::FUN - 64))
      | (1ULL << (KotlinParser::OBJECT - 64))
      | (1ULL << (KotlinParser::VAL - 64))
      | (1ULL << (KotlinParser::VAR - 64))
      | (1ULL << (KotlinParser::TYPE_ALIAS - 64))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
      | (1ULL << (KotlinParser::BY - 64))
      | (1ULL << (KotlinParser::COMPANION - 64))
      | (1ULL << (KotlinParser::INIT - 64))
      | (1ULL << (KotlinParser::THIS - 64))
      | (1ULL << (KotlinParser::SUPER - 64))
      | (1ULL << (KotlinParser::WHERE - 64))
      | (1ULL << (KotlinParser::IF - 64))
      | (1ULL << (KotlinParser::WHEN - 64))
      | (1ULL << (KotlinParser::TRY - 64))
      | (1ULL << (KotlinParser::CATCH - 64))
      | (1ULL << (KotlinParser::FINALLY - 64))
      | (1ULL << (KotlinParser::FOR - 64))
      | (1ULL << (KotlinParser::DO - 64))
      | (1ULL << (KotlinParser::WHILE - 64))
      | (1ULL << (KotlinParser::THROW - 64))
      | (1ULL << (KotlinParser::RETURN - 64))
      | (1ULL << (KotlinParser::CONTINUE - 64))
      | (1ULL << (KotlinParser::BREAK - 64))
      | (1ULL << (KotlinParser::OUT - 64))
      | (1ULL << (KotlinParser::DYNAMIC - 64))
      | (1ULL << (KotlinParser::PUBLIC - 64))
      | (1ULL << (KotlinParser::PRIVATE - 64))
      | (1ULL << (KotlinParser::PROTECTED - 64))
      | (1ULL << (KotlinParser::INTERNAL - 64))
      | (1ULL << (KotlinParser::ENUM - 64))
      | (1ULL << (KotlinParser::SEALED - 64))
      | (1ULL << (KotlinParser::ANNOTATION - 64))
      | (1ULL << (KotlinParser::DATA - 64))
      | (1ULL << (KotlinParser::INNER - 64))
      | (1ULL << (KotlinParser::VALUE - 64))
      | (1ULL << (KotlinParser::TAILREC - 64))
      | (1ULL << (KotlinParser::OPERATOR - 64))
      | (1ULL << (KotlinParser::INLINE - 64))
      | (1ULL << (KotlinParser::INFIX - 64))
      | (1ULL << (KotlinParser::EXTERNAL - 64))
      | (1ULL << (KotlinParser::SUSPEND - 64))
      | (1ULL << (KotlinParser::OVERRIDE - 64))
      | (1ULL << (KotlinParser::ABSTRACT - 64))
      | (1ULL << (KotlinParser::FINAL - 64))
      | (1ULL << (KotlinParser::OPEN - 64))
      | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
      | (1ULL << (KotlinParser::VARARG - 128))
      | (1ULL << (KotlinParser::NOINLINE - 128))
      | (1ULL << (KotlinParser::CROSSINLINE - 128))
      | (1ULL << (KotlinParser::REIFIED - 128))
      | (1ULL << (KotlinParser::EXPECT - 128))
      | (1ULL << (KotlinParser::ACTUAL - 128))
      | (1ULL << (KotlinParser::RealLiteral - 128))
      | (1ULL << (KotlinParser::IntegerLiteral - 128))
      | (1ULL << (KotlinParser::HexLiteral - 128))
      | (1ULL << (KotlinParser::BinLiteral - 128))
      | (1ULL << (KotlinParser::UnsignedLiteral - 128))
      | (1ULL << (KotlinParser::LongLiteral - 128))
      | (1ULL << (KotlinParser::BooleanLiteral - 128))
      | (1ULL << (KotlinParser::NullLiteral - 128))
      | (1ULL << (KotlinParser::CharacterLiteral - 128))
      | (1ULL << (KotlinParser::Identifier - 128))
      | (1ULL << (KotlinParser::QUOTE_OPEN - 128))
      | (1ULL << (KotlinParser::TRIPLE_QUOTE_OPEN - 128)))) != 0)) {
      setState(1885);
      statement();
      setState(1891);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1886);
          semis();
          setState(1887);
          statement(); 
        }
        setState(1893);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx);
      }
    }
    setState(1897);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, _ctx)) {
    case 1: {
      setState(1896);
      semis();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

KotlinParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::DeclarationContext* KotlinParser::StatementContext::declaration() {
  return getRuleContext<KotlinParser::DeclarationContext>(0);
}

KotlinParser::AssignmentContext* KotlinParser::StatementContext::assignment() {
  return getRuleContext<KotlinParser::AssignmentContext>(0);
}

KotlinParser::LoopStatementContext* KotlinParser::StatementContext::loopStatement() {
  return getRuleContext<KotlinParser::LoopStatementContext>(0);
}

KotlinParser::ExpressionContext* KotlinParser::StatementContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<KotlinParser::LabelContext *> KotlinParser::StatementContext::label() {
  return getRuleContexts<KotlinParser::LabelContext>();
}

KotlinParser::LabelContext* KotlinParser::StatementContext::label(size_t i) {
  return getRuleContext<KotlinParser::LabelContext>(i);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::StatementContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::StatementContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}


size_t KotlinParser::StatementContext::getRuleIndex() const {
  return KotlinParser::RuleStatement;
}

void KotlinParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void KotlinParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

KotlinParser::StatementContext* KotlinParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 128, KotlinParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1903);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 282, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1901);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case KotlinParser::FILE:
          case KotlinParser::FIELD:
          case KotlinParser::PROPERTY:
          case KotlinParser::GET:
          case KotlinParser::SET:
          case KotlinParser::RECEIVER:
          case KotlinParser::PARAM:
          case KotlinParser::SETPARAM:
          case KotlinParser::DELEGATE:
          case KotlinParser::IMPORT:
          case KotlinParser::CONSTRUCTOR:
          case KotlinParser::BY:
          case KotlinParser::COMPANION:
          case KotlinParser::INIT:
          case KotlinParser::WHERE:
          case KotlinParser::CATCH:
          case KotlinParser::FINALLY:
          case KotlinParser::OUT:
          case KotlinParser::DYNAMIC:
          case KotlinParser::PUBLIC:
          case KotlinParser::PRIVATE:
          case KotlinParser::PROTECTED:
          case KotlinParser::INTERNAL:
          case KotlinParser::ENUM:
          case KotlinParser::SEALED:
          case KotlinParser::ANNOTATION:
          case KotlinParser::DATA:
          case KotlinParser::INNER:
          case KotlinParser::VALUE:
          case KotlinParser::TAILREC:
          case KotlinParser::OPERATOR:
          case KotlinParser::INLINE:
          case KotlinParser::INFIX:
          case KotlinParser::EXTERNAL:
          case KotlinParser::SUSPEND:
          case KotlinParser::OVERRIDE:
          case KotlinParser::ABSTRACT:
          case KotlinParser::FINAL:
          case KotlinParser::OPEN:
          case KotlinParser::CONST:
          case KotlinParser::LATEINIT:
          case KotlinParser::VARARG:
          case KotlinParser::NOINLINE:
          case KotlinParser::CROSSINLINE:
          case KotlinParser::REIFIED:
          case KotlinParser::EXPECT:
          case KotlinParser::ACTUAL:
          case KotlinParser::Identifier: {
            setState(1899);
            label();
            break;
          }

          case KotlinParser::AT_NO_WS:
          case KotlinParser::AT_PRE_WS: {
            setState(1900);
            annotation();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1905);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 282, _ctx);
    }
    setState(1910);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
    case 1: {
      setState(1906);
      declaration();
      break;
    }

    case 2: {
      setState(1907);
      assignment();
      break;
    }

    case 3: {
      setState(1908);
      loopStatement();
      break;
    }

    case 4: {
      setState(1909);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

KotlinParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SimpleIdentifierContext* KotlinParser::LabelContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::LabelContext::AT_NO_WS() {
  return getToken(KotlinParser::AT_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::LabelContext::AT_POST_WS() {
  return getToken(KotlinParser::AT_POST_WS, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::LabelContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::LabelContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::LabelContext::getRuleIndex() const {
  return KotlinParser::RuleLabel;
}

void KotlinParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void KotlinParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

KotlinParser::LabelContext* KotlinParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 130, KotlinParser::RuleLabel);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1912);
    simpleIdentifier();
    setState(1913);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_POST_WS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1917);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1914);
        match(KotlinParser::NL); 
      }
      setState(1919);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlStructureBodyContext ------------------------------------------------------------------

KotlinParser::ControlStructureBodyContext::ControlStructureBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::BlockContext* KotlinParser::ControlStructureBodyContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}

KotlinParser::StatementContext* KotlinParser::ControlStructureBodyContext::statement() {
  return getRuleContext<KotlinParser::StatementContext>(0);
}


size_t KotlinParser::ControlStructureBodyContext::getRuleIndex() const {
  return KotlinParser::RuleControlStructureBody;
}

void KotlinParser::ControlStructureBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlStructureBody(this);
}

void KotlinParser::ControlStructureBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlStructureBody(this);
}

KotlinParser::ControlStructureBodyContext* KotlinParser::controlStructureBody() {
  ControlStructureBodyContext *_localctx = _tracker.createInstance<ControlStructureBodyContext>(_ctx, getState());
  enterRule(_localctx, 132, KotlinParser::RuleControlStructureBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1922);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 285, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1920);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1921);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

KotlinParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::BlockContext::LCURL() {
  return getToken(KotlinParser::LCURL, 0);
}

KotlinParser::StatementsContext* KotlinParser::BlockContext::statements() {
  return getRuleContext<KotlinParser::StatementsContext>(0);
}

tree::TerminalNode* KotlinParser::BlockContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::BlockContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::BlockContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::BlockContext::getRuleIndex() const {
  return KotlinParser::RuleBlock;
}

void KotlinParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void KotlinParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

KotlinParser::BlockContext* KotlinParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 134, KotlinParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1924);
    match(KotlinParser::LCURL);
    setState(1928);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1925);
        match(KotlinParser::NL); 
      }
      setState(1930);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx);
    }
    setState(1931);
    statements();
    setState(1935);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1932);
      match(KotlinParser::NL);
      setState(1937);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1938);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopStatementContext ------------------------------------------------------------------

KotlinParser::LoopStatementContext::LoopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ForStatementContext* KotlinParser::LoopStatementContext::forStatement() {
  return getRuleContext<KotlinParser::ForStatementContext>(0);
}

KotlinParser::WhileStatementContext* KotlinParser::LoopStatementContext::whileStatement() {
  return getRuleContext<KotlinParser::WhileStatementContext>(0);
}

KotlinParser::DoWhileStatementContext* KotlinParser::LoopStatementContext::doWhileStatement() {
  return getRuleContext<KotlinParser::DoWhileStatementContext>(0);
}


size_t KotlinParser::LoopStatementContext::getRuleIndex() const {
  return KotlinParser::RuleLoopStatement;
}

void KotlinParser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}

void KotlinParser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}

KotlinParser::LoopStatementContext* KotlinParser::loopStatement() {
  LoopStatementContext *_localctx = _tracker.createInstance<LoopStatementContext>(_ctx, getState());
  enterRule(_localctx, 136, KotlinParser::RuleLoopStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1943);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(1940);
        forStatement();
        break;
      }

      case KotlinParser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(1941);
        whileStatement();
        break;
      }

      case KotlinParser::DO: {
        enterOuterAlt(_localctx, 3);
        setState(1942);
        doWhileStatement();
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

//----------------- ForStatementContext ------------------------------------------------------------------

KotlinParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ForStatementContext::FOR() {
  return getToken(KotlinParser::FOR, 0);
}

tree::TerminalNode* KotlinParser::ForStatementContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::ForStatementContext::IN() {
  return getToken(KotlinParser::IN, 0);
}

KotlinParser::ExpressionContext* KotlinParser::ForStatementContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::ForStatementContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

KotlinParser::VariableDeclarationContext* KotlinParser::ForStatementContext::variableDeclaration() {
  return getRuleContext<KotlinParser::VariableDeclarationContext>(0);
}

KotlinParser::MultiVariableDeclarationContext* KotlinParser::ForStatementContext::multiVariableDeclaration() {
  return getRuleContext<KotlinParser::MultiVariableDeclarationContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ForStatementContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ForStatementContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::ForStatementContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::ForStatementContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

KotlinParser::ControlStructureBodyContext* KotlinParser::ForStatementContext::controlStructureBody() {
  return getRuleContext<KotlinParser::ControlStructureBodyContext>(0);
}


size_t KotlinParser::ForStatementContext::getRuleIndex() const {
  return KotlinParser::RuleForStatement;
}

void KotlinParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void KotlinParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}

KotlinParser::ForStatementContext* KotlinParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 138, KotlinParser::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1945);
    match(KotlinParser::FOR);
    setState(1949);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1946);
      match(KotlinParser::NL);
      setState(1951);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1952);
    match(KotlinParser::LPAREN);
    setState(1956);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1953);
        annotation(); 
      }
      setState(1958);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx);
    }
    setState(1961);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::NL:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(1959);
        variableDeclaration();
        break;
      }

      case KotlinParser::LPAREN: {
        setState(1960);
        multiVariableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1963);
    match(KotlinParser::IN);
    setState(1964);
    expression();
    setState(1965);
    match(KotlinParser::RPAREN);
    setState(1969);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1966);
        match(KotlinParser::NL); 
      }
      setState(1971);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx);
    }
    setState(1973);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      setState(1972);
      controlStructureBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

KotlinParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::WhileStatementContext::WHILE() {
  return getToken(KotlinParser::WHILE, 0);
}

tree::TerminalNode* KotlinParser::WhileStatementContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::ExpressionContext* KotlinParser::WhileStatementContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::WhileStatementContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

KotlinParser::ControlStructureBodyContext* KotlinParser::WhileStatementContext::controlStructureBody() {
  return getRuleContext<KotlinParser::ControlStructureBodyContext>(0);
}

tree::TerminalNode* KotlinParser::WhileStatementContext::SEMICOLON() {
  return getToken(KotlinParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::WhileStatementContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::WhileStatementContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::WhileStatementContext::getRuleIndex() const {
  return KotlinParser::RuleWhileStatement;
}

void KotlinParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void KotlinParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

KotlinParser::WhileStatementContext* KotlinParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, KotlinParser::RuleWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1975);
    match(KotlinParser::WHILE);
    setState(1979);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1976);
      match(KotlinParser::NL);
      setState(1981);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1982);
    match(KotlinParser::LPAREN);
    setState(1983);
    expression();
    setState(1984);
    match(KotlinParser::RPAREN);
    setState(1988);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(1985);
      match(KotlinParser::NL);
      setState(1990);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1993);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LPAREN:
      case KotlinParser::LSQUARE:
      case KotlinParser::LCURL:
      case KotlinParser::ADD:
      case KotlinParser::SUB:
      case KotlinParser::INCR:
      case KotlinParser::DECR:
      case KotlinParser::EXCL_WS:
      case KotlinParser::EXCL_NO_WS:
      case KotlinParser::COLONCOLON:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::RETURN_AT:
      case KotlinParser::CONTINUE_AT:
      case KotlinParser::BREAK_AT:
      case KotlinParser::THIS_AT:
      case KotlinParser::SUPER_AT:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CLASS:
      case KotlinParser::INTERFACE:
      case KotlinParser::FUN:
      case KotlinParser::OBJECT:
      case KotlinParser::VAL:
      case KotlinParser::VAR:
      case KotlinParser::TYPE_ALIAS:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::THIS:
      case KotlinParser::SUPER:
      case KotlinParser::WHERE:
      case KotlinParser::IF:
      case KotlinParser::WHEN:
      case KotlinParser::TRY:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::FOR:
      case KotlinParser::DO:
      case KotlinParser::WHILE:
      case KotlinParser::THROW:
      case KotlinParser::RETURN:
      case KotlinParser::CONTINUE:
      case KotlinParser::BREAK:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::RealLiteral:
      case KotlinParser::IntegerLiteral:
      case KotlinParser::HexLiteral:
      case KotlinParser::BinLiteral:
      case KotlinParser::UnsignedLiteral:
      case KotlinParser::LongLiteral:
      case KotlinParser::BooleanLiteral:
      case KotlinParser::NullLiteral:
      case KotlinParser::CharacterLiteral:
      case KotlinParser::Identifier:
      case KotlinParser::QUOTE_OPEN:
      case KotlinParser::TRIPLE_QUOTE_OPEN: {
        setState(1991);
        controlStructureBody();
        break;
      }

      case KotlinParser::SEMICOLON: {
        setState(1992);
        match(KotlinParser::SEMICOLON);
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

//----------------- DoWhileStatementContext ------------------------------------------------------------------

KotlinParser::DoWhileStatementContext::DoWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::DoWhileStatementContext::DO() {
  return getToken(KotlinParser::DO, 0);
}

tree::TerminalNode* KotlinParser::DoWhileStatementContext::WHILE() {
  return getToken(KotlinParser::WHILE, 0);
}

tree::TerminalNode* KotlinParser::DoWhileStatementContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::ExpressionContext* KotlinParser::DoWhileStatementContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::DoWhileStatementContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::DoWhileStatementContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::DoWhileStatementContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::ControlStructureBodyContext* KotlinParser::DoWhileStatementContext::controlStructureBody() {
  return getRuleContext<KotlinParser::ControlStructureBodyContext>(0);
}


size_t KotlinParser::DoWhileStatementContext::getRuleIndex() const {
  return KotlinParser::RuleDoWhileStatement;
}

void KotlinParser::DoWhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoWhileStatement(this);
}

void KotlinParser::DoWhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoWhileStatement(this);
}

KotlinParser::DoWhileStatementContext* KotlinParser::doWhileStatement() {
  DoWhileStatementContext *_localctx = _tracker.createInstance<DoWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 142, KotlinParser::RuleDoWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1995);
    match(KotlinParser::DO);
    setState(1999);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1996);
        match(KotlinParser::NL); 
      }
      setState(2001);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx);
    }
    setState(2003);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
    case 1: {
      setState(2002);
      controlStructureBody();
      break;
    }

    default:
      break;
    }
    setState(2008);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2005);
      match(KotlinParser::NL);
      setState(2010);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2011);
    match(KotlinParser::WHILE);
    setState(2015);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2012);
      match(KotlinParser::NL);
      setState(2017);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2018);
    match(KotlinParser::LPAREN);
    setState(2019);
    expression();
    setState(2020);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

KotlinParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExpressionContext* KotlinParser::AssignmentContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

KotlinParser::DirectlyAssignableExpressionContext* KotlinParser::AssignmentContext::directlyAssignableExpression() {
  return getRuleContext<KotlinParser::DirectlyAssignableExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::AssignmentContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

KotlinParser::AssignableExpressionContext* KotlinParser::AssignmentContext::assignableExpression() {
  return getRuleContext<KotlinParser::AssignableExpressionContext>(0);
}

KotlinParser::AssignmentAndOperatorContext* KotlinParser::AssignmentContext::assignmentAndOperator() {
  return getRuleContext<KotlinParser::AssignmentAndOperatorContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::AssignmentContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AssignmentContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AssignmentContext::getRuleIndex() const {
  return KotlinParser::RuleAssignment;
}

void KotlinParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void KotlinParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

KotlinParser::AssignmentContext* KotlinParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 144, KotlinParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2028);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx)) {
    case 1: {
      setState(2022);
      directlyAssignableExpression();
      setState(2023);
      match(KotlinParser::ASSIGNMENT);
      break;
    }

    case 2: {
      setState(2025);
      assignableExpression();
      setState(2026);
      assignmentAndOperator();
      break;
    }

    default:
      break;
    }
    setState(2033);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2030);
      match(KotlinParser::NL);
      setState(2035);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2036);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SemiContext ------------------------------------------------------------------

KotlinParser::SemiContext::SemiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::SemiContext::SEMICOLON() {
  return getToken(KotlinParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::SemiContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SemiContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::SemiContext::EOF() {
  return getToken(KotlinParser::EOF, 0);
}


size_t KotlinParser::SemiContext::getRuleIndex() const {
  return KotlinParser::RuleSemi;
}

void KotlinParser::SemiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSemi(this);
}

void KotlinParser::SemiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSemi(this);
}

KotlinParser::SemiContext* KotlinParser::semi() {
  SemiContext *_localctx = _tracker.createInstance<SemiContext>(_ctx, getState());
  enterRule(_localctx, 146, KotlinParser::RuleSemi);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(2046);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::NL:
      case KotlinParser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(2038);
        _la = _input->LA(1);
        if (!(_la == KotlinParser::NL

        || _la == KotlinParser::SEMICOLON)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(2042);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(2039);
            match(KotlinParser::NL); 
          }
          setState(2044);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
        }
        break;
      }

      case KotlinParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(2045);
        match(KotlinParser::EOF);
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

//----------------- SemisContext ------------------------------------------------------------------

KotlinParser::SemisContext::SemisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KotlinParser::SemisContext::SEMICOLON() {
  return getTokens(KotlinParser::SEMICOLON);
}

tree::TerminalNode* KotlinParser::SemisContext::SEMICOLON(size_t i) {
  return getToken(KotlinParser::SEMICOLON, i);
}

std::vector<tree::TerminalNode *> KotlinParser::SemisContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SemisContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::SemisContext::EOF() {
  return getToken(KotlinParser::EOF, 0);
}


size_t KotlinParser::SemisContext::getRuleIndex() const {
  return KotlinParser::RuleSemis;
}

void KotlinParser::SemisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSemis(this);
}

void KotlinParser::SemisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSemis(this);
}

KotlinParser::SemisContext* KotlinParser::semis() {
  SemisContext *_localctx = _tracker.createInstance<SemisContext>(_ctx, getState());
  enterRule(_localctx, 148, KotlinParser::RuleSemis);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(2054);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::NL:
      case KotlinParser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);
        setState(2049); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(2048);
                  _la = _input->LA(1);
                  if (!(_la == KotlinParser::NL

                  || _la == KotlinParser::SEMICOLON)) {
                  _errHandler->recoverInline(this);
                  }
                  else {
                    _errHandler->reportMatch(this);
                    consume();
                  }
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(2051); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case KotlinParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(2053);
        match(KotlinParser::EOF);
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

//----------------- ExpressionContext ------------------------------------------------------------------

KotlinParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::DisjunctionContext* KotlinParser::ExpressionContext::disjunction() {
  return getRuleContext<KotlinParser::DisjunctionContext>(0);
}


size_t KotlinParser::ExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleExpression;
}

void KotlinParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void KotlinParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

KotlinParser::ExpressionContext* KotlinParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 150, KotlinParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2056);
    disjunction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisjunctionContext ------------------------------------------------------------------

KotlinParser::DisjunctionContext::DisjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ConjunctionContext *> KotlinParser::DisjunctionContext::conjunction() {
  return getRuleContexts<KotlinParser::ConjunctionContext>();
}

KotlinParser::ConjunctionContext* KotlinParser::DisjunctionContext::conjunction(size_t i) {
  return getRuleContext<KotlinParser::ConjunctionContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::DisjunctionContext::DISJ() {
  return getTokens(KotlinParser::DISJ);
}

tree::TerminalNode* KotlinParser::DisjunctionContext::DISJ(size_t i) {
  return getToken(KotlinParser::DISJ, i);
}

std::vector<tree::TerminalNode *> KotlinParser::DisjunctionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::DisjunctionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::DisjunctionContext::getRuleIndex() const {
  return KotlinParser::RuleDisjunction;
}

void KotlinParser::DisjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisjunction(this);
}

void KotlinParser::DisjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisjunction(this);
}

KotlinParser::DisjunctionContext* KotlinParser::disjunction() {
  DisjunctionContext *_localctx = _tracker.createInstance<DisjunctionContext>(_ctx, getState());
  enterRule(_localctx, 152, KotlinParser::RuleDisjunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2058);
    conjunction();
    setState(2075);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2062);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2059);
          match(KotlinParser::NL);
          setState(2064);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2065);
        match(KotlinParser::DISJ);
        setState(2069);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2066);
          match(KotlinParser::NL);
          setState(2071);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2072);
        conjunction(); 
      }
      setState(2077);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConjunctionContext ------------------------------------------------------------------

KotlinParser::ConjunctionContext::ConjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::EqualityContext *> KotlinParser::ConjunctionContext::equality() {
  return getRuleContexts<KotlinParser::EqualityContext>();
}

KotlinParser::EqualityContext* KotlinParser::ConjunctionContext::equality(size_t i) {
  return getRuleContext<KotlinParser::EqualityContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::ConjunctionContext::CONJ() {
  return getTokens(KotlinParser::CONJ);
}

tree::TerminalNode* KotlinParser::ConjunctionContext::CONJ(size_t i) {
  return getToken(KotlinParser::CONJ, i);
}

std::vector<tree::TerminalNode *> KotlinParser::ConjunctionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ConjunctionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ConjunctionContext::getRuleIndex() const {
  return KotlinParser::RuleConjunction;
}

void KotlinParser::ConjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConjunction(this);
}

void KotlinParser::ConjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConjunction(this);
}

KotlinParser::ConjunctionContext* KotlinParser::conjunction() {
  ConjunctionContext *_localctx = _tracker.createInstance<ConjunctionContext>(_ctx, getState());
  enterRule(_localctx, 154, KotlinParser::RuleConjunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2078);
    equality();
    setState(2095);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2082);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2079);
          match(KotlinParser::NL);
          setState(2084);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2085);
        match(KotlinParser::CONJ);
        setState(2089);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2086);
          match(KotlinParser::NL);
          setState(2091);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2092);
        equality(); 
      }
      setState(2097);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

KotlinParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ComparisonContext *> KotlinParser::EqualityContext::comparison() {
  return getRuleContexts<KotlinParser::ComparisonContext>();
}

KotlinParser::ComparisonContext* KotlinParser::EqualityContext::comparison(size_t i) {
  return getRuleContext<KotlinParser::ComparisonContext>(i);
}

std::vector<KotlinParser::EqualityOperatorContext *> KotlinParser::EqualityContext::equalityOperator() {
  return getRuleContexts<KotlinParser::EqualityOperatorContext>();
}

KotlinParser::EqualityOperatorContext* KotlinParser::EqualityContext::equalityOperator(size_t i) {
  return getRuleContext<KotlinParser::EqualityOperatorContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::EqualityContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::EqualityContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::EqualityContext::getRuleIndex() const {
  return KotlinParser::RuleEquality;
}

void KotlinParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}

void KotlinParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}

KotlinParser::EqualityContext* KotlinParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 156, KotlinParser::RuleEquality);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2098);
    comparison();
    setState(2110);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2099);
        equalityOperator();
        setState(2103);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2100);
          match(KotlinParser::NL);
          setState(2105);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2106);
        comparison(); 
      }
      setState(2112);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

KotlinParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::GenericCallLikeComparisonContext *> KotlinParser::ComparisonContext::genericCallLikeComparison() {
  return getRuleContexts<KotlinParser::GenericCallLikeComparisonContext>();
}

KotlinParser::GenericCallLikeComparisonContext* KotlinParser::ComparisonContext::genericCallLikeComparison(size_t i) {
  return getRuleContext<KotlinParser::GenericCallLikeComparisonContext>(i);
}

std::vector<KotlinParser::ComparisonOperatorContext *> KotlinParser::ComparisonContext::comparisonOperator() {
  return getRuleContexts<KotlinParser::ComparisonOperatorContext>();
}

KotlinParser::ComparisonOperatorContext* KotlinParser::ComparisonContext::comparisonOperator(size_t i) {
  return getRuleContext<KotlinParser::ComparisonOperatorContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::ComparisonContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ComparisonContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ComparisonContext::getRuleIndex() const {
  return KotlinParser::RuleComparison;
}

void KotlinParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void KotlinParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

KotlinParser::ComparisonContext* KotlinParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 158, KotlinParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2113);
    genericCallLikeComparison();
    setState(2125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 316, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2114);
        comparisonOperator();
        setState(2118);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2115);
          match(KotlinParser::NL);
          setState(2120);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2121);
        genericCallLikeComparison(); 
      }
      setState(2127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 316, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericCallLikeComparisonContext ------------------------------------------------------------------

KotlinParser::GenericCallLikeComparisonContext::GenericCallLikeComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::InfixOperationContext* KotlinParser::GenericCallLikeComparisonContext::infixOperation() {
  return getRuleContext<KotlinParser::InfixOperationContext>(0);
}

std::vector<KotlinParser::CallSuffixContext *> KotlinParser::GenericCallLikeComparisonContext::callSuffix() {
  return getRuleContexts<KotlinParser::CallSuffixContext>();
}

KotlinParser::CallSuffixContext* KotlinParser::GenericCallLikeComparisonContext::callSuffix(size_t i) {
  return getRuleContext<KotlinParser::CallSuffixContext>(i);
}


size_t KotlinParser::GenericCallLikeComparisonContext::getRuleIndex() const {
  return KotlinParser::RuleGenericCallLikeComparison;
}

void KotlinParser::GenericCallLikeComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericCallLikeComparison(this);
}

void KotlinParser::GenericCallLikeComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericCallLikeComparison(this);
}

KotlinParser::GenericCallLikeComparisonContext* KotlinParser::genericCallLikeComparison() {
  GenericCallLikeComparisonContext *_localctx = _tracker.createInstance<GenericCallLikeComparisonContext>(_ctx, getState());
  enterRule(_localctx, 160, KotlinParser::RuleGenericCallLikeComparison);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2128);
    infixOperation();
    setState(2132);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 317, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2129);
        callSuffix(); 
      }
      setState(2134);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 317, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixOperationContext ------------------------------------------------------------------

KotlinParser::InfixOperationContext::InfixOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::ElvisExpressionContext *> KotlinParser::InfixOperationContext::elvisExpression() {
  return getRuleContexts<KotlinParser::ElvisExpressionContext>();
}

KotlinParser::ElvisExpressionContext* KotlinParser::InfixOperationContext::elvisExpression(size_t i) {
  return getRuleContext<KotlinParser::ElvisExpressionContext>(i);
}

std::vector<KotlinParser::InOperatorContext *> KotlinParser::InfixOperationContext::inOperator() {
  return getRuleContexts<KotlinParser::InOperatorContext>();
}

KotlinParser::InOperatorContext* KotlinParser::InfixOperationContext::inOperator(size_t i) {
  return getRuleContext<KotlinParser::InOperatorContext>(i);
}

std::vector<KotlinParser::IsOperatorContext *> KotlinParser::InfixOperationContext::isOperator() {
  return getRuleContexts<KotlinParser::IsOperatorContext>();
}

KotlinParser::IsOperatorContext* KotlinParser::InfixOperationContext::isOperator(size_t i) {
  return getRuleContext<KotlinParser::IsOperatorContext>(i);
}

std::vector<KotlinParser::TypeContext *> KotlinParser::InfixOperationContext::type() {
  return getRuleContexts<KotlinParser::TypeContext>();
}

KotlinParser::TypeContext* KotlinParser::InfixOperationContext::type(size_t i) {
  return getRuleContext<KotlinParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::InfixOperationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::InfixOperationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::InfixOperationContext::getRuleIndex() const {
  return KotlinParser::RuleInfixOperation;
}

void KotlinParser::InfixOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixOperation(this);
}

void KotlinParser::InfixOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixOperation(this);
}

KotlinParser::InfixOperationContext* KotlinParser::infixOperation() {
  InfixOperationContext *_localctx = _tracker.createInstance<InfixOperationContext>(_ctx, getState());
  enterRule(_localctx, 162, KotlinParser::RuleInfixOperation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2135);
    elvisExpression();
    setState(2156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2154);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case KotlinParser::IN:
          case KotlinParser::NOT_IN: {
            setState(2136);
            inOperator();
            setState(2140);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == KotlinParser::NL) {
              setState(2137);
              match(KotlinParser::NL);
              setState(2142);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(2143);
            elvisExpression();
            break;
          }

          case KotlinParser::IS:
          case KotlinParser::NOT_IS: {
            setState(2145);
            isOperator();
            setState(2149);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == KotlinParser::NL) {
              setState(2146);
              match(KotlinParser::NL);
              setState(2151);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(2152);
            type();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(2158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElvisExpressionContext ------------------------------------------------------------------

KotlinParser::ElvisExpressionContext::ElvisExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::InfixFunctionCallContext *> KotlinParser::ElvisExpressionContext::infixFunctionCall() {
  return getRuleContexts<KotlinParser::InfixFunctionCallContext>();
}

KotlinParser::InfixFunctionCallContext* KotlinParser::ElvisExpressionContext::infixFunctionCall(size_t i) {
  return getRuleContext<KotlinParser::InfixFunctionCallContext>(i);
}

std::vector<KotlinParser::ElvisContext *> KotlinParser::ElvisExpressionContext::elvis() {
  return getRuleContexts<KotlinParser::ElvisContext>();
}

KotlinParser::ElvisContext* KotlinParser::ElvisExpressionContext::elvis(size_t i) {
  return getRuleContext<KotlinParser::ElvisContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::ElvisExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ElvisExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ElvisExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleElvisExpression;
}

void KotlinParser::ElvisExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElvisExpression(this);
}

void KotlinParser::ElvisExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElvisExpression(this);
}

KotlinParser::ElvisExpressionContext* KotlinParser::elvisExpression() {
  ElvisExpressionContext *_localctx = _tracker.createInstance<ElvisExpressionContext>(_ctx, getState());
  enterRule(_localctx, 164, KotlinParser::RuleElvisExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2159);
    infixFunctionCall();
    setState(2177);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 324, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2163);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2160);
          match(KotlinParser::NL);
          setState(2165);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2166);
        elvis();
        setState(2170);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2167);
          match(KotlinParser::NL);
          setState(2172);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2173);
        infixFunctionCall(); 
      }
      setState(2179);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 324, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElvisContext ------------------------------------------------------------------

KotlinParser::ElvisContext::ElvisContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ElvisContext::QUEST_NO_WS() {
  return getToken(KotlinParser::QUEST_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::ElvisContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}


size_t KotlinParser::ElvisContext::getRuleIndex() const {
  return KotlinParser::RuleElvis;
}

void KotlinParser::ElvisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElvis(this);
}

void KotlinParser::ElvisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElvis(this);
}

KotlinParser::ElvisContext* KotlinParser::elvis() {
  ElvisContext *_localctx = _tracker.createInstance<ElvisContext>(_ctx, getState());
  enterRule(_localctx, 166, KotlinParser::RuleElvis);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2180);
    match(KotlinParser::QUEST_NO_WS);
    setState(2181);
    match(KotlinParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixFunctionCallContext ------------------------------------------------------------------

KotlinParser::InfixFunctionCallContext::InfixFunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::RangeExpressionContext *> KotlinParser::InfixFunctionCallContext::rangeExpression() {
  return getRuleContexts<KotlinParser::RangeExpressionContext>();
}

KotlinParser::RangeExpressionContext* KotlinParser::InfixFunctionCallContext::rangeExpression(size_t i) {
  return getRuleContext<KotlinParser::RangeExpressionContext>(i);
}

std::vector<KotlinParser::SimpleIdentifierContext *> KotlinParser::InfixFunctionCallContext::simpleIdentifier() {
  return getRuleContexts<KotlinParser::SimpleIdentifierContext>();
}

KotlinParser::SimpleIdentifierContext* KotlinParser::InfixFunctionCallContext::simpleIdentifier(size_t i) {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::InfixFunctionCallContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::InfixFunctionCallContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::InfixFunctionCallContext::getRuleIndex() const {
  return KotlinParser::RuleInfixFunctionCall;
}

void KotlinParser::InfixFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixFunctionCall(this);
}

void KotlinParser::InfixFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixFunctionCall(this);
}

KotlinParser::InfixFunctionCallContext* KotlinParser::infixFunctionCall() {
  InfixFunctionCallContext *_localctx = _tracker.createInstance<InfixFunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 168, KotlinParser::RuleInfixFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2183);
    rangeExpression();
    setState(2195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 326, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2184);
        simpleIdentifier();
        setState(2188);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2185);
          match(KotlinParser::NL);
          setState(2190);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2191);
        rangeExpression(); 
      }
      setState(2197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 326, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeExpressionContext ------------------------------------------------------------------

KotlinParser::RangeExpressionContext::RangeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::AdditiveExpressionContext *> KotlinParser::RangeExpressionContext::additiveExpression() {
  return getRuleContexts<KotlinParser::AdditiveExpressionContext>();
}

KotlinParser::AdditiveExpressionContext* KotlinParser::RangeExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<KotlinParser::AdditiveExpressionContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::RangeExpressionContext::RANGE() {
  return getTokens(KotlinParser::RANGE);
}

tree::TerminalNode* KotlinParser::RangeExpressionContext::RANGE(size_t i) {
  return getToken(KotlinParser::RANGE, i);
}

std::vector<tree::TerminalNode *> KotlinParser::RangeExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::RangeExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::RangeExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleRangeExpression;
}

void KotlinParser::RangeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeExpression(this);
}

void KotlinParser::RangeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeExpression(this);
}

KotlinParser::RangeExpressionContext* KotlinParser::rangeExpression() {
  RangeExpressionContext *_localctx = _tracker.createInstance<RangeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 170, KotlinParser::RuleRangeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2198);
    additiveExpression();
    setState(2209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 328, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2199);
        match(KotlinParser::RANGE);
        setState(2203);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2200);
          match(KotlinParser::NL);
          setState(2205);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2206);
        additiveExpression(); 
      }
      setState(2211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 328, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

KotlinParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::MultiplicativeExpressionContext *> KotlinParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<KotlinParser::MultiplicativeExpressionContext>();
}

KotlinParser::MultiplicativeExpressionContext* KotlinParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<KotlinParser::MultiplicativeExpressionContext>(i);
}

std::vector<KotlinParser::AdditiveOperatorContext *> KotlinParser::AdditiveExpressionContext::additiveOperator() {
  return getRuleContexts<KotlinParser::AdditiveOperatorContext>();
}

KotlinParser::AdditiveOperatorContext* KotlinParser::AdditiveExpressionContext::additiveOperator(size_t i) {
  return getRuleContext<KotlinParser::AdditiveOperatorContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::AdditiveExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AdditiveExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AdditiveExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleAdditiveExpression;
}

void KotlinParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void KotlinParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}

KotlinParser::AdditiveExpressionContext* KotlinParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 172, KotlinParser::RuleAdditiveExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2212);
    multiplicativeExpression();
    setState(2224);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 330, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2213);
        additiveOperator();
        setState(2217);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2214);
          match(KotlinParser::NL);
          setState(2219);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2220);
        multiplicativeExpression(); 
      }
      setState(2226);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 330, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

KotlinParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::AsExpressionContext *> KotlinParser::MultiplicativeExpressionContext::asExpression() {
  return getRuleContexts<KotlinParser::AsExpressionContext>();
}

KotlinParser::AsExpressionContext* KotlinParser::MultiplicativeExpressionContext::asExpression(size_t i) {
  return getRuleContext<KotlinParser::AsExpressionContext>(i);
}

std::vector<KotlinParser::MultiplicativeOperatorContext *> KotlinParser::MultiplicativeExpressionContext::multiplicativeOperator() {
  return getRuleContexts<KotlinParser::MultiplicativeOperatorContext>();
}

KotlinParser::MultiplicativeOperatorContext* KotlinParser::MultiplicativeExpressionContext::multiplicativeOperator(size_t i) {
  return getRuleContext<KotlinParser::MultiplicativeOperatorContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::MultiplicativeExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::MultiplicativeExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleMultiplicativeExpression;
}

void KotlinParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void KotlinParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}

KotlinParser::MultiplicativeExpressionContext* KotlinParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 174, KotlinParser::RuleMultiplicativeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2227);
    asExpression();
    setState(2239);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 332, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2228);
        multiplicativeOperator();
        setState(2232);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2229);
          match(KotlinParser::NL);
          setState(2234);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2235);
        asExpression(); 
      }
      setState(2241);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 332, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsExpressionContext ------------------------------------------------------------------

KotlinParser::AsExpressionContext::AsExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PrefixUnaryExpressionContext* KotlinParser::AsExpressionContext::prefixUnaryExpression() {
  return getRuleContext<KotlinParser::PrefixUnaryExpressionContext>(0);
}

std::vector<KotlinParser::AsOperatorContext *> KotlinParser::AsExpressionContext::asOperator() {
  return getRuleContexts<KotlinParser::AsOperatorContext>();
}

KotlinParser::AsOperatorContext* KotlinParser::AsExpressionContext::asOperator(size_t i) {
  return getRuleContext<KotlinParser::AsOperatorContext>(i);
}

std::vector<KotlinParser::TypeContext *> KotlinParser::AsExpressionContext::type() {
  return getRuleContexts<KotlinParser::TypeContext>();
}

KotlinParser::TypeContext* KotlinParser::AsExpressionContext::type(size_t i) {
  return getRuleContext<KotlinParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::AsExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AsExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AsExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleAsExpression;
}

void KotlinParser::AsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsExpression(this);
}

void KotlinParser::AsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsExpression(this);
}

KotlinParser::AsExpressionContext* KotlinParser::asExpression() {
  AsExpressionContext *_localctx = _tracker.createInstance<AsExpressionContext>(_ctx, getState());
  enterRule(_localctx, 176, KotlinParser::RuleAsExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2242);
    prefixUnaryExpression();
    setState(2260);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 335, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2246);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2243);
          match(KotlinParser::NL);
          setState(2248);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2249);
        asOperator();
        setState(2253);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2250);
          match(KotlinParser::NL);
          setState(2255);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2256);
        type(); 
      }
      setState(2262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 335, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixUnaryExpressionContext ------------------------------------------------------------------

KotlinParser::PrefixUnaryExpressionContext::PrefixUnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PostfixUnaryExpressionContext* KotlinParser::PrefixUnaryExpressionContext::postfixUnaryExpression() {
  return getRuleContext<KotlinParser::PostfixUnaryExpressionContext>(0);
}

std::vector<KotlinParser::UnaryPrefixContext *> KotlinParser::PrefixUnaryExpressionContext::unaryPrefix() {
  return getRuleContexts<KotlinParser::UnaryPrefixContext>();
}

KotlinParser::UnaryPrefixContext* KotlinParser::PrefixUnaryExpressionContext::unaryPrefix(size_t i) {
  return getRuleContext<KotlinParser::UnaryPrefixContext>(i);
}


size_t KotlinParser::PrefixUnaryExpressionContext::getRuleIndex() const {
  return KotlinParser::RulePrefixUnaryExpression;
}

void KotlinParser::PrefixUnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryExpression(this);
}

void KotlinParser::PrefixUnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryExpression(this);
}

KotlinParser::PrefixUnaryExpressionContext* KotlinParser::prefixUnaryExpression() {
  PrefixUnaryExpressionContext *_localctx = _tracker.createInstance<PrefixUnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 178, KotlinParser::RulePrefixUnaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2266);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 336, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2263);
        unaryPrefix(); 
      }
      setState(2268);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 336, _ctx);
    }
    setState(2269);
    postfixUnaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryPrefixContext ------------------------------------------------------------------

KotlinParser::UnaryPrefixContext::UnaryPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::AnnotationContext* KotlinParser::UnaryPrefixContext::annotation() {
  return getRuleContext<KotlinParser::AnnotationContext>(0);
}

KotlinParser::LabelContext* KotlinParser::UnaryPrefixContext::label() {
  return getRuleContext<KotlinParser::LabelContext>(0);
}

KotlinParser::PrefixUnaryOperatorContext* KotlinParser::UnaryPrefixContext::prefixUnaryOperator() {
  return getRuleContext<KotlinParser::PrefixUnaryOperatorContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::UnaryPrefixContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::UnaryPrefixContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::UnaryPrefixContext::getRuleIndex() const {
  return KotlinParser::RuleUnaryPrefix;
}

void KotlinParser::UnaryPrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPrefix(this);
}

void KotlinParser::UnaryPrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPrefix(this);
}

KotlinParser::UnaryPrefixContext* KotlinParser::unaryPrefix() {
  UnaryPrefixContext *_localctx = _tracker.createInstance<UnaryPrefixContext>(_ctx, getState());
  enterRule(_localctx, 180, KotlinParser::RuleUnaryPrefix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS: {
        enterOuterAlt(_localctx, 1);
        setState(2271);
        annotation();
        break;
      }

      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(2272);
        label();
        break;
      }

      case KotlinParser::ADD:
      case KotlinParser::SUB:
      case KotlinParser::INCR:
      case KotlinParser::DECR:
      case KotlinParser::EXCL_WS:
      case KotlinParser::EXCL_NO_WS: {
        enterOuterAlt(_localctx, 3);
        setState(2273);
        prefixUnaryOperator();
        setState(2277);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2274);
          match(KotlinParser::NL);
          setState(2279);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- PostfixUnaryExpressionContext ------------------------------------------------------------------

KotlinParser::PostfixUnaryExpressionContext::PostfixUnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PrimaryExpressionContext* KotlinParser::PostfixUnaryExpressionContext::primaryExpression() {
  return getRuleContext<KotlinParser::PrimaryExpressionContext>(0);
}

std::vector<KotlinParser::PostfixUnarySuffixContext *> KotlinParser::PostfixUnaryExpressionContext::postfixUnarySuffix() {
  return getRuleContexts<KotlinParser::PostfixUnarySuffixContext>();
}

KotlinParser::PostfixUnarySuffixContext* KotlinParser::PostfixUnaryExpressionContext::postfixUnarySuffix(size_t i) {
  return getRuleContext<KotlinParser::PostfixUnarySuffixContext>(i);
}


size_t KotlinParser::PostfixUnaryExpressionContext::getRuleIndex() const {
  return KotlinParser::RulePostfixUnaryExpression;
}

void KotlinParser::PostfixUnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnaryExpression(this);
}

void KotlinParser::PostfixUnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnaryExpression(this);
}

KotlinParser::PostfixUnaryExpressionContext* KotlinParser::postfixUnaryExpression() {
  PostfixUnaryExpressionContext *_localctx = _tracker.createInstance<PostfixUnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 182, KotlinParser::RulePostfixUnaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2282);
    primaryExpression();
    setState(2286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 339, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2283);
        postfixUnarySuffix(); 
      }
      setState(2288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 339, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixUnarySuffixContext ------------------------------------------------------------------

KotlinParser::PostfixUnarySuffixContext::PostfixUnarySuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PostfixUnaryOperatorContext* KotlinParser::PostfixUnarySuffixContext::postfixUnaryOperator() {
  return getRuleContext<KotlinParser::PostfixUnaryOperatorContext>(0);
}

KotlinParser::TypeArgumentsContext* KotlinParser::PostfixUnarySuffixContext::typeArguments() {
  return getRuleContext<KotlinParser::TypeArgumentsContext>(0);
}

KotlinParser::CallSuffixContext* KotlinParser::PostfixUnarySuffixContext::callSuffix() {
  return getRuleContext<KotlinParser::CallSuffixContext>(0);
}

KotlinParser::IndexingSuffixContext* KotlinParser::PostfixUnarySuffixContext::indexingSuffix() {
  return getRuleContext<KotlinParser::IndexingSuffixContext>(0);
}

KotlinParser::NavigationSuffixContext* KotlinParser::PostfixUnarySuffixContext::navigationSuffix() {
  return getRuleContext<KotlinParser::NavigationSuffixContext>(0);
}


size_t KotlinParser::PostfixUnarySuffixContext::getRuleIndex() const {
  return KotlinParser::RulePostfixUnarySuffix;
}

void KotlinParser::PostfixUnarySuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnarySuffix(this);
}

void KotlinParser::PostfixUnarySuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnarySuffix(this);
}

KotlinParser::PostfixUnarySuffixContext* KotlinParser::postfixUnarySuffix() {
  PostfixUnarySuffixContext *_localctx = _tracker.createInstance<PostfixUnarySuffixContext>(_ctx, getState());
  enterRule(_localctx, 184, KotlinParser::RulePostfixUnarySuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 340, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2289);
      postfixUnaryOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2290);
      typeArguments();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2291);
      callSuffix();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2292);
      indexingSuffix();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2293);
      navigationSuffix();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectlyAssignableExpressionContext ------------------------------------------------------------------

KotlinParser::DirectlyAssignableExpressionContext::DirectlyAssignableExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PostfixUnaryExpressionContext* KotlinParser::DirectlyAssignableExpressionContext::postfixUnaryExpression() {
  return getRuleContext<KotlinParser::PostfixUnaryExpressionContext>(0);
}

KotlinParser::AssignableSuffixContext* KotlinParser::DirectlyAssignableExpressionContext::assignableSuffix() {
  return getRuleContext<KotlinParser::AssignableSuffixContext>(0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::DirectlyAssignableExpressionContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::ParenthesizedDirectlyAssignableExpressionContext* KotlinParser::DirectlyAssignableExpressionContext::parenthesizedDirectlyAssignableExpression() {
  return getRuleContext<KotlinParser::ParenthesizedDirectlyAssignableExpressionContext>(0);
}


size_t KotlinParser::DirectlyAssignableExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleDirectlyAssignableExpression;
}

void KotlinParser::DirectlyAssignableExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectlyAssignableExpression(this);
}

void KotlinParser::DirectlyAssignableExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectlyAssignableExpression(this);
}

KotlinParser::DirectlyAssignableExpressionContext* KotlinParser::directlyAssignableExpression() {
  DirectlyAssignableExpressionContext *_localctx = _tracker.createInstance<DirectlyAssignableExpressionContext>(_ctx, getState());
  enterRule(_localctx, 186, KotlinParser::RuleDirectlyAssignableExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2301);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 341, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2296);
      postfixUnaryExpression();
      setState(2297);
      assignableSuffix();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2299);
      simpleIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2300);
      parenthesizedDirectlyAssignableExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesizedDirectlyAssignableExpressionContext ------------------------------------------------------------------

KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::ParenthesizedDirectlyAssignableExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::DirectlyAssignableExpressionContext* KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::directlyAssignableExpression() {
  return getRuleContext<KotlinParser::DirectlyAssignableExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleParenthesizedDirectlyAssignableExpression;
}

void KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedDirectlyAssignableExpression(this);
}

void KotlinParser::ParenthesizedDirectlyAssignableExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedDirectlyAssignableExpression(this);
}

KotlinParser::ParenthesizedDirectlyAssignableExpressionContext* KotlinParser::parenthesizedDirectlyAssignableExpression() {
  ParenthesizedDirectlyAssignableExpressionContext *_localctx = _tracker.createInstance<ParenthesizedDirectlyAssignableExpressionContext>(_ctx, getState());
  enterRule(_localctx, 188, KotlinParser::RuleParenthesizedDirectlyAssignableExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2303);
    match(KotlinParser::LPAREN);
    setState(2307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2304);
      match(KotlinParser::NL);
      setState(2309);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2310);
    directlyAssignableExpression();
    setState(2314);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2311);
      match(KotlinParser::NL);
      setState(2316);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2317);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignableExpressionContext ------------------------------------------------------------------

KotlinParser::AssignableExpressionContext::AssignableExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::PrefixUnaryExpressionContext* KotlinParser::AssignableExpressionContext::prefixUnaryExpression() {
  return getRuleContext<KotlinParser::PrefixUnaryExpressionContext>(0);
}

KotlinParser::ParenthesizedAssignableExpressionContext* KotlinParser::AssignableExpressionContext::parenthesizedAssignableExpression() {
  return getRuleContext<KotlinParser::ParenthesizedAssignableExpressionContext>(0);
}


size_t KotlinParser::AssignableExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleAssignableExpression;
}

void KotlinParser::AssignableExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignableExpression(this);
}

void KotlinParser::AssignableExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignableExpression(this);
}

KotlinParser::AssignableExpressionContext* KotlinParser::assignableExpression() {
  AssignableExpressionContext *_localctx = _tracker.createInstance<AssignableExpressionContext>(_ctx, getState());
  enterRule(_localctx, 190, KotlinParser::RuleAssignableExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2321);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 344, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2319);
      prefixUnaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2320);
      parenthesizedAssignableExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesizedAssignableExpressionContext ------------------------------------------------------------------

KotlinParser::ParenthesizedAssignableExpressionContext::ParenthesizedAssignableExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParenthesizedAssignableExpressionContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::AssignableExpressionContext* KotlinParser::ParenthesizedAssignableExpressionContext::assignableExpression() {
  return getRuleContext<KotlinParser::AssignableExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::ParenthesizedAssignableExpressionContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParenthesizedAssignableExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParenthesizedAssignableExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ParenthesizedAssignableExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleParenthesizedAssignableExpression;
}

void KotlinParser::ParenthesizedAssignableExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedAssignableExpression(this);
}

void KotlinParser::ParenthesizedAssignableExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedAssignableExpression(this);
}

KotlinParser::ParenthesizedAssignableExpressionContext* KotlinParser::parenthesizedAssignableExpression() {
  ParenthesizedAssignableExpressionContext *_localctx = _tracker.createInstance<ParenthesizedAssignableExpressionContext>(_ctx, getState());
  enterRule(_localctx, 192, KotlinParser::RuleParenthesizedAssignableExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2323);
    match(KotlinParser::LPAREN);
    setState(2327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2324);
      match(KotlinParser::NL);
      setState(2329);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2330);
    assignableExpression();
    setState(2334);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2331);
      match(KotlinParser::NL);
      setState(2336);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2337);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignableSuffixContext ------------------------------------------------------------------

KotlinParser::AssignableSuffixContext::AssignableSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::TypeArgumentsContext* KotlinParser::AssignableSuffixContext::typeArguments() {
  return getRuleContext<KotlinParser::TypeArgumentsContext>(0);
}

KotlinParser::IndexingSuffixContext* KotlinParser::AssignableSuffixContext::indexingSuffix() {
  return getRuleContext<KotlinParser::IndexingSuffixContext>(0);
}

KotlinParser::NavigationSuffixContext* KotlinParser::AssignableSuffixContext::navigationSuffix() {
  return getRuleContext<KotlinParser::NavigationSuffixContext>(0);
}


size_t KotlinParser::AssignableSuffixContext::getRuleIndex() const {
  return KotlinParser::RuleAssignableSuffix;
}

void KotlinParser::AssignableSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignableSuffix(this);
}

void KotlinParser::AssignableSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignableSuffix(this);
}

KotlinParser::AssignableSuffixContext* KotlinParser::assignableSuffix() {
  AssignableSuffixContext *_localctx = _tracker.createInstance<AssignableSuffixContext>(_ctx, getState());
  enterRule(_localctx, 194, KotlinParser::RuleAssignableSuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2342);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LANGLE: {
        enterOuterAlt(_localctx, 1);
        setState(2339);
        typeArguments();
        break;
      }

      case KotlinParser::LSQUARE: {
        enterOuterAlt(_localctx, 2);
        setState(2340);
        indexingSuffix();
        break;
      }

      case KotlinParser::NL:
      case KotlinParser::DOT:
      case KotlinParser::COLONCOLON:
      case KotlinParser::QUEST_NO_WS: {
        enterOuterAlt(_localctx, 3);
        setState(2341);
        navigationSuffix();
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

//----------------- IndexingSuffixContext ------------------------------------------------------------------

KotlinParser::IndexingSuffixContext::IndexingSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::IndexingSuffixContext::LSQUARE() {
  return getToken(KotlinParser::LSQUARE, 0);
}

std::vector<KotlinParser::ExpressionContext *> KotlinParser::IndexingSuffixContext::expression() {
  return getRuleContexts<KotlinParser::ExpressionContext>();
}

KotlinParser::ExpressionContext* KotlinParser::IndexingSuffixContext::expression(size_t i) {
  return getRuleContext<KotlinParser::ExpressionContext>(i);
}

tree::TerminalNode* KotlinParser::IndexingSuffixContext::RSQUARE() {
  return getToken(KotlinParser::RSQUARE, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::IndexingSuffixContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::IndexingSuffixContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<tree::TerminalNode *> KotlinParser::IndexingSuffixContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::IndexingSuffixContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::IndexingSuffixContext::getRuleIndex() const {
  return KotlinParser::RuleIndexingSuffix;
}

void KotlinParser::IndexingSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexingSuffix(this);
}

void KotlinParser::IndexingSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexingSuffix(this);
}

KotlinParser::IndexingSuffixContext* KotlinParser::indexingSuffix() {
  IndexingSuffixContext *_localctx = _tracker.createInstance<IndexingSuffixContext>(_ctx, getState());
  enterRule(_localctx, 196, KotlinParser::RuleIndexingSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2344);
    match(KotlinParser::LSQUARE);
    setState(2348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2345);
      match(KotlinParser::NL);
      setState(2350);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2351);
    expression();
    setState(2368);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 351, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2355);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2352);
          match(KotlinParser::NL);
          setState(2357);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2358);
        match(KotlinParser::COMMA);
        setState(2362);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2359);
          match(KotlinParser::NL);
          setState(2364);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2365);
        expression(); 
      }
      setState(2370);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 351, _ctx);
    }
    setState(2378);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 353, _ctx)) {
    case 1: {
      setState(2374);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2371);
        match(KotlinParser::NL);
        setState(2376);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2377);
      match(KotlinParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(2383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2380);
      match(KotlinParser::NL);
      setState(2385);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2386);
    match(KotlinParser::RSQUARE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NavigationSuffixContext ------------------------------------------------------------------

KotlinParser::NavigationSuffixContext::NavigationSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::MemberAccessOperatorContext* KotlinParser::NavigationSuffixContext::memberAccessOperator() {
  return getRuleContext<KotlinParser::MemberAccessOperatorContext>(0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::NavigationSuffixContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::ParenthesizedExpressionContext* KotlinParser::NavigationSuffixContext::parenthesizedExpression() {
  return getRuleContext<KotlinParser::ParenthesizedExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::NavigationSuffixContext::CLASS() {
  return getToken(KotlinParser::CLASS, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::NavigationSuffixContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::NavigationSuffixContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::NavigationSuffixContext::getRuleIndex() const {
  return KotlinParser::RuleNavigationSuffix;
}

void KotlinParser::NavigationSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNavigationSuffix(this);
}

void KotlinParser::NavigationSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNavigationSuffix(this);
}

KotlinParser::NavigationSuffixContext* KotlinParser::navigationSuffix() {
  NavigationSuffixContext *_localctx = _tracker.createInstance<NavigationSuffixContext>(_ctx, getState());
  enterRule(_localctx, 198, KotlinParser::RuleNavigationSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2388);
    memberAccessOperator();
    setState(2392);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2389);
      match(KotlinParser::NL);
      setState(2394);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(2395);
        simpleIdentifier();
        break;
      }

      case KotlinParser::LPAREN: {
        setState(2396);
        parenthesizedExpression();
        break;
      }

      case KotlinParser::CLASS: {
        setState(2397);
        match(KotlinParser::CLASS);
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

//----------------- CallSuffixContext ------------------------------------------------------------------

KotlinParser::CallSuffixContext::CallSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::AnnotatedLambdaContext* KotlinParser::CallSuffixContext::annotatedLambda() {
  return getRuleContext<KotlinParser::AnnotatedLambdaContext>(0);
}

KotlinParser::ValueArgumentsContext* KotlinParser::CallSuffixContext::valueArguments() {
  return getRuleContext<KotlinParser::ValueArgumentsContext>(0);
}

KotlinParser::TypeArgumentsContext* KotlinParser::CallSuffixContext::typeArguments() {
  return getRuleContext<KotlinParser::TypeArgumentsContext>(0);
}


size_t KotlinParser::CallSuffixContext::getRuleIndex() const {
  return KotlinParser::RuleCallSuffix;
}

void KotlinParser::CallSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallSuffix(this);
}

void KotlinParser::CallSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallSuffix(this);
}

KotlinParser::CallSuffixContext* KotlinParser::callSuffix() {
  CallSuffixContext *_localctx = _tracker.createInstance<CallSuffixContext>(_ctx, getState());
  enterRule(_localctx, 200, KotlinParser::RuleCallSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::LANGLE) {
      setState(2400);
      typeArguments();
    }
    setState(2408);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 359, _ctx)) {
    case 1: {
      setState(2404);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == KotlinParser::LPAREN) {
        setState(2403);
        valueArguments();
      }
      setState(2406);
      annotatedLambda();
      break;
    }

    case 2: {
      setState(2407);
      valueArguments();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotatedLambdaContext ------------------------------------------------------------------

KotlinParser::AnnotatedLambdaContext::AnnotatedLambdaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::LambdaLiteralContext* KotlinParser::AnnotatedLambdaContext::lambdaLiteral() {
  return getRuleContext<KotlinParser::LambdaLiteralContext>(0);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::AnnotatedLambdaContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::AnnotatedLambdaContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

KotlinParser::LabelContext* KotlinParser::AnnotatedLambdaContext::label() {
  return getRuleContext<KotlinParser::LabelContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::AnnotatedLambdaContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AnnotatedLambdaContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AnnotatedLambdaContext::getRuleIndex() const {
  return KotlinParser::RuleAnnotatedLambda;
}

void KotlinParser::AnnotatedLambdaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotatedLambda(this);
}

void KotlinParser::AnnotatedLambdaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotatedLambda(this);
}

KotlinParser::AnnotatedLambdaContext* KotlinParser::annotatedLambda() {
  AnnotatedLambdaContext *_localctx = _tracker.createInstance<AnnotatedLambdaContext>(_ctx, getState());
  enterRule(_localctx, 202, KotlinParser::RuleAnnotatedLambda);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2413);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS) {
      setState(2410);
      annotation();
      setState(2415);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2417);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (KotlinParser::FILE - 61))
      | (1ULL << (KotlinParser::FIELD - 61))
      | (1ULL << (KotlinParser::PROPERTY - 61))
      | (1ULL << (KotlinParser::GET - 61))
      | (1ULL << (KotlinParser::SET - 61))
      | (1ULL << (KotlinParser::RECEIVER - 61))
      | (1ULL << (KotlinParser::PARAM - 61))
      | (1ULL << (KotlinParser::SETPARAM - 61))
      | (1ULL << (KotlinParser::DELEGATE - 61))
      | (1ULL << (KotlinParser::IMPORT - 61))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 61))
      | (1ULL << (KotlinParser::BY - 61))
      | (1ULL << (KotlinParser::COMPANION - 61))
      | (1ULL << (KotlinParser::INIT - 61))
      | (1ULL << (KotlinParser::WHERE - 61))
      | (1ULL << (KotlinParser::CATCH - 61))
      | (1ULL << (KotlinParser::FINALLY - 61))
      | (1ULL << (KotlinParser::OUT - 61))
      | (1ULL << (KotlinParser::DYNAMIC - 61))
      | (1ULL << (KotlinParser::PUBLIC - 61))
      | (1ULL << (KotlinParser::PRIVATE - 61))
      | (1ULL << (KotlinParser::PROTECTED - 61))
      | (1ULL << (KotlinParser::INTERNAL - 61))
      | (1ULL << (KotlinParser::ENUM - 61))
      | (1ULL << (KotlinParser::SEALED - 61))
      | (1ULL << (KotlinParser::ANNOTATION - 61))
      | (1ULL << (KotlinParser::DATA - 61))
      | (1ULL << (KotlinParser::INNER - 61))
      | (1ULL << (KotlinParser::VALUE - 61))
      | (1ULL << (KotlinParser::TAILREC - 61))
      | (1ULL << (KotlinParser::OPERATOR - 61))
      | (1ULL << (KotlinParser::INLINE - 61))
      | (1ULL << (KotlinParser::INFIX - 61))
      | (1ULL << (KotlinParser::EXTERNAL - 61))
      | (1ULL << (KotlinParser::SUSPEND - 61))
      | (1ULL << (KotlinParser::OVERRIDE - 61))
      | (1ULL << (KotlinParser::ABSTRACT - 61)))) != 0) || ((((_la - 125) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 125)) & ((1ULL << (KotlinParser::FINAL - 125))
      | (1ULL << (KotlinParser::OPEN - 125))
      | (1ULL << (KotlinParser::CONST - 125))
      | (1ULL << (KotlinParser::LATEINIT - 125))
      | (1ULL << (KotlinParser::VARARG - 125))
      | (1ULL << (KotlinParser::NOINLINE - 125))
      | (1ULL << (KotlinParser::CROSSINLINE - 125))
      | (1ULL << (KotlinParser::REIFIED - 125))
      | (1ULL << (KotlinParser::EXPECT - 125))
      | (1ULL << (KotlinParser::ACTUAL - 125))
      | (1ULL << (KotlinParser::Identifier - 125)))) != 0)) {
      setState(2416);
      label();
    }
    setState(2422);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2419);
      match(KotlinParser::NL);
      setState(2424);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2425);
    lambdaLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentsContext ------------------------------------------------------------------

KotlinParser::TypeArgumentsContext::TypeArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::TypeArgumentsContext::LANGLE() {
  return getToken(KotlinParser::LANGLE, 0);
}

std::vector<KotlinParser::TypeProjectionContext *> KotlinParser::TypeArgumentsContext::typeProjection() {
  return getRuleContexts<KotlinParser::TypeProjectionContext>();
}

KotlinParser::TypeProjectionContext* KotlinParser::TypeArgumentsContext::typeProjection(size_t i) {
  return getRuleContext<KotlinParser::TypeProjectionContext>(i);
}

tree::TerminalNode* KotlinParser::TypeArgumentsContext::RANGLE() {
  return getToken(KotlinParser::RANGLE, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeArgumentsContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeArgumentsContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeArgumentsContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::TypeArgumentsContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::TypeArgumentsContext::getRuleIndex() const {
  return KotlinParser::RuleTypeArguments;
}

void KotlinParser::TypeArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArguments(this);
}

void KotlinParser::TypeArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArguments(this);
}

KotlinParser::TypeArgumentsContext* KotlinParser::typeArguments() {
  TypeArgumentsContext *_localctx = _tracker.createInstance<TypeArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 204, KotlinParser::RuleTypeArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2427);
    match(KotlinParser::LANGLE);
    setState(2431);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2428);
      match(KotlinParser::NL);
      setState(2433);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2434);
    typeProjection();
    setState(2451);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 366, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2438);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2435);
          match(KotlinParser::NL);
          setState(2440);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2441);
        match(KotlinParser::COMMA);
        setState(2445);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2442);
          match(KotlinParser::NL);
          setState(2447);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2448);
        typeProjection(); 
      }
      setState(2453);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 366, _ctx);
    }
    setState(2461);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 368, _ctx)) {
    case 1: {
      setState(2457);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2454);
        match(KotlinParser::NL);
        setState(2459);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2460);
      match(KotlinParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(2466);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2463);
      match(KotlinParser::NL);
      setState(2468);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2469);
    match(KotlinParser::RANGLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueArgumentsContext ------------------------------------------------------------------

KotlinParser::ValueArgumentsContext::ValueArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ValueArgumentsContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

tree::TerminalNode* KotlinParser::ValueArgumentsContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ValueArgumentsContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ValueArgumentsContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::ValueArgumentContext *> KotlinParser::ValueArgumentsContext::valueArgument() {
  return getRuleContexts<KotlinParser::ValueArgumentContext>();
}

KotlinParser::ValueArgumentContext* KotlinParser::ValueArgumentsContext::valueArgument(size_t i) {
  return getRuleContext<KotlinParser::ValueArgumentContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::ValueArgumentsContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::ValueArgumentsContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::ValueArgumentsContext::getRuleIndex() const {
  return KotlinParser::RuleValueArguments;
}

void KotlinParser::ValueArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueArguments(this);
}

void KotlinParser::ValueArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueArguments(this);
}

KotlinParser::ValueArgumentsContext* KotlinParser::valueArguments() {
  ValueArgumentsContext *_localctx = _tracker.createInstance<ValueArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 206, KotlinParser::RuleValueArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2471);
    match(KotlinParser::LPAREN);
    setState(2475);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 370, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2472);
        match(KotlinParser::NL); 
      }
      setState(2477);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 370, _ctx);
    }
    setState(2513);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::NL)
      | (1ULL << KotlinParser::LPAREN)
      | (1ULL << KotlinParser::LSQUARE)
      | (1ULL << KotlinParser::LCURL)
      | (1ULL << KotlinParser::MULT)
      | (1ULL << KotlinParser::ADD)
      | (1ULL << KotlinParser::SUB)
      | (1ULL << KotlinParser::INCR)
      | (1ULL << KotlinParser::DECR)
      | (1ULL << KotlinParser::EXCL_WS)
      | (1ULL << KotlinParser::EXCL_NO_WS)
      | (1ULL << KotlinParser::COLONCOLON)
      | (1ULL << KotlinParser::AT_NO_WS)
      | (1ULL << KotlinParser::AT_PRE_WS)
      | (1ULL << KotlinParser::RETURN_AT)
      | (1ULL << KotlinParser::CONTINUE_AT)
      | (1ULL << KotlinParser::BREAK_AT)
      | (1ULL << KotlinParser::THIS_AT)
      | (1ULL << KotlinParser::SUPER_AT)
      | (1ULL << KotlinParser::FILE)
      | (1ULL << KotlinParser::FIELD)
      | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
      | (1ULL << (KotlinParser::SET - 64))
      | (1ULL << (KotlinParser::RECEIVER - 64))
      | (1ULL << (KotlinParser::PARAM - 64))
      | (1ULL << (KotlinParser::SETPARAM - 64))
      | (1ULL << (KotlinParser::DELEGATE - 64))
      | (1ULL << (KotlinParser::IMPORT - 64))
      | (1ULL << (KotlinParser::FUN - 64))
      | (1ULL << (KotlinParser::OBJECT - 64))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
      | (1ULL << (KotlinParser::BY - 64))
      | (1ULL << (KotlinParser::COMPANION - 64))
      | (1ULL << (KotlinParser::INIT - 64))
      | (1ULL << (KotlinParser::THIS - 64))
      | (1ULL << (KotlinParser::SUPER - 64))
      | (1ULL << (KotlinParser::WHERE - 64))
      | (1ULL << (KotlinParser::IF - 64))
      | (1ULL << (KotlinParser::WHEN - 64))
      | (1ULL << (KotlinParser::TRY - 64))
      | (1ULL << (KotlinParser::CATCH - 64))
      | (1ULL << (KotlinParser::FINALLY - 64))
      | (1ULL << (KotlinParser::THROW - 64))
      | (1ULL << (KotlinParser::RETURN - 64))
      | (1ULL << (KotlinParser::CONTINUE - 64))
      | (1ULL << (KotlinParser::BREAK - 64))
      | (1ULL << (KotlinParser::OUT - 64))
      | (1ULL << (KotlinParser::DYNAMIC - 64))
      | (1ULL << (KotlinParser::PUBLIC - 64))
      | (1ULL << (KotlinParser::PRIVATE - 64))
      | (1ULL << (KotlinParser::PROTECTED - 64))
      | (1ULL << (KotlinParser::INTERNAL - 64))
      | (1ULL << (KotlinParser::ENUM - 64))
      | (1ULL << (KotlinParser::SEALED - 64))
      | (1ULL << (KotlinParser::ANNOTATION - 64))
      | (1ULL << (KotlinParser::DATA - 64))
      | (1ULL << (KotlinParser::INNER - 64))
      | (1ULL << (KotlinParser::VALUE - 64))
      | (1ULL << (KotlinParser::TAILREC - 64))
      | (1ULL << (KotlinParser::OPERATOR - 64))
      | (1ULL << (KotlinParser::INLINE - 64))
      | (1ULL << (KotlinParser::INFIX - 64))
      | (1ULL << (KotlinParser::EXTERNAL - 64))
      | (1ULL << (KotlinParser::SUSPEND - 64))
      | (1ULL << (KotlinParser::OVERRIDE - 64))
      | (1ULL << (KotlinParser::ABSTRACT - 64))
      | (1ULL << (KotlinParser::FINAL - 64))
      | (1ULL << (KotlinParser::OPEN - 64))
      | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
      | (1ULL << (KotlinParser::VARARG - 128))
      | (1ULL << (KotlinParser::NOINLINE - 128))
      | (1ULL << (KotlinParser::CROSSINLINE - 128))
      | (1ULL << (KotlinParser::REIFIED - 128))
      | (1ULL << (KotlinParser::EXPECT - 128))
      | (1ULL << (KotlinParser::ACTUAL - 128))
      | (1ULL << (KotlinParser::RealLiteral - 128))
      | (1ULL << (KotlinParser::IntegerLiteral - 128))
      | (1ULL << (KotlinParser::HexLiteral - 128))
      | (1ULL << (KotlinParser::BinLiteral - 128))
      | (1ULL << (KotlinParser::UnsignedLiteral - 128))
      | (1ULL << (KotlinParser::LongLiteral - 128))
      | (1ULL << (KotlinParser::BooleanLiteral - 128))
      | (1ULL << (KotlinParser::NullLiteral - 128))
      | (1ULL << (KotlinParser::CharacterLiteral - 128))
      | (1ULL << (KotlinParser::Identifier - 128))
      | (1ULL << (KotlinParser::QUOTE_OPEN - 128))
      | (1ULL << (KotlinParser::TRIPLE_QUOTE_OPEN - 128)))) != 0)) {
      setState(2478);
      valueArgument();
      setState(2495);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 373, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2482);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2479);
            match(KotlinParser::NL);
            setState(2484);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2485);
          match(KotlinParser::COMMA);
          setState(2489);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 372, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(2486);
              match(KotlinParser::NL); 
            }
            setState(2491);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 372, _ctx);
          }
          setState(2492);
          valueArgument(); 
        }
        setState(2497);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 373, _ctx);
      }
      setState(2505);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 375, _ctx)) {
      case 1: {
        setState(2501);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2498);
          match(KotlinParser::NL);
          setState(2503);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2504);
        match(KotlinParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(2510);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2507);
        match(KotlinParser::NL);
        setState(2512);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(2515);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueArgumentContext ------------------------------------------------------------------

KotlinParser::ValueArgumentContext::ValueArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExpressionContext* KotlinParser::ValueArgumentContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

KotlinParser::AnnotationContext* KotlinParser::ValueArgumentContext::annotation() {
  return getRuleContext<KotlinParser::AnnotationContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ValueArgumentContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ValueArgumentContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::ValueArgumentContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::ValueArgumentContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

tree::TerminalNode* KotlinParser::ValueArgumentContext::MULT() {
  return getToken(KotlinParser::MULT, 0);
}


size_t KotlinParser::ValueArgumentContext::getRuleIndex() const {
  return KotlinParser::RuleValueArgument;
}

void KotlinParser::ValueArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueArgument(this);
}

void KotlinParser::ValueArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueArgument(this);
}

KotlinParser::ValueArgumentContext* KotlinParser::valueArgument() {
  ValueArgumentContext *_localctx = _tracker.createInstance<ValueArgumentContext>(_ctx, getState());
  enterRule(_localctx, 208, KotlinParser::RuleValueArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2518);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 378, _ctx)) {
    case 1: {
      setState(2517);
      annotation();
      break;
    }

    default:
      break;
    }
    setState(2523);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 379, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2520);
        match(KotlinParser::NL); 
      }
      setState(2525);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 379, _ctx);
    }
    setState(2540);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 382, _ctx)) {
    case 1: {
      setState(2526);
      simpleIdentifier();
      setState(2530);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2527);
        match(KotlinParser::NL);
        setState(2532);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2533);
      match(KotlinParser::ASSIGNMENT);
      setState(2537);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 381, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2534);
          match(KotlinParser::NL); 
        }
        setState(2539);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 381, _ctx);
      }
      break;
    }

    default:
      break;
    }
    setState(2543);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::MULT) {
      setState(2542);
      match(KotlinParser::MULT);
    }
    setState(2548);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2545);
      match(KotlinParser::NL);
      setState(2550);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2551);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

KotlinParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ParenthesizedExpressionContext* KotlinParser::PrimaryExpressionContext::parenthesizedExpression() {
  return getRuleContext<KotlinParser::ParenthesizedExpressionContext>(0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::PrimaryExpressionContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

KotlinParser::LiteralConstantContext* KotlinParser::PrimaryExpressionContext::literalConstant() {
  return getRuleContext<KotlinParser::LiteralConstantContext>(0);
}

KotlinParser::StringLiteralContext* KotlinParser::PrimaryExpressionContext::stringLiteral() {
  return getRuleContext<KotlinParser::StringLiteralContext>(0);
}

KotlinParser::CallableReferenceContext* KotlinParser::PrimaryExpressionContext::callableReference() {
  return getRuleContext<KotlinParser::CallableReferenceContext>(0);
}

KotlinParser::FunctionLiteralContext* KotlinParser::PrimaryExpressionContext::functionLiteral() {
  return getRuleContext<KotlinParser::FunctionLiteralContext>(0);
}

KotlinParser::ObjectLiteralContext* KotlinParser::PrimaryExpressionContext::objectLiteral() {
  return getRuleContext<KotlinParser::ObjectLiteralContext>(0);
}

KotlinParser::CollectionLiteralContext* KotlinParser::PrimaryExpressionContext::collectionLiteral() {
  return getRuleContext<KotlinParser::CollectionLiteralContext>(0);
}

KotlinParser::ThisExpressionContext* KotlinParser::PrimaryExpressionContext::thisExpression() {
  return getRuleContext<KotlinParser::ThisExpressionContext>(0);
}

KotlinParser::SuperExpressionContext* KotlinParser::PrimaryExpressionContext::superExpression() {
  return getRuleContext<KotlinParser::SuperExpressionContext>(0);
}

KotlinParser::IfExpressionContext* KotlinParser::PrimaryExpressionContext::ifExpression() {
  return getRuleContext<KotlinParser::IfExpressionContext>(0);
}

KotlinParser::WhenExpressionContext* KotlinParser::PrimaryExpressionContext::whenExpression() {
  return getRuleContext<KotlinParser::WhenExpressionContext>(0);
}

KotlinParser::TryExpressionContext* KotlinParser::PrimaryExpressionContext::tryExpression() {
  return getRuleContext<KotlinParser::TryExpressionContext>(0);
}

KotlinParser::JumpExpressionContext* KotlinParser::PrimaryExpressionContext::jumpExpression() {
  return getRuleContext<KotlinParser::JumpExpressionContext>(0);
}


size_t KotlinParser::PrimaryExpressionContext::getRuleIndex() const {
  return KotlinParser::RulePrimaryExpression;
}

void KotlinParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void KotlinParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

KotlinParser::PrimaryExpressionContext* KotlinParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 210, KotlinParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2567);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 385, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2553);
      parenthesizedExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2554);
      simpleIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2555);
      literalConstant();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2556);
      stringLiteral();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2557);
      callableReference();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2558);
      functionLiteral();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2559);
      objectLiteral();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2560);
      collectionLiteral();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2561);
      thisExpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2562);
      superExpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2563);
      ifExpression();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2564);
      whenExpression();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2565);
      tryExpression();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2566);
      jumpExpression();
      break;
    }

    default:
      break;
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

KotlinParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParenthesizedExpressionContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::ExpressionContext* KotlinParser::ParenthesizedExpressionContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::ParenthesizedExpressionContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::ParenthesizedExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ParenthesizedExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ParenthesizedExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleParenthesizedExpression;
}

void KotlinParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}

void KotlinParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}

KotlinParser::ParenthesizedExpressionContext* KotlinParser::parenthesizedExpression() {
  ParenthesizedExpressionContext *_localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_ctx, getState());
  enterRule(_localctx, 212, KotlinParser::RuleParenthesizedExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2569);
    match(KotlinParser::LPAREN);
    setState(2573);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2570);
      match(KotlinParser::NL);
      setState(2575);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2576);
    expression();
    setState(2580);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2577);
      match(KotlinParser::NL);
      setState(2582);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2583);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionLiteralContext ------------------------------------------------------------------

KotlinParser::CollectionLiteralContext::CollectionLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::CollectionLiteralContext::LSQUARE() {
  return getToken(KotlinParser::LSQUARE, 0);
}

tree::TerminalNode* KotlinParser::CollectionLiteralContext::RSQUARE() {
  return getToken(KotlinParser::RSQUARE, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::CollectionLiteralContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::CollectionLiteralContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::ExpressionContext *> KotlinParser::CollectionLiteralContext::expression() {
  return getRuleContexts<KotlinParser::ExpressionContext>();
}

KotlinParser::ExpressionContext* KotlinParser::CollectionLiteralContext::expression(size_t i) {
  return getRuleContext<KotlinParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::CollectionLiteralContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::CollectionLiteralContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}


size_t KotlinParser::CollectionLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleCollectionLiteral;
}

void KotlinParser::CollectionLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionLiteral(this);
}

void KotlinParser::CollectionLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionLiteral(this);
}

KotlinParser::CollectionLiteralContext* KotlinParser::collectionLiteral() {
  CollectionLiteralContext *_localctx = _tracker.createInstance<CollectionLiteralContext>(_ctx, getState());
  enterRule(_localctx, 214, KotlinParser::RuleCollectionLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2585);
    match(KotlinParser::LSQUARE);
    setState(2589);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2586);
      match(KotlinParser::NL);
      setState(2591);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::LPAREN)
      | (1ULL << KotlinParser::LSQUARE)
      | (1ULL << KotlinParser::LCURL)
      | (1ULL << KotlinParser::ADD)
      | (1ULL << KotlinParser::SUB)
      | (1ULL << KotlinParser::INCR)
      | (1ULL << KotlinParser::DECR)
      | (1ULL << KotlinParser::EXCL_WS)
      | (1ULL << KotlinParser::EXCL_NO_WS)
      | (1ULL << KotlinParser::COLONCOLON)
      | (1ULL << KotlinParser::AT_NO_WS)
      | (1ULL << KotlinParser::AT_PRE_WS)
      | (1ULL << KotlinParser::RETURN_AT)
      | (1ULL << KotlinParser::CONTINUE_AT)
      | (1ULL << KotlinParser::BREAK_AT)
      | (1ULL << KotlinParser::THIS_AT)
      | (1ULL << KotlinParser::SUPER_AT)
      | (1ULL << KotlinParser::FILE)
      | (1ULL << KotlinParser::FIELD)
      | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
      | (1ULL << (KotlinParser::SET - 64))
      | (1ULL << (KotlinParser::RECEIVER - 64))
      | (1ULL << (KotlinParser::PARAM - 64))
      | (1ULL << (KotlinParser::SETPARAM - 64))
      | (1ULL << (KotlinParser::DELEGATE - 64))
      | (1ULL << (KotlinParser::IMPORT - 64))
      | (1ULL << (KotlinParser::FUN - 64))
      | (1ULL << (KotlinParser::OBJECT - 64))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
      | (1ULL << (KotlinParser::BY - 64))
      | (1ULL << (KotlinParser::COMPANION - 64))
      | (1ULL << (KotlinParser::INIT - 64))
      | (1ULL << (KotlinParser::THIS - 64))
      | (1ULL << (KotlinParser::SUPER - 64))
      | (1ULL << (KotlinParser::WHERE - 64))
      | (1ULL << (KotlinParser::IF - 64))
      | (1ULL << (KotlinParser::WHEN - 64))
      | (1ULL << (KotlinParser::TRY - 64))
      | (1ULL << (KotlinParser::CATCH - 64))
      | (1ULL << (KotlinParser::FINALLY - 64))
      | (1ULL << (KotlinParser::THROW - 64))
      | (1ULL << (KotlinParser::RETURN - 64))
      | (1ULL << (KotlinParser::CONTINUE - 64))
      | (1ULL << (KotlinParser::BREAK - 64))
      | (1ULL << (KotlinParser::OUT - 64))
      | (1ULL << (KotlinParser::DYNAMIC - 64))
      | (1ULL << (KotlinParser::PUBLIC - 64))
      | (1ULL << (KotlinParser::PRIVATE - 64))
      | (1ULL << (KotlinParser::PROTECTED - 64))
      | (1ULL << (KotlinParser::INTERNAL - 64))
      | (1ULL << (KotlinParser::ENUM - 64))
      | (1ULL << (KotlinParser::SEALED - 64))
      | (1ULL << (KotlinParser::ANNOTATION - 64))
      | (1ULL << (KotlinParser::DATA - 64))
      | (1ULL << (KotlinParser::INNER - 64))
      | (1ULL << (KotlinParser::VALUE - 64))
      | (1ULL << (KotlinParser::TAILREC - 64))
      | (1ULL << (KotlinParser::OPERATOR - 64))
      | (1ULL << (KotlinParser::INLINE - 64))
      | (1ULL << (KotlinParser::INFIX - 64))
      | (1ULL << (KotlinParser::EXTERNAL - 64))
      | (1ULL << (KotlinParser::SUSPEND - 64))
      | (1ULL << (KotlinParser::OVERRIDE - 64))
      | (1ULL << (KotlinParser::ABSTRACT - 64))
      | (1ULL << (KotlinParser::FINAL - 64))
      | (1ULL << (KotlinParser::OPEN - 64))
      | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
      | (1ULL << (KotlinParser::VARARG - 128))
      | (1ULL << (KotlinParser::NOINLINE - 128))
      | (1ULL << (KotlinParser::CROSSINLINE - 128))
      | (1ULL << (KotlinParser::REIFIED - 128))
      | (1ULL << (KotlinParser::EXPECT - 128))
      | (1ULL << (KotlinParser::ACTUAL - 128))
      | (1ULL << (KotlinParser::RealLiteral - 128))
      | (1ULL << (KotlinParser::IntegerLiteral - 128))
      | (1ULL << (KotlinParser::HexLiteral - 128))
      | (1ULL << (KotlinParser::BinLiteral - 128))
      | (1ULL << (KotlinParser::UnsignedLiteral - 128))
      | (1ULL << (KotlinParser::LongLiteral - 128))
      | (1ULL << (KotlinParser::BooleanLiteral - 128))
      | (1ULL << (KotlinParser::NullLiteral - 128))
      | (1ULL << (KotlinParser::CharacterLiteral - 128))
      | (1ULL << (KotlinParser::Identifier - 128))
      | (1ULL << (KotlinParser::QUOTE_OPEN - 128))
      | (1ULL << (KotlinParser::TRIPLE_QUOTE_OPEN - 128)))) != 0)) {
      setState(2592);
      expression();
      setState(2609);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 391, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2596);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2593);
            match(KotlinParser::NL);
            setState(2598);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2599);
          match(KotlinParser::COMMA);
          setState(2603);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2600);
            match(KotlinParser::NL);
            setState(2605);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2606);
          expression(); 
        }
        setState(2611);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 391, _ctx);
      }
      setState(2619);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 393, _ctx)) {
      case 1: {
        setState(2615);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2612);
          match(KotlinParser::NL);
          setState(2617);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2618);
        match(KotlinParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(2624);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2621);
        match(KotlinParser::NL);
        setState(2626);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(2629);
    match(KotlinParser::RSQUARE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralConstantContext ------------------------------------------------------------------

KotlinParser::LiteralConstantContext::LiteralConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::BooleanLiteral() {
  return getToken(KotlinParser::BooleanLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::IntegerLiteral() {
  return getToken(KotlinParser::IntegerLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::HexLiteral() {
  return getToken(KotlinParser::HexLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::BinLiteral() {
  return getToken(KotlinParser::BinLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::CharacterLiteral() {
  return getToken(KotlinParser::CharacterLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::RealLiteral() {
  return getToken(KotlinParser::RealLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::NullLiteral() {
  return getToken(KotlinParser::NullLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::LongLiteral() {
  return getToken(KotlinParser::LongLiteral, 0);
}

tree::TerminalNode* KotlinParser::LiteralConstantContext::UnsignedLiteral() {
  return getToken(KotlinParser::UnsignedLiteral, 0);
}


size_t KotlinParser::LiteralConstantContext::getRuleIndex() const {
  return KotlinParser::RuleLiteralConstant;
}

void KotlinParser::LiteralConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralConstant(this);
}

void KotlinParser::LiteralConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralConstant(this);
}

KotlinParser::LiteralConstantContext* KotlinParser::literalConstant() {
  LiteralConstantContext *_localctx = _tracker.createInstance<LiteralConstantContext>(_ctx, getState());
  enterRule(_localctx, 216, KotlinParser::RuleLiteralConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2631);
    _la = _input->LA(1);
    if (!(((((_la - 135) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 135)) & ((1ULL << (KotlinParser::RealLiteral - 135))
      | (1ULL << (KotlinParser::IntegerLiteral - 135))
      | (1ULL << (KotlinParser::HexLiteral - 135))
      | (1ULL << (KotlinParser::BinLiteral - 135))
      | (1ULL << (KotlinParser::UnsignedLiteral - 135))
      | (1ULL << (KotlinParser::LongLiteral - 135))
      | (1ULL << (KotlinParser::BooleanLiteral - 135))
      | (1ULL << (KotlinParser::NullLiteral - 135))
      | (1ULL << (KotlinParser::CharacterLiteral - 135)))) != 0))) {
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

//----------------- StringLiteralContext ------------------------------------------------------------------

KotlinParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::LineStringLiteralContext* KotlinParser::StringLiteralContext::lineStringLiteral() {
  return getRuleContext<KotlinParser::LineStringLiteralContext>(0);
}

KotlinParser::MultiLineStringLiteralContext* KotlinParser::StringLiteralContext::multiLineStringLiteral() {
  return getRuleContext<KotlinParser::MultiLineStringLiteralContext>(0);
}


size_t KotlinParser::StringLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleStringLiteral;
}

void KotlinParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void KotlinParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}

KotlinParser::StringLiteralContext* KotlinParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 218, KotlinParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::QUOTE_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(2633);
        lineStringLiteral();
        break;
      }

      case KotlinParser::TRIPLE_QUOTE_OPEN: {
        enterOuterAlt(_localctx, 2);
        setState(2634);
        multiLineStringLiteral();
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

//----------------- LineStringLiteralContext ------------------------------------------------------------------

KotlinParser::LineStringLiteralContext::LineStringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::LineStringLiteralContext::QUOTE_OPEN() {
  return getToken(KotlinParser::QUOTE_OPEN, 0);
}

tree::TerminalNode* KotlinParser::LineStringLiteralContext::QUOTE_CLOSE() {
  return getToken(KotlinParser::QUOTE_CLOSE, 0);
}

std::vector<KotlinParser::LineStringContentContext *> KotlinParser::LineStringLiteralContext::lineStringContent() {
  return getRuleContexts<KotlinParser::LineStringContentContext>();
}

KotlinParser::LineStringContentContext* KotlinParser::LineStringLiteralContext::lineStringContent(size_t i) {
  return getRuleContext<KotlinParser::LineStringContentContext>(i);
}

std::vector<KotlinParser::LineStringExpressionContext *> KotlinParser::LineStringLiteralContext::lineStringExpression() {
  return getRuleContexts<KotlinParser::LineStringExpressionContext>();
}

KotlinParser::LineStringExpressionContext* KotlinParser::LineStringLiteralContext::lineStringExpression(size_t i) {
  return getRuleContext<KotlinParser::LineStringExpressionContext>(i);
}


size_t KotlinParser::LineStringLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleLineStringLiteral;
}

void KotlinParser::LineStringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLineStringLiteral(this);
}

void KotlinParser::LineStringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLineStringLiteral(this);
}

KotlinParser::LineStringLiteralContext* KotlinParser::lineStringLiteral() {
  LineStringLiteralContext *_localctx = _tracker.createInstance<LineStringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 220, KotlinParser::RuleLineStringLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2637);
    match(KotlinParser::QUOTE_OPEN);
    setState(2642);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 159) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 159)) & ((1ULL << (KotlinParser::LineStrRef - 159))
      | (1ULL << (KotlinParser::LineStrText - 159))
      | (1ULL << (KotlinParser::LineStrEscapedChar - 159))
      | (1ULL << (KotlinParser::LineStrExprStart - 159)))) != 0)) {
      setState(2640);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case KotlinParser::LineStrRef:
        case KotlinParser::LineStrText:
        case KotlinParser::LineStrEscapedChar: {
          setState(2638);
          lineStringContent();
          break;
        }

        case KotlinParser::LineStrExprStart: {
          setState(2639);
          lineStringExpression();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(2644);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2645);
    match(KotlinParser::QUOTE_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiLineStringLiteralContext ------------------------------------------------------------------

KotlinParser::MultiLineStringLiteralContext::MultiLineStringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MultiLineStringLiteralContext::TRIPLE_QUOTE_OPEN() {
  return getToken(KotlinParser::TRIPLE_QUOTE_OPEN, 0);
}

tree::TerminalNode* KotlinParser::MultiLineStringLiteralContext::TRIPLE_QUOTE_CLOSE() {
  return getToken(KotlinParser::TRIPLE_QUOTE_CLOSE, 0);
}

std::vector<KotlinParser::MultiLineStringContentContext *> KotlinParser::MultiLineStringLiteralContext::multiLineStringContent() {
  return getRuleContexts<KotlinParser::MultiLineStringContentContext>();
}

KotlinParser::MultiLineStringContentContext* KotlinParser::MultiLineStringLiteralContext::multiLineStringContent(size_t i) {
  return getRuleContext<KotlinParser::MultiLineStringContentContext>(i);
}

std::vector<KotlinParser::MultiLineStringExpressionContext *> KotlinParser::MultiLineStringLiteralContext::multiLineStringExpression() {
  return getRuleContexts<KotlinParser::MultiLineStringExpressionContext>();
}

KotlinParser::MultiLineStringExpressionContext* KotlinParser::MultiLineStringLiteralContext::multiLineStringExpression(size_t i) {
  return getRuleContext<KotlinParser::MultiLineStringExpressionContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::MultiLineStringLiteralContext::MultiLineStringQuote() {
  return getTokens(KotlinParser::MultiLineStringQuote);
}

tree::TerminalNode* KotlinParser::MultiLineStringLiteralContext::MultiLineStringQuote(size_t i) {
  return getToken(KotlinParser::MultiLineStringQuote, i);
}


size_t KotlinParser::MultiLineStringLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleMultiLineStringLiteral;
}

void KotlinParser::MultiLineStringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiLineStringLiteral(this);
}

void KotlinParser::MultiLineStringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiLineStringLiteral(this);
}

KotlinParser::MultiLineStringLiteralContext* KotlinParser::multiLineStringLiteral() {
  MultiLineStringLiteralContext *_localctx = _tracker.createInstance<MultiLineStringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 222, KotlinParser::RuleMultiLineStringLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2647);
    match(KotlinParser::TRIPLE_QUOTE_OPEN);
    setState(2653);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 164) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 164)) & ((1ULL << (KotlinParser::MultiLineStringQuote - 164))
      | (1ULL << (KotlinParser::MultiLineStrRef - 164))
      | (1ULL << (KotlinParser::MultiLineStrText - 164))
      | (1ULL << (KotlinParser::MultiLineStrExprStart - 164)))) != 0)) {
      setState(2651);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 399, _ctx)) {
      case 1: {
        setState(2648);
        multiLineStringContent();
        break;
      }

      case 2: {
        setState(2649);
        multiLineStringExpression();
        break;
      }

      case 3: {
        setState(2650);
        match(KotlinParser::MultiLineStringQuote);
        break;
      }

      default:
        break;
      }
      setState(2655);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2656);
    match(KotlinParser::TRIPLE_QUOTE_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineStringContentContext ------------------------------------------------------------------

KotlinParser::LineStringContentContext::LineStringContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::LineStringContentContext::LineStrText() {
  return getToken(KotlinParser::LineStrText, 0);
}

tree::TerminalNode* KotlinParser::LineStringContentContext::LineStrEscapedChar() {
  return getToken(KotlinParser::LineStrEscapedChar, 0);
}

tree::TerminalNode* KotlinParser::LineStringContentContext::LineStrRef() {
  return getToken(KotlinParser::LineStrRef, 0);
}


size_t KotlinParser::LineStringContentContext::getRuleIndex() const {
  return KotlinParser::RuleLineStringContent;
}

void KotlinParser::LineStringContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLineStringContent(this);
}

void KotlinParser::LineStringContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLineStringContent(this);
}

KotlinParser::LineStringContentContext* KotlinParser::lineStringContent() {
  LineStringContentContext *_localctx = _tracker.createInstance<LineStringContentContext>(_ctx, getState());
  enterRule(_localctx, 224, KotlinParser::RuleLineStringContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2658);
    _la = _input->LA(1);
    if (!(((((_la - 159) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 159)) & ((1ULL << (KotlinParser::LineStrRef - 159))
      | (1ULL << (KotlinParser::LineStrText - 159))
      | (1ULL << (KotlinParser::LineStrEscapedChar - 159)))) != 0))) {
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

//----------------- LineStringExpressionContext ------------------------------------------------------------------

KotlinParser::LineStringExpressionContext::LineStringExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::LineStringExpressionContext::LineStrExprStart() {
  return getToken(KotlinParser::LineStrExprStart, 0);
}

KotlinParser::ExpressionContext* KotlinParser::LineStringExpressionContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::LineStringExpressionContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::LineStringExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::LineStringExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::LineStringExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleLineStringExpression;
}

void KotlinParser::LineStringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLineStringExpression(this);
}

void KotlinParser::LineStringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLineStringExpression(this);
}

KotlinParser::LineStringExpressionContext* KotlinParser::lineStringExpression() {
  LineStringExpressionContext *_localctx = _tracker.createInstance<LineStringExpressionContext>(_ctx, getState());
  enterRule(_localctx, 226, KotlinParser::RuleLineStringExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2660);
    match(KotlinParser::LineStrExprStart);
    setState(2664);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2661);
      match(KotlinParser::NL);
      setState(2666);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2667);
    expression();
    setState(2671);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2668);
      match(KotlinParser::NL);
      setState(2673);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2674);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiLineStringContentContext ------------------------------------------------------------------

KotlinParser::MultiLineStringContentContext::MultiLineStringContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MultiLineStringContentContext::MultiLineStrText() {
  return getToken(KotlinParser::MultiLineStrText, 0);
}

tree::TerminalNode* KotlinParser::MultiLineStringContentContext::MultiLineStringQuote() {
  return getToken(KotlinParser::MultiLineStringQuote, 0);
}

tree::TerminalNode* KotlinParser::MultiLineStringContentContext::MultiLineStrRef() {
  return getToken(KotlinParser::MultiLineStrRef, 0);
}


size_t KotlinParser::MultiLineStringContentContext::getRuleIndex() const {
  return KotlinParser::RuleMultiLineStringContent;
}

void KotlinParser::MultiLineStringContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiLineStringContent(this);
}

void KotlinParser::MultiLineStringContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiLineStringContent(this);
}

KotlinParser::MultiLineStringContentContext* KotlinParser::multiLineStringContent() {
  MultiLineStringContentContext *_localctx = _tracker.createInstance<MultiLineStringContentContext>(_ctx, getState());
  enterRule(_localctx, 228, KotlinParser::RuleMultiLineStringContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2676);
    _la = _input->LA(1);
    if (!(((((_la - 164) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 164)) & ((1ULL << (KotlinParser::MultiLineStringQuote - 164))
      | (1ULL << (KotlinParser::MultiLineStrRef - 164))
      | (1ULL << (KotlinParser::MultiLineStrText - 164)))) != 0))) {
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

//----------------- MultiLineStringExpressionContext ------------------------------------------------------------------

KotlinParser::MultiLineStringExpressionContext::MultiLineStringExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MultiLineStringExpressionContext::MultiLineStrExprStart() {
  return getToken(KotlinParser::MultiLineStrExprStart, 0);
}

KotlinParser::ExpressionContext* KotlinParser::MultiLineStringExpressionContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::MultiLineStringExpressionContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::MultiLineStringExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::MultiLineStringExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::MultiLineStringExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleMultiLineStringExpression;
}

void KotlinParser::MultiLineStringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiLineStringExpression(this);
}

void KotlinParser::MultiLineStringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiLineStringExpression(this);
}

KotlinParser::MultiLineStringExpressionContext* KotlinParser::multiLineStringExpression() {
  MultiLineStringExpressionContext *_localctx = _tracker.createInstance<MultiLineStringExpressionContext>(_ctx, getState());
  enterRule(_localctx, 230, KotlinParser::RuleMultiLineStringExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2678);
    match(KotlinParser::MultiLineStrExprStart);
    setState(2682);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2679);
      match(KotlinParser::NL);
      setState(2684);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2685);
    expression();
    setState(2689);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2686);
      match(KotlinParser::NL);
      setState(2691);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2692);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaLiteralContext ------------------------------------------------------------------

KotlinParser::LambdaLiteralContext::LambdaLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::LambdaLiteralContext::LCURL() {
  return getToken(KotlinParser::LCURL, 0);
}

KotlinParser::StatementsContext* KotlinParser::LambdaLiteralContext::statements() {
  return getRuleContext<KotlinParser::StatementsContext>(0);
}

tree::TerminalNode* KotlinParser::LambdaLiteralContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::LambdaLiteralContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::LambdaLiteralContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::LambdaLiteralContext::ARROW() {
  return getToken(KotlinParser::ARROW, 0);
}

KotlinParser::LambdaParametersContext* KotlinParser::LambdaLiteralContext::lambdaParameters() {
  return getRuleContext<KotlinParser::LambdaParametersContext>(0);
}


size_t KotlinParser::LambdaLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleLambdaLiteral;
}

void KotlinParser::LambdaLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaLiteral(this);
}

void KotlinParser::LambdaLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaLiteral(this);
}

KotlinParser::LambdaLiteralContext* KotlinParser::lambdaLiteral() {
  LambdaLiteralContext *_localctx = _tracker.createInstance<LambdaLiteralContext>(_ctx, getState());
  enterRule(_localctx, 232, KotlinParser::RuleLambdaLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2694);
    match(KotlinParser::LCURL);
    setState(2698);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 405, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2695);
        match(KotlinParser::NL); 
      }
      setState(2700);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 405, _ctx);
    }
    setState(2717);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 409, _ctx)) {
    case 1: {
      setState(2702);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 406, _ctx)) {
      case 1: {
        setState(2701);
        lambdaParameters();
        break;
      }

      default:
        break;
      }
      setState(2707);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2704);
        match(KotlinParser::NL);
        setState(2709);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2710);
      match(KotlinParser::ARROW);
      setState(2714);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 408, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2711);
          match(KotlinParser::NL); 
        }
        setState(2716);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 408, _ctx);
      }
      break;
    }

    default:
      break;
    }
    setState(2719);
    statements();
    setState(2723);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2720);
      match(KotlinParser::NL);
      setState(2725);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2726);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

KotlinParser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::LambdaParameterContext *> KotlinParser::LambdaParametersContext::lambdaParameter() {
  return getRuleContexts<KotlinParser::LambdaParameterContext>();
}

KotlinParser::LambdaParameterContext* KotlinParser::LambdaParametersContext::lambdaParameter(size_t i) {
  return getRuleContext<KotlinParser::LambdaParameterContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::LambdaParametersContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::LambdaParametersContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}

std::vector<tree::TerminalNode *> KotlinParser::LambdaParametersContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::LambdaParametersContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::LambdaParametersContext::getRuleIndex() const {
  return KotlinParser::RuleLambdaParameters;
}

void KotlinParser::LambdaParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParameters(this);
}

void KotlinParser::LambdaParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParameters(this);
}

KotlinParser::LambdaParametersContext* KotlinParser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 234, KotlinParser::RuleLambdaParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2728);
    lambdaParameter();
    setState(2745);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 413, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2732);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(2729);
          match(KotlinParser::NL);
          setState(2734);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(2735);
        match(KotlinParser::COMMA);
        setState(2739);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 412, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(2736);
            match(KotlinParser::NL); 
          }
          setState(2741);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 412, _ctx);
        }
        setState(2742);
        lambdaParameter(); 
      }
      setState(2747);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 413, _ctx);
    }
    setState(2755);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 415, _ctx)) {
    case 1: {
      setState(2751);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2748);
        match(KotlinParser::NL);
        setState(2753);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2754);
      match(KotlinParser::COMMA);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParameterContext ------------------------------------------------------------------

KotlinParser::LambdaParameterContext::LambdaParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::VariableDeclarationContext* KotlinParser::LambdaParameterContext::variableDeclaration() {
  return getRuleContext<KotlinParser::VariableDeclarationContext>(0);
}

KotlinParser::MultiVariableDeclarationContext* KotlinParser::LambdaParameterContext::multiVariableDeclaration() {
  return getRuleContext<KotlinParser::MultiVariableDeclarationContext>(0);
}

tree::TerminalNode* KotlinParser::LambdaParameterContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::LambdaParameterContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::LambdaParameterContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::LambdaParameterContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::LambdaParameterContext::getRuleIndex() const {
  return KotlinParser::RuleLambdaParameter;
}

void KotlinParser::LambdaParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParameter(this);
}

void KotlinParser::LambdaParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParameter(this);
}

KotlinParser::LambdaParameterContext* KotlinParser::lambdaParameter() {
  LambdaParameterContext *_localctx = _tracker.createInstance<LambdaParameterContext>(_ctx, getState());
  enterRule(_localctx, 236, KotlinParser::RuleLambdaParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2775);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::NL:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2757);
        variableDeclaration();
        break;
      }

      case KotlinParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(2758);
        multiVariableDeclaration();
        setState(2773);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 418, _ctx)) {
        case 1: {
          setState(2762);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2759);
            match(KotlinParser::NL);
            setState(2764);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2765);
          match(KotlinParser::COLON);
          setState(2769);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2766);
            match(KotlinParser::NL);
            setState(2771);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2772);
          type();
          break;
        }

        default:
          break;
        }
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

//----------------- AnonymousFunctionContext ------------------------------------------------------------------

KotlinParser::AnonymousFunctionContext::AnonymousFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::AnonymousFunctionContext::FUN() {
  return getToken(KotlinParser::FUN, 0);
}

KotlinParser::ParametersWithOptionalTypeContext* KotlinParser::AnonymousFunctionContext::parametersWithOptionalType() {
  return getRuleContext<KotlinParser::ParametersWithOptionalTypeContext>(0);
}

std::vector<KotlinParser::TypeContext *> KotlinParser::AnonymousFunctionContext::type() {
  return getRuleContexts<KotlinParser::TypeContext>();
}

KotlinParser::TypeContext* KotlinParser::AnonymousFunctionContext::type(size_t i) {
  return getRuleContext<KotlinParser::TypeContext>(i);
}

tree::TerminalNode* KotlinParser::AnonymousFunctionContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::AnonymousFunctionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AnonymousFunctionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::AnonymousFunctionContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeConstraintsContext* KotlinParser::AnonymousFunctionContext::typeConstraints() {
  return getRuleContext<KotlinParser::TypeConstraintsContext>(0);
}

KotlinParser::FunctionBodyContext* KotlinParser::AnonymousFunctionContext::functionBody() {
  return getRuleContext<KotlinParser::FunctionBodyContext>(0);
}


size_t KotlinParser::AnonymousFunctionContext::getRuleIndex() const {
  return KotlinParser::RuleAnonymousFunction;
}

void KotlinParser::AnonymousFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnonymousFunction(this);
}

void KotlinParser::AnonymousFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnonymousFunction(this);
}

KotlinParser::AnonymousFunctionContext* KotlinParser::anonymousFunction() {
  AnonymousFunctionContext *_localctx = _tracker.createInstance<AnonymousFunctionContext>(_ctx, getState());
  enterRule(_localctx, 238, KotlinParser::RuleAnonymousFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2777);
    match(KotlinParser::FUN);
    setState(2793);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 422, _ctx)) {
    case 1: {
      setState(2781);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2778);
        match(KotlinParser::NL);
        setState(2783);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2784);
      type();
      setState(2788);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2785);
        match(KotlinParser::NL);
        setState(2790);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2791);
      match(KotlinParser::DOT);
      break;
    }

    default:
      break;
    }
    setState(2798);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2795);
      match(KotlinParser::NL);
      setState(2800);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2801);
    parametersWithOptionalType();
    setState(2816);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 426, _ctx)) {
    case 1: {
      setState(2805);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2802);
        match(KotlinParser::NL);
        setState(2807);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2808);
      match(KotlinParser::COLON);
      setState(2812);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2809);
        match(KotlinParser::NL);
        setState(2814);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2815);
      type();
      break;
    }

    default:
      break;
    }
    setState(2825);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 428, _ctx)) {
    case 1: {
      setState(2821);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2818);
        match(KotlinParser::NL);
        setState(2823);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2824);
      typeConstraints();
      break;
    }

    default:
      break;
    }
    setState(2834);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 430, _ctx)) {
    case 1: {
      setState(2830);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2827);
        match(KotlinParser::NL);
        setState(2832);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2833);
      functionBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionLiteralContext ------------------------------------------------------------------

KotlinParser::FunctionLiteralContext::FunctionLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::LambdaLiteralContext* KotlinParser::FunctionLiteralContext::lambdaLiteral() {
  return getRuleContext<KotlinParser::LambdaLiteralContext>(0);
}

KotlinParser::AnonymousFunctionContext* KotlinParser::FunctionLiteralContext::anonymousFunction() {
  return getRuleContext<KotlinParser::AnonymousFunctionContext>(0);
}


size_t KotlinParser::FunctionLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionLiteral;
}

void KotlinParser::FunctionLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionLiteral(this);
}

void KotlinParser::FunctionLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionLiteral(this);
}

KotlinParser::FunctionLiteralContext* KotlinParser::functionLiteral() {
  FunctionLiteralContext *_localctx = _tracker.createInstance<FunctionLiteralContext>(_ctx, getState());
  enterRule(_localctx, 240, KotlinParser::RuleFunctionLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2838);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LCURL: {
        enterOuterAlt(_localctx, 1);
        setState(2836);
        lambdaLiteral();
        break;
      }

      case KotlinParser::FUN: {
        enterOuterAlt(_localctx, 2);
        setState(2837);
        anonymousFunction();
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

//----------------- ObjectLiteralContext ------------------------------------------------------------------

KotlinParser::ObjectLiteralContext::ObjectLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ObjectLiteralContext::OBJECT() {
  return getToken(KotlinParser::OBJECT, 0);
}

tree::TerminalNode* KotlinParser::ObjectLiteralContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::DelegationSpecifiersContext* KotlinParser::ObjectLiteralContext::delegationSpecifiers() {
  return getRuleContext<KotlinParser::DelegationSpecifiersContext>(0);
}

KotlinParser::ClassBodyContext* KotlinParser::ObjectLiteralContext::classBody() {
  return getRuleContext<KotlinParser::ClassBodyContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ObjectLiteralContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ObjectLiteralContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ObjectLiteralContext::getRuleIndex() const {
  return KotlinParser::RuleObjectLiteral;
}

void KotlinParser::ObjectLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectLiteral(this);
}

void KotlinParser::ObjectLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectLiteral(this);
}

KotlinParser::ObjectLiteralContext* KotlinParser::objectLiteral() {
  ObjectLiteralContext *_localctx = _tracker.createInstance<ObjectLiteralContext>(_ctx, getState());
  enterRule(_localctx, 242, KotlinParser::RuleObjectLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2840);
    match(KotlinParser::OBJECT);
    setState(2861);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 435, _ctx)) {
    case 1: {
      setState(2844);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2841);
        match(KotlinParser::NL);
        setState(2846);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2847);
      match(KotlinParser::COLON);
      setState(2851);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 433, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2848);
          match(KotlinParser::NL); 
        }
        setState(2853);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 433, _ctx);
      }
      setState(2854);
      delegationSpecifiers();
      setState(2858);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 434, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2855);
          match(KotlinParser::NL); 
        }
        setState(2860);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 434, _ctx);
      }
      break;
    }

    default:
      break;
    }
    setState(2870);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 437, _ctx)) {
    case 1: {
      setState(2866);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2863);
        match(KotlinParser::NL);
        setState(2868);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2869);
      classBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThisExpressionContext ------------------------------------------------------------------

KotlinParser::ThisExpressionContext::ThisExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ThisExpressionContext::THIS() {
  return getToken(KotlinParser::THIS, 0);
}

tree::TerminalNode* KotlinParser::ThisExpressionContext::THIS_AT() {
  return getToken(KotlinParser::THIS_AT, 0);
}


size_t KotlinParser::ThisExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleThisExpression;
}

void KotlinParser::ThisExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisExpression(this);
}

void KotlinParser::ThisExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisExpression(this);
}

KotlinParser::ThisExpressionContext* KotlinParser::thisExpression() {
  ThisExpressionContext *_localctx = _tracker.createInstance<ThisExpressionContext>(_ctx, getState());
  enterRule(_localctx, 244, KotlinParser::RuleThisExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2872);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::THIS_AT

    || _la == KotlinParser::THIS)) {
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

//----------------- SuperExpressionContext ------------------------------------------------------------------

KotlinParser::SuperExpressionContext::SuperExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::SuperExpressionContext::SUPER() {
  return getToken(KotlinParser::SUPER, 0);
}

tree::TerminalNode* KotlinParser::SuperExpressionContext::LANGLE() {
  return getToken(KotlinParser::LANGLE, 0);
}

KotlinParser::TypeContext* KotlinParser::SuperExpressionContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

tree::TerminalNode* KotlinParser::SuperExpressionContext::RANGLE() {
  return getToken(KotlinParser::RANGLE, 0);
}

tree::TerminalNode* KotlinParser::SuperExpressionContext::AT_NO_WS() {
  return getToken(KotlinParser::AT_NO_WS, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::SuperExpressionContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::SuperExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SuperExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::SuperExpressionContext::SUPER_AT() {
  return getToken(KotlinParser::SUPER_AT, 0);
}


size_t KotlinParser::SuperExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleSuperExpression;
}

void KotlinParser::SuperExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperExpression(this);
}

void KotlinParser::SuperExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperExpression(this);
}

KotlinParser::SuperExpressionContext* KotlinParser::superExpression() {
  SuperExpressionContext *_localctx = _tracker.createInstance<SuperExpressionContext>(_ctx, getState());
  enterRule(_localctx, 246, KotlinParser::RuleSuperExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(2898);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::SUPER: {
        enterOuterAlt(_localctx, 1);
        setState(2874);
        match(KotlinParser::SUPER);
        setState(2891);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 440, _ctx)) {
        case 1: {
          setState(2875);
          match(KotlinParser::LANGLE);
          setState(2879);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2876);
            match(KotlinParser::NL);
            setState(2881);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2882);
          type();
          setState(2886);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(2883);
            match(KotlinParser::NL);
            setState(2888);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(2889);
          match(KotlinParser::RANGLE);
          break;
        }

        default:
          break;
        }
        setState(2895);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 441, _ctx)) {
        case 1: {
          setState(2893);
          match(KotlinParser::AT_NO_WS);
          setState(2894);
          simpleIdentifier();
          break;
        }

        default:
          break;
        }
        break;
      }

      case KotlinParser::SUPER_AT: {
        enterOuterAlt(_localctx, 2);
        setState(2897);
        match(KotlinParser::SUPER_AT);
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

//----------------- IfExpressionContext ------------------------------------------------------------------

KotlinParser::IfExpressionContext::IfExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::IfExpressionContext::IF() {
  return getToken(KotlinParser::IF, 0);
}

tree::TerminalNode* KotlinParser::IfExpressionContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::ExpressionContext* KotlinParser::IfExpressionContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::IfExpressionContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

std::vector<KotlinParser::ControlStructureBodyContext *> KotlinParser::IfExpressionContext::controlStructureBody() {
  return getRuleContexts<KotlinParser::ControlStructureBodyContext>();
}

KotlinParser::ControlStructureBodyContext* KotlinParser::IfExpressionContext::controlStructureBody(size_t i) {
  return getRuleContext<KotlinParser::ControlStructureBodyContext>(i);
}

tree::TerminalNode* KotlinParser::IfExpressionContext::ELSE() {
  return getToken(KotlinParser::ELSE, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::IfExpressionContext::SEMICOLON() {
  return getTokens(KotlinParser::SEMICOLON);
}

tree::TerminalNode* KotlinParser::IfExpressionContext::SEMICOLON(size_t i) {
  return getToken(KotlinParser::SEMICOLON, i);
}

std::vector<tree::TerminalNode *> KotlinParser::IfExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::IfExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::IfExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleIfExpression;
}

void KotlinParser::IfExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpression(this);
}

void KotlinParser::IfExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpression(this);
}

KotlinParser::IfExpressionContext* KotlinParser::ifExpression() {
  IfExpressionContext *_localctx = _tracker.createInstance<IfExpressionContext>(_ctx, getState());
  enterRule(_localctx, 248, KotlinParser::RuleIfExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2900);
    match(KotlinParser::IF);
    setState(2904);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2901);
      match(KotlinParser::NL);
      setState(2906);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2907);
    match(KotlinParser::LPAREN);
    setState(2911);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2908);
      match(KotlinParser::NL);
      setState(2913);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2914);
    expression();
    setState(2918);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(2915);
      match(KotlinParser::NL);
      setState(2920);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(2921);
    match(KotlinParser::RPAREN);
    setState(2925);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 446, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(2922);
        match(KotlinParser::NL); 
      }
      setState(2927);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 446, _ctx);
    }
    setState(2959);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 453, _ctx)) {
    case 1: {
      setState(2928);
      controlStructureBody();
      break;
    }

    case 2: {
      setState(2930);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << KotlinParser::LPAREN)
        | (1ULL << KotlinParser::LSQUARE)
        | (1ULL << KotlinParser::LCURL)
        | (1ULL << KotlinParser::ADD)
        | (1ULL << KotlinParser::SUB)
        | (1ULL << KotlinParser::INCR)
        | (1ULL << KotlinParser::DECR)
        | (1ULL << KotlinParser::EXCL_WS)
        | (1ULL << KotlinParser::EXCL_NO_WS)
        | (1ULL << KotlinParser::COLONCOLON)
        | (1ULL << KotlinParser::AT_NO_WS)
        | (1ULL << KotlinParser::AT_PRE_WS)
        | (1ULL << KotlinParser::RETURN_AT)
        | (1ULL << KotlinParser::CONTINUE_AT)
        | (1ULL << KotlinParser::BREAK_AT)
        | (1ULL << KotlinParser::THIS_AT)
        | (1ULL << KotlinParser::SUPER_AT)
        | (1ULL << KotlinParser::FILE)
        | (1ULL << KotlinParser::FIELD)
        | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
        | (1ULL << (KotlinParser::SET - 64))
        | (1ULL << (KotlinParser::RECEIVER - 64))
        | (1ULL << (KotlinParser::PARAM - 64))
        | (1ULL << (KotlinParser::SETPARAM - 64))
        | (1ULL << (KotlinParser::DELEGATE - 64))
        | (1ULL << (KotlinParser::IMPORT - 64))
        | (1ULL << (KotlinParser::CLASS - 64))
        | (1ULL << (KotlinParser::INTERFACE - 64))
        | (1ULL << (KotlinParser::FUN - 64))
        | (1ULL << (KotlinParser::OBJECT - 64))
        | (1ULL << (KotlinParser::VAL - 64))
        | (1ULL << (KotlinParser::VAR - 64))
        | (1ULL << (KotlinParser::TYPE_ALIAS - 64))
        | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
        | (1ULL << (KotlinParser::BY - 64))
        | (1ULL << (KotlinParser::COMPANION - 64))
        | (1ULL << (KotlinParser::INIT - 64))
        | (1ULL << (KotlinParser::THIS - 64))
        | (1ULL << (KotlinParser::SUPER - 64))
        | (1ULL << (KotlinParser::WHERE - 64))
        | (1ULL << (KotlinParser::IF - 64))
        | (1ULL << (KotlinParser::WHEN - 64))
        | (1ULL << (KotlinParser::TRY - 64))
        | (1ULL << (KotlinParser::CATCH - 64))
        | (1ULL << (KotlinParser::FINALLY - 64))
        | (1ULL << (KotlinParser::FOR - 64))
        | (1ULL << (KotlinParser::DO - 64))
        | (1ULL << (KotlinParser::WHILE - 64))
        | (1ULL << (KotlinParser::THROW - 64))
        | (1ULL << (KotlinParser::RETURN - 64))
        | (1ULL << (KotlinParser::CONTINUE - 64))
        | (1ULL << (KotlinParser::BREAK - 64))
        | (1ULL << (KotlinParser::OUT - 64))
        | (1ULL << (KotlinParser::DYNAMIC - 64))
        | (1ULL << (KotlinParser::PUBLIC - 64))
        | (1ULL << (KotlinParser::PRIVATE - 64))
        | (1ULL << (KotlinParser::PROTECTED - 64))
        | (1ULL << (KotlinParser::INTERNAL - 64))
        | (1ULL << (KotlinParser::ENUM - 64))
        | (1ULL << (KotlinParser::SEALED - 64))
        | (1ULL << (KotlinParser::ANNOTATION - 64))
        | (1ULL << (KotlinParser::DATA - 64))
        | (1ULL << (KotlinParser::INNER - 64))
        | (1ULL << (KotlinParser::VALUE - 64))
        | (1ULL << (KotlinParser::TAILREC - 64))
        | (1ULL << (KotlinParser::OPERATOR - 64))
        | (1ULL << (KotlinParser::INLINE - 64))
        | (1ULL << (KotlinParser::INFIX - 64))
        | (1ULL << (KotlinParser::EXTERNAL - 64))
        | (1ULL << (KotlinParser::SUSPEND - 64))
        | (1ULL << (KotlinParser::OVERRIDE - 64))
        | (1ULL << (KotlinParser::ABSTRACT - 64))
        | (1ULL << (KotlinParser::FINAL - 64))
        | (1ULL << (KotlinParser::OPEN - 64))
        | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
        | (1ULL << (KotlinParser::VARARG - 128))
        | (1ULL << (KotlinParser::NOINLINE - 128))
        | (1ULL << (KotlinParser::CROSSINLINE - 128))
        | (1ULL << (KotlinParser::REIFIED - 128))
        | (1ULL << (KotlinParser::EXPECT - 128))
        | (1ULL << (KotlinParser::ACTUAL - 128))
        | (1ULL << (KotlinParser::RealLiteral - 128))
        | (1ULL << (KotlinParser::IntegerLiteral - 128))
        | (1ULL << (KotlinParser::HexLiteral - 128))
        | (1ULL << (KotlinParser::BinLiteral - 128))
        | (1ULL << (KotlinParser::UnsignedLiteral - 128))
        | (1ULL << (KotlinParser::LongLiteral - 128))
        | (1ULL << (KotlinParser::BooleanLiteral - 128))
        | (1ULL << (KotlinParser::NullLiteral - 128))
        | (1ULL << (KotlinParser::CharacterLiteral - 128))
        | (1ULL << (KotlinParser::Identifier - 128))
        | (1ULL << (KotlinParser::QUOTE_OPEN - 128))
        | (1ULL << (KotlinParser::TRIPLE_QUOTE_OPEN - 128)))) != 0)) {
        setState(2929);
        controlStructureBody();
      }
      setState(2935);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 448, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2932);
          match(KotlinParser::NL); 
        }
        setState(2937);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 448, _ctx);
      }
      setState(2939);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == KotlinParser::SEMICOLON) {
        setState(2938);
        match(KotlinParser::SEMICOLON);
      }
      setState(2944);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2941);
        match(KotlinParser::NL);
        setState(2946);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2947);
      match(KotlinParser::ELSE);
      setState(2951);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2948);
        match(KotlinParser::NL);
        setState(2953);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2956);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case KotlinParser::LPAREN:
        case KotlinParser::LSQUARE:
        case KotlinParser::LCURL:
        case KotlinParser::ADD:
        case KotlinParser::SUB:
        case KotlinParser::INCR:
        case KotlinParser::DECR:
        case KotlinParser::EXCL_WS:
        case KotlinParser::EXCL_NO_WS:
        case KotlinParser::COLONCOLON:
        case KotlinParser::AT_NO_WS:
        case KotlinParser::AT_PRE_WS:
        case KotlinParser::RETURN_AT:
        case KotlinParser::CONTINUE_AT:
        case KotlinParser::BREAK_AT:
        case KotlinParser::THIS_AT:
        case KotlinParser::SUPER_AT:
        case KotlinParser::FILE:
        case KotlinParser::FIELD:
        case KotlinParser::PROPERTY:
        case KotlinParser::GET:
        case KotlinParser::SET:
        case KotlinParser::RECEIVER:
        case KotlinParser::PARAM:
        case KotlinParser::SETPARAM:
        case KotlinParser::DELEGATE:
        case KotlinParser::IMPORT:
        case KotlinParser::CLASS:
        case KotlinParser::INTERFACE:
        case KotlinParser::FUN:
        case KotlinParser::OBJECT:
        case KotlinParser::VAL:
        case KotlinParser::VAR:
        case KotlinParser::TYPE_ALIAS:
        case KotlinParser::CONSTRUCTOR:
        case KotlinParser::BY:
        case KotlinParser::COMPANION:
        case KotlinParser::INIT:
        case KotlinParser::THIS:
        case KotlinParser::SUPER:
        case KotlinParser::WHERE:
        case KotlinParser::IF:
        case KotlinParser::WHEN:
        case KotlinParser::TRY:
        case KotlinParser::CATCH:
        case KotlinParser::FINALLY:
        case KotlinParser::FOR:
        case KotlinParser::DO:
        case KotlinParser::WHILE:
        case KotlinParser::THROW:
        case KotlinParser::RETURN:
        case KotlinParser::CONTINUE:
        case KotlinParser::BREAK:
        case KotlinParser::OUT:
        case KotlinParser::DYNAMIC:
        case KotlinParser::PUBLIC:
        case KotlinParser::PRIVATE:
        case KotlinParser::PROTECTED:
        case KotlinParser::INTERNAL:
        case KotlinParser::ENUM:
        case KotlinParser::SEALED:
        case KotlinParser::ANNOTATION:
        case KotlinParser::DATA:
        case KotlinParser::INNER:
        case KotlinParser::VALUE:
        case KotlinParser::TAILREC:
        case KotlinParser::OPERATOR:
        case KotlinParser::INLINE:
        case KotlinParser::INFIX:
        case KotlinParser::EXTERNAL:
        case KotlinParser::SUSPEND:
        case KotlinParser::OVERRIDE:
        case KotlinParser::ABSTRACT:
        case KotlinParser::FINAL:
        case KotlinParser::OPEN:
        case KotlinParser::CONST:
        case KotlinParser::LATEINIT:
        case KotlinParser::VARARG:
        case KotlinParser::NOINLINE:
        case KotlinParser::CROSSINLINE:
        case KotlinParser::REIFIED:
        case KotlinParser::EXPECT:
        case KotlinParser::ACTUAL:
        case KotlinParser::RealLiteral:
        case KotlinParser::IntegerLiteral:
        case KotlinParser::HexLiteral:
        case KotlinParser::BinLiteral:
        case KotlinParser::UnsignedLiteral:
        case KotlinParser::LongLiteral:
        case KotlinParser::BooleanLiteral:
        case KotlinParser::NullLiteral:
        case KotlinParser::CharacterLiteral:
        case KotlinParser::Identifier:
        case KotlinParser::QUOTE_OPEN:
        case KotlinParser::TRIPLE_QUOTE_OPEN: {
          setState(2954);
          controlStructureBody();
          break;
        }

        case KotlinParser::SEMICOLON: {
          setState(2955);
          match(KotlinParser::SEMICOLON);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      setState(2958);
      match(KotlinParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenSubjectContext ------------------------------------------------------------------

KotlinParser::WhenSubjectContext::WhenSubjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::WhenSubjectContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::ExpressionContext* KotlinParser::WhenSubjectContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

tree::TerminalNode* KotlinParser::WhenSubjectContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

tree::TerminalNode* KotlinParser::WhenSubjectContext::VAL() {
  return getToken(KotlinParser::VAL, 0);
}

KotlinParser::VariableDeclarationContext* KotlinParser::WhenSubjectContext::variableDeclaration() {
  return getRuleContext<KotlinParser::VariableDeclarationContext>(0);
}

tree::TerminalNode* KotlinParser::WhenSubjectContext::ASSIGNMENT() {
  return getToken(KotlinParser::ASSIGNMENT, 0);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::WhenSubjectContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::WhenSubjectContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::WhenSubjectContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::WhenSubjectContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::WhenSubjectContext::getRuleIndex() const {
  return KotlinParser::RuleWhenSubject;
}

void KotlinParser::WhenSubjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenSubject(this);
}

void KotlinParser::WhenSubjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenSubject(this);
}

KotlinParser::WhenSubjectContext* KotlinParser::whenSubject() {
  WhenSubjectContext *_localctx = _tracker.createInstance<WhenSubjectContext>(_ctx, getState());
  enterRule(_localctx, 250, KotlinParser::RuleWhenSubject);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2961);
    match(KotlinParser::LPAREN);
    setState(2995);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 459, _ctx)) {
    case 1: {
      setState(2965);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::AT_NO_WS

      || _la == KotlinParser::AT_PRE_WS) {
        setState(2962);
        annotation();
        setState(2967);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2971);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2968);
        match(KotlinParser::NL);
        setState(2973);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2974);
      match(KotlinParser::VAL);
      setState(2978);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 456, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(2975);
          match(KotlinParser::NL); 
        }
        setState(2980);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 456, _ctx);
      }
      setState(2981);
      variableDeclaration();
      setState(2985);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2982);
        match(KotlinParser::NL);
        setState(2987);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(2988);
      match(KotlinParser::ASSIGNMENT);
      setState(2992);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(2989);
        match(KotlinParser::NL);
        setState(2994);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    default:
      break;
    }
    setState(2997);
    expression();
    setState(2998);
    match(KotlinParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenExpressionContext ------------------------------------------------------------------

KotlinParser::WhenExpressionContext::WhenExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::WhenExpressionContext::WHEN() {
  return getToken(KotlinParser::WHEN, 0);
}

tree::TerminalNode* KotlinParser::WhenExpressionContext::LCURL() {
  return getToken(KotlinParser::LCURL, 0);
}

tree::TerminalNode* KotlinParser::WhenExpressionContext::RCURL() {
  return getToken(KotlinParser::RCURL, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::WhenExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::WhenExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::WhenSubjectContext* KotlinParser::WhenExpressionContext::whenSubject() {
  return getRuleContext<KotlinParser::WhenSubjectContext>(0);
}

std::vector<KotlinParser::WhenEntryContext *> KotlinParser::WhenExpressionContext::whenEntry() {
  return getRuleContexts<KotlinParser::WhenEntryContext>();
}

KotlinParser::WhenEntryContext* KotlinParser::WhenExpressionContext::whenEntry(size_t i) {
  return getRuleContext<KotlinParser::WhenEntryContext>(i);
}


size_t KotlinParser::WhenExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleWhenExpression;
}

void KotlinParser::WhenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenExpression(this);
}

void KotlinParser::WhenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenExpression(this);
}

KotlinParser::WhenExpressionContext* KotlinParser::whenExpression() {
  WhenExpressionContext *_localctx = _tracker.createInstance<WhenExpressionContext>(_ctx, getState());
  enterRule(_localctx, 252, KotlinParser::RuleWhenExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3000);
    match(KotlinParser::WHEN);
    setState(3004);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 460, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(3001);
        match(KotlinParser::NL); 
      }
      setState(3006);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 460, _ctx);
    }
    setState(3008);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::LPAREN) {
      setState(3007);
      whenSubject();
    }
    setState(3013);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3010);
      match(KotlinParser::NL);
      setState(3015);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3016);
    match(KotlinParser::LCURL);
    setState(3020);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 463, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(3017);
        match(KotlinParser::NL); 
      }
      setState(3022);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 463, _ctx);
    }
    setState(3032);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::LPAREN)
      | (1ULL << KotlinParser::LSQUARE)
      | (1ULL << KotlinParser::LCURL)
      | (1ULL << KotlinParser::ADD)
      | (1ULL << KotlinParser::SUB)
      | (1ULL << KotlinParser::INCR)
      | (1ULL << KotlinParser::DECR)
      | (1ULL << KotlinParser::EXCL_WS)
      | (1ULL << KotlinParser::EXCL_NO_WS)
      | (1ULL << KotlinParser::COLONCOLON)
      | (1ULL << KotlinParser::AT_NO_WS)
      | (1ULL << KotlinParser::AT_PRE_WS)
      | (1ULL << KotlinParser::RETURN_AT)
      | (1ULL << KotlinParser::CONTINUE_AT)
      | (1ULL << KotlinParser::BREAK_AT)
      | (1ULL << KotlinParser::THIS_AT)
      | (1ULL << KotlinParser::SUPER_AT)
      | (1ULL << KotlinParser::FILE)
      | (1ULL << KotlinParser::FIELD)
      | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
      | (1ULL << (KotlinParser::SET - 64))
      | (1ULL << (KotlinParser::RECEIVER - 64))
      | (1ULL << (KotlinParser::PARAM - 64))
      | (1ULL << (KotlinParser::SETPARAM - 64))
      | (1ULL << (KotlinParser::DELEGATE - 64))
      | (1ULL << (KotlinParser::IMPORT - 64))
      | (1ULL << (KotlinParser::FUN - 64))
      | (1ULL << (KotlinParser::OBJECT - 64))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
      | (1ULL << (KotlinParser::BY - 64))
      | (1ULL << (KotlinParser::COMPANION - 64))
      | (1ULL << (KotlinParser::INIT - 64))
      | (1ULL << (KotlinParser::THIS - 64))
      | (1ULL << (KotlinParser::SUPER - 64))
      | (1ULL << (KotlinParser::WHERE - 64))
      | (1ULL << (KotlinParser::IF - 64))
      | (1ULL << (KotlinParser::ELSE - 64))
      | (1ULL << (KotlinParser::WHEN - 64))
      | (1ULL << (KotlinParser::TRY - 64))
      | (1ULL << (KotlinParser::CATCH - 64))
      | (1ULL << (KotlinParser::FINALLY - 64))
      | (1ULL << (KotlinParser::THROW - 64))
      | (1ULL << (KotlinParser::RETURN - 64))
      | (1ULL << (KotlinParser::CONTINUE - 64))
      | (1ULL << (KotlinParser::BREAK - 64))
      | (1ULL << (KotlinParser::IS - 64))
      | (1ULL << (KotlinParser::IN - 64))
      | (1ULL << (KotlinParser::NOT_IS - 64))
      | (1ULL << (KotlinParser::NOT_IN - 64))
      | (1ULL << (KotlinParser::OUT - 64))
      | (1ULL << (KotlinParser::DYNAMIC - 64))
      | (1ULL << (KotlinParser::PUBLIC - 64))
      | (1ULL << (KotlinParser::PRIVATE - 64))
      | (1ULL << (KotlinParser::PROTECTED - 64))
      | (1ULL << (KotlinParser::INTERNAL - 64))
      | (1ULL << (KotlinParser::ENUM - 64))
      | (1ULL << (KotlinParser::SEALED - 64))
      | (1ULL << (KotlinParser::ANNOTATION - 64))
      | (1ULL << (KotlinParser::DATA - 64))
      | (1ULL << (KotlinParser::INNER - 64))
      | (1ULL << (KotlinParser::VALUE - 64))
      | (1ULL << (KotlinParser::TAILREC - 64))
      | (1ULL << (KotlinParser::OPERATOR - 64))
      | (1ULL << (KotlinParser::INLINE - 64))
      | (1ULL << (KotlinParser::INFIX - 64))
      | (1ULL << (KotlinParser::EXTERNAL - 64))
      | (1ULL << (KotlinParser::SUSPEND - 64))
      | (1ULL << (KotlinParser::OVERRIDE - 64))
      | (1ULL << (KotlinParser::ABSTRACT - 64))
      | (1ULL << (KotlinParser::FINAL - 64))
      | (1ULL << (KotlinParser::OPEN - 64))
      | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
      | (1ULL << (KotlinParser::VARARG - 128))
      | (1ULL << (KotlinParser::NOINLINE - 128))
      | (1ULL << (KotlinParser::CROSSINLINE - 128))
      | (1ULL << (KotlinParser::REIFIED - 128))
      | (1ULL << (KotlinParser::EXPECT - 128))
      | (1ULL << (KotlinParser::ACTUAL - 128))
      | (1ULL << (KotlinParser::RealLiteral - 128))
      | (1ULL << (KotlinParser::IntegerLiteral - 128))
      | (1ULL << (KotlinParser::HexLiteral - 128))
      | (1ULL << (KotlinParser::BinLiteral - 128))
      | (1ULL << (KotlinParser::UnsignedLiteral - 128))
      | (1ULL << (KotlinParser::LongLiteral - 128))
      | (1ULL << (KotlinParser::BooleanLiteral - 128))
      | (1ULL << (KotlinParser::NullLiteral - 128))
      | (1ULL << (KotlinParser::CharacterLiteral - 128))
      | (1ULL << (KotlinParser::Identifier - 128))
      | (1ULL << (KotlinParser::QUOTE_OPEN - 128))
      | (1ULL << (KotlinParser::TRIPLE_QUOTE_OPEN - 128)))) != 0)) {
      setState(3023);
      whenEntry();
      setState(3027);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 464, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(3024);
          match(KotlinParser::NL); 
        }
        setState(3029);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 464, _ctx);
      }
      setState(3034);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3038);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3035);
      match(KotlinParser::NL);
      setState(3040);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3041);
    match(KotlinParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenEntryContext ------------------------------------------------------------------

KotlinParser::WhenEntryContext::WhenEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::WhenConditionContext *> KotlinParser::WhenEntryContext::whenCondition() {
  return getRuleContexts<KotlinParser::WhenConditionContext>();
}

KotlinParser::WhenConditionContext* KotlinParser::WhenEntryContext::whenCondition(size_t i) {
  return getRuleContext<KotlinParser::WhenConditionContext>(i);
}

tree::TerminalNode* KotlinParser::WhenEntryContext::ARROW() {
  return getToken(KotlinParser::ARROW, 0);
}

KotlinParser::ControlStructureBodyContext* KotlinParser::WhenEntryContext::controlStructureBody() {
  return getRuleContext<KotlinParser::ControlStructureBodyContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::WhenEntryContext::COMMA() {
  return getTokens(KotlinParser::COMMA);
}

tree::TerminalNode* KotlinParser::WhenEntryContext::COMMA(size_t i) {
  return getToken(KotlinParser::COMMA, i);
}

std::vector<tree::TerminalNode *> KotlinParser::WhenEntryContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::WhenEntryContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::SemiContext* KotlinParser::WhenEntryContext::semi() {
  return getRuleContext<KotlinParser::SemiContext>(0);
}

tree::TerminalNode* KotlinParser::WhenEntryContext::ELSE() {
  return getToken(KotlinParser::ELSE, 0);
}


size_t KotlinParser::WhenEntryContext::getRuleIndex() const {
  return KotlinParser::RuleWhenEntry;
}

void KotlinParser::WhenEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenEntry(this);
}

void KotlinParser::WhenEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenEntry(this);
}

KotlinParser::WhenEntryContext* KotlinParser::whenEntry() {
  WhenEntryContext *_localctx = _tracker.createInstance<WhenEntryContext>(_ctx, getState());
  enterRule(_localctx, 254, KotlinParser::RuleWhenEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(3107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LPAREN:
      case KotlinParser::LSQUARE:
      case KotlinParser::LCURL:
      case KotlinParser::ADD:
      case KotlinParser::SUB:
      case KotlinParser::INCR:
      case KotlinParser::DECR:
      case KotlinParser::EXCL_WS:
      case KotlinParser::EXCL_NO_WS:
      case KotlinParser::COLONCOLON:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::RETURN_AT:
      case KotlinParser::CONTINUE_AT:
      case KotlinParser::BREAK_AT:
      case KotlinParser::THIS_AT:
      case KotlinParser::SUPER_AT:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::FUN:
      case KotlinParser::OBJECT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::THIS:
      case KotlinParser::SUPER:
      case KotlinParser::WHERE:
      case KotlinParser::IF:
      case KotlinParser::WHEN:
      case KotlinParser::TRY:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::THROW:
      case KotlinParser::RETURN:
      case KotlinParser::CONTINUE:
      case KotlinParser::BREAK:
      case KotlinParser::IS:
      case KotlinParser::IN:
      case KotlinParser::NOT_IS:
      case KotlinParser::NOT_IN:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::RealLiteral:
      case KotlinParser::IntegerLiteral:
      case KotlinParser::HexLiteral:
      case KotlinParser::BinLiteral:
      case KotlinParser::UnsignedLiteral:
      case KotlinParser::LongLiteral:
      case KotlinParser::BooleanLiteral:
      case KotlinParser::NullLiteral:
      case KotlinParser::CharacterLiteral:
      case KotlinParser::Identifier:
      case KotlinParser::QUOTE_OPEN:
      case KotlinParser::TRIPLE_QUOTE_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(3043);
        whenCondition();
        setState(3060);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 469, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(3047);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == KotlinParser::NL) {
              setState(3044);
              match(KotlinParser::NL);
              setState(3049);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(3050);
            match(KotlinParser::COMMA);
            setState(3054);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == KotlinParser::NL) {
              setState(3051);
              match(KotlinParser::NL);
              setState(3056);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(3057);
            whenCondition(); 
          }
          setState(3062);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 469, _ctx);
        }
        setState(3070);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 471, _ctx)) {
        case 1: {
          setState(3066);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == KotlinParser::NL) {
            setState(3063);
            match(KotlinParser::NL);
            setState(3068);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(3069);
          match(KotlinParser::COMMA);
          break;
        }

        default:
          break;
        }
        setState(3075);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3072);
          match(KotlinParser::NL);
          setState(3077);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3078);
        match(KotlinParser::ARROW);
        setState(3082);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3079);
          match(KotlinParser::NL);
          setState(3084);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3085);
        controlStructureBody();
        setState(3087);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 474, _ctx)) {
        case 1: {
          setState(3086);
          semi();
          break;
        }

        default:
          break;
        }
        break;
      }

      case KotlinParser::ELSE: {
        enterOuterAlt(_localctx, 2);
        setState(3089);
        match(KotlinParser::ELSE);
        setState(3093);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3090);
          match(KotlinParser::NL);
          setState(3095);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3096);
        match(KotlinParser::ARROW);
        setState(3100);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3097);
          match(KotlinParser::NL);
          setState(3102);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3103);
        controlStructureBody();
        setState(3105);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 477, _ctx)) {
        case 1: {
          setState(3104);
          semi();
          break;
        }

        default:
          break;
        }
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

//----------------- WhenConditionContext ------------------------------------------------------------------

KotlinParser::WhenConditionContext::WhenConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ExpressionContext* KotlinParser::WhenConditionContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

KotlinParser::RangeTestContext* KotlinParser::WhenConditionContext::rangeTest() {
  return getRuleContext<KotlinParser::RangeTestContext>(0);
}

KotlinParser::TypeTestContext* KotlinParser::WhenConditionContext::typeTest() {
  return getRuleContext<KotlinParser::TypeTestContext>(0);
}


size_t KotlinParser::WhenConditionContext::getRuleIndex() const {
  return KotlinParser::RuleWhenCondition;
}

void KotlinParser::WhenConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenCondition(this);
}

void KotlinParser::WhenConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenCondition(this);
}

KotlinParser::WhenConditionContext* KotlinParser::whenCondition() {
  WhenConditionContext *_localctx = _tracker.createInstance<WhenConditionContext>(_ctx, getState());
  enterRule(_localctx, 256, KotlinParser::RuleWhenCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::LPAREN:
      case KotlinParser::LSQUARE:
      case KotlinParser::LCURL:
      case KotlinParser::ADD:
      case KotlinParser::SUB:
      case KotlinParser::INCR:
      case KotlinParser::DECR:
      case KotlinParser::EXCL_WS:
      case KotlinParser::EXCL_NO_WS:
      case KotlinParser::COLONCOLON:
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS:
      case KotlinParser::RETURN_AT:
      case KotlinParser::CONTINUE_AT:
      case KotlinParser::BREAK_AT:
      case KotlinParser::THIS_AT:
      case KotlinParser::SUPER_AT:
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::FUN:
      case KotlinParser::OBJECT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::THIS:
      case KotlinParser::SUPER:
      case KotlinParser::WHERE:
      case KotlinParser::IF:
      case KotlinParser::WHEN:
      case KotlinParser::TRY:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::THROW:
      case KotlinParser::RETURN:
      case KotlinParser::CONTINUE:
      case KotlinParser::BREAK:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::RealLiteral:
      case KotlinParser::IntegerLiteral:
      case KotlinParser::HexLiteral:
      case KotlinParser::BinLiteral:
      case KotlinParser::UnsignedLiteral:
      case KotlinParser::LongLiteral:
      case KotlinParser::BooleanLiteral:
      case KotlinParser::NullLiteral:
      case KotlinParser::CharacterLiteral:
      case KotlinParser::Identifier:
      case KotlinParser::QUOTE_OPEN:
      case KotlinParser::TRIPLE_QUOTE_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(3109);
        expression();
        break;
      }

      case KotlinParser::IN:
      case KotlinParser::NOT_IN: {
        enterOuterAlt(_localctx, 2);
        setState(3110);
        rangeTest();
        break;
      }

      case KotlinParser::IS:
      case KotlinParser::NOT_IS: {
        enterOuterAlt(_localctx, 3);
        setState(3111);
        typeTest();
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

//----------------- RangeTestContext ------------------------------------------------------------------

KotlinParser::RangeTestContext::RangeTestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::InOperatorContext* KotlinParser::RangeTestContext::inOperator() {
  return getRuleContext<KotlinParser::InOperatorContext>(0);
}

KotlinParser::ExpressionContext* KotlinParser::RangeTestContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::RangeTestContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::RangeTestContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::RangeTestContext::getRuleIndex() const {
  return KotlinParser::RuleRangeTest;
}

void KotlinParser::RangeTestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeTest(this);
}

void KotlinParser::RangeTestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeTest(this);
}

KotlinParser::RangeTestContext* KotlinParser::rangeTest() {
  RangeTestContext *_localctx = _tracker.createInstance<RangeTestContext>(_ctx, getState());
  enterRule(_localctx, 258, KotlinParser::RuleRangeTest);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3114);
    inOperator();
    setState(3118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3115);
      match(KotlinParser::NL);
      setState(3120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3121);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeTestContext ------------------------------------------------------------------

KotlinParser::TypeTestContext::TypeTestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::IsOperatorContext* KotlinParser::TypeTestContext::isOperator() {
  return getRuleContext<KotlinParser::IsOperatorContext>(0);
}

KotlinParser::TypeContext* KotlinParser::TypeTestContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeTestContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeTestContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::TypeTestContext::getRuleIndex() const {
  return KotlinParser::RuleTypeTest;
}

void KotlinParser::TypeTestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeTest(this);
}

void KotlinParser::TypeTestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeTest(this);
}

KotlinParser::TypeTestContext* KotlinParser::typeTest() {
  TypeTestContext *_localctx = _tracker.createInstance<TypeTestContext>(_ctx, getState());
  enterRule(_localctx, 260, KotlinParser::RuleTypeTest);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3123);
    isOperator();
    setState(3127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3124);
      match(KotlinParser::NL);
      setState(3129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3130);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryExpressionContext ------------------------------------------------------------------

KotlinParser::TryExpressionContext::TryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::TryExpressionContext::TRY() {
  return getToken(KotlinParser::TRY, 0);
}

KotlinParser::BlockContext* KotlinParser::TryExpressionContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}

KotlinParser::FinallyBlockContext* KotlinParser::TryExpressionContext::finallyBlock() {
  return getRuleContext<KotlinParser::FinallyBlockContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::TryExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TryExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::CatchBlockContext *> KotlinParser::TryExpressionContext::catchBlock() {
  return getRuleContexts<KotlinParser::CatchBlockContext>();
}

KotlinParser::CatchBlockContext* KotlinParser::TryExpressionContext::catchBlock(size_t i) {
  return getRuleContext<KotlinParser::CatchBlockContext>(i);
}


size_t KotlinParser::TryExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleTryExpression;
}

void KotlinParser::TryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryExpression(this);
}

void KotlinParser::TryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryExpression(this);
}

KotlinParser::TryExpressionContext* KotlinParser::tryExpression() {
  TryExpressionContext *_localctx = _tracker.createInstance<TryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 262, KotlinParser::RuleTryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3132);
    match(KotlinParser::TRY);
    setState(3136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3133);
      match(KotlinParser::NL);
      setState(3138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3139);
    block();
    setState(3167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 488, _ctx)) {
    case 1: {
      setState(3147); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(3143);
                _errHandler->sync(this);
                _la = _input->LA(1);
                while (_la == KotlinParser::NL) {
                  setState(3140);
                  match(KotlinParser::NL);
                  setState(3145);
                  _errHandler->sync(this);
                  _la = _input->LA(1);
                }
                setState(3146);
                catchBlock();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(3149); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 484, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(3158);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 486, _ctx)) {
      case 1: {
        setState(3154);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3151);
          match(KotlinParser::NL);
          setState(3156);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3157);
        finallyBlock();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(3163);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(3160);
        match(KotlinParser::NL);
        setState(3165);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(3166);
      finallyBlock();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchBlockContext ------------------------------------------------------------------

KotlinParser::CatchBlockContext::CatchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::CatchBlockContext::CATCH() {
  return getToken(KotlinParser::CATCH, 0);
}

tree::TerminalNode* KotlinParser::CatchBlockContext::LPAREN() {
  return getToken(KotlinParser::LPAREN, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::CatchBlockContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::CatchBlockContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

KotlinParser::TypeContext* KotlinParser::CatchBlockContext::type() {
  return getRuleContext<KotlinParser::TypeContext>(0);
}

tree::TerminalNode* KotlinParser::CatchBlockContext::RPAREN() {
  return getToken(KotlinParser::RPAREN, 0);
}

KotlinParser::BlockContext* KotlinParser::CatchBlockContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::CatchBlockContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::CatchBlockContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::CatchBlockContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::CatchBlockContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

tree::TerminalNode* KotlinParser::CatchBlockContext::COMMA() {
  return getToken(KotlinParser::COMMA, 0);
}


size_t KotlinParser::CatchBlockContext::getRuleIndex() const {
  return KotlinParser::RuleCatchBlock;
}

void KotlinParser::CatchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchBlock(this);
}

void KotlinParser::CatchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchBlock(this);
}

KotlinParser::CatchBlockContext* KotlinParser::catchBlock() {
  CatchBlockContext *_localctx = _tracker.createInstance<CatchBlockContext>(_ctx, getState());
  enterRule(_localctx, 264, KotlinParser::RuleCatchBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3169);
    match(KotlinParser::CATCH);
    setState(3173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3170);
      match(KotlinParser::NL);
      setState(3175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3176);
    match(KotlinParser::LPAREN);
    setState(3180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS) {
      setState(3177);
      annotation();
      setState(3182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3183);
    simpleIdentifier();
    setState(3184);
    match(KotlinParser::COLON);
    setState(3185);
    type();
    setState(3193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KotlinParser::NL

    || _la == KotlinParser::COMMA) {
      setState(3189);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(3186);
        match(KotlinParser::NL);
        setState(3191);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(3192);
      match(KotlinParser::COMMA);
    }
    setState(3195);
    match(KotlinParser::RPAREN);
    setState(3199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3196);
      match(KotlinParser::NL);
      setState(3201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3202);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyBlockContext ------------------------------------------------------------------

KotlinParser::FinallyBlockContext::FinallyBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FinallyBlockContext::FINALLY() {
  return getToken(KotlinParser::FINALLY, 0);
}

KotlinParser::BlockContext* KotlinParser::FinallyBlockContext::block() {
  return getRuleContext<KotlinParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::FinallyBlockContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::FinallyBlockContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::FinallyBlockContext::getRuleIndex() const {
  return KotlinParser::RuleFinallyBlock;
}

void KotlinParser::FinallyBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyBlock(this);
}

void KotlinParser::FinallyBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyBlock(this);
}

KotlinParser::FinallyBlockContext* KotlinParser::finallyBlock() {
  FinallyBlockContext *_localctx = _tracker.createInstance<FinallyBlockContext>(_ctx, getState());
  enterRule(_localctx, 266, KotlinParser::RuleFinallyBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3204);
    match(KotlinParser::FINALLY);
    setState(3208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3205);
      match(KotlinParser::NL);
      setState(3210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3211);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpExpressionContext ------------------------------------------------------------------

KotlinParser::JumpExpressionContext::JumpExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::THROW() {
  return getToken(KotlinParser::THROW, 0);
}

KotlinParser::ExpressionContext* KotlinParser::JumpExpressionContext::expression() {
  return getRuleContext<KotlinParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::JumpExpressionContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::RETURN() {
  return getToken(KotlinParser::RETURN, 0);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::RETURN_AT() {
  return getToken(KotlinParser::RETURN_AT, 0);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::CONTINUE() {
  return getToken(KotlinParser::CONTINUE, 0);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::CONTINUE_AT() {
  return getToken(KotlinParser::CONTINUE_AT, 0);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::BREAK() {
  return getToken(KotlinParser::BREAK, 0);
}

tree::TerminalNode* KotlinParser::JumpExpressionContext::BREAK_AT() {
  return getToken(KotlinParser::BREAK_AT, 0);
}


size_t KotlinParser::JumpExpressionContext::getRuleIndex() const {
  return KotlinParser::RuleJumpExpression;
}

void KotlinParser::JumpExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpExpression(this);
}

void KotlinParser::JumpExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpExpression(this);
}

KotlinParser::JumpExpressionContext* KotlinParser::jumpExpression() {
  JumpExpressionContext *_localctx = _tracker.createInstance<JumpExpressionContext>(_ctx, getState());
  enterRule(_localctx, 268, KotlinParser::RuleJumpExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::THROW: {
        enterOuterAlt(_localctx, 1);
        setState(3213);
        match(KotlinParser::THROW);
        setState(3217);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3214);
          match(KotlinParser::NL);
          setState(3219);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3220);
        expression();
        break;
      }

      case KotlinParser::RETURN_AT:
      case KotlinParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(3221);
        _la = _input->LA(1);
        if (!(_la == KotlinParser::RETURN_AT

        || _la == KotlinParser::RETURN)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(3223);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 496, _ctx)) {
        case 1: {
          setState(3222);
          expression();
          break;
        }

        default:
          break;
        }
        break;
      }

      case KotlinParser::CONTINUE: {
        enterOuterAlt(_localctx, 3);
        setState(3225);
        match(KotlinParser::CONTINUE);
        break;
      }

      case KotlinParser::CONTINUE_AT: {
        enterOuterAlt(_localctx, 4);
        setState(3226);
        match(KotlinParser::CONTINUE_AT);
        break;
      }

      case KotlinParser::BREAK: {
        enterOuterAlt(_localctx, 5);
        setState(3227);
        match(KotlinParser::BREAK);
        break;
      }

      case KotlinParser::BREAK_AT: {
        enterOuterAlt(_localctx, 6);
        setState(3228);
        match(KotlinParser::BREAK_AT);
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

//----------------- CallableReferenceContext ------------------------------------------------------------------

KotlinParser::CallableReferenceContext::CallableReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::CallableReferenceContext::COLONCOLON() {
  return getToken(KotlinParser::COLONCOLON, 0);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::CallableReferenceContext::simpleIdentifier() {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(0);
}

tree::TerminalNode* KotlinParser::CallableReferenceContext::CLASS() {
  return getToken(KotlinParser::CLASS, 0);
}

KotlinParser::ReceiverTypeContext* KotlinParser::CallableReferenceContext::receiverType() {
  return getRuleContext<KotlinParser::ReceiverTypeContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::CallableReferenceContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::CallableReferenceContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::CallableReferenceContext::getRuleIndex() const {
  return KotlinParser::RuleCallableReference;
}

void KotlinParser::CallableReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallableReference(this);
}

void KotlinParser::CallableReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallableReference(this);
}

KotlinParser::CallableReferenceContext* KotlinParser::callableReference() {
  CallableReferenceContext *_localctx = _tracker.createInstance<CallableReferenceContext>(_ctx, getState());
  enterRule(_localctx, 270, KotlinParser::RuleCallableReference);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::LPAREN)
      | (1ULL << KotlinParser::AT_NO_WS)
      | (1ULL << KotlinParser::AT_PRE_WS)
      | (1ULL << KotlinParser::FILE)
      | (1ULL << KotlinParser::FIELD)
      | (1ULL << KotlinParser::PROPERTY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (KotlinParser::GET - 64))
      | (1ULL << (KotlinParser::SET - 64))
      | (1ULL << (KotlinParser::RECEIVER - 64))
      | (1ULL << (KotlinParser::PARAM - 64))
      | (1ULL << (KotlinParser::SETPARAM - 64))
      | (1ULL << (KotlinParser::DELEGATE - 64))
      | (1ULL << (KotlinParser::IMPORT - 64))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 64))
      | (1ULL << (KotlinParser::BY - 64))
      | (1ULL << (KotlinParser::COMPANION - 64))
      | (1ULL << (KotlinParser::INIT - 64))
      | (1ULL << (KotlinParser::WHERE - 64))
      | (1ULL << (KotlinParser::CATCH - 64))
      | (1ULL << (KotlinParser::FINALLY - 64))
      | (1ULL << (KotlinParser::OUT - 64))
      | (1ULL << (KotlinParser::DYNAMIC - 64))
      | (1ULL << (KotlinParser::PUBLIC - 64))
      | (1ULL << (KotlinParser::PRIVATE - 64))
      | (1ULL << (KotlinParser::PROTECTED - 64))
      | (1ULL << (KotlinParser::INTERNAL - 64))
      | (1ULL << (KotlinParser::ENUM - 64))
      | (1ULL << (KotlinParser::SEALED - 64))
      | (1ULL << (KotlinParser::ANNOTATION - 64))
      | (1ULL << (KotlinParser::DATA - 64))
      | (1ULL << (KotlinParser::INNER - 64))
      | (1ULL << (KotlinParser::VALUE - 64))
      | (1ULL << (KotlinParser::TAILREC - 64))
      | (1ULL << (KotlinParser::OPERATOR - 64))
      | (1ULL << (KotlinParser::INLINE - 64))
      | (1ULL << (KotlinParser::INFIX - 64))
      | (1ULL << (KotlinParser::EXTERNAL - 64))
      | (1ULL << (KotlinParser::SUSPEND - 64))
      | (1ULL << (KotlinParser::OVERRIDE - 64))
      | (1ULL << (KotlinParser::ABSTRACT - 64))
      | (1ULL << (KotlinParser::FINAL - 64))
      | (1ULL << (KotlinParser::OPEN - 64))
      | (1ULL << (KotlinParser::CONST - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (KotlinParser::LATEINIT - 128))
      | (1ULL << (KotlinParser::VARARG - 128))
      | (1ULL << (KotlinParser::NOINLINE - 128))
      | (1ULL << (KotlinParser::CROSSINLINE - 128))
      | (1ULL << (KotlinParser::REIFIED - 128))
      | (1ULL << (KotlinParser::EXPECT - 128))
      | (1ULL << (KotlinParser::ACTUAL - 128))
      | (1ULL << (KotlinParser::Identifier - 128)))) != 0)) {
      setState(3231);
      receiverType();
    }
    setState(3234);
    match(KotlinParser::COLONCOLON);
    setState(3238);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3235);
      match(KotlinParser::NL);
      setState(3240);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::FILE:
      case KotlinParser::FIELD:
      case KotlinParser::PROPERTY:
      case KotlinParser::GET:
      case KotlinParser::SET:
      case KotlinParser::RECEIVER:
      case KotlinParser::PARAM:
      case KotlinParser::SETPARAM:
      case KotlinParser::DELEGATE:
      case KotlinParser::IMPORT:
      case KotlinParser::CONSTRUCTOR:
      case KotlinParser::BY:
      case KotlinParser::COMPANION:
      case KotlinParser::INIT:
      case KotlinParser::WHERE:
      case KotlinParser::CATCH:
      case KotlinParser::FINALLY:
      case KotlinParser::OUT:
      case KotlinParser::DYNAMIC:
      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL:
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE:
      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND:
      case KotlinParser::OVERRIDE:
      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN:
      case KotlinParser::CONST:
      case KotlinParser::LATEINIT:
      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE:
      case KotlinParser::REIFIED:
      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL:
      case KotlinParser::Identifier: {
        setState(3241);
        simpleIdentifier();
        break;
      }

      case KotlinParser::CLASS: {
        setState(3242);
        match(KotlinParser::CLASS);
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

//----------------- AssignmentAndOperatorContext ------------------------------------------------------------------

KotlinParser::AssignmentAndOperatorContext::AssignmentAndOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::AssignmentAndOperatorContext::ADD_ASSIGNMENT() {
  return getToken(KotlinParser::ADD_ASSIGNMENT, 0);
}

tree::TerminalNode* KotlinParser::AssignmentAndOperatorContext::SUB_ASSIGNMENT() {
  return getToken(KotlinParser::SUB_ASSIGNMENT, 0);
}

tree::TerminalNode* KotlinParser::AssignmentAndOperatorContext::MULT_ASSIGNMENT() {
  return getToken(KotlinParser::MULT_ASSIGNMENT, 0);
}

tree::TerminalNode* KotlinParser::AssignmentAndOperatorContext::DIV_ASSIGNMENT() {
  return getToken(KotlinParser::DIV_ASSIGNMENT, 0);
}

tree::TerminalNode* KotlinParser::AssignmentAndOperatorContext::MOD_ASSIGNMENT() {
  return getToken(KotlinParser::MOD_ASSIGNMENT, 0);
}


size_t KotlinParser::AssignmentAndOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleAssignmentAndOperator;
}

void KotlinParser::AssignmentAndOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentAndOperator(this);
}

void KotlinParser::AssignmentAndOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentAndOperator(this);
}

KotlinParser::AssignmentAndOperatorContext* KotlinParser::assignmentAndOperator() {
  AssignmentAndOperatorContext *_localctx = _tracker.createInstance<AssignmentAndOperatorContext>(_ctx, getState());
  enterRule(_localctx, 272, KotlinParser::RuleAssignmentAndOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3245);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::ADD_ASSIGNMENT)
      | (1ULL << KotlinParser::SUB_ASSIGNMENT)
      | (1ULL << KotlinParser::MULT_ASSIGNMENT)
      | (1ULL << KotlinParser::DIV_ASSIGNMENT)
      | (1ULL << KotlinParser::MOD_ASSIGNMENT))) != 0))) {
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

//----------------- EqualityOperatorContext ------------------------------------------------------------------

KotlinParser::EqualityOperatorContext::EqualityOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::EqualityOperatorContext::EXCL_EQ() {
  return getToken(KotlinParser::EXCL_EQ, 0);
}

tree::TerminalNode* KotlinParser::EqualityOperatorContext::EXCL_EQEQ() {
  return getToken(KotlinParser::EXCL_EQEQ, 0);
}

tree::TerminalNode* KotlinParser::EqualityOperatorContext::EQEQ() {
  return getToken(KotlinParser::EQEQ, 0);
}

tree::TerminalNode* KotlinParser::EqualityOperatorContext::EQEQEQ() {
  return getToken(KotlinParser::EQEQEQ, 0);
}


size_t KotlinParser::EqualityOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleEqualityOperator;
}

void KotlinParser::EqualityOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityOperator(this);
}

void KotlinParser::EqualityOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityOperator(this);
}

KotlinParser::EqualityOperatorContext* KotlinParser::equalityOperator() {
  EqualityOperatorContext *_localctx = _tracker.createInstance<EqualityOperatorContext>(_ctx, getState());
  enterRule(_localctx, 274, KotlinParser::RuleEqualityOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3247);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::EXCL_EQ)
      | (1ULL << KotlinParser::EXCL_EQEQ)
      | (1ULL << KotlinParser::EQEQ)
      | (1ULL << KotlinParser::EQEQEQ))) != 0))) {
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

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

KotlinParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ComparisonOperatorContext::LANGLE() {
  return getToken(KotlinParser::LANGLE, 0);
}

tree::TerminalNode* KotlinParser::ComparisonOperatorContext::RANGLE() {
  return getToken(KotlinParser::RANGLE, 0);
}

tree::TerminalNode* KotlinParser::ComparisonOperatorContext::LE() {
  return getToken(KotlinParser::LE, 0);
}

tree::TerminalNode* KotlinParser::ComparisonOperatorContext::GE() {
  return getToken(KotlinParser::GE, 0);
}


size_t KotlinParser::ComparisonOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleComparisonOperator;
}

void KotlinParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void KotlinParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}

KotlinParser::ComparisonOperatorContext* KotlinParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 276, KotlinParser::RuleComparisonOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3249);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::LANGLE)
      | (1ULL << KotlinParser::RANGLE)
      | (1ULL << KotlinParser::LE)
      | (1ULL << KotlinParser::GE))) != 0))) {
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

//----------------- InOperatorContext ------------------------------------------------------------------

KotlinParser::InOperatorContext::InOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::InOperatorContext::IN() {
  return getToken(KotlinParser::IN, 0);
}

tree::TerminalNode* KotlinParser::InOperatorContext::NOT_IN() {
  return getToken(KotlinParser::NOT_IN, 0);
}


size_t KotlinParser::InOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleInOperator;
}

void KotlinParser::InOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInOperator(this);
}

void KotlinParser::InOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInOperator(this);
}

KotlinParser::InOperatorContext* KotlinParser::inOperator() {
  InOperatorContext *_localctx = _tracker.createInstance<InOperatorContext>(_ctx, getState());
  enterRule(_localctx, 278, KotlinParser::RuleInOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3251);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::IN

    || _la == KotlinParser::NOT_IN)) {
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

//----------------- IsOperatorContext ------------------------------------------------------------------

KotlinParser::IsOperatorContext::IsOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::IsOperatorContext::IS() {
  return getToken(KotlinParser::IS, 0);
}

tree::TerminalNode* KotlinParser::IsOperatorContext::NOT_IS() {
  return getToken(KotlinParser::NOT_IS, 0);
}


size_t KotlinParser::IsOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleIsOperator;
}

void KotlinParser::IsOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIsOperator(this);
}

void KotlinParser::IsOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIsOperator(this);
}

KotlinParser::IsOperatorContext* KotlinParser::isOperator() {
  IsOperatorContext *_localctx = _tracker.createInstance<IsOperatorContext>(_ctx, getState());
  enterRule(_localctx, 280, KotlinParser::RuleIsOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3253);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::IS

    || _la == KotlinParser::NOT_IS)) {
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

//----------------- AdditiveOperatorContext ------------------------------------------------------------------

KotlinParser::AdditiveOperatorContext::AdditiveOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::AdditiveOperatorContext::ADD() {
  return getToken(KotlinParser::ADD, 0);
}

tree::TerminalNode* KotlinParser::AdditiveOperatorContext::SUB() {
  return getToken(KotlinParser::SUB, 0);
}


size_t KotlinParser::AdditiveOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleAdditiveOperator;
}

void KotlinParser::AdditiveOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveOperator(this);
}

void KotlinParser::AdditiveOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveOperator(this);
}

KotlinParser::AdditiveOperatorContext* KotlinParser::additiveOperator() {
  AdditiveOperatorContext *_localctx = _tracker.createInstance<AdditiveOperatorContext>(_ctx, getState());
  enterRule(_localctx, 282, KotlinParser::RuleAdditiveOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3255);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::ADD

    || _la == KotlinParser::SUB)) {
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

//----------------- MultiplicativeOperatorContext ------------------------------------------------------------------

KotlinParser::MultiplicativeOperatorContext::MultiplicativeOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MultiplicativeOperatorContext::MULT() {
  return getToken(KotlinParser::MULT, 0);
}

tree::TerminalNode* KotlinParser::MultiplicativeOperatorContext::DIV() {
  return getToken(KotlinParser::DIV, 0);
}

tree::TerminalNode* KotlinParser::MultiplicativeOperatorContext::MOD() {
  return getToken(KotlinParser::MOD, 0);
}


size_t KotlinParser::MultiplicativeOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleMultiplicativeOperator;
}

void KotlinParser::MultiplicativeOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeOperator(this);
}

void KotlinParser::MultiplicativeOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeOperator(this);
}

KotlinParser::MultiplicativeOperatorContext* KotlinParser::multiplicativeOperator() {
  MultiplicativeOperatorContext *_localctx = _tracker.createInstance<MultiplicativeOperatorContext>(_ctx, getState());
  enterRule(_localctx, 284, KotlinParser::RuleMultiplicativeOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3257);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KotlinParser::MULT)
      | (1ULL << KotlinParser::MOD)
      | (1ULL << KotlinParser::DIV))) != 0))) {
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

//----------------- AsOperatorContext ------------------------------------------------------------------

KotlinParser::AsOperatorContext::AsOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::AsOperatorContext::AS() {
  return getToken(KotlinParser::AS, 0);
}

tree::TerminalNode* KotlinParser::AsOperatorContext::AS_SAFE() {
  return getToken(KotlinParser::AS_SAFE, 0);
}


size_t KotlinParser::AsOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleAsOperator;
}

void KotlinParser::AsOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsOperator(this);
}

void KotlinParser::AsOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsOperator(this);
}

KotlinParser::AsOperatorContext* KotlinParser::asOperator() {
  AsOperatorContext *_localctx = _tracker.createInstance<AsOperatorContext>(_ctx, getState());
  enterRule(_localctx, 286, KotlinParser::RuleAsOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3259);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::AS_SAFE

    || _la == KotlinParser::AS)) {
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

//----------------- PrefixUnaryOperatorContext ------------------------------------------------------------------

KotlinParser::PrefixUnaryOperatorContext::PrefixUnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PrefixUnaryOperatorContext::INCR() {
  return getToken(KotlinParser::INCR, 0);
}

tree::TerminalNode* KotlinParser::PrefixUnaryOperatorContext::DECR() {
  return getToken(KotlinParser::DECR, 0);
}

tree::TerminalNode* KotlinParser::PrefixUnaryOperatorContext::SUB() {
  return getToken(KotlinParser::SUB, 0);
}

tree::TerminalNode* KotlinParser::PrefixUnaryOperatorContext::ADD() {
  return getToken(KotlinParser::ADD, 0);
}

KotlinParser::ExclContext* KotlinParser::PrefixUnaryOperatorContext::excl() {
  return getRuleContext<KotlinParser::ExclContext>(0);
}


size_t KotlinParser::PrefixUnaryOperatorContext::getRuleIndex() const {
  return KotlinParser::RulePrefixUnaryOperator;
}

void KotlinParser::PrefixUnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryOperator(this);
}

void KotlinParser::PrefixUnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryOperator(this);
}

KotlinParser::PrefixUnaryOperatorContext* KotlinParser::prefixUnaryOperator() {
  PrefixUnaryOperatorContext *_localctx = _tracker.createInstance<PrefixUnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 288, KotlinParser::RulePrefixUnaryOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::INCR: {
        enterOuterAlt(_localctx, 1);
        setState(3261);
        match(KotlinParser::INCR);
        break;
      }

      case KotlinParser::DECR: {
        enterOuterAlt(_localctx, 2);
        setState(3262);
        match(KotlinParser::DECR);
        break;
      }

      case KotlinParser::SUB: {
        enterOuterAlt(_localctx, 3);
        setState(3263);
        match(KotlinParser::SUB);
        break;
      }

      case KotlinParser::ADD: {
        enterOuterAlt(_localctx, 4);
        setState(3264);
        match(KotlinParser::ADD);
        break;
      }

      case KotlinParser::EXCL_WS:
      case KotlinParser::EXCL_NO_WS: {
        enterOuterAlt(_localctx, 5);
        setState(3265);
        excl();
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

//----------------- PostfixUnaryOperatorContext ------------------------------------------------------------------

KotlinParser::PostfixUnaryOperatorContext::PostfixUnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PostfixUnaryOperatorContext::INCR() {
  return getToken(KotlinParser::INCR, 0);
}

tree::TerminalNode* KotlinParser::PostfixUnaryOperatorContext::DECR() {
  return getToken(KotlinParser::DECR, 0);
}

tree::TerminalNode* KotlinParser::PostfixUnaryOperatorContext::EXCL_NO_WS() {
  return getToken(KotlinParser::EXCL_NO_WS, 0);
}

KotlinParser::ExclContext* KotlinParser::PostfixUnaryOperatorContext::excl() {
  return getRuleContext<KotlinParser::ExclContext>(0);
}


size_t KotlinParser::PostfixUnaryOperatorContext::getRuleIndex() const {
  return KotlinParser::RulePostfixUnaryOperator;
}

void KotlinParser::PostfixUnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnaryOperator(this);
}

void KotlinParser::PostfixUnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnaryOperator(this);
}

KotlinParser::PostfixUnaryOperatorContext* KotlinParser::postfixUnaryOperator() {
  PostfixUnaryOperatorContext *_localctx = _tracker.createInstance<PostfixUnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 290, KotlinParser::RulePostfixUnaryOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3272);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::INCR: {
        enterOuterAlt(_localctx, 1);
        setState(3268);
        match(KotlinParser::INCR);
        break;
      }

      case KotlinParser::DECR: {
        enterOuterAlt(_localctx, 2);
        setState(3269);
        match(KotlinParser::DECR);
        break;
      }

      case KotlinParser::EXCL_NO_WS: {
        enterOuterAlt(_localctx, 3);
        setState(3270);
        match(KotlinParser::EXCL_NO_WS);
        setState(3271);
        excl();
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

//----------------- ExclContext ------------------------------------------------------------------

KotlinParser::ExclContext::ExclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ExclContext::EXCL_NO_WS() {
  return getToken(KotlinParser::EXCL_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::ExclContext::EXCL_WS() {
  return getToken(KotlinParser::EXCL_WS, 0);
}


size_t KotlinParser::ExclContext::getRuleIndex() const {
  return KotlinParser::RuleExcl;
}

void KotlinParser::ExclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExcl(this);
}

void KotlinParser::ExclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExcl(this);
}

KotlinParser::ExclContext* KotlinParser::excl() {
  ExclContext *_localctx = _tracker.createInstance<ExclContext>(_ctx, getState());
  enterRule(_localctx, 292, KotlinParser::RuleExcl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3274);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::EXCL_WS

    || _la == KotlinParser::EXCL_NO_WS)) {
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

//----------------- MemberAccessOperatorContext ------------------------------------------------------------------

KotlinParser::MemberAccessOperatorContext::MemberAccessOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MemberAccessOperatorContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::MemberAccessOperatorContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::MemberAccessOperatorContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::SafeNavContext* KotlinParser::MemberAccessOperatorContext::safeNav() {
  return getRuleContext<KotlinParser::SafeNavContext>(0);
}

tree::TerminalNode* KotlinParser::MemberAccessOperatorContext::COLONCOLON() {
  return getToken(KotlinParser::COLONCOLON, 0);
}


size_t KotlinParser::MemberAccessOperatorContext::getRuleIndex() const {
  return KotlinParser::RuleMemberAccessOperator;
}

void KotlinParser::MemberAccessOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessOperator(this);
}

void KotlinParser::MemberAccessOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessOperator(this);
}

KotlinParser::MemberAccessOperatorContext* KotlinParser::memberAccessOperator() {
  MemberAccessOperatorContext *_localctx = _tracker.createInstance<MemberAccessOperatorContext>(_ctx, getState());
  enterRule(_localctx, 294, KotlinParser::RuleMemberAccessOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 505, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(3279);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(3276);
        match(KotlinParser::NL);
        setState(3281);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(3282);
      match(KotlinParser::DOT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(3286);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(3283);
        match(KotlinParser::NL);
        setState(3288);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(3289);
      safeNav();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(3290);
      match(KotlinParser::COLONCOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SafeNavContext ------------------------------------------------------------------

KotlinParser::SafeNavContext::SafeNavContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::SafeNavContext::QUEST_NO_WS() {
  return getToken(KotlinParser::QUEST_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::SafeNavContext::DOT() {
  return getToken(KotlinParser::DOT, 0);
}


size_t KotlinParser::SafeNavContext::getRuleIndex() const {
  return KotlinParser::RuleSafeNav;
}

void KotlinParser::SafeNavContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSafeNav(this);
}

void KotlinParser::SafeNavContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSafeNav(this);
}

KotlinParser::SafeNavContext* KotlinParser::safeNav() {
  SafeNavContext *_localctx = _tracker.createInstance<SafeNavContext>(_ctx, getState());
  enterRule(_localctx, 296, KotlinParser::RuleSafeNav);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3293);
    match(KotlinParser::QUEST_NO_WS);
    setState(3294);
    match(KotlinParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifiersContext ------------------------------------------------------------------

KotlinParser::ModifiersContext::ModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::ModifiersContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::ModifiersContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

std::vector<KotlinParser::ModifierContext *> KotlinParser::ModifiersContext::modifier() {
  return getRuleContexts<KotlinParser::ModifierContext>();
}

KotlinParser::ModifierContext* KotlinParser::ModifiersContext::modifier(size_t i) {
  return getRuleContext<KotlinParser::ModifierContext>(i);
}


size_t KotlinParser::ModifiersContext::getRuleIndex() const {
  return KotlinParser::RuleModifiers;
}

void KotlinParser::ModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifiers(this);
}

void KotlinParser::ModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifiers(this);
}

KotlinParser::ModifiersContext* KotlinParser::modifiers() {
  ModifiersContext *_localctx = _tracker.createInstance<ModifiersContext>(_ctx, getState());
  enterRule(_localctx, 298, KotlinParser::RuleModifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3298); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(3298);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case KotlinParser::AT_NO_WS:
                case KotlinParser::AT_PRE_WS: {
                  setState(3296);
                  annotation();
                  break;
                }

                case KotlinParser::PUBLIC:
                case KotlinParser::PRIVATE:
                case KotlinParser::PROTECTED:
                case KotlinParser::INTERNAL:
                case KotlinParser::ENUM:
                case KotlinParser::SEALED:
                case KotlinParser::ANNOTATION:
                case KotlinParser::DATA:
                case KotlinParser::INNER:
                case KotlinParser::VALUE:
                case KotlinParser::TAILREC:
                case KotlinParser::OPERATOR:
                case KotlinParser::INLINE:
                case KotlinParser::INFIX:
                case KotlinParser::EXTERNAL:
                case KotlinParser::SUSPEND:
                case KotlinParser::OVERRIDE:
                case KotlinParser::ABSTRACT:
                case KotlinParser::FINAL:
                case KotlinParser::OPEN:
                case KotlinParser::CONST:
                case KotlinParser::LATEINIT:
                case KotlinParser::VARARG:
                case KotlinParser::NOINLINE:
                case KotlinParser::CROSSINLINE:
                case KotlinParser::EXPECT:
                case KotlinParser::ACTUAL: {
                  setState(3297);
                  modifier();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(3300); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 507, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterModifiersContext ------------------------------------------------------------------

KotlinParser::ParameterModifiersContext::ParameterModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::AnnotationContext *> KotlinParser::ParameterModifiersContext::annotation() {
  return getRuleContexts<KotlinParser::AnnotationContext>();
}

KotlinParser::AnnotationContext* KotlinParser::ParameterModifiersContext::annotation(size_t i) {
  return getRuleContext<KotlinParser::AnnotationContext>(i);
}

std::vector<KotlinParser::ParameterModifierContext *> KotlinParser::ParameterModifiersContext::parameterModifier() {
  return getRuleContexts<KotlinParser::ParameterModifierContext>();
}

KotlinParser::ParameterModifierContext* KotlinParser::ParameterModifiersContext::parameterModifier(size_t i) {
  return getRuleContext<KotlinParser::ParameterModifierContext>(i);
}


size_t KotlinParser::ParameterModifiersContext::getRuleIndex() const {
  return KotlinParser::RuleParameterModifiers;
}

void KotlinParser::ParameterModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterModifiers(this);
}

void KotlinParser::ParameterModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterModifiers(this);
}

KotlinParser::ParameterModifiersContext* KotlinParser::parameterModifiers() {
  ParameterModifiersContext *_localctx = _tracker.createInstance<ParameterModifiersContext>(_ctx, getState());
  enterRule(_localctx, 300, KotlinParser::RuleParameterModifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3304); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(3304);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case KotlinParser::AT_NO_WS:
                case KotlinParser::AT_PRE_WS: {
                  setState(3302);
                  annotation();
                  break;
                }

                case KotlinParser::VARARG:
                case KotlinParser::NOINLINE:
                case KotlinParser::CROSSINLINE: {
                  setState(3303);
                  parameterModifier();
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(3306); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 509, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

KotlinParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ClassModifierContext* KotlinParser::ModifierContext::classModifier() {
  return getRuleContext<KotlinParser::ClassModifierContext>(0);
}

KotlinParser::MemberModifierContext* KotlinParser::ModifierContext::memberModifier() {
  return getRuleContext<KotlinParser::MemberModifierContext>(0);
}

KotlinParser::VisibilityModifierContext* KotlinParser::ModifierContext::visibilityModifier() {
  return getRuleContext<KotlinParser::VisibilityModifierContext>(0);
}

KotlinParser::FunctionModifierContext* KotlinParser::ModifierContext::functionModifier() {
  return getRuleContext<KotlinParser::FunctionModifierContext>(0);
}

KotlinParser::PropertyModifierContext* KotlinParser::ModifierContext::propertyModifier() {
  return getRuleContext<KotlinParser::PropertyModifierContext>(0);
}

KotlinParser::InheritanceModifierContext* KotlinParser::ModifierContext::inheritanceModifier() {
  return getRuleContext<KotlinParser::InheritanceModifierContext>(0);
}

KotlinParser::ParameterModifierContext* KotlinParser::ModifierContext::parameterModifier() {
  return getRuleContext<KotlinParser::ParameterModifierContext>(0);
}

KotlinParser::PlatformModifierContext* KotlinParser::ModifierContext::platformModifier() {
  return getRuleContext<KotlinParser::PlatformModifierContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::ModifierContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::ModifierContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::ModifierContext::getRuleIndex() const {
  return KotlinParser::RuleModifier;
}

void KotlinParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier(this);
}

void KotlinParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier(this);
}

KotlinParser::ModifierContext* KotlinParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 302, KotlinParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3316);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::ENUM:
      case KotlinParser::SEALED:
      case KotlinParser::ANNOTATION:
      case KotlinParser::DATA:
      case KotlinParser::INNER:
      case KotlinParser::VALUE: {
        setState(3308);
        classModifier();
        break;
      }

      case KotlinParser::OVERRIDE:
      case KotlinParser::LATEINIT: {
        setState(3309);
        memberModifier();
        break;
      }

      case KotlinParser::PUBLIC:
      case KotlinParser::PRIVATE:
      case KotlinParser::PROTECTED:
      case KotlinParser::INTERNAL: {
        setState(3310);
        visibilityModifier();
        break;
      }

      case KotlinParser::TAILREC:
      case KotlinParser::OPERATOR:
      case KotlinParser::INLINE:
      case KotlinParser::INFIX:
      case KotlinParser::EXTERNAL:
      case KotlinParser::SUSPEND: {
        setState(3311);
        functionModifier();
        break;
      }

      case KotlinParser::CONST: {
        setState(3312);
        propertyModifier();
        break;
      }

      case KotlinParser::ABSTRACT:
      case KotlinParser::FINAL:
      case KotlinParser::OPEN: {
        setState(3313);
        inheritanceModifier();
        break;
      }

      case KotlinParser::VARARG:
      case KotlinParser::NOINLINE:
      case KotlinParser::CROSSINLINE: {
        setState(3314);
        parameterModifier();
        break;
      }

      case KotlinParser::EXPECT:
      case KotlinParser::ACTUAL: {
        setState(3315);
        platformModifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(3321);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 511, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(3318);
        match(KotlinParser::NL); 
      }
      setState(3323);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 511, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeModifiersContext ------------------------------------------------------------------

KotlinParser::TypeModifiersContext::TypeModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::TypeModifierContext *> KotlinParser::TypeModifiersContext::typeModifier() {
  return getRuleContexts<KotlinParser::TypeModifierContext>();
}

KotlinParser::TypeModifierContext* KotlinParser::TypeModifiersContext::typeModifier(size_t i) {
  return getRuleContext<KotlinParser::TypeModifierContext>(i);
}


size_t KotlinParser::TypeModifiersContext::getRuleIndex() const {
  return KotlinParser::RuleTypeModifiers;
}

void KotlinParser::TypeModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeModifiers(this);
}

void KotlinParser::TypeModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeModifiers(this);
}

KotlinParser::TypeModifiersContext* KotlinParser::typeModifiers() {
  TypeModifiersContext *_localctx = _tracker.createInstance<TypeModifiersContext>(_ctx, getState());
  enterRule(_localctx, 304, KotlinParser::RuleTypeModifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3325); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(3324);
              typeModifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(3327); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 512, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeModifierContext ------------------------------------------------------------------

KotlinParser::TypeModifierContext::TypeModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::AnnotationContext* KotlinParser::TypeModifierContext::annotation() {
  return getRuleContext<KotlinParser::AnnotationContext>(0);
}

tree::TerminalNode* KotlinParser::TypeModifierContext::SUSPEND() {
  return getToken(KotlinParser::SUSPEND, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeModifierContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeModifierContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::TypeModifierContext::getRuleIndex() const {
  return KotlinParser::RuleTypeModifier;
}

void KotlinParser::TypeModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeModifier(this);
}

void KotlinParser::TypeModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeModifier(this);
}

KotlinParser::TypeModifierContext* KotlinParser::typeModifier() {
  TypeModifierContext *_localctx = _tracker.createInstance<TypeModifierContext>(_ctx, getState());
  enterRule(_localctx, 306, KotlinParser::RuleTypeModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3337);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS: {
        enterOuterAlt(_localctx, 1);
        setState(3329);
        annotation();
        break;
      }

      case KotlinParser::SUSPEND: {
        enterOuterAlt(_localctx, 2);
        setState(3330);
        match(KotlinParser::SUSPEND);
        setState(3334);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3331);
          match(KotlinParser::NL);
          setState(3336);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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

//----------------- ClassModifierContext ------------------------------------------------------------------

KotlinParser::ClassModifierContext::ClassModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ClassModifierContext::ENUM() {
  return getToken(KotlinParser::ENUM, 0);
}

tree::TerminalNode* KotlinParser::ClassModifierContext::SEALED() {
  return getToken(KotlinParser::SEALED, 0);
}

tree::TerminalNode* KotlinParser::ClassModifierContext::ANNOTATION() {
  return getToken(KotlinParser::ANNOTATION, 0);
}

tree::TerminalNode* KotlinParser::ClassModifierContext::DATA() {
  return getToken(KotlinParser::DATA, 0);
}

tree::TerminalNode* KotlinParser::ClassModifierContext::INNER() {
  return getToken(KotlinParser::INNER, 0);
}

tree::TerminalNode* KotlinParser::ClassModifierContext::VALUE() {
  return getToken(KotlinParser::VALUE, 0);
}


size_t KotlinParser::ClassModifierContext::getRuleIndex() const {
  return KotlinParser::RuleClassModifier;
}

void KotlinParser::ClassModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassModifier(this);
}

void KotlinParser::ClassModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassModifier(this);
}

KotlinParser::ClassModifierContext* KotlinParser::classModifier() {
  ClassModifierContext *_localctx = _tracker.createInstance<ClassModifierContext>(_ctx, getState());
  enterRule(_localctx, 308, KotlinParser::RuleClassModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3339);
    _la = _input->LA(1);
    if (!(((((_la - 111) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 111)) & ((1ULL << (KotlinParser::ENUM - 111))
      | (1ULL << (KotlinParser::SEALED - 111))
      | (1ULL << (KotlinParser::ANNOTATION - 111))
      | (1ULL << (KotlinParser::DATA - 111))
      | (1ULL << (KotlinParser::INNER - 111))
      | (1ULL << (KotlinParser::VALUE - 111)))) != 0))) {
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

//----------------- MemberModifierContext ------------------------------------------------------------------

KotlinParser::MemberModifierContext::MemberModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MemberModifierContext::OVERRIDE() {
  return getToken(KotlinParser::OVERRIDE, 0);
}

tree::TerminalNode* KotlinParser::MemberModifierContext::LATEINIT() {
  return getToken(KotlinParser::LATEINIT, 0);
}


size_t KotlinParser::MemberModifierContext::getRuleIndex() const {
  return KotlinParser::RuleMemberModifier;
}

void KotlinParser::MemberModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberModifier(this);
}

void KotlinParser::MemberModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberModifier(this);
}

KotlinParser::MemberModifierContext* KotlinParser::memberModifier() {
  MemberModifierContext *_localctx = _tracker.createInstance<MemberModifierContext>(_ctx, getState());
  enterRule(_localctx, 310, KotlinParser::RuleMemberModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3341);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::OVERRIDE

    || _la == KotlinParser::LATEINIT)) {
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

//----------------- VisibilityModifierContext ------------------------------------------------------------------

KotlinParser::VisibilityModifierContext::VisibilityModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::VisibilityModifierContext::PUBLIC() {
  return getToken(KotlinParser::PUBLIC, 0);
}

tree::TerminalNode* KotlinParser::VisibilityModifierContext::PRIVATE() {
  return getToken(KotlinParser::PRIVATE, 0);
}

tree::TerminalNode* KotlinParser::VisibilityModifierContext::INTERNAL() {
  return getToken(KotlinParser::INTERNAL, 0);
}

tree::TerminalNode* KotlinParser::VisibilityModifierContext::PROTECTED() {
  return getToken(KotlinParser::PROTECTED, 0);
}


size_t KotlinParser::VisibilityModifierContext::getRuleIndex() const {
  return KotlinParser::RuleVisibilityModifier;
}

void KotlinParser::VisibilityModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVisibilityModifier(this);
}

void KotlinParser::VisibilityModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVisibilityModifier(this);
}

KotlinParser::VisibilityModifierContext* KotlinParser::visibilityModifier() {
  VisibilityModifierContext *_localctx = _tracker.createInstance<VisibilityModifierContext>(_ctx, getState());
  enterRule(_localctx, 312, KotlinParser::RuleVisibilityModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3343);
    _la = _input->LA(1);
    if (!(((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (KotlinParser::PUBLIC - 107))
      | (1ULL << (KotlinParser::PRIVATE - 107))
      | (1ULL << (KotlinParser::PROTECTED - 107))
      | (1ULL << (KotlinParser::INTERNAL - 107)))) != 0))) {
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

//----------------- VarianceModifierContext ------------------------------------------------------------------

KotlinParser::VarianceModifierContext::VarianceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::VarianceModifierContext::IN() {
  return getToken(KotlinParser::IN, 0);
}

tree::TerminalNode* KotlinParser::VarianceModifierContext::OUT() {
  return getToken(KotlinParser::OUT, 0);
}


size_t KotlinParser::VarianceModifierContext::getRuleIndex() const {
  return KotlinParser::RuleVarianceModifier;
}

void KotlinParser::VarianceModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarianceModifier(this);
}

void KotlinParser::VarianceModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarianceModifier(this);
}

KotlinParser::VarianceModifierContext* KotlinParser::varianceModifier() {
  VarianceModifierContext *_localctx = _tracker.createInstance<VarianceModifierContext>(_ctx, getState());
  enterRule(_localctx, 314, KotlinParser::RuleVarianceModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3345);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::IN

    || _la == KotlinParser::OUT)) {
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

//----------------- TypeParameterModifiersContext ------------------------------------------------------------------

KotlinParser::TypeParameterModifiersContext::TypeParameterModifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::TypeParameterModifierContext *> KotlinParser::TypeParameterModifiersContext::typeParameterModifier() {
  return getRuleContexts<KotlinParser::TypeParameterModifierContext>();
}

KotlinParser::TypeParameterModifierContext* KotlinParser::TypeParameterModifiersContext::typeParameterModifier(size_t i) {
  return getRuleContext<KotlinParser::TypeParameterModifierContext>(i);
}


size_t KotlinParser::TypeParameterModifiersContext::getRuleIndex() const {
  return KotlinParser::RuleTypeParameterModifiers;
}

void KotlinParser::TypeParameterModifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterModifiers(this);
}

void KotlinParser::TypeParameterModifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterModifiers(this);
}

KotlinParser::TypeParameterModifiersContext* KotlinParser::typeParameterModifiers() {
  TypeParameterModifiersContext *_localctx = _tracker.createInstance<TypeParameterModifiersContext>(_ctx, getState());
  enterRule(_localctx, 316, KotlinParser::RuleTypeParameterModifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3348); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(3347);
              typeParameterModifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(3350); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 515, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterModifierContext ------------------------------------------------------------------

KotlinParser::TypeParameterModifierContext::TypeParameterModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ReificationModifierContext* KotlinParser::TypeParameterModifierContext::reificationModifier() {
  return getRuleContext<KotlinParser::ReificationModifierContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::TypeParameterModifierContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::TypeParameterModifierContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}

KotlinParser::VarianceModifierContext* KotlinParser::TypeParameterModifierContext::varianceModifier() {
  return getRuleContext<KotlinParser::VarianceModifierContext>(0);
}

KotlinParser::AnnotationContext* KotlinParser::TypeParameterModifierContext::annotation() {
  return getRuleContext<KotlinParser::AnnotationContext>(0);
}


size_t KotlinParser::TypeParameterModifierContext::getRuleIndex() const {
  return KotlinParser::RuleTypeParameterModifier;
}

void KotlinParser::TypeParameterModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterModifier(this);
}

void KotlinParser::TypeParameterModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterModifier(this);
}

KotlinParser::TypeParameterModifierContext* KotlinParser::typeParameterModifier() {
  TypeParameterModifierContext *_localctx = _tracker.createInstance<TypeParameterModifierContext>(_ctx, getState());
  enterRule(_localctx, 318, KotlinParser::RuleTypeParameterModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(3367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KotlinParser::REIFIED: {
        enterOuterAlt(_localctx, 1);
        setState(3352);
        reificationModifier();
        setState(3356);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 516, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(3353);
            match(KotlinParser::NL); 
          }
          setState(3358);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 516, _ctx);
        }
        break;
      }

      case KotlinParser::IN:
      case KotlinParser::OUT: {
        enterOuterAlt(_localctx, 2);
        setState(3359);
        varianceModifier();
        setState(3363);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 517, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(3360);
            match(KotlinParser::NL); 
          }
          setState(3365);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 517, _ctx);
        }
        break;
      }

      case KotlinParser::AT_NO_WS:
      case KotlinParser::AT_PRE_WS: {
        enterOuterAlt(_localctx, 3);
        setState(3366);
        annotation();
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

//----------------- FunctionModifierContext ------------------------------------------------------------------

KotlinParser::FunctionModifierContext::FunctionModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::FunctionModifierContext::TAILREC() {
  return getToken(KotlinParser::TAILREC, 0);
}

tree::TerminalNode* KotlinParser::FunctionModifierContext::OPERATOR() {
  return getToken(KotlinParser::OPERATOR, 0);
}

tree::TerminalNode* KotlinParser::FunctionModifierContext::INFIX() {
  return getToken(KotlinParser::INFIX, 0);
}

tree::TerminalNode* KotlinParser::FunctionModifierContext::INLINE() {
  return getToken(KotlinParser::INLINE, 0);
}

tree::TerminalNode* KotlinParser::FunctionModifierContext::EXTERNAL() {
  return getToken(KotlinParser::EXTERNAL, 0);
}

tree::TerminalNode* KotlinParser::FunctionModifierContext::SUSPEND() {
  return getToken(KotlinParser::SUSPEND, 0);
}


size_t KotlinParser::FunctionModifierContext::getRuleIndex() const {
  return KotlinParser::RuleFunctionModifier;
}

void KotlinParser::FunctionModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionModifier(this);
}

void KotlinParser::FunctionModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionModifier(this);
}

KotlinParser::FunctionModifierContext* KotlinParser::functionModifier() {
  FunctionModifierContext *_localctx = _tracker.createInstance<FunctionModifierContext>(_ctx, getState());
  enterRule(_localctx, 320, KotlinParser::RuleFunctionModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3369);
    _la = _input->LA(1);
    if (!(((((_la - 117) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 117)) & ((1ULL << (KotlinParser::TAILREC - 117))
      | (1ULL << (KotlinParser::OPERATOR - 117))
      | (1ULL << (KotlinParser::INLINE - 117))
      | (1ULL << (KotlinParser::INFIX - 117))
      | (1ULL << (KotlinParser::EXTERNAL - 117))
      | (1ULL << (KotlinParser::SUSPEND - 117)))) != 0))) {
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

//----------------- PropertyModifierContext ------------------------------------------------------------------

KotlinParser::PropertyModifierContext::PropertyModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PropertyModifierContext::CONST() {
  return getToken(KotlinParser::CONST, 0);
}


size_t KotlinParser::PropertyModifierContext::getRuleIndex() const {
  return KotlinParser::RulePropertyModifier;
}

void KotlinParser::PropertyModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyModifier(this);
}

void KotlinParser::PropertyModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyModifier(this);
}

KotlinParser::PropertyModifierContext* KotlinParser::propertyModifier() {
  PropertyModifierContext *_localctx = _tracker.createInstance<PropertyModifierContext>(_ctx, getState());
  enterRule(_localctx, 322, KotlinParser::RulePropertyModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3371);
    match(KotlinParser::CONST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceModifierContext ------------------------------------------------------------------

KotlinParser::InheritanceModifierContext::InheritanceModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::InheritanceModifierContext::ABSTRACT() {
  return getToken(KotlinParser::ABSTRACT, 0);
}

tree::TerminalNode* KotlinParser::InheritanceModifierContext::FINAL() {
  return getToken(KotlinParser::FINAL, 0);
}

tree::TerminalNode* KotlinParser::InheritanceModifierContext::OPEN() {
  return getToken(KotlinParser::OPEN, 0);
}


size_t KotlinParser::InheritanceModifierContext::getRuleIndex() const {
  return KotlinParser::RuleInheritanceModifier;
}

void KotlinParser::InheritanceModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInheritanceModifier(this);
}

void KotlinParser::InheritanceModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInheritanceModifier(this);
}

KotlinParser::InheritanceModifierContext* KotlinParser::inheritanceModifier() {
  InheritanceModifierContext *_localctx = _tracker.createInstance<InheritanceModifierContext>(_ctx, getState());
  enterRule(_localctx, 324, KotlinParser::RuleInheritanceModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3373);
    _la = _input->LA(1);
    if (!(((((_la - 124) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 124)) & ((1ULL << (KotlinParser::ABSTRACT - 124))
      | (1ULL << (KotlinParser::FINAL - 124))
      | (1ULL << (KotlinParser::OPEN - 124)))) != 0))) {
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

//----------------- ParameterModifierContext ------------------------------------------------------------------

KotlinParser::ParameterModifierContext::ParameterModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ParameterModifierContext::VARARG() {
  return getToken(KotlinParser::VARARG, 0);
}

tree::TerminalNode* KotlinParser::ParameterModifierContext::NOINLINE() {
  return getToken(KotlinParser::NOINLINE, 0);
}

tree::TerminalNode* KotlinParser::ParameterModifierContext::CROSSINLINE() {
  return getToken(KotlinParser::CROSSINLINE, 0);
}


size_t KotlinParser::ParameterModifierContext::getRuleIndex() const {
  return KotlinParser::RuleParameterModifier;
}

void KotlinParser::ParameterModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterModifier(this);
}

void KotlinParser::ParameterModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterModifier(this);
}

KotlinParser::ParameterModifierContext* KotlinParser::parameterModifier() {
  ParameterModifierContext *_localctx = _tracker.createInstance<ParameterModifierContext>(_ctx, getState());
  enterRule(_localctx, 326, KotlinParser::RuleParameterModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3375);
    _la = _input->LA(1);
    if (!(((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (KotlinParser::VARARG - 129))
      | (1ULL << (KotlinParser::NOINLINE - 129))
      | (1ULL << (KotlinParser::CROSSINLINE - 129)))) != 0))) {
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

//----------------- ReificationModifierContext ------------------------------------------------------------------

KotlinParser::ReificationModifierContext::ReificationModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::ReificationModifierContext::REIFIED() {
  return getToken(KotlinParser::REIFIED, 0);
}


size_t KotlinParser::ReificationModifierContext::getRuleIndex() const {
  return KotlinParser::RuleReificationModifier;
}

void KotlinParser::ReificationModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReificationModifier(this);
}

void KotlinParser::ReificationModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReificationModifier(this);
}

KotlinParser::ReificationModifierContext* KotlinParser::reificationModifier() {
  ReificationModifierContext *_localctx = _tracker.createInstance<ReificationModifierContext>(_ctx, getState());
  enterRule(_localctx, 328, KotlinParser::RuleReificationModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3377);
    match(KotlinParser::REIFIED);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlatformModifierContext ------------------------------------------------------------------

KotlinParser::PlatformModifierContext::PlatformModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::PlatformModifierContext::EXPECT() {
  return getToken(KotlinParser::EXPECT, 0);
}

tree::TerminalNode* KotlinParser::PlatformModifierContext::ACTUAL() {
  return getToken(KotlinParser::ACTUAL, 0);
}


size_t KotlinParser::PlatformModifierContext::getRuleIndex() const {
  return KotlinParser::RulePlatformModifier;
}

void KotlinParser::PlatformModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlatformModifier(this);
}

void KotlinParser::PlatformModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlatformModifier(this);
}

KotlinParser::PlatformModifierContext* KotlinParser::platformModifier() {
  PlatformModifierContext *_localctx = _tracker.createInstance<PlatformModifierContext>(_ctx, getState());
  enterRule(_localctx, 330, KotlinParser::RulePlatformModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3379);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::EXPECT

    || _la == KotlinParser::ACTUAL)) {
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

//----------------- AnnotationContext ------------------------------------------------------------------

KotlinParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::SingleAnnotationContext* KotlinParser::AnnotationContext::singleAnnotation() {
  return getRuleContext<KotlinParser::SingleAnnotationContext>(0);
}

KotlinParser::MultiAnnotationContext* KotlinParser::AnnotationContext::multiAnnotation() {
  return getRuleContext<KotlinParser::MultiAnnotationContext>(0);
}

std::vector<tree::TerminalNode *> KotlinParser::AnnotationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AnnotationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AnnotationContext::getRuleIndex() const {
  return KotlinParser::RuleAnnotation;
}

void KotlinParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void KotlinParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}

KotlinParser::AnnotationContext* KotlinParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 332, KotlinParser::RuleAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 519, _ctx)) {
    case 1: {
      setState(3381);
      singleAnnotation();
      break;
    }

    case 2: {
      setState(3382);
      multiAnnotation();
      break;
    }

    default:
      break;
    }
    setState(3388);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 520, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(3385);
        match(KotlinParser::NL); 
      }
      setState(3390);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 520, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleAnnotationContext ------------------------------------------------------------------

KotlinParser::SingleAnnotationContext::SingleAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::UnescapedAnnotationContext* KotlinParser::SingleAnnotationContext::unescapedAnnotation() {
  return getRuleContext<KotlinParser::UnescapedAnnotationContext>(0);
}

KotlinParser::AnnotationUseSiteTargetContext* KotlinParser::SingleAnnotationContext::annotationUseSiteTarget() {
  return getRuleContext<KotlinParser::AnnotationUseSiteTargetContext>(0);
}

tree::TerminalNode* KotlinParser::SingleAnnotationContext::AT_NO_WS() {
  return getToken(KotlinParser::AT_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::SingleAnnotationContext::AT_PRE_WS() {
  return getToken(KotlinParser::AT_PRE_WS, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::SingleAnnotationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::SingleAnnotationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::SingleAnnotationContext::getRuleIndex() const {
  return KotlinParser::RuleSingleAnnotation;
}

void KotlinParser::SingleAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleAnnotation(this);
}

void KotlinParser::SingleAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleAnnotation(this);
}

KotlinParser::SingleAnnotationContext* KotlinParser::singleAnnotation() {
  SingleAnnotationContext *_localctx = _tracker.createInstance<SingleAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 334, KotlinParser::RuleSingleAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 522, _ctx)) {
    case 1: {
      setState(3391);
      annotationUseSiteTarget();
      setState(3395);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(3392);
        match(KotlinParser::NL);
        setState(3397);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      setState(3398);
      match(KotlinParser::AT_NO_WS);
      break;
    }

    case 3: {
      setState(3399);
      match(KotlinParser::AT_PRE_WS);
      break;
    }

    default:
      break;
    }
    setState(3402);
    unescapedAnnotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiAnnotationContext ------------------------------------------------------------------

KotlinParser::MultiAnnotationContext::MultiAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::MultiAnnotationContext::LSQUARE() {
  return getToken(KotlinParser::LSQUARE, 0);
}

tree::TerminalNode* KotlinParser::MultiAnnotationContext::RSQUARE() {
  return getToken(KotlinParser::RSQUARE, 0);
}

KotlinParser::AnnotationUseSiteTargetContext* KotlinParser::MultiAnnotationContext::annotationUseSiteTarget() {
  return getRuleContext<KotlinParser::AnnotationUseSiteTargetContext>(0);
}

tree::TerminalNode* KotlinParser::MultiAnnotationContext::AT_NO_WS() {
  return getToken(KotlinParser::AT_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::MultiAnnotationContext::AT_PRE_WS() {
  return getToken(KotlinParser::AT_PRE_WS, 0);
}

std::vector<KotlinParser::UnescapedAnnotationContext *> KotlinParser::MultiAnnotationContext::unescapedAnnotation() {
  return getRuleContexts<KotlinParser::UnescapedAnnotationContext>();
}

KotlinParser::UnescapedAnnotationContext* KotlinParser::MultiAnnotationContext::unescapedAnnotation(size_t i) {
  return getRuleContext<KotlinParser::UnescapedAnnotationContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::MultiAnnotationContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::MultiAnnotationContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::MultiAnnotationContext::getRuleIndex() const {
  return KotlinParser::RuleMultiAnnotation;
}

void KotlinParser::MultiAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiAnnotation(this);
}

void KotlinParser::MultiAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiAnnotation(this);
}

KotlinParser::MultiAnnotationContext* KotlinParser::multiAnnotation() {
  MultiAnnotationContext *_localctx = _tracker.createInstance<MultiAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 336, KotlinParser::RuleMultiAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3413);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 524, _ctx)) {
    case 1: {
      setState(3404);
      annotationUseSiteTarget();
      setState(3408);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == KotlinParser::NL) {
        setState(3405);
        match(KotlinParser::NL);
        setState(3410);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      setState(3411);
      match(KotlinParser::AT_NO_WS);
      break;
    }

    case 3: {
      setState(3412);
      match(KotlinParser::AT_PRE_WS);
      break;
    }

    default:
      break;
    }
    setState(3415);
    match(KotlinParser::LSQUARE);
    setState(3417); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(3416);
      unescapedAnnotation();
      setState(3419); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (KotlinParser::FILE - 61))
      | (1ULL << (KotlinParser::FIELD - 61))
      | (1ULL << (KotlinParser::PROPERTY - 61))
      | (1ULL << (KotlinParser::GET - 61))
      | (1ULL << (KotlinParser::SET - 61))
      | (1ULL << (KotlinParser::RECEIVER - 61))
      | (1ULL << (KotlinParser::PARAM - 61))
      | (1ULL << (KotlinParser::SETPARAM - 61))
      | (1ULL << (KotlinParser::DELEGATE - 61))
      | (1ULL << (KotlinParser::IMPORT - 61))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 61))
      | (1ULL << (KotlinParser::BY - 61))
      | (1ULL << (KotlinParser::COMPANION - 61))
      | (1ULL << (KotlinParser::INIT - 61))
      | (1ULL << (KotlinParser::WHERE - 61))
      | (1ULL << (KotlinParser::CATCH - 61))
      | (1ULL << (KotlinParser::FINALLY - 61))
      | (1ULL << (KotlinParser::OUT - 61))
      | (1ULL << (KotlinParser::DYNAMIC - 61))
      | (1ULL << (KotlinParser::PUBLIC - 61))
      | (1ULL << (KotlinParser::PRIVATE - 61))
      | (1ULL << (KotlinParser::PROTECTED - 61))
      | (1ULL << (KotlinParser::INTERNAL - 61))
      | (1ULL << (KotlinParser::ENUM - 61))
      | (1ULL << (KotlinParser::SEALED - 61))
      | (1ULL << (KotlinParser::ANNOTATION - 61))
      | (1ULL << (KotlinParser::DATA - 61))
      | (1ULL << (KotlinParser::INNER - 61))
      | (1ULL << (KotlinParser::VALUE - 61))
      | (1ULL << (KotlinParser::TAILREC - 61))
      | (1ULL << (KotlinParser::OPERATOR - 61))
      | (1ULL << (KotlinParser::INLINE - 61))
      | (1ULL << (KotlinParser::INFIX - 61))
      | (1ULL << (KotlinParser::EXTERNAL - 61))
      | (1ULL << (KotlinParser::SUSPEND - 61))
      | (1ULL << (KotlinParser::OVERRIDE - 61))
      | (1ULL << (KotlinParser::ABSTRACT - 61)))) != 0) || ((((_la - 125) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 125)) & ((1ULL << (KotlinParser::FINAL - 125))
      | (1ULL << (KotlinParser::OPEN - 125))
      | (1ULL << (KotlinParser::CONST - 125))
      | (1ULL << (KotlinParser::LATEINIT - 125))
      | (1ULL << (KotlinParser::VARARG - 125))
      | (1ULL << (KotlinParser::NOINLINE - 125))
      | (1ULL << (KotlinParser::CROSSINLINE - 125))
      | (1ULL << (KotlinParser::REIFIED - 125))
      | (1ULL << (KotlinParser::EXPECT - 125))
      | (1ULL << (KotlinParser::ACTUAL - 125))
      | (1ULL << (KotlinParser::Identifier - 125)))) != 0));
    setState(3421);
    match(KotlinParser::RSQUARE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationUseSiteTargetContext ------------------------------------------------------------------

KotlinParser::AnnotationUseSiteTargetContext::AnnotationUseSiteTargetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::COLON() {
  return getToken(KotlinParser::COLON, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::AT_NO_WS() {
  return getToken(KotlinParser::AT_NO_WS, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::AT_PRE_WS() {
  return getToken(KotlinParser::AT_PRE_WS, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::FIELD() {
  return getToken(KotlinParser::FIELD, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::PROPERTY() {
  return getToken(KotlinParser::PROPERTY, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::GET() {
  return getToken(KotlinParser::GET, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::SET() {
  return getToken(KotlinParser::SET, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::RECEIVER() {
  return getToken(KotlinParser::RECEIVER, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::PARAM() {
  return getToken(KotlinParser::PARAM, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::SETPARAM() {
  return getToken(KotlinParser::SETPARAM, 0);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::DELEGATE() {
  return getToken(KotlinParser::DELEGATE, 0);
}

std::vector<tree::TerminalNode *> KotlinParser::AnnotationUseSiteTargetContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::AnnotationUseSiteTargetContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::AnnotationUseSiteTargetContext::getRuleIndex() const {
  return KotlinParser::RuleAnnotationUseSiteTarget;
}

void KotlinParser::AnnotationUseSiteTargetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationUseSiteTarget(this);
}

void KotlinParser::AnnotationUseSiteTargetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationUseSiteTarget(this);
}

KotlinParser::AnnotationUseSiteTargetContext* KotlinParser::annotationUseSiteTarget() {
  AnnotationUseSiteTargetContext *_localctx = _tracker.createInstance<AnnotationUseSiteTargetContext>(_ctx, getState());
  enterRule(_localctx, 338, KotlinParser::RuleAnnotationUseSiteTarget);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3423);
    _la = _input->LA(1);
    if (!(_la == KotlinParser::AT_NO_WS

    || _la == KotlinParser::AT_PRE_WS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(3424);
    _la = _input->LA(1);
    if (!(((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (KotlinParser::FIELD - 62))
      | (1ULL << (KotlinParser::PROPERTY - 62))
      | (1ULL << (KotlinParser::GET - 62))
      | (1ULL << (KotlinParser::SET - 62))
      | (1ULL << (KotlinParser::RECEIVER - 62))
      | (1ULL << (KotlinParser::PARAM - 62))
      | (1ULL << (KotlinParser::SETPARAM - 62))
      | (1ULL << (KotlinParser::DELEGATE - 62)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(3428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KotlinParser::NL) {
      setState(3425);
      match(KotlinParser::NL);
      setState(3430);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(3431);
    match(KotlinParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnescapedAnnotationContext ------------------------------------------------------------------

KotlinParser::UnescapedAnnotationContext::UnescapedAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KotlinParser::ConstructorInvocationContext* KotlinParser::UnescapedAnnotationContext::constructorInvocation() {
  return getRuleContext<KotlinParser::ConstructorInvocationContext>(0);
}

KotlinParser::UserTypeContext* KotlinParser::UnescapedAnnotationContext::userType() {
  return getRuleContext<KotlinParser::UserTypeContext>(0);
}


size_t KotlinParser::UnescapedAnnotationContext::getRuleIndex() const {
  return KotlinParser::RuleUnescapedAnnotation;
}

void KotlinParser::UnescapedAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnescapedAnnotation(this);
}

void KotlinParser::UnescapedAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnescapedAnnotation(this);
}

KotlinParser::UnescapedAnnotationContext* KotlinParser::unescapedAnnotation() {
  UnescapedAnnotationContext *_localctx = _tracker.createInstance<UnescapedAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 340, KotlinParser::RuleUnescapedAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(3435);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 527, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(3433);
      constructorInvocation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(3434);
      userType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleIdentifierContext ------------------------------------------------------------------

KotlinParser::SimpleIdentifierContext::SimpleIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::Identifier() {
  return getToken(KotlinParser::Identifier, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::ABSTRACT() {
  return getToken(KotlinParser::ABSTRACT, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::ANNOTATION() {
  return getToken(KotlinParser::ANNOTATION, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::BY() {
  return getToken(KotlinParser::BY, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::CATCH() {
  return getToken(KotlinParser::CATCH, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::COMPANION() {
  return getToken(KotlinParser::COMPANION, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::CONSTRUCTOR() {
  return getToken(KotlinParser::CONSTRUCTOR, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::CROSSINLINE() {
  return getToken(KotlinParser::CROSSINLINE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::DATA() {
  return getToken(KotlinParser::DATA, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::DYNAMIC() {
  return getToken(KotlinParser::DYNAMIC, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::ENUM() {
  return getToken(KotlinParser::ENUM, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::EXTERNAL() {
  return getToken(KotlinParser::EXTERNAL, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::FINAL() {
  return getToken(KotlinParser::FINAL, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::FINALLY() {
  return getToken(KotlinParser::FINALLY, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::GET() {
  return getToken(KotlinParser::GET, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::IMPORT() {
  return getToken(KotlinParser::IMPORT, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::INFIX() {
  return getToken(KotlinParser::INFIX, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::INIT() {
  return getToken(KotlinParser::INIT, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::INLINE() {
  return getToken(KotlinParser::INLINE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::INNER() {
  return getToken(KotlinParser::INNER, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::INTERNAL() {
  return getToken(KotlinParser::INTERNAL, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::LATEINIT() {
  return getToken(KotlinParser::LATEINIT, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::NOINLINE() {
  return getToken(KotlinParser::NOINLINE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::OPEN() {
  return getToken(KotlinParser::OPEN, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::OPERATOR() {
  return getToken(KotlinParser::OPERATOR, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::OUT() {
  return getToken(KotlinParser::OUT, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::OVERRIDE() {
  return getToken(KotlinParser::OVERRIDE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::PRIVATE() {
  return getToken(KotlinParser::PRIVATE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::PROTECTED() {
  return getToken(KotlinParser::PROTECTED, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::PUBLIC() {
  return getToken(KotlinParser::PUBLIC, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::REIFIED() {
  return getToken(KotlinParser::REIFIED, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::SEALED() {
  return getToken(KotlinParser::SEALED, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::TAILREC() {
  return getToken(KotlinParser::TAILREC, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::SET() {
  return getToken(KotlinParser::SET, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::VARARG() {
  return getToken(KotlinParser::VARARG, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::WHERE() {
  return getToken(KotlinParser::WHERE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::FIELD() {
  return getToken(KotlinParser::FIELD, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::PROPERTY() {
  return getToken(KotlinParser::PROPERTY, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::RECEIVER() {
  return getToken(KotlinParser::RECEIVER, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::PARAM() {
  return getToken(KotlinParser::PARAM, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::SETPARAM() {
  return getToken(KotlinParser::SETPARAM, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::DELEGATE() {
  return getToken(KotlinParser::DELEGATE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::FILE() {
  return getToken(KotlinParser::FILE, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::EXPECT() {
  return getToken(KotlinParser::EXPECT, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::ACTUAL() {
  return getToken(KotlinParser::ACTUAL, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::CONST() {
  return getToken(KotlinParser::CONST, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::SUSPEND() {
  return getToken(KotlinParser::SUSPEND, 0);
}

tree::TerminalNode* KotlinParser::SimpleIdentifierContext::VALUE() {
  return getToken(KotlinParser::VALUE, 0);
}


size_t KotlinParser::SimpleIdentifierContext::getRuleIndex() const {
  return KotlinParser::RuleSimpleIdentifier;
}

void KotlinParser::SimpleIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleIdentifier(this);
}

void KotlinParser::SimpleIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleIdentifier(this);
}

KotlinParser::SimpleIdentifierContext* KotlinParser::simpleIdentifier() {
  SimpleIdentifierContext *_localctx = _tracker.createInstance<SimpleIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 342, KotlinParser::RuleSimpleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(3437);
    _la = _input->LA(1);
    if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (KotlinParser::FILE - 61))
      | (1ULL << (KotlinParser::FIELD - 61))
      | (1ULL << (KotlinParser::PROPERTY - 61))
      | (1ULL << (KotlinParser::GET - 61))
      | (1ULL << (KotlinParser::SET - 61))
      | (1ULL << (KotlinParser::RECEIVER - 61))
      | (1ULL << (KotlinParser::PARAM - 61))
      | (1ULL << (KotlinParser::SETPARAM - 61))
      | (1ULL << (KotlinParser::DELEGATE - 61))
      | (1ULL << (KotlinParser::IMPORT - 61))
      | (1ULL << (KotlinParser::CONSTRUCTOR - 61))
      | (1ULL << (KotlinParser::BY - 61))
      | (1ULL << (KotlinParser::COMPANION - 61))
      | (1ULL << (KotlinParser::INIT - 61))
      | (1ULL << (KotlinParser::WHERE - 61))
      | (1ULL << (KotlinParser::CATCH - 61))
      | (1ULL << (KotlinParser::FINALLY - 61))
      | (1ULL << (KotlinParser::OUT - 61))
      | (1ULL << (KotlinParser::DYNAMIC - 61))
      | (1ULL << (KotlinParser::PUBLIC - 61))
      | (1ULL << (KotlinParser::PRIVATE - 61))
      | (1ULL << (KotlinParser::PROTECTED - 61))
      | (1ULL << (KotlinParser::INTERNAL - 61))
      | (1ULL << (KotlinParser::ENUM - 61))
      | (1ULL << (KotlinParser::SEALED - 61))
      | (1ULL << (KotlinParser::ANNOTATION - 61))
      | (1ULL << (KotlinParser::DATA - 61))
      | (1ULL << (KotlinParser::INNER - 61))
      | (1ULL << (KotlinParser::VALUE - 61))
      | (1ULL << (KotlinParser::TAILREC - 61))
      | (1ULL << (KotlinParser::OPERATOR - 61))
      | (1ULL << (KotlinParser::INLINE - 61))
      | (1ULL << (KotlinParser::INFIX - 61))
      | (1ULL << (KotlinParser::EXTERNAL - 61))
      | (1ULL << (KotlinParser::SUSPEND - 61))
      | (1ULL << (KotlinParser::OVERRIDE - 61))
      | (1ULL << (KotlinParser::ABSTRACT - 61)))) != 0) || ((((_la - 125) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 125)) & ((1ULL << (KotlinParser::FINAL - 125))
      | (1ULL << (KotlinParser::OPEN - 125))
      | (1ULL << (KotlinParser::CONST - 125))
      | (1ULL << (KotlinParser::LATEINIT - 125))
      | (1ULL << (KotlinParser::VARARG - 125))
      | (1ULL << (KotlinParser::NOINLINE - 125))
      | (1ULL << (KotlinParser::CROSSINLINE - 125))
      | (1ULL << (KotlinParser::REIFIED - 125))
      | (1ULL << (KotlinParser::EXPECT - 125))
      | (1ULL << (KotlinParser::ACTUAL - 125))
      | (1ULL << (KotlinParser::Identifier - 125)))) != 0))) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

KotlinParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KotlinParser::SimpleIdentifierContext *> KotlinParser::IdentifierContext::simpleIdentifier() {
  return getRuleContexts<KotlinParser::SimpleIdentifierContext>();
}

KotlinParser::SimpleIdentifierContext* KotlinParser::IdentifierContext::simpleIdentifier(size_t i) {
  return getRuleContext<KotlinParser::SimpleIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> KotlinParser::IdentifierContext::DOT() {
  return getTokens(KotlinParser::DOT);
}

tree::TerminalNode* KotlinParser::IdentifierContext::DOT(size_t i) {
  return getToken(KotlinParser::DOT, i);
}

std::vector<tree::TerminalNode *> KotlinParser::IdentifierContext::NL() {
  return getTokens(KotlinParser::NL);
}

tree::TerminalNode* KotlinParser::IdentifierContext::NL(size_t i) {
  return getToken(KotlinParser::NL, i);
}


size_t KotlinParser::IdentifierContext::getRuleIndex() const {
  return KotlinParser::RuleIdentifier;
}

void KotlinParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void KotlinParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KotlinParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

KotlinParser::IdentifierContext* KotlinParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 344, KotlinParser::RuleIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(3439);
    simpleIdentifier();
    setState(3450);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 529, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(3443);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == KotlinParser::NL) {
          setState(3440);
          match(KotlinParser::NL);
          setState(3445);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(3446);
        match(KotlinParser::DOT);
        setState(3447);
        simpleIdentifier(); 
      }
      setState(3452);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 529, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> KotlinParser::_decisionToDFA;
atn::PredictionContextCache KotlinParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KotlinParser::_atn;
std::vector<uint16_t> KotlinParser::_serializedATN;

std::vector<std::string> KotlinParser::_ruleNames = {
  "kotlinFile", "script", "shebangLine", "fileAnnotation", "packageHeader", 
  "importList", "importHeader", "importAlias", "topLevelObject", "typeAlias", 
  "declaration", "classDeclaration", "primaryConstructor", "classBody", 
  "classParameters", "classParameter", "delegationSpecifiers", "delegationSpecifier", 
  "constructorInvocation", "annotatedDelegationSpecifier", "explicitDelegation", 
  "typeParameters", "typeParameter", "typeConstraints", "typeConstraint", 
  "classMemberDeclarations", "classMemberDeclaration", "anonymousInitializer", 
  "companionObject", "functionValueParameters", "functionValueParameter", 
  "functionDeclaration", "functionBody", "variableDeclaration", "multiVariableDeclaration", 
  "propertyDeclaration", "propertyDelegate", "getter", "setter", "parametersWithOptionalType", 
  "functionValueParameterWithOptionalType", "parameterWithOptionalType", 
  "parameter", "objectDeclaration", "secondaryConstructor", "constructorDelegationCall", 
  "enumClassBody", "enumEntries", "enumEntry", "type", "typeReference", 
  "nullableType", "quest", "userType", "simpleUserType", "typeProjection", 
  "typeProjectionModifiers", "typeProjectionModifier", "functionType", "functionTypeParameters", 
  "parenthesizedType", "receiverType", "parenthesizedUserType", "statements", 
  "statement", "label", "controlStructureBody", "block", "loopStatement", 
  "forStatement", "whileStatement", "doWhileStatement", "assignment", "semi", 
  "semis", "expression", "disjunction", "conjunction", "equality", "comparison", 
  "genericCallLikeComparison", "infixOperation", "elvisExpression", "elvis", 
  "infixFunctionCall", "rangeExpression", "additiveExpression", "multiplicativeExpression", 
  "asExpression", "prefixUnaryExpression", "unaryPrefix", "postfixUnaryExpression", 
  "postfixUnarySuffix", "directlyAssignableExpression", "parenthesizedDirectlyAssignableExpression", 
  "assignableExpression", "parenthesizedAssignableExpression", "assignableSuffix", 
  "indexingSuffix", "navigationSuffix", "callSuffix", "annotatedLambda", 
  "typeArguments", "valueArguments", "valueArgument", "primaryExpression", 
  "parenthesizedExpression", "collectionLiteral", "literalConstant", "stringLiteral", 
  "lineStringLiteral", "multiLineStringLiteral", "lineStringContent", "lineStringExpression", 
  "multiLineStringContent", "multiLineStringExpression", "lambdaLiteral", 
  "lambdaParameters", "lambdaParameter", "anonymousFunction", "functionLiteral", 
  "objectLiteral", "thisExpression", "superExpression", "ifExpression", 
  "whenSubject", "whenExpression", "whenEntry", "whenCondition", "rangeTest", 
  "typeTest", "tryExpression", "catchBlock", "finallyBlock", "jumpExpression", 
  "callableReference", "assignmentAndOperator", "equalityOperator", "comparisonOperator", 
  "inOperator", "isOperator", "additiveOperator", "multiplicativeOperator", 
  "asOperator", "prefixUnaryOperator", "postfixUnaryOperator", "excl", "memberAccessOperator", 
  "safeNav", "modifiers", "parameterModifiers", "modifier", "typeModifiers", 
  "typeModifier", "classModifier", "memberModifier", "visibilityModifier", 
  "varianceModifier", "typeParameterModifiers", "typeParameterModifier", 
  "functionModifier", "propertyModifier", "inheritanceModifier", "parameterModifier", 
  "reificationModifier", "platformModifier", "annotation", "singleAnnotation", 
  "multiAnnotation", "annotationUseSiteTarget", "unescapedAnnotation", "simpleIdentifier", 
  "identifier"
};

std::vector<std::string> KotlinParser::_literalNames = {
  "", "", "", "", "", "", "'...'", "'.'", "','", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'*'", "'%'", "'/'", "'+'", "'-'", "'++'", "'--'", "'&&'", 
  "'||'", "", "'!'", "':'", "';'", "'='", "'+='", "'-='", "'*='", "'/='", 
  "'%='", "'->'", "'=>'", "'..'", "'::'", "';;'", "'#'", "'@'", "", "", 
  "", "", "'\u003F'", "'<'", "'>'", "'<='", "'>='", "'!='", "'!=='", "'as\u003F'", 
  "'=='", "'==='", "'''", "", "", "", "", "", "'file'", "'field'", "'property'", 
  "'get'", "'set'", "'receiver'", "'param'", "'setparam'", "'delegate'", 
  "'package'", "'import'", "'class'", "'interface'", "'fun'", "'object'", 
  "'val'", "'var'", "'typealias'", "'constructor'", "'by'", "'companion'", 
  "'init'", "'this'", "'super'", "'typeof'", "'where'", "'if'", "'else'", 
  "'when'", "'try'", "'catch'", "'finally'", "'for'", "'do'", "'while'", 
  "'throw'", "'return'", "'continue'", "'break'", "'as'", "'is'", "'in'", 
  "", "", "'out'", "'dynamic'", "'public'", "'private'", "'protected'", 
  "'internal'", "'enum'", "'sealed'", "'annotation'", "'data'", "'inner'", 
  "'value'", "'tailrec'", "'operator'", "'inline'", "'infix'", "'external'", 
  "'suspend'", "'override'", "'abstract'", "'final'", "'open'", "'const'", 
  "'lateinit'", "'vararg'", "'noinline'", "'crossinline'", "'reified'", 
  "'expect'", "'actual'", "", "", "", "", "", "", "", "", "", "'null'", 
  "", "", "", "", "", "'\"\"\"'"
};

std::vector<std::string> KotlinParser::_symbolicNames = {
  "", "ShebangLine", "DelimitedComment", "LineComment", "WS", "NL", "RESERVED", 
  "DOT", "COMMA", "LPAREN", "RPAREN", "LSQUARE", "RSQUARE", "LCURL", "RCURL", 
  "MULT", "MOD", "DIV", "ADD", "SUB", "INCR", "DECR", "CONJ", "DISJ", "EXCL_WS", 
  "EXCL_NO_WS", "COLON", "SEMICOLON", "ASSIGNMENT", "ADD_ASSIGNMENT", "SUB_ASSIGNMENT", 
  "MULT_ASSIGNMENT", "DIV_ASSIGNMENT", "MOD_ASSIGNMENT", "ARROW", "DOUBLE_ARROW", 
  "RANGE", "COLONCOLON", "DOUBLE_SEMICOLON", "HASH", "AT_NO_WS", "AT_POST_WS", 
  "AT_PRE_WS", "AT_BOTH_WS", "QUEST_WS", "QUEST_NO_WS", "LANGLE", "RANGLE", 
  "LE", "GE", "EXCL_EQ", "EXCL_EQEQ", "AS_SAFE", "EQEQ", "EQEQEQ", "SINGLE_QUOTE", 
  "RETURN_AT", "CONTINUE_AT", "BREAK_AT", "THIS_AT", "SUPER_AT", "FILE", 
  "FIELD", "PROPERTY", "GET", "SET", "RECEIVER", "PARAM", "SETPARAM", "DELEGATE", 
  "PACKAGE", "IMPORT", "CLASS", "INTERFACE", "FUN", "OBJECT", "VAL", "VAR", 
  "TYPE_ALIAS", "CONSTRUCTOR", "BY", "COMPANION", "INIT", "THIS", "SUPER", 
  "TYPEOF", "WHERE", "IF", "ELSE", "WHEN", "TRY", "CATCH", "FINALLY", "FOR", 
  "DO", "WHILE", "THROW", "RETURN", "CONTINUE", "BREAK", "AS", "IS", "IN", 
  "NOT_IS", "NOT_IN", "OUT", "DYNAMIC", "PUBLIC", "PRIVATE", "PROTECTED", 
  "INTERNAL", "ENUM", "SEALED", "ANNOTATION", "DATA", "INNER", "VALUE", 
  "TAILREC", "OPERATOR", "INLINE", "INFIX", "EXTERNAL", "SUSPEND", "OVERRIDE", 
  "ABSTRACT", "FINAL", "OPEN", "CONST", "LATEINIT", "VARARG", "NOINLINE", 
  "CROSSINLINE", "REIFIED", "EXPECT", "ACTUAL", "RealLiteral", "FloatLiteral", 
  "DoubleLiteral", "IntegerLiteral", "HexLiteral", "BinLiteral", "UnsignedLiteral", 
  "LongLiteral", "BooleanLiteral", "NullLiteral", "CharacterLiteral", "Identifier", 
  "IdentifierOrSoftKey", "FieldIdentifier", "QUOTE_OPEN", "TRIPLE_QUOTE_OPEN", 
  "UNICODE_CLASS_LL", "UNICODE_CLASS_LM", "UNICODE_CLASS_LO", "UNICODE_CLASS_LT", 
  "UNICODE_CLASS_LU", "UNICODE_CLASS_ND", "UNICODE_CLASS_NL", "QUOTE_CLOSE", 
  "LineStrRef", "LineStrText", "LineStrEscapedChar", "LineStrExprStart", 
  "TRIPLE_QUOTE_CLOSE", "MultiLineStringQuote", "MultiLineStrRef", "MultiLineStrText", 
  "MultiLineStrExprStart", "Inside_Comment", "Inside_WS", "Inside_NL", "ErrorCharacter"
};

dfa::Vocabulary KotlinParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KotlinParser::_tokenNames;

KotlinParser::Initializer::Initializer() {
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

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xad, 0xd80, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x3, 0x2, 0x5, 0x2, 0x15e, 0xa, 
       0x2, 0x3, 0x2, 0x7, 0x2, 0x161, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x164, 
       0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x167, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0x16a, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x16f, 0xa, 
       0x2, 0xc, 0x2, 0xe, 0x2, 0x172, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x5, 0x3, 0x177, 0xa, 0x3, 0x3, 0x3, 0x7, 0x3, 0x17a, 0xa, 0x3, 
       0xc, 0x3, 0xe, 0x3, 0x17d, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x180, 0xa, 
       0x3, 0xc, 0x3, 0xe, 0x3, 0x183, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x18a, 0xa, 0x3, 0xc, 0x3, 0xe, 
       0x3, 0x18d, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x6, 
       0x4, 0x193, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x194, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x7, 0x5, 0x19a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x19d, 0xb, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x1a1, 0xa, 0x5, 0xc, 0x5, 0xe, 
       0x5, 0x1a4, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x1a8, 0xa, 0x5, 
       0xd, 0x5, 0xe, 0x5, 0x1a9, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
       0x1af, 0xa, 0x5, 0x3, 0x5, 0x7, 0x5, 0x1b2, 0xa, 0x5, 0xc, 0x5, 0xe, 
       0x5, 0x1b5, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1ba, 
       0xa, 0x6, 0x5, 0x6, 0x1bc, 0xa, 0x6, 0x3, 0x7, 0x7, 0x7, 0x1bf, 0xa, 
       0x7, 0xc, 0x7, 0xe, 0x7, 0x1c2, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1c9, 0xa, 0x8, 0x3, 0x8, 0x5, 
       0x8, 0x1cc, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x5, 0xa, 0x1d3, 0xa, 0xa, 0x3, 0xb, 0x5, 0xb, 0x1d6, 0xa, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1da, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
       0x1dd, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1e1, 0xa, 0xb, 0xc, 
       0xb, 0xe, 0xb, 0x1e4, 0xb, 0xb, 0x3, 0xb, 0x5, 0xb, 0x1e7, 0xa, 0xb, 
       0x3, 0xb, 0x7, 0xb, 0x1ea, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1ed, 0xb, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1f1, 0xa, 0xb, 0xc, 0xb, 0xe, 
       0xb, 0x1f4, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1fd, 0xa, 0xc, 0x3, 0xd, 0x5, 
       0xd, 0x200, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x205, 
       0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x208, 0xb, 0xd, 0x5, 0xd, 0x20a, 0xa, 
       0xd, 0x3, 0xd, 0x5, 0xd, 0x20d, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x210, 
       0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x213, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x7, 0xd, 0x217, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x21a, 0xb, 0xd, 0x3, 
       0xd, 0x5, 0xd, 0x21d, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x220, 0xa, 0xd, 
       0xc, 0xd, 0xe, 0xd, 0x223, 0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 0x226, 0xa, 
       0xd, 0x3, 0xd, 0x7, 0xd, 0x229, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x22c, 
       0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x230, 0xa, 0xd, 0xc, 0xd, 
       0xe, 0xd, 0x233, 0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 0x236, 0xa, 0xd, 0x3, 
       0xd, 0x7, 0xd, 0x239, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x23c, 0xb, 0xd, 
       0x3, 0xd, 0x5, 0xd, 0x23f, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x242, 0xa, 
       0xd, 0xc, 0xd, 0xe, 0xd, 0x245, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 
       0xd, 0x249, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x24c, 0xb, 0xd, 0x3, 0xd, 
       0x5, 0xd, 0x24f, 0xa, 0xd, 0x3, 0xe, 0x5, 0xe, 0x252, 0xa, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x7, 0xe, 0x256, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x259, 
       0xb, 0xe, 0x5, 0xe, 0x25b, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
       0x3, 0xf, 0x7, 0xf, 0x261, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x264, 0xb, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x268, 0xa, 0xf, 0xc, 0xf, 0xe, 
       0xf, 0x26b, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x7, 
       0x10, 0x271, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x274, 0xb, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x7, 0x10, 0x278, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
       0x27b, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x27f, 0xa, 0x10, 
       0xc, 0x10, 0xe, 0x10, 0x282, 0xb, 0x10, 0x3, 0x10, 0x7, 0x10, 0x285, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x288, 0xb, 0x10, 0x3, 0x10, 0x7, 
       0x10, 0x28b, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x28e, 0xb, 0x10, 0x3, 
       0x10, 0x5, 0x10, 0x291, 0xa, 0x10, 0x5, 0x10, 0x293, 0xa, 0x10, 0x3, 
       0x10, 0x7, 0x10, 0x296, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x299, 0xb, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x5, 0x11, 0x29e, 0xa, 0x11, 
       0x3, 0x11, 0x5, 0x11, 0x2a1, 0xa, 0x11, 0x3, 0x11, 0x7, 0x11, 0x2a4, 
       0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x2a7, 0xb, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x7, 0x11, 0x2ac, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
       0x2af, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x2b3, 0xa, 0x11, 
       0xc, 0x11, 0xe, 0x11, 0x2b6, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 
       0x11, 0x2ba, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x2bd, 0xb, 0x11, 0x3, 
       0x11, 0x5, 0x11, 0x2c0, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
       0x2c4, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x2c7, 0xb, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x7, 0x12, 0x2cb, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x2ce, 
       0xb, 0x12, 0x3, 0x12, 0x7, 0x12, 0x2d1, 0xa, 0x12, 0xc, 0x12, 0xe, 
       0x12, 0x2d4, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x5, 0x13, 0x2da, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x15, 0x7, 0x15, 0x2e0, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2e3, 0xb, 
       0x15, 0x3, 0x15, 0x7, 0x15, 0x2e6, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
       0x2e9, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 
       0x16, 0x2ef, 0xa, 0x16, 0x3, 0x16, 0x7, 0x16, 0x2f2, 0xa, 0x16, 0xc, 
       0x16, 0xe, 0x16, 0x2f5, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
       0x2f9, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2fc, 0xb, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x302, 0xa, 0x17, 0xc, 
       0x17, 0xe, 0x17, 0x305, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
       0x309, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x30c, 0xb, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x7, 0x17, 0x310, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x313, 
       0xb, 0x17, 0x3, 0x17, 0x7, 0x17, 0x316, 0xa, 0x17, 0xc, 0x17, 0xe, 
       0x17, 0x319, 0xb, 0x17, 0x3, 0x17, 0x7, 0x17, 0x31c, 0xa, 0x17, 0xc, 
       0x17, 0xe, 0x17, 0x31f, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 0x322, 0xa, 
       0x17, 0x3, 0x17, 0x7, 0x17, 0x325, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
       0x328, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 0x32d, 
       0xa, 0x18, 0x3, 0x18, 0x7, 0x18, 0x330, 0xa, 0x18, 0xc, 0x18, 0xe, 
       0x18, 0x333, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x337, 0xa, 
       0x18, 0xc, 0x18, 0xe, 0x18, 0x33a, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
       0x7, 0x18, 0x33e, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x341, 0xb, 0x18, 
       0x3, 0x18, 0x5, 0x18, 0x344, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x7, 
       0x19, 0x348, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x34b, 0xb, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x7, 0x19, 0x34f, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
       0x352, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x356, 0xa, 0x19, 
       0xc, 0x19, 0xe, 0x19, 0x359, 0xb, 0x19, 0x3, 0x19, 0x7, 0x19, 0x35c, 
       0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x35f, 0xb, 0x19, 0x3, 0x1a, 0x7, 
       0x1a, 0x362, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x365, 0xb, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x369, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 
       0x36c, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x370, 0xa, 0x1a, 
       0xc, 0x1a, 0xe, 0x1a, 0x373, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x379, 0xa, 0x1b, 0x7, 0x1b, 0x37b, 0xa, 
       0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x37e, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x384, 0xa, 0x1c, 0x3, 0x1d, 0x3, 
       0x1d, 0x7, 0x1d, 0x388, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x38b, 0xb, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x390, 0xa, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x394, 0xa, 0x1e, 0xc, 0x1e, 0xe, 
       0x1e, 0x397, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x39b, 0xa, 
       0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x39e, 0xb, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
       0x3a1, 0xa, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x3a4, 0xa, 0x1e, 0xc, 0x1e, 
       0xe, 0x1e, 0x3a7, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x3ab, 
       0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x3ae, 0xb, 0x1e, 0x3, 0x1e, 0x5, 
       0x1e, 0x3b1, 0xa, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x3b4, 0xa, 0x1e, 0xc, 
       0x1e, 0xe, 0x1e, 0x3b7, 0xb, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x3ba, 0xa, 
       0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x3be, 0xa, 0x1f, 0xc, 0x1f, 
       0xe, 0x1f, 0x3c1, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x3c5, 
       0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x3c8, 0xb, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x7, 0x1f, 0x3cc, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x3cf, 0xb, 
       0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x3d2, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
       0x3d5, 0xb, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x3d8, 0xa, 0x1f, 0xc, 0x1f, 
       0xe, 0x1f, 0x3db, 0xb, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x3de, 0xa, 0x1f, 
       0x5, 0x1f, 0x3e0, 0xa, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x3e3, 0xa, 0x1f, 
       0xc, 0x1f, 0xe, 0x1f, 0x3e6, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x20, 0x5, 0x20, 0x3eb, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 
       0x3ef, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x3f2, 0xb, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x7, 0x20, 0x3f6, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x3f9, 
       0xb, 0x20, 0x3, 0x20, 0x5, 0x20, 0x3fc, 0xa, 0x20, 0x3, 0x21, 0x5, 
       0x21, 0x3ff, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x403, 0xa, 
       0x21, 0xc, 0x21, 0xe, 0x21, 0x406, 0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 
       0x409, 0xa, 0x21, 0x3, 0x21, 0x7, 0x21, 0x40c, 0xa, 0x21, 0xc, 0x21, 
       0xe, 0x21, 0x40f, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x413, 
       0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x416, 0xb, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x5, 0x21, 0x41a, 0xa, 0x21, 0x3, 0x21, 0x7, 0x21, 0x41d, 0xa, 
       0x21, 0xc, 0x21, 0xe, 0x21, 0x420, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x7, 0x21, 0x424, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x427, 0xb, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x42b, 0xa, 0x21, 0xc, 0x21, 0xe, 
       0x21, 0x42e, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x432, 0xa, 
       0x21, 0xc, 0x21, 0xe, 0x21, 0x435, 0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 
       0x438, 0xa, 0x21, 0x3, 0x21, 0x7, 0x21, 0x43b, 0xa, 0x21, 0xc, 0x21, 
       0xe, 0x21, 0x43e, 0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 0x441, 0xa, 0x21, 
       0x3, 0x21, 0x7, 0x21, 0x444, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x447, 
       0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 0x44a, 0xa, 0x21, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x7, 0x22, 0x44f, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 
       0x452, 0xb, 0x22, 0x3, 0x22, 0x5, 0x22, 0x455, 0xa, 0x22, 0x3, 0x23, 
       0x7, 0x23, 0x458, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x45b, 0xb, 0x23, 
       0x3, 0x23, 0x7, 0x23, 0x45e, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x461, 
       0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x465, 0xa, 0x23, 0xc, 
       0x23, 0xe, 0x23, 0x468, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 
       0x46c, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x46f, 0xb, 0x23, 0x3, 0x23, 
       0x5, 0x23, 0x472, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x476, 
       0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x479, 0xb, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x7, 0x24, 0x47d, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x480, 0xb, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x484, 0xa, 0x24, 0xc, 0x24, 
       0xe, 0x24, 0x487, 0xb, 0x24, 0x3, 0x24, 0x7, 0x24, 0x48a, 0xa, 0x24, 
       0xc, 0x24, 0xe, 0x24, 0x48d, 0xb, 0x24, 0x3, 0x24, 0x7, 0x24, 0x490, 
       0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x493, 0xb, 0x24, 0x3, 0x24, 0x5, 
       0x24, 0x496, 0xa, 0x24, 0x3, 0x24, 0x7, 0x24, 0x499, 0xa, 0x24, 0xc, 
       0x24, 0xe, 0x24, 0x49c, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
       0x5, 0x25, 0x4a1, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4a5, 
       0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x4a8, 0xb, 0x25, 0x3, 0x25, 0x5, 
       0x25, 0x4ab, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4ae, 0xa, 0x25, 0xc, 
       0x25, 0xe, 0x25, 0x4b1, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 
       0x4b5, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x4b8, 0xb, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x5, 0x25, 0x4bc, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4bf, 
       0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x4c2, 0xb, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x5, 0x25, 0x4c6, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4c9, 0xa, 
       0x25, 0xc, 0x25, 0xe, 0x25, 0x4cc, 0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 
       0x4cf, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4d2, 0xa, 0x25, 0xc, 0x25, 
       0xe, 0x25, 0x4d5, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4d9, 
       0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x4dc, 0xb, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x5, 0x25, 0x4e0, 0xa, 0x25, 0x5, 0x25, 0x4e2, 0xa, 0x25, 0x3, 
       0x25, 0x6, 0x25, 0x4e5, 0xa, 0x25, 0xd, 0x25, 0xe, 0x25, 0x4e6, 0x3, 
       0x25, 0x5, 0x25, 0x4ea, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4ed, 0xa, 
       0x25, 0xc, 0x25, 0xe, 0x25, 0x4f0, 0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 
       0x4f3, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x4f6, 0xa, 0x25, 0xc, 0x25, 
       0xe, 0x25, 0x4f9, 0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x4fc, 0xa, 0x25, 
       0x3, 0x25, 0x5, 0x25, 0x4ff, 0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x502, 
       0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x505, 0xa, 0x25, 0xc, 0x25, 0xe, 
       0x25, 0x508, 0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x50b, 0xa, 0x25, 0x3, 
       0x25, 0x5, 0x25, 0x50e, 0xa, 0x25, 0x5, 0x25, 0x510, 0xa, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x7, 0x26, 0x514, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 
       0x517, 0xb, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 0x27, 0x51c, 
       0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x520, 0xa, 0x27, 0xc, 
       0x27, 0xe, 0x27, 0x523, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 
       0x527, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x52a, 0xb, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x7, 0x27, 0x52e, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x531, 
       0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x535, 0xa, 0x27, 0xc, 
       0x27, 0xe, 0x27, 0x538, 0xb, 0x27, 0x3, 0x27, 0x5, 0x27, 0x53b, 0xa, 
       0x27, 0x3, 0x27, 0x7, 0x27, 0x53e, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
       0x541, 0xb, 0x27, 0x3, 0x27, 0x5, 0x27, 0x544, 0xa, 0x27, 0x3, 0x28, 
       0x5, 0x28, 0x547, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x54b, 
       0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x54e, 0xb, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x7, 0x28, 0x552, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x555, 0xb, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x559, 0xa, 0x28, 0xc, 0x28, 
       0xe, 0x28, 0x55c, 0xb, 0x28, 0x3, 0x28, 0x5, 0x28, 0x55f, 0xa, 0x28, 
       0x3, 0x28, 0x7, 0x28, 0x562, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x565, 
       0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x569, 0xa, 0x28, 0xc, 
       0x28, 0xe, 0x28, 0x56c, 0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 
       0x570, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x573, 0xb, 0x28, 0x3, 0x28, 
       0x5, 0x28, 0x576, 0xa, 0x28, 0x3, 0x28, 0x7, 0x28, 0x579, 0xa, 0x28, 
       0xc, 0x28, 0xe, 0x28, 0x57c, 0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 
       0x28, 0x580, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x584, 0xa, 
       0x29, 0xc, 0x29, 0xe, 0x29, 0x587, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x7, 0x29, 0x58b, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x58e, 0xb, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x592, 0xa, 0x29, 0xc, 0x29, 0xe, 
       0x29, 0x595, 0xb, 0x29, 0x3, 0x29, 0x7, 0x29, 0x598, 0xa, 0x29, 0xc, 
       0x29, 0xe, 0x29, 0x59b, 0xb, 0x29, 0x3, 0x29, 0x7, 0x29, 0x59e, 0xa, 
       0x29, 0xc, 0x29, 0xe, 0x29, 0x5a1, 0xb, 0x29, 0x3, 0x29, 0x5, 0x29, 
       0x5a4, 0xa, 0x29, 0x5, 0x29, 0x5a6, 0xa, 0x29, 0x3, 0x29, 0x7, 0x29, 
       0x5a9, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x5ac, 0xb, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x5b1, 0xa, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x7, 0x2a, 0x5b5, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x5b8, 0xb, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x5bc, 0xa, 0x2a, 0xc, 0x2a, 
       0xe, 0x2a, 0x5bf, 0xb, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x5c2, 0xa, 0x2a, 
       0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x5c6, 0xa, 0x2b, 0xc, 0x2b, 0xe, 
       0x2b, 0x5c9, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x5cd, 0xa, 
       0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x5d0, 0xb, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 
       0x5d3, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x5d7, 0xa, 0x2c, 
       0xc, 0x2c, 0xe, 0x2c, 0x5da, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 
       0x2c, 0x5de, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x5e1, 0xb, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x5, 0x2d, 0x5e6, 0xa, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x7, 0x2d, 0x5ea, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x5ed, 
       0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x5f1, 0xa, 0x2d, 0xc, 
       0x2d, 0xe, 0x2d, 0x5f4, 0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 
       0x5f8, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x5fb, 0xb, 0x2d, 0x3, 0x2d, 
       0x5, 0x2d, 0x5fe, 0xa, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x601, 0xa, 0x2d, 
       0xc, 0x2d, 0xe, 0x2d, 0x604, 0xb, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x607, 
       0xa, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x60a, 0xa, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x7, 0x2e, 0x60e, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x611, 0xb, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x615, 0xa, 0x2e, 0xc, 0x2e, 
       0xe, 0x2e, 0x618, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x61c, 
       0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x61f, 0xb, 0x2e, 0x3, 0x2e, 0x5, 
       0x2e, 0x622, 0xa, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x625, 0xa, 0x2e, 0xc, 
       0x2e, 0xe, 0x2e, 0x628, 0xb, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x62b, 0xa, 
       0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x62f, 0xa, 0x2f, 0xc, 0x2f, 
       0xe, 0x2f, 0x632, 0xb, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 
       0x30, 0x7, 0x30, 0x638, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x63b, 0xb, 
       0x30, 0x3, 0x30, 0x5, 0x30, 0x63e, 0xa, 0x30, 0x3, 0x30, 0x7, 0x30, 
       0x641, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x644, 0xb, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x7, 0x30, 0x648, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x64b, 
       0xb, 0x30, 0x3, 0x30, 0x5, 0x30, 0x64e, 0xa, 0x30, 0x3, 0x30, 0x7, 
       0x30, 0x651, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x654, 0xb, 0x30, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x65a, 0xa, 0x31, 
       0xc, 0x31, 0xe, 0x31, 0x65d, 0xb, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 
       0x31, 0x661, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x664, 0xb, 0x31, 0x3, 
       0x31, 0x7, 0x31, 0x667, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x66a, 0xb, 
       0x31, 0x3, 0x31, 0x7, 0x31, 0x66d, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 
       0x670, 0xb, 0x31, 0x3, 0x31, 0x5, 0x31, 0x673, 0xa, 0x31, 0x3, 0x32, 
       0x3, 0x32, 0x7, 0x32, 0x677, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x67a, 
       0xb, 0x32, 0x5, 0x32, 0x67c, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 
       0x32, 0x680, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x683, 0xb, 0x32, 0x3, 
       0x32, 0x5, 0x32, 0x686, 0xa, 0x32, 0x3, 0x32, 0x7, 0x32, 0x689, 0xa, 
       0x32, 0xc, 0x32, 0xe, 0x32, 0x68c, 0xb, 0x32, 0x3, 0x32, 0x5, 0x32, 
       0x68f, 0xa, 0x32, 0x3, 0x33, 0x5, 0x33, 0x692, 0xa, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x698, 0xa, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x5, 0x34, 0x69c, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x5, 0x35, 0x6a0, 0xa, 0x35, 0x3, 0x35, 0x7, 0x35, 0x6a3, 0xa, 0x35, 
       0xc, 0x35, 0xe, 0x35, 0x6a6, 0xb, 0x35, 0x3, 0x35, 0x6, 0x35, 0x6a9, 
       0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x6aa, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x37, 0x3, 0x37, 0x7, 0x37, 0x6b1, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 
       0x6b4, 0xb, 0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 0x6b8, 0xa, 0x37, 
       0xc, 0x37, 0xe, 0x37, 0x6bb, 0xb, 0x37, 0x3, 0x37, 0x7, 0x37, 0x6be, 
       0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x6c1, 0xb, 0x37, 0x3, 0x38, 0x3, 
       0x38, 0x7, 0x38, 0x6c5, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x6c8, 0xb, 
       0x38, 0x3, 0x38, 0x5, 0x38, 0x6cb, 0xa, 0x38, 0x3, 0x39, 0x5, 0x39, 
       0x6ce, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x6d2, 0xa, 0x39, 
       0x3, 0x3a, 0x6, 0x3a, 0x6d5, 0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x6d6, 
       0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x6db, 0xa, 0x3b, 0xc, 0x3b, 0xe, 
       0x3b, 0x6de, 0xb, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x6e1, 0xa, 0x3b, 0x3, 
       0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x6e5, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 
       0x6e8, 0xb, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x6ec, 0xa, 0x3c, 
       0xc, 0x3c, 0xe, 0x3c, 0x6ef, 0xb, 0x3c, 0x5, 0x3c, 0x6f1, 0xa, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x6f5, 0xa, 0x3c, 0xc, 0x3c, 0xe, 
       0x3c, 0x6f8, 0xb, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x6fc, 0xa, 
       0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x6ff, 0xb, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x705, 0xa, 0x3d, 0xc, 0x3d, 0xe, 
       0x3d, 0x708, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x70c, 0xa, 
       0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x70f, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 
       0x712, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x716, 0xa, 0x3d, 
       0xc, 0x3d, 0xe, 0x3d, 0x719, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 
       0x3d, 0x71d, 0xa, 0x3d, 0x7, 0x3d, 0x71f, 0xa, 0x3d, 0xc, 0x3d, 0xe, 
       0x3d, 0x722, 0xb, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x725, 0xa, 0x3d, 0xc, 
       0x3d, 0xe, 0x3d, 0x728, 0xb, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x72b, 0xa, 
       0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x72e, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 
       0x731, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x7, 
       0x3e, 0x737, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x73a, 0xb, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x7, 0x3e, 0x73e, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 
       0x741, 0xb, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x5, 0x3f, 0x746, 
       0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x74b, 0xa, 
       0x3f, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x74f, 0xa, 0x40, 0xc, 0x40, 
       0xe, 0x40, 0x752, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x756, 
       0xa, 0x40, 0x3, 0x40, 0x7, 0x40, 0x759, 0xa, 0x40, 0xc, 0x40, 0xe, 
       0x40, 0x75c, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x764, 0xa, 0x41, 0xc, 0x41, 0xe, 
       0x41, 0x767, 0xb, 0x41, 0x5, 0x41, 0x769, 0xa, 0x41, 0x3, 0x41, 0x5, 
       0x41, 0x76c, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x770, 0xa, 
       0x42, 0xc, 0x42, 0xe, 0x42, 0x773, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x779, 0xa, 0x42, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x7, 0x43, 0x77e, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
       0x781, 0xb, 0x43, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x785, 0xa, 0x44, 
       0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x789, 0xa, 0x45, 0xc, 0x45, 0xe, 
       0x45, 0x78c, 0xb, 0x45, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x790, 0xa, 
       0x45, 0xc, 0x45, 0xe, 0x45, 0x793, 0xb, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x79a, 0xa, 0x46, 0x3, 
       0x47, 0x3, 0x47, 0x7, 0x47, 0x79e, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 
       0x7a1, 0xb, 0x47, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x7a5, 0xa, 0x47, 
       0xc, 0x47, 0xe, 0x47, 0x7a8, 0xb, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 
       0x47, 0x7ac, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x7, 0x47, 0x7b2, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 0x7b5, 0xb, 0x47, 
       0x3, 0x47, 0x5, 0x47, 0x7b8, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x7, 
       0x48, 0x7bc, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x7bf, 0xb, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x7c5, 0xa, 0x48, 
       0xc, 0x48, 0xe, 0x48, 0x7c8, 0xb, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 
       0x48, 0x7cc, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x7d0, 0xa, 
       0x49, 0xc, 0x49, 0xe, 0x49, 0x7d3, 0xb, 0x49, 0x3, 0x49, 0x5, 0x49, 
       0x7d6, 0xa, 0x49, 0x3, 0x49, 0x7, 0x49, 0x7d9, 0xa, 0x49, 0xc, 0x49, 
       0xe, 0x49, 0x7dc, 0xb, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x7e0, 
       0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x7e3, 0xb, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x7ef, 0xa, 0x4a, 0x3, 0x4a, 
       0x7, 0x4a, 0x7f2, 0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x7f5, 0xb, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x7, 0x4b, 0x7fb, 0xa, 
       0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x7fe, 0xb, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 
       0x801, 0xa, 0x4b, 0x3, 0x4c, 0x6, 0x4c, 0x804, 0xa, 0x4c, 0xd, 0x4c, 
       0xe, 0x4c, 0x805, 0x3, 0x4c, 0x5, 0x4c, 0x809, 0xa, 0x4c, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 0x80f, 0xa, 0x4e, 0xc, 
       0x4e, 0xe, 0x4e, 0x812, 0xb, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x7, 0x4e, 
       0x816, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x819, 0xb, 0x4e, 0x3, 0x4e, 
       0x7, 0x4e, 0x81c, 0xa, 0x4e, 0xc, 0x4e, 0xe, 0x4e, 0x81f, 0xb, 0x4e, 
       0x3, 0x4f, 0x3, 0x4f, 0x7, 0x4f, 0x823, 0xa, 0x4f, 0xc, 0x4f, 0xe, 
       0x4f, 0x826, 0xb, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x7, 0x4f, 0x82a, 0xa, 
       0x4f, 0xc, 0x4f, 0xe, 0x4f, 0x82d, 0xb, 0x4f, 0x3, 0x4f, 0x7, 0x4f, 
       0x830, 0xa, 0x4f, 0xc, 0x4f, 0xe, 0x4f, 0x833, 0xb, 0x4f, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x838, 0xa, 0x50, 0xc, 0x50, 0xe, 
       0x50, 0x83b, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x83f, 0xa, 
       0x50, 0xc, 0x50, 0xe, 0x50, 0x842, 0xb, 0x50, 0x3, 0x51, 0x3, 0x51, 
       0x3, 0x51, 0x7, 0x51, 0x847, 0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x84a, 
       0xb, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 0x51, 0x84e, 0xa, 0x51, 0xc, 
       0x51, 0xe, 0x51, 0x851, 0xb, 0x51, 0x3, 0x52, 0x3, 0x52, 0x7, 0x52, 
       0x855, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x858, 0xb, 0x52, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x85d, 0xa, 0x53, 0xc, 0x53, 0xe, 
       0x53, 0x860, 0xb, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x7, 0x53, 0x866, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x869, 0xb, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x86d, 0xa, 0x53, 0xc, 0x53, 0xe, 
       0x53, 0x870, 0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 0x7, 0x54, 0x874, 0xa, 
       0x54, 0xc, 0x54, 0xe, 0x54, 0x877, 0xb, 0x54, 0x3, 0x54, 0x3, 0x54, 
       0x7, 0x54, 0x87b, 0xa, 0x54, 0xc, 0x54, 0xe, 0x54, 0x87e, 0xb, 0x54, 
       0x3, 0x54, 0x3, 0x54, 0x7, 0x54, 0x882, 0xa, 0x54, 0xc, 0x54, 0xe, 
       0x54, 0x885, 0xb, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x88d, 0xa, 0x56, 0xc, 0x56, 0xe, 
       0x56, 0x890, 0xb, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x894, 0xa, 
       0x56, 0xc, 0x56, 0xe, 0x56, 0x897, 0xb, 0x56, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x7, 0x57, 0x89c, 0xa, 0x57, 0xc, 0x57, 0xe, 0x57, 0x89f, 
       0xb, 0x57, 0x3, 0x57, 0x7, 0x57, 0x8a2, 0xa, 0x57, 0xc, 0x57, 0xe, 
       0x57, 0x8a5, 0xb, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x7, 0x58, 
       0x8aa, 0xa, 0x58, 0xc, 0x58, 0xe, 0x58, 0x8ad, 0xb, 0x58, 0x3, 0x58, 
       0x3, 0x58, 0x7, 0x58, 0x8b1, 0xa, 0x58, 0xc, 0x58, 0xe, 0x58, 0x8b4, 
       0xb, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 0x8b9, 0xa, 
       0x59, 0xc, 0x59, 0xe, 0x59, 0x8bc, 0xb, 0x59, 0x3, 0x59, 0x3, 0x59, 
       0x7, 0x59, 0x8c0, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x8c3, 0xb, 0x59, 
       0x3, 0x5a, 0x3, 0x5a, 0x7, 0x5a, 0x8c7, 0xa, 0x5a, 0xc, 0x5a, 0xe, 
       0x5a, 0x8ca, 0xb, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x7, 0x5a, 0x8ce, 0xa, 
       0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x8d1, 0xb, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
       0x7, 0x5a, 0x8d5, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x8d8, 0xb, 0x5a, 
       0x3, 0x5b, 0x7, 0x5b, 0x8db, 0xa, 0x5b, 0xc, 0x5b, 0xe, 0x5b, 0x8de, 
       0xb, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x7, 0x5c, 0x8e6, 0xa, 0x5c, 0xc, 0x5c, 0xe, 0x5c, 0x8e9, 
       0xb, 0x5c, 0x5, 0x5c, 0x8eb, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x7, 
       0x5d, 0x8ef, 0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x8f2, 0xb, 0x5d, 0x3, 
       0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x8f9, 
       0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x5, 0x5f, 0x900, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x7, 0x60, 0x904, 
       0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x907, 0xb, 0x60, 0x3, 0x60, 0x3, 
       0x60, 0x7, 0x60, 0x90b, 0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x90e, 0xb, 
       0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x914, 
       0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x7, 0x62, 0x918, 0xa, 0x62, 0xc, 
       0x62, 0xe, 0x62, 0x91b, 0xb, 0x62, 0x3, 0x62, 0x3, 0x62, 0x7, 0x62, 
       0x91f, 0xa, 0x62, 0xc, 0x62, 0xe, 0x62, 0x922, 0xb, 0x62, 0x3, 0x62, 
       0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x929, 0xa, 
       0x63, 0x3, 0x64, 0x3, 0x64, 0x7, 0x64, 0x92d, 0xa, 0x64, 0xc, 0x64, 
       0xe, 0x64, 0x930, 0xb, 0x64, 0x3, 0x64, 0x3, 0x64, 0x7, 0x64, 0x934, 
       0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x937, 0xb, 0x64, 0x3, 0x64, 0x3, 
       0x64, 0x7, 0x64, 0x93b, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x93e, 0xb, 
       0x64, 0x3, 0x64, 0x7, 0x64, 0x941, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 
       0x944, 0xb, 0x64, 0x3, 0x64, 0x7, 0x64, 0x947, 0xa, 0x64, 0xc, 0x64, 
       0xe, 0x64, 0x94a, 0xb, 0x64, 0x3, 0x64, 0x5, 0x64, 0x94d, 0xa, 0x64, 
       0x3, 0x64, 0x7, 0x64, 0x950, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x953, 
       0xb, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x7, 0x65, 
       0x959, 0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 0x95c, 0xb, 0x65, 0x3, 0x65, 
       0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x961, 0xa, 0x65, 0x3, 0x66, 0x5, 
       0x66, 0x964, 0xa, 0x66, 0x3, 0x66, 0x5, 0x66, 0x967, 0xa, 0x66, 0x3, 
       0x66, 0x3, 0x66, 0x5, 0x66, 0x96b, 0xa, 0x66, 0x3, 0x67, 0x7, 0x67, 
       0x96e, 0xa, 0x67, 0xc, 0x67, 0xe, 0x67, 0x971, 0xb, 0x67, 0x3, 0x67, 
       0x5, 0x67, 0x974, 0xa, 0x67, 0x3, 0x67, 0x7, 0x67, 0x977, 0xa, 0x67, 
       0xc, 0x67, 0xe, 0x67, 0x97a, 0xb, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
       0x68, 0x3, 0x68, 0x7, 0x68, 0x980, 0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 
       0x983, 0xb, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 0x987, 0xa, 0x68, 
       0xc, 0x68, 0xe, 0x68, 0x98a, 0xb, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 
       0x68, 0x98e, 0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 0x991, 0xb, 0x68, 0x3, 
       0x68, 0x7, 0x68, 0x994, 0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 0x997, 0xb, 
       0x68, 0x3, 0x68, 0x7, 0x68, 0x99a, 0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 
       0x99d, 0xb, 0x68, 0x3, 0x68, 0x5, 0x68, 0x9a0, 0xa, 0x68, 0x3, 0x68, 
       0x7, 0x68, 0x9a3, 0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 0x9a6, 0xb, 0x68, 
       0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x9ac, 0xa, 
       0x69, 0xc, 0x69, 0xe, 0x69, 0x9af, 0xb, 0x69, 0x3, 0x69, 0x3, 0x69, 
       0x7, 0x69, 0x9b3, 0xa, 0x69, 0xc, 0x69, 0xe, 0x69, 0x9b6, 0xb, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x9ba, 0xa, 0x69, 0xc, 0x69, 0xe, 
       0x69, 0x9bd, 0xb, 0x69, 0x3, 0x69, 0x7, 0x69, 0x9c0, 0xa, 0x69, 0xc, 
       0x69, 0xe, 0x69, 0x9c3, 0xb, 0x69, 0x3, 0x69, 0x7, 0x69, 0x9c6, 0xa, 
       0x69, 0xc, 0x69, 0xe, 0x69, 0x9c9, 0xb, 0x69, 0x3, 0x69, 0x5, 0x69, 
       0x9cc, 0xa, 0x69, 0x3, 0x69, 0x7, 0x69, 0x9cf, 0xa, 0x69, 0xc, 0x69, 
       0xe, 0x69, 0x9d2, 0xb, 0x69, 0x5, 0x69, 0x9d4, 0xa, 0x69, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x6a, 0x5, 0x6a, 0x9d9, 0xa, 0x6a, 0x3, 0x6a, 0x7, 
       0x6a, 0x9dc, 0xa, 0x6a, 0xc, 0x6a, 0xe, 0x6a, 0x9df, 0xb, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x9e3, 0xa, 0x6a, 0xc, 0x6a, 0xe, 0x6a, 
       0x9e6, 0xb, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x9ea, 0xa, 0x6a, 
       0xc, 0x6a, 0xe, 0x6a, 0x9ed, 0xb, 0x6a, 0x5, 0x6a, 0x9ef, 0xa, 0x6a, 
       0x3, 0x6a, 0x5, 0x6a, 0x9f2, 0xa, 0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x9f5, 
       0xa, 0x6a, 0xc, 0x6a, 0xe, 0x6a, 0x9f8, 0xb, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0xa0a, 0xa, 0x6b, 0x3, 0x6c, 
       0x3, 0x6c, 0x7, 0x6c, 0xa0e, 0xa, 0x6c, 0xc, 0x6c, 0xe, 0x6c, 0xa11, 
       0xb, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x7, 0x6c, 0xa15, 0xa, 0x6c, 0xc, 
       0x6c, 0xe, 0x6c, 0xa18, 0xb, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 
       0x3, 0x6d, 0x7, 0x6d, 0xa1e, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0xa21, 
       0xb, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x7, 0x6d, 0xa25, 0xa, 0x6d, 0xc, 
       0x6d, 0xe, 0x6d, 0xa28, 0xb, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x7, 0x6d, 
       0xa2c, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0xa2f, 0xb, 0x6d, 0x3, 0x6d, 
       0x7, 0x6d, 0xa32, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0xa35, 0xb, 0x6d, 
       0x3, 0x6d, 0x7, 0x6d, 0xa38, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0xa3b, 
       0xb, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0xa3e, 0xa, 0x6d, 0x3, 0x6d, 0x7, 
       0x6d, 0xa41, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0xa44, 0xb, 0x6d, 0x5, 
       0x6d, 0xa46, 0xa, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0xa4e, 0xa, 0x6f, 0x3, 0x70, 0x3, 
       0x70, 0x3, 0x70, 0x7, 0x70, 0xa53, 0xa, 0x70, 0xc, 0x70, 0xe, 0x70, 
       0xa56, 0xb, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 
       0x71, 0x3, 0x71, 0x7, 0x71, 0xa5e, 0xa, 0x71, 0xc, 0x71, 0xe, 0x71, 
       0xa61, 0xb, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x73, 0x3, 0x73, 0x7, 0x73, 0xa69, 0xa, 0x73, 0xc, 0x73, 0xe, 0x73, 
       0xa6c, 0xb, 0x73, 0x3, 0x73, 0x3, 0x73, 0x7, 0x73, 0xa70, 0xa, 0x73, 
       0xc, 0x73, 0xe, 0x73, 0xa73, 0xb, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
       0x74, 0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 0x7, 0x75, 0xa7b, 0xa, 0x75, 
       0xc, 0x75, 0xe, 0x75, 0xa7e, 0xb, 0x75, 0x3, 0x75, 0x3, 0x75, 0x7, 
       0x75, 0xa82, 0xa, 0x75, 0xc, 0x75, 0xe, 0x75, 0xa85, 0xb, 0x75, 0x3, 
       0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 0xa8b, 0xa, 0x76, 
       0xc, 0x76, 0xe, 0x76, 0xa8e, 0xb, 0x76, 0x3, 0x76, 0x5, 0x76, 0xa91, 
       0xa, 0x76, 0x3, 0x76, 0x7, 0x76, 0xa94, 0xa, 0x76, 0xc, 0x76, 0xe, 
       0x76, 0xa97, 0xb, 0x76, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 0xa9b, 0xa, 
       0x76, 0xc, 0x76, 0xe, 0x76, 0xa9e, 0xb, 0x76, 0x5, 0x76, 0xaa0, 0xa, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 0xaa4, 0xa, 0x76, 0xc, 0x76, 
       0xe, 0x76, 0xaa7, 0xb, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 
       0x77, 0x7, 0x77, 0xaad, 0xa, 0x77, 0xc, 0x77, 0xe, 0x77, 0xab0, 0xb, 
       0x77, 0x3, 0x77, 0x3, 0x77, 0x7, 0x77, 0xab4, 0xa, 0x77, 0xc, 0x77, 
       0xe, 0x77, 0xab7, 0xb, 0x77, 0x3, 0x77, 0x7, 0x77, 0xaba, 0xa, 0x77, 
       0xc, 0x77, 0xe, 0x77, 0xabd, 0xb, 0x77, 0x3, 0x77, 0x7, 0x77, 0xac0, 
       0xa, 0x77, 0xc, 0x77, 0xe, 0x77, 0xac3, 0xb, 0x77, 0x3, 0x77, 0x5, 
       0x77, 0xac6, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x7, 0x78, 
       0xacb, 0xa, 0x78, 0xc, 0x78, 0xe, 0x78, 0xace, 0xb, 0x78, 0x3, 0x78, 
       0x3, 0x78, 0x7, 0x78, 0xad2, 0xa, 0x78, 0xc, 0x78, 0xe, 0x78, 0xad5, 
       0xb, 0x78, 0x3, 0x78, 0x5, 0x78, 0xad8, 0xa, 0x78, 0x5, 0x78, 0xada, 
       0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x7, 0x79, 0xade, 0xa, 0x79, 0xc, 
       0x79, 0xe, 0x79, 0xae1, 0xb, 0x79, 0x3, 0x79, 0x3, 0x79, 0x7, 0x79, 
       0xae5, 0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 0xae8, 0xb, 0x79, 0x3, 0x79, 
       0x3, 0x79, 0x5, 0x79, 0xaec, 0xa, 0x79, 0x3, 0x79, 0x7, 0x79, 0xaef, 
       0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 0xaf2, 0xb, 0x79, 0x3, 0x79, 0x3, 
       0x79, 0x7, 0x79, 0xaf6, 0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 0xaf9, 0xb, 
       0x79, 0x3, 0x79, 0x3, 0x79, 0x7, 0x79, 0xafd, 0xa, 0x79, 0xc, 0x79, 
       0xe, 0x79, 0xb00, 0xb, 0x79, 0x3, 0x79, 0x5, 0x79, 0xb03, 0xa, 0x79, 
       0x3, 0x79, 0x7, 0x79, 0xb06, 0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 0xb09, 
       0xb, 0x79, 0x3, 0x79, 0x5, 0x79, 0xb0c, 0xa, 0x79, 0x3, 0x79, 0x7, 
       0x79, 0xb0f, 0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 0xb12, 0xb, 0x79, 0x3, 
       0x79, 0x5, 0x79, 0xb15, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 
       0xb19, 0xa, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x7, 0x7b, 0xb1d, 0xa, 0x7b, 
       0xc, 0x7b, 0xe, 0x7b, 0xb20, 0xb, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x7, 
       0x7b, 0xb24, 0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 0xb27, 0xb, 0x7b, 0x3, 
       0x7b, 0x3, 0x7b, 0x7, 0x7b, 0xb2b, 0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 
       0xb2e, 0xb, 0x7b, 0x5, 0x7b, 0xb30, 0xa, 0x7b, 0x3, 0x7b, 0x7, 0x7b, 
       0xb33, 0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 0xb36, 0xb, 0x7b, 0x3, 0x7b, 
       0x5, 0x7b, 0xb39, 0xa, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 
       0x7d, 0x3, 0x7d, 0x7, 0x7d, 0xb40, 0xa, 0x7d, 0xc, 0x7d, 0xe, 0x7d, 
       0xb43, 0xb, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x7, 0x7d, 0xb47, 0xa, 0x7d, 
       0xc, 0x7d, 0xe, 0x7d, 0xb4a, 0xb, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 
       0x7d, 0xb4e, 0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0xb52, 0xa, 
       0x7d, 0x3, 0x7d, 0x5, 0x7d, 0xb55, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 
       0x7, 0x7e, 0xb59, 0xa, 0x7e, 0xc, 0x7e, 0xe, 0x7e, 0xb5c, 0xb, 0x7e, 
       0x3, 0x7e, 0x3, 0x7e, 0x7, 0x7e, 0xb60, 0xa, 0x7e, 0xc, 0x7e, 0xe, 
       0x7e, 0xb63, 0xb, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x7, 0x7e, 0xb67, 0xa, 
       0x7e, 0xc, 0x7e, 0xe, 0x7e, 0xb6a, 0xb, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
       0x7, 0x7e, 0xb6e, 0xa, 0x7e, 0xc, 0x7e, 0xe, 0x7e, 0xb71, 0xb, 0x7e, 
       0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0xb75, 0xa, 0x7e, 0x3, 0x7e, 0x7, 
       0x7e, 0xb78, 0xa, 0x7e, 0xc, 0x7e, 0xe, 0x7e, 0xb7b, 0xb, 0x7e, 0x3, 
       0x7e, 0x5, 0x7e, 0xb7e, 0xa, 0x7e, 0x3, 0x7e, 0x7, 0x7e, 0xb81, 0xa, 
       0x7e, 0xc, 0x7e, 0xe, 0x7e, 0xb84, 0xb, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
       0x7, 0x7e, 0xb88, 0xa, 0x7e, 0xc, 0x7e, 0xe, 0x7e, 0xb8b, 0xb, 0x7e, 
       0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0xb8f, 0xa, 0x7e, 0x3, 0x7e, 0x5, 
       0x7e, 0xb92, 0xa, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x7, 0x7f, 0xb96, 0xa, 
       0x7f, 0xc, 0x7f, 0xe, 0x7f, 0xb99, 0xb, 0x7f, 0x3, 0x7f, 0x7, 0x7f, 
       0xb9c, 0xa, 0x7f, 0xc, 0x7f, 0xe, 0x7f, 0xb9f, 0xb, 0x7f, 0x3, 0x7f, 
       0x3, 0x7f, 0x7, 0x7f, 0xba3, 0xa, 0x7f, 0xc, 0x7f, 0xe, 0x7f, 0xba6, 
       0xb, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x7, 0x7f, 0xbaa, 0xa, 0x7f, 0xc, 
       0x7f, 0xe, 0x7f, 0xbad, 0xb, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x7, 0x7f, 
       0xbb1, 0xa, 0x7f, 0xc, 0x7f, 0xe, 0x7f, 0xbb4, 0xb, 0x7f, 0x5, 0x7f, 
       0xbb6, 0xa, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x3, 
       0x80, 0x7, 0x80, 0xbbd, 0xa, 0x80, 0xc, 0x80, 0xe, 0x80, 0xbc0, 0xb, 
       0x80, 0x3, 0x80, 0x5, 0x80, 0xbc3, 0xa, 0x80, 0x3, 0x80, 0x7, 0x80, 
       0xbc6, 0xa, 0x80, 0xc, 0x80, 0xe, 0x80, 0xbc9, 0xb, 0x80, 0x3, 0x80, 
       0x3, 0x80, 0x7, 0x80, 0xbcd, 0xa, 0x80, 0xc, 0x80, 0xe, 0x80, 0xbd0, 
       0xb, 0x80, 0x3, 0x80, 0x3, 0x80, 0x7, 0x80, 0xbd4, 0xa, 0x80, 0xc, 
       0x80, 0xe, 0x80, 0xbd7, 0xb, 0x80, 0x7, 0x80, 0xbd9, 0xa, 0x80, 0xc, 
       0x80, 0xe, 0x80, 0xbdc, 0xb, 0x80, 0x3, 0x80, 0x7, 0x80, 0xbdf, 0xa, 
       0x80, 0xc, 0x80, 0xe, 0x80, 0xbe2, 0xb, 0x80, 0x3, 0x80, 0x3, 0x80, 
       0x3, 0x81, 0x3, 0x81, 0x7, 0x81, 0xbe8, 0xa, 0x81, 0xc, 0x81, 0xe, 
       0x81, 0xbeb, 0xb, 0x81, 0x3, 0x81, 0x3, 0x81, 0x7, 0x81, 0xbef, 0xa, 
       0x81, 0xc, 0x81, 0xe, 0x81, 0xbf2, 0xb, 0x81, 0x3, 0x81, 0x7, 0x81, 
       0xbf5, 0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0xbf8, 0xb, 0x81, 0x3, 0x81, 
       0x7, 0x81, 0xbfb, 0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0xbfe, 0xb, 0x81, 
       0x3, 0x81, 0x5, 0x81, 0xc01, 0xa, 0x81, 0x3, 0x81, 0x7, 0x81, 0xc04, 
       0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0xc07, 0xb, 0x81, 0x3, 0x81, 0x3, 
       0x81, 0x7, 0x81, 0xc0b, 0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0xc0e, 0xb, 
       0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 0xc12, 0xa, 0x81, 0x3, 0x81, 
       0x3, 0x81, 0x7, 0x81, 0xc16, 0xa, 0x81, 0xc, 0x81, 0xe, 0x81, 0xc19, 
       0xb, 0x81, 0x3, 0x81, 0x3, 0x81, 0x7, 0x81, 0xc1d, 0xa, 0x81, 0xc, 
       0x81, 0xe, 0x81, 0xc20, 0xb, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 
       0xc24, 0xa, 0x81, 0x5, 0x81, 0xc26, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 
       0x3, 0x82, 0x5, 0x82, 0xc2b, 0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x7, 
       0x83, 0xc2f, 0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0xc32, 0xb, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x7, 0x84, 0xc38, 0xa, 0x84, 
       0xc, 0x84, 0xe, 0x84, 0xc3b, 0xb, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
       0x85, 0x3, 0x85, 0x7, 0x85, 0xc41, 0xa, 0x85, 0xc, 0x85, 0xe, 0x85, 
       0xc44, 0xb, 0x85, 0x3, 0x85, 0x3, 0x85, 0x7, 0x85, 0xc48, 0xa, 0x85, 
       0xc, 0x85, 0xe, 0x85, 0xc4b, 0xb, 0x85, 0x3, 0x85, 0x6, 0x85, 0xc4e, 
       0xa, 0x85, 0xd, 0x85, 0xe, 0x85, 0xc4f, 0x3, 0x85, 0x7, 0x85, 0xc53, 
       0xa, 0x85, 0xc, 0x85, 0xe, 0x85, 0xc56, 0xb, 0x85, 0x3, 0x85, 0x5, 
       0x85, 0xc59, 0xa, 0x85, 0x3, 0x85, 0x7, 0x85, 0xc5c, 0xa, 0x85, 0xc, 
       0x85, 0xe, 0x85, 0xc5f, 0xb, 0x85, 0x3, 0x85, 0x5, 0x85, 0xc62, 0xa, 
       0x85, 0x3, 0x86, 0x3, 0x86, 0x7, 0x86, 0xc66, 0xa, 0x86, 0xc, 0x86, 
       0xe, 0x86, 0xc69, 0xb, 0x86, 0x3, 0x86, 0x3, 0x86, 0x7, 0x86, 0xc6d, 
       0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 0xc70, 0xb, 0x86, 0x3, 0x86, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x7, 0x86, 0xc76, 0xa, 0x86, 0xc, 0x86, 
       0xe, 0x86, 0xc79, 0xb, 0x86, 0x3, 0x86, 0x5, 0x86, 0xc7c, 0xa, 0x86, 
       0x3, 0x86, 0x3, 0x86, 0x7, 0x86, 0xc80, 0xa, 0x86, 0xc, 0x86, 0xe, 
       0x86, 0xc83, 0xb, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 
       0x7, 0x87, 0xc89, 0xa, 0x87, 0xc, 0x87, 0xe, 0x87, 0xc8c, 0xb, 0x87, 
       0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 0x88, 0x7, 0x88, 0xc92, 0xa, 
       0x88, 0xc, 0x88, 0xe, 0x88, 0xc95, 0xb, 0x88, 0x3, 0x88, 0x3, 0x88, 
       0x3, 0x88, 0x5, 0x88, 0xc9a, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x88, 0x3, 0x88, 0x5, 0x88, 0xca0, 0xa, 0x88, 0x3, 0x89, 0x5, 0x89, 
       0xca3, 0xa, 0x89, 0x3, 0x89, 0x3, 0x89, 0x7, 0x89, 0xca7, 0xa, 0x89, 
       0xc, 0x89, 0xe, 0x89, 0xcaa, 0xb, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 
       0x89, 0xcae, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
       0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 
       0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 
       0xcc5, 0xa, 0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x5, 
       0x93, 0xccb, 0xa, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x7, 0x95, 
       0xcd0, 0xa, 0x95, 0xc, 0x95, 0xe, 0x95, 0xcd3, 0xb, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x7, 0x95, 0xcd7, 0xa, 0x95, 0xc, 0x95, 0xe, 0x95, 0xcda, 
       0xb, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0xcde, 0xa, 0x95, 0x3, 
       0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x6, 0x97, 0xce5, 
       0xa, 0x97, 0xd, 0x97, 0xe, 0x97, 0xce6, 0x3, 0x98, 0x3, 0x98, 0x6, 
       0x98, 0xceb, 0xa, 0x98, 0xd, 0x98, 0xe, 0x98, 0xcec, 0x3, 0x99, 0x3, 
       0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x5, 0x99, 0xcf7, 0xa, 0x99, 0x3, 0x99, 0x7, 0x99, 0xcfa, 0xa, 
       0x99, 0xc, 0x99, 0xe, 0x99, 0xcfd, 0xb, 0x99, 0x3, 0x9a, 0x6, 0x9a, 
       0xd00, 0xa, 0x9a, 0xd, 0x9a, 0xe, 0x9a, 0xd01, 0x3, 0x9b, 0x3, 0x9b, 
       0x3, 0x9b, 0x7, 0x9b, 0xd07, 0xa, 0x9b, 0xc, 0x9b, 0xe, 0x9b, 0xd0a, 
       0xb, 0x9b, 0x5, 0x9b, 0xd0c, 0xa, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 
       0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 
       0xa0, 0x6, 0xa0, 0xd17, 0xa, 0xa0, 0xd, 0xa0, 0xe, 0xa0, 0xd18, 0x3, 
       0xa1, 0x3, 0xa1, 0x7, 0xa1, 0xd1d, 0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 
       0xd20, 0xb, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x7, 0xa1, 0xd24, 0xa, 0xa1, 
       0xc, 0xa1, 0xe, 0xa1, 0xd27, 0xb, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0xd2a, 
       0xa, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 
       0x3, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 
       0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0xd3a, 0xa, 0xa8, 0x3, 
       0xa8, 0x7, 0xa8, 0xd3d, 0xa, 0xa8, 0xc, 0xa8, 0xe, 0xa8, 0xd40, 0xb, 
       0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x7, 0xa9, 0xd44, 0xa, 0xa9, 0xc, 0xa9, 
       0xe, 0xa9, 0xd47, 0xb, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0xd4b, 
       0xa, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x7, 0xaa, 
       0xd51, 0xa, 0xaa, 0xc, 0xaa, 0xe, 0xaa, 0xd54, 0xb, 0xaa, 0x3, 0xaa, 
       0x3, 0xaa, 0x5, 0xaa, 0xd58, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x6, 
       0xaa, 0xd5c, 0xa, 0xaa, 0xd, 0xaa, 0xe, 0xaa, 0xd5d, 0x3, 0xaa, 0x3, 
       0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x7, 0xab, 0xd65, 0xa, 0xab, 
       0xc, 0xab, 0xe, 0xab, 0xd68, 0xb, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 
       0xac, 0x3, 0xac, 0x5, 0xac, 0xd6e, 0xa, 0xac, 0x3, 0xad, 0x3, 0xad, 
       0x3, 0xae, 0x3, 0xae, 0x7, 0xae, 0xd74, 0xa, 0xae, 0xc, 0xae, 0xe, 
       0xae, 0xd77, 0xb, 0xae, 0x3, 0xae, 0x3, 0xae, 0x7, 0xae, 0xd7b, 0xa, 
       0xae, 0xc, 0xae, 0xe, 0xae, 0xd7e, 0xb, 0xae, 0x3, 0xae, 0x2, 0x2, 
       0xaf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
       0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
       0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
       0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
       0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
       0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 
       0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
       0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 
       0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 
       0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 
       0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 
       0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 
       0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 
       0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 
       0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 
       0x15a, 0x2, 0x20, 0x4, 0x2, 0x2a, 0x2a, 0x2c, 0x2c, 0x3, 0x2, 0x4e, 
       0x4f, 0x3, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2a, 
       0x2b, 0x4, 0x2, 0x7, 0x7, 0x1d, 0x1d, 0x4, 0x2, 0x89, 0x89, 0x8c, 
       0x93, 0x3, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0xa6, 0xa8, 0x4, 0x2, 0x3d, 
       0x3d, 0x55, 0x55, 0x4, 0x2, 0x3a, 0x3a, 0x63, 0x63, 0x3, 0x2, 0x1f, 
       0x23, 0x4, 0x2, 0x34, 0x35, 0x37, 0x38, 0x3, 0x2, 0x30, 0x33, 0x4, 
       0x2, 0x68, 0x68, 0x6a, 0x6a, 0x4, 0x2, 0x67, 0x67, 0x69, 0x69, 0x3, 
       0x2, 0x14, 0x15, 0x3, 0x2, 0x11, 0x13, 0x4, 0x2, 0x36, 0x36, 0x66, 
       0x66, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x71, 0x76, 0x4, 0x2, 0x7d, 
       0x7d, 0x82, 0x82, 0x3, 0x2, 0x6d, 0x70, 0x4, 0x2, 0x68, 0x68, 0x6b, 
       0x6b, 0x3, 0x2, 0x77, 0x7c, 0x3, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x83, 
       0x85, 0x3, 0x2, 0x87, 0x88, 0x3, 0x2, 0x40, 0x47, 0x9, 0x2, 0x3f, 
       0x47, 0x49, 0x49, 0x51, 0x54, 0x58, 0x58, 0x5d, 0x5e, 0x6b, 0x88, 
       0x94, 0x94, 0x2, 0xf1c, 0x2, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x176, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x190, 0x3, 0x2, 0x2, 0x2, 0x8, 0x196, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1c0, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1cd, 0x3, 0x2, 
       0x2, 0x2, 0x12, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1d5, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1ff, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x25e, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x29d, 0x3, 0x2, 
       0x2, 0x2, 0x22, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x24, 0x2d9, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2e1, 0x3, 0x2, 
       0x2, 0x2, 0x2a, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2ff, 0x3, 0x2, 
       0x2, 0x2, 0x2e, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x345, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x363, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37c, 0x3, 0x2, 
       0x2, 0x2, 0x36, 0x383, 0x3, 0x2, 0x2, 0x2, 0x38, 0x385, 0x3, 0x2, 
       0x2, 0x2, 0x3a, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3bb, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3fe, 0x3, 0x2, 
       0x2, 0x2, 0x42, 0x454, 0x3, 0x2, 0x2, 0x2, 0x44, 0x459, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x473, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a0, 0x3, 0x2, 
       0x2, 0x2, 0x4a, 0x511, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x51b, 0x3, 0x2, 
       0x2, 0x2, 0x4e, 0x546, 0x3, 0x2, 0x2, 0x2, 0x50, 0x581, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x54, 0x5c3, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5e5, 0x3, 0x2, 
       0x2, 0x2, 0x5a, 0x609, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x62c, 0x3, 0x2, 
       0x2, 0x2, 0x5e, 0x635, 0x3, 0x2, 0x2, 0x2, 0x60, 0x657, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x67b, 0x3, 0x2, 0x2, 0x2, 0x64, 0x691, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x69b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69f, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6ae, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6d1, 0x3, 0x2, 
       0x2, 0x2, 0x72, 0x6d4, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6e0, 0x3, 0x2, 
       0x2, 0x2, 0x76, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x78, 0x702, 0x3, 0x2, 
       0x2, 0x2, 0x7a, 0x734, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x745, 0x3, 0x2, 
       0x2, 0x2, 0x7e, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x80, 0x768, 0x3, 0x2, 
       0x2, 0x2, 0x82, 0x771, 0x3, 0x2, 0x2, 0x2, 0x84, 0x77a, 0x3, 0x2, 
       0x2, 0x2, 0x86, 0x784, 0x3, 0x2, 0x2, 0x2, 0x88, 0x786, 0x3, 0x2, 
       0x2, 0x2, 0x8a, 0x799, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x79b, 0x3, 0x2, 
       0x2, 0x2, 0x8e, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x90, 0x7cd, 0x3, 0x2, 
       0x2, 0x2, 0x92, 0x7ee, 0x3, 0x2, 0x2, 0x2, 0x94, 0x800, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x808, 0x3, 0x2, 0x2, 0x2, 0x98, 0x80a, 0x3, 0x2, 
       0x2, 0x2, 0x9a, 0x80c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x820, 0x3, 0x2, 
       0x2, 0x2, 0x9e, 0x834, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x843, 0x3, 0x2, 
       0x2, 0x2, 0xa2, 0x852, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x859, 0x3, 0x2, 
       0x2, 0x2, 0xa6, 0x871, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x886, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0x889, 0x3, 0x2, 0x2, 0x2, 0xac, 0x898, 0x3, 0x2, 
       0x2, 0x2, 0xae, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x8b5, 0x3, 0x2, 
       0x2, 0x2, 0xb2, 0x8c4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x8dc, 0x3, 0x2, 
       0x2, 0x2, 0xb6, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x8ec, 0x3, 0x2, 
       0x2, 0x2, 0xba, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x8ff, 0x3, 0x2, 
       0x2, 0x2, 0xbe, 0x901, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x913, 0x3, 0x2, 
       0x2, 0x2, 0xc2, 0x915, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x928, 0x3, 0x2, 
       0x2, 0x2, 0xc6, 0x92a, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x956, 0x3, 0x2, 
       0x2, 0x2, 0xca, 0x963, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x96f, 0x3, 0x2, 
       0x2, 0x2, 0xce, 0x97d, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x9a9, 0x3, 0x2, 
       0x2, 0x2, 0xd2, 0x9d8, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xa09, 0x3, 0x2, 
       0x2, 0x2, 0xd6, 0xa0b, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xa1b, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0xa49, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xa4d, 0x3, 0x2, 
       0x2, 0x2, 0xde, 0xa4f, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xa59, 0x3, 0x2, 
       0x2, 0x2, 0xe2, 0xa64, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xa66, 0x3, 0x2, 
       0x2, 0x2, 0xe6, 0xa76, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xa78, 0x3, 0x2, 
       0x2, 0x2, 0xea, 0xa88, 0x3, 0x2, 0x2, 0x2, 0xec, 0xaaa, 0x3, 0x2, 
       0x2, 0x2, 0xee, 0xad9, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xadb, 0x3, 0x2, 
       0x2, 0x2, 0xf2, 0xb18, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xb1a, 0x3, 0x2, 
       0x2, 0x2, 0xf6, 0xb3a, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xb54, 0x3, 0x2, 
       0x2, 0x2, 0xfa, 0xb56, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xb93, 0x3, 0x2, 
       0x2, 0x2, 0xfe, 0xbba, 0x3, 0x2, 0x2, 0x2, 0x100, 0xc25, 0x3, 0x2, 
       0x2, 0x2, 0x102, 0xc2a, 0x3, 0x2, 0x2, 0x2, 0x104, 0xc2c, 0x3, 0x2, 
       0x2, 0x2, 0x106, 0xc35, 0x3, 0x2, 0x2, 0x2, 0x108, 0xc3e, 0x3, 0x2, 
       0x2, 0x2, 0x10a, 0xc63, 0x3, 0x2, 0x2, 0x2, 0x10c, 0xc86, 0x3, 0x2, 
       0x2, 0x2, 0x10e, 0xc9f, 0x3, 0x2, 0x2, 0x2, 0x110, 0xca2, 0x3, 0x2, 
       0x2, 0x2, 0x112, 0xcaf, 0x3, 0x2, 0x2, 0x2, 0x114, 0xcb1, 0x3, 0x2, 
       0x2, 0x2, 0x116, 0xcb3, 0x3, 0x2, 0x2, 0x2, 0x118, 0xcb5, 0x3, 0x2, 
       0x2, 0x2, 0x11a, 0xcb7, 0x3, 0x2, 0x2, 0x2, 0x11c, 0xcb9, 0x3, 0x2, 
       0x2, 0x2, 0x11e, 0xcbb, 0x3, 0x2, 0x2, 0x2, 0x120, 0xcbd, 0x3, 0x2, 
       0x2, 0x2, 0x122, 0xcc4, 0x3, 0x2, 0x2, 0x2, 0x124, 0xcca, 0x3, 0x2, 
       0x2, 0x2, 0x126, 0xccc, 0x3, 0x2, 0x2, 0x2, 0x128, 0xcdd, 0x3, 0x2, 
       0x2, 0x2, 0x12a, 0xcdf, 0x3, 0x2, 0x2, 0x2, 0x12c, 0xce4, 0x3, 0x2, 
       0x2, 0x2, 0x12e, 0xcea, 0x3, 0x2, 0x2, 0x2, 0x130, 0xcf6, 0x3, 0x2, 
       0x2, 0x2, 0x132, 0xcff, 0x3, 0x2, 0x2, 0x2, 0x134, 0xd0b, 0x3, 0x2, 
       0x2, 0x2, 0x136, 0xd0d, 0x3, 0x2, 0x2, 0x2, 0x138, 0xd0f, 0x3, 0x2, 
       0x2, 0x2, 0x13a, 0xd11, 0x3, 0x2, 0x2, 0x2, 0x13c, 0xd13, 0x3, 0x2, 
       0x2, 0x2, 0x13e, 0xd16, 0x3, 0x2, 0x2, 0x2, 0x140, 0xd29, 0x3, 0x2, 
       0x2, 0x2, 0x142, 0xd2b, 0x3, 0x2, 0x2, 0x2, 0x144, 0xd2d, 0x3, 0x2, 
       0x2, 0x2, 0x146, 0xd2f, 0x3, 0x2, 0x2, 0x2, 0x148, 0xd31, 0x3, 0x2, 
       0x2, 0x2, 0x14a, 0xd33, 0x3, 0x2, 0x2, 0x2, 0x14c, 0xd35, 0x3, 0x2, 
       0x2, 0x2, 0x14e, 0xd39, 0x3, 0x2, 0x2, 0x2, 0x150, 0xd4a, 0x3, 0x2, 
       0x2, 0x2, 0x152, 0xd57, 0x3, 0x2, 0x2, 0x2, 0x154, 0xd61, 0x3, 0x2, 
       0x2, 0x2, 0x156, 0xd6d, 0x3, 0x2, 0x2, 0x2, 0x158, 0xd6f, 0x3, 0x2, 
       0x2, 0x2, 0x15a, 0xd71, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15e, 0x5, 0x6, 
       0x4, 0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 
       0x2, 0x2, 0x15e, 0x162, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x7, 
       0x2, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 0x3, 0x2, 
       0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 
       0x2, 0x2, 0x163, 0x168, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 
       0x2, 0x2, 0x165, 0x167, 0x5, 0x8, 0x5, 0x2, 0x166, 0x165, 0x3, 0x2, 
       0x2, 0x2, 0x167, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 
       0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16b, 0x3, 0x2, 
       0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x5, 0xa, 
       0x6, 0x2, 0x16c, 0x170, 0x5, 0xc, 0x7, 0x2, 0x16d, 0x16f, 0x5, 0x12, 
       0xa, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x3, 0x2, 
       0x2, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 
       0x2, 0x2, 0x171, 0x173, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 
       0x2, 0x2, 0x173, 0x174, 0x7, 0x2, 0x2, 0x3, 0x174, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x175, 0x177, 0x5, 0x6, 0x4, 0x2, 0x176, 0x175, 0x3, 0x2, 
       0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x17b, 0x3, 0x2, 
       0x2, 0x2, 0x178, 0x17a, 0x7, 0x7, 0x2, 0x2, 0x179, 0x178, 0x3, 0x2, 
       0x2, 0x2, 0x17a, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 
       0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x181, 0x3, 0x2, 
       0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x180, 0x5, 0x8, 
       0x5, 0x2, 0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x183, 0x3, 0x2, 
       0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 0x2, 
       0x2, 0x2, 0x182, 0x184, 0x3, 0x2, 0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 
       0x2, 0x2, 0x184, 0x185, 0x5, 0xa, 0x6, 0x2, 0x185, 0x18b, 0x5, 0xc, 
       0x7, 0x2, 0x186, 0x187, 0x5, 0x82, 0x42, 0x2, 0x187, 0x188, 0x5, 
       0x94, 0x4b, 0x2, 0x188, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x189, 0x186, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18e, 
       0x3, 0x2, 0x2, 0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 
       0x7, 0x2, 0x2, 0x3, 0x18f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x190, 0x192, 
       0x7, 0x3, 0x2, 0x2, 0x191, 0x193, 0x7, 0x7, 0x2, 0x2, 0x192, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x7, 
       0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x9, 0x2, 0x2, 0x2, 0x197, 0x19b, 
       0x7, 0x3f, 0x2, 0x2, 0x198, 0x19a, 0x7, 0x7, 0x2, 0x2, 0x199, 0x198, 
       0x3, 0x2, 0x2, 0x2, 0x19a, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19e, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a2, 
       0x7, 0x1c, 0x2, 0x2, 0x19f, 0x1a1, 0x7, 0x7, 0x2, 0x2, 0x1a0, 0x19f, 
       0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a0, 
       0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1ae, 
       0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 
       0x7, 0xd, 0x2, 0x2, 0x1a6, 0x1a8, 0x5, 0x156, 0xac, 0x2, 0x1a7, 0x1a6, 
       0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 
       0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0xe, 0x2, 0x2, 0x1ac, 0x1af, 
       0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 0x156, 0xac, 0x2, 0x1ae, 0x1a5, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b3, 
       0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x7, 0x7, 0x2, 0x2, 0x1b1, 0x1b0, 
       0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 
       0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 
       0x7, 0x48, 0x2, 0x2, 0x1b7, 0x1b9, 0x5, 0x15a, 0xae, 0x2, 0x1b8, 
       0x1ba, 0x5, 0x94, 0x4b, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
       0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
       0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0xe, 0x8, 0x2, 0x1be, 
       0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
       0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
       0x1c4, 0x7, 0x49, 0x2, 0x2, 0x1c4, 0x1c8, 0x5, 0x15a, 0xae, 0x2, 
       0x1c5, 0x1c6, 0x7, 0x9, 0x2, 0x2, 0x1c6, 0x1c9, 0x7, 0x11, 0x2, 0x2, 
       0x1c7, 0x1c9, 0x5, 0x10, 0x9, 0x2, 0x1c8, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
       0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
       0x1c9, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cc, 0x5, 0x94, 0x4b, 
       0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 
       0x2, 0x1cc, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x66, 0x2, 
       0x2, 0x1ce, 0x1cf, 0x5, 0x158, 0xad, 0x2, 0x1cf, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x1d0, 0x1d2, 0x5, 0x16, 0xc, 0x2, 0x1d1, 0x1d3, 0x5, 0x96, 
       0x4c, 0x2, 0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 
       0x2, 0x2, 0x1d3, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d6, 0x5, 0x12c, 
       0x97, 0x2, 0x1d5, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 
       0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1db, 0x7, 0x50, 
       0x2, 0x2, 0x1d8, 0x1da, 0x7, 0x7, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 
       0x2, 0x2, 0x1da, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 
       0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1de, 0x3, 0x2, 
       0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e6, 0x5, 0x158, 
       0xad, 0x2, 0x1df, 0x1e1, 0x7, 0x7, 0x2, 0x2, 0x1e0, 0x1df, 0x3, 0x2, 
       0x2, 0x2, 0x1e1, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e5, 0x3, 0x2, 
       0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x5, 0x2c, 
       0x17, 0x2, 0x1e6, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 
       0x2, 0x2, 0x1e7, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ea, 0x7, 0x7, 
       0x2, 0x2, 0x1e9, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ed, 0x3, 0x2, 
       0x2, 0x2, 0x1eb, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 
       0x2, 0x2, 0x1ec, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 
       0x2, 0x2, 0x1ee, 0x1f2, 0x7, 0x1e, 0x2, 0x2, 0x1ef, 0x1f1, 0x7, 0x7, 
       0x2, 0x2, 0x1f0, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f4, 0x3, 0x2, 
       0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 
       0x2, 0x2, 0x1f3, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 
       0x2, 0x2, 0x1f5, 0x1f6, 0x5, 0x64, 0x33, 0x2, 0x1f6, 0x15, 0x3, 0x2, 
       0x2, 0x2, 0x1f7, 0x1fd, 0x5, 0x18, 0xd, 0x2, 0x1f8, 0x1fd, 0x5, 0x58, 
       0x2d, 0x2, 0x1f9, 0x1fd, 0x5, 0x40, 0x21, 0x2, 0x1fa, 0x1fd, 0x5, 
       0x48, 0x25, 0x2, 0x1fb, 0x1fd, 0x5, 0x14, 0xb, 0x2, 0x1fc, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f9, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x200, 
       0x5, 0x12c, 0x97, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x200, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x201, 0x20d, 
       0x7, 0x4a, 0x2, 0x2, 0x202, 0x206, 0x7, 0x4c, 0x2, 0x2, 0x203, 0x205, 
       0x7, 0x7, 0x2, 0x2, 0x204, 0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x208, 
       0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 
       0x3, 0x2, 0x2, 0x2, 0x207, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x208, 0x206, 
       0x3, 0x2, 0x2, 0x2, 0x209, 0x202, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 
       0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20d, 
       0x7, 0x4b, 0x2, 0x2, 0x20c, 0x201, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x20d, 0x211, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 
       0x7, 0x7, 0x2, 0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x213, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x21c, 0x5, 0x158, 0xad, 0x2, 0x215, 0x217, 
       0x7, 0x7, 0x2, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 0x5, 0x2c, 0x17, 0x2, 0x21c, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 0x7, 0x7, 0x2, 0x2, 0x21f, 0x21e, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x223, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21f, 
       0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 0x224, 0x226, 
       0x5, 0x1a, 0xe, 0x2, 0x225, 0x221, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x235, 0x3, 0x2, 0x2, 0x2, 0x227, 0x229, 
       0x7, 0x7, 0x2, 0x2, 0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22c, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x231, 0x7, 0x1c, 0x2, 0x2, 0x22e, 0x230, 
       0x7, 0x7, 0x2, 0x2, 0x22f, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 0x233, 
       0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 
       0x3, 0x2, 0x2, 0x2, 0x232, 0x234, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x236, 0x5, 0x22, 0x12, 0x2, 0x235, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x239, 0x7, 0x7, 0x2, 0x2, 0x238, 0x237, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x238, 
       0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23d, 
       0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 
       0x5, 0x30, 0x19, 0x2, 0x23e, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x242, 
       0x7, 0x7, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x245, 
       0x3, 0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 
       0x3, 0x2, 0x2, 0x2, 0x244, 0x246, 0x3, 0x2, 0x2, 0x2, 0x245, 0x243, 
       0x3, 0x2, 0x2, 0x2, 0x246, 0x24f, 0x5, 0x1c, 0xf, 0x2, 0x247, 0x249, 
       0x7, 0x7, 0x2, 0x2, 0x248, 0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24c, 
       0x3, 0x2, 0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 
       0x3, 0x2, 0x2, 0x2, 0x24b, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24a, 
       0x3, 0x2, 0x2, 0x2, 0x24d, 0x24f, 0x5, 0x5e, 0x30, 0x2, 0x24e, 0x243, 
       0x3, 0x2, 0x2, 0x2, 0x24e, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 
       0x3, 0x2, 0x2, 0x2, 0x24f, 0x19, 0x3, 0x2, 0x2, 0x2, 0x250, 0x252, 
       0x5, 0x12c, 0x97, 0x2, 0x251, 0x250, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x257, 
       0x7, 0x51, 0x2, 0x2, 0x254, 0x256, 0x7, 0x7, 0x2, 0x2, 0x255, 0x254, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x259, 0x3, 0x2, 0x2, 0x2, 0x257, 0x255, 
       0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x25b, 
       0x3, 0x2, 0x2, 0x2, 0x259, 0x257, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 
       0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x1e, 0x10, 0x2, 0x25d, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x25e, 0x262, 0x7, 0xf, 0x2, 0x2, 0x25f, 0x261, 
       0x7, 0x7, 0x2, 0x2, 0x260, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 
       0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 
       0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 
       0x3, 0x2, 0x2, 0x2, 0x265, 0x269, 0x5, 0x34, 0x1b, 0x2, 0x266, 0x268, 
       0x7, 0x7, 0x2, 0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26b, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x267, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 
       0x3, 0x2, 0x2, 0x2, 0x26a, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x269, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x7, 0x10, 0x2, 0x2, 0x26d, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x26e, 0x272, 0x7, 0xb, 0x2, 0x2, 0x26f, 0x271, 
       0x7, 0x7, 0x2, 0x2, 0x270, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x274, 
       0x3, 0x2, 0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 
       0x3, 0x2, 0x2, 0x2, 0x273, 0x292, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 
       0x3, 0x2, 0x2, 0x2, 0x275, 0x286, 0x5, 0x20, 0x11, 0x2, 0x276, 0x278, 
       0x7, 0x7, 0x2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x27b, 
       0x3, 0x2, 0x2, 0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 
       0x3, 0x2, 0x2, 0x2, 0x27a, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x279, 
       0x3, 0x2, 0x2, 0x2, 0x27c, 0x280, 0x7, 0xa, 0x2, 0x2, 0x27d, 0x27f, 
       0x7, 0x7, 0x2, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x282, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 
       0x3, 0x2, 0x2, 0x2, 0x281, 0x283, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 
       0x3, 0x2, 0x2, 0x2, 0x283, 0x285, 0x5, 0x20, 0x11, 0x2, 0x284, 0x279, 
       0x3, 0x2, 0x2, 0x2, 0x285, 0x288, 0x3, 0x2, 0x2, 0x2, 0x286, 0x284, 
       0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x290, 
       0x3, 0x2, 0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 
       0x7, 0x7, 0x2, 0x2, 0x28a, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 
       0x3, 0x2, 0x2, 0x2, 0x28d, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28c, 
       0x3, 0x2, 0x2, 0x2, 0x28f, 0x291, 0x7, 0xa, 0x2, 0x2, 0x290, 0x28c, 
       0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x293, 
       0x3, 0x2, 0x2, 0x2, 0x292, 0x275, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 
       0x3, 0x2, 0x2, 0x2, 0x293, 0x297, 0x3, 0x2, 0x2, 0x2, 0x294, 0x296, 
       0x7, 0x7, 0x2, 0x2, 0x295, 0x294, 0x3, 0x2, 0x2, 0x2, 0x296, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 
       0x3, 0x2, 0x2, 0x2, 0x298, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x7, 0xc, 0x2, 0x2, 0x29b, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x29c, 0x29e, 0x5, 0x12c, 0x97, 0x2, 0x29d, 0x29c, 
       0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x2a0, 
       0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a1, 0x9, 0x3, 0x2, 0x2, 0x2a0, 0x29f, 
       0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a5, 
       0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x7, 0x2, 0x2, 0x2a3, 0x2a2, 
       0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a3, 
       0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a8, 
       0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 
       0x5, 0x158, 0xad, 0x2, 0x2a9, 0x2ad, 0x7, 0x1c, 0x2, 0x2, 0x2aa, 
       0x2ac, 0x7, 0x7, 0x2, 0x2, 0x2ab, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ac, 
       0x2af, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
       0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2af, 
       0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2bf, 0x5, 0x64, 0x33, 0x2, 0x2b1, 
       0x2b3, 0x7, 0x7, 0x2, 0x2, 0x2b2, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 
       0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
       0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
       0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2bb, 0x7, 0x1e, 0x2, 0x2, 0x2b8, 
       0x2ba, 0x7, 0x7, 0x2, 0x2, 0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
       0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
       0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
       0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2c0, 0x5, 0x98, 0x4d, 0x2, 0x2bf, 
       0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2d2, 0x5, 0x28, 0x15, 0x2, 0x2c2, 
       0x2c4, 0x7, 0x7, 0x2, 0x2, 0x2c3, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c4, 
       0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
       0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
       0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2cc, 0x7, 0xa, 0x2, 0x2, 0x2c9, 
       0x2cb, 0x7, 0x7, 0x2, 0x2, 0x2ca, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 
       0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
       0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
       0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 0x5, 0x28, 0x15, 0x2, 0x2d0, 
       0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
       0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d5, 
       0x2da, 0x5, 0x26, 0x14, 0x2, 0x2d6, 0x2da, 0x5, 0x2a, 0x16, 0x2, 
       0x2d7, 0x2da, 0x5, 0x6c, 0x37, 0x2, 0x2d8, 0x2da, 0x5, 0x76, 0x3c, 
       0x2, 0x2d9, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d6, 0x3, 0x2, 0x2, 
       0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d8, 0x3, 0x2, 0x2, 
       0x2, 0x2da, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x5, 0x6c, 0x37, 
       0x2, 0x2dc, 0x2dd, 0x5, 0xd0, 0x69, 0x2, 0x2dd, 0x27, 0x3, 0x2, 0x2, 
       0x2, 0x2de, 0x2e0, 0x5, 0x14e, 0xa8, 0x2, 0x2df, 0x2de, 0x3, 0x2, 
       0x2, 0x2, 0x2e0, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2df, 0x3, 0x2, 
       0x2, 0x2, 0x2e1, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e7, 0x3, 0x2, 
       0x2, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e6, 0x7, 0x7, 
       0x2, 0x2, 0x2e5, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e9, 0x3, 0x2, 
       0x2, 0x2, 0x2e7, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 
       0x2, 0x2, 0x2e8, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e7, 0x3, 0x2, 
       0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x24, 0x13, 0x2, 0x2eb, 0x29, 0x3, 0x2, 
       0x2, 0x2, 0x2ec, 0x2ef, 0x5, 0x6c, 0x37, 0x2, 0x2ed, 0x2ef, 0x5, 
       0x76, 0x3c, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ed, 
       0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f2, 
       0x7, 0x7, 0x2, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f5, 
       0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 
       0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f3, 
       0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2fa, 0x7, 0x52, 0x2, 0x2, 0x2f7, 0x2f9, 
       0x7, 0x7, 0x2, 0x2, 0x2f8, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fc, 
       0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 
       0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fa, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x5, 0x98, 0x4d, 0x2, 0x2fe, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x2ff, 0x303, 0x7, 0x30, 0x2, 0x2, 0x300, 0x302, 
       0x7, 0x7, 0x2, 0x2, 0x301, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x305, 
       0x3, 0x2, 0x2, 0x2, 0x303, 0x301, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 
       0x3, 0x2, 0x2, 0x2, 0x304, 0x306, 0x3, 0x2, 0x2, 0x2, 0x305, 0x303, 
       0x3, 0x2, 0x2, 0x2, 0x306, 0x317, 0x5, 0x2e, 0x18, 0x2, 0x307, 0x309, 
       0x7, 0x7, 0x2, 0x2, 0x308, 0x307, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 
       0x3, 0x2, 0x2, 0x2, 0x30b, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30a, 
       0x3, 0x2, 0x2, 0x2, 0x30d, 0x311, 0x7, 0xa, 0x2, 0x2, 0x30e, 0x310, 
       0x7, 0x7, 0x2, 0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x310, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x311, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 
       0x3, 0x2, 0x2, 0x2, 0x312, 0x314, 0x3, 0x2, 0x2, 0x2, 0x313, 0x311, 
       0x3, 0x2, 0x2, 0x2, 0x314, 0x316, 0x5, 0x2e, 0x18, 0x2, 0x315, 0x30a, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x319, 0x3, 0x2, 0x2, 0x2, 0x317, 0x315, 
       0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x3, 0x2, 0x2, 0x2, 0x318, 0x321, 
       0x3, 0x2, 0x2, 0x2, 0x319, 0x317, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31c, 
       0x7, 0x7, 0x2, 0x2, 0x31b, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31f, 
       0x3, 0x2, 0x2, 0x2, 0x31d, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 
       0x3, 0x2, 0x2, 0x2, 0x31e, 0x320, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x31d, 
       0x3, 0x2, 0x2, 0x2, 0x320, 0x322, 0x7, 0xa, 0x2, 0x2, 0x321, 0x31d, 
       0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 0x326, 
       0x3, 0x2, 0x2, 0x2, 0x323, 0x325, 0x7, 0x7, 0x2, 0x2, 0x324, 0x323, 
       0x3, 0x2, 0x2, 0x2, 0x325, 0x328, 0x3, 0x2, 0x2, 0x2, 0x326, 0x324, 
       0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x3, 0x2, 0x2, 0x2, 0x327, 0x329, 
       0x3, 0x2, 0x2, 0x2, 0x328, 0x326, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 
       0x7, 0x31, 0x2, 0x2, 0x32a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32d, 
       0x5, 0x13e, 0xa0, 0x2, 0x32c, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x331, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x330, 
       0x7, 0x7, 0x2, 0x2, 0x32f, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x330, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x331, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x331, 0x332, 
       0x3, 0x2, 0x2, 0x2, 0x332, 0x334, 0x3, 0x2, 0x2, 0x2, 0x333, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x334, 0x343, 0x5, 0x158, 0xad, 0x2, 0x335, 0x337, 
       0x7, 0x7, 0x2, 0x2, 0x336, 0x335, 0x3, 0x2, 0x2, 0x2, 0x337, 0x33a, 
       0x3, 0x2, 0x2, 0x2, 0x338, 0x336, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 
       0x3, 0x2, 0x2, 0x2, 0x339, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x338, 
       0x3, 0x2, 0x2, 0x2, 0x33b, 0x33f, 0x7, 0x1c, 0x2, 0x2, 0x33c, 0x33e, 
       0x7, 0x7, 0x2, 0x2, 0x33d, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x341, 
       0x3, 0x2, 0x2, 0x2, 0x33f, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x342, 0x3, 0x2, 0x2, 0x2, 0x341, 0x33f, 
       0x3, 0x2, 0x2, 0x2, 0x342, 0x344, 0x5, 0x64, 0x33, 0x2, 0x343, 0x338, 
       0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x3, 0x2, 0x2, 0x2, 0x344, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x345, 0x349, 0x7, 0x58, 0x2, 0x2, 0x346, 0x348, 
       0x7, 0x7, 0x2, 0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 0x348, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x349, 0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 
       0x3, 0x2, 0x2, 0x2, 0x34a, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x349, 
       0x3, 0x2, 0x2, 0x2, 0x34c, 0x35d, 0x5, 0x32, 0x1a, 0x2, 0x34d, 0x34f, 
       0x7, 0x7, 0x2, 0x2, 0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x352, 
       0x3, 0x2, 0x2, 0x2, 0x350, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x350, 0x351, 
       0x3, 0x2, 0x2, 0x2, 0x351, 0x353, 0x3, 0x2, 0x2, 0x2, 0x352, 0x350, 
       0x3, 0x2, 0x2, 0x2, 0x353, 0x357, 0x7, 0xa, 0x2, 0x2, 0x354, 0x356, 
       0x7, 0x7, 0x2, 0x2, 0x355, 0x354, 0x3, 0x2, 0x2, 0x2, 0x356, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x357, 0x355, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 
       0x3, 0x2, 0x2, 0x2, 0x358, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x359, 0x357, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x35c, 0x5, 0x32, 0x1a, 0x2, 0x35b, 0x350, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35b, 
       0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x360, 0x362, 
       0x5, 0x14e, 0xa8, 0x2, 0x361, 0x360, 0x3, 0x2, 0x2, 0x2, 0x362, 0x365, 
       0x3, 0x2, 0x2, 0x2, 0x363, 0x361, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 
       0x3, 0x2, 0x2, 0x2, 0x364, 0x366, 0x3, 0x2, 0x2, 0x2, 0x365, 0x363, 
       0x3, 0x2, 0x2, 0x2, 0x366, 0x36a, 0x5, 0x158, 0xad, 0x2, 0x367, 0x369, 
       0x7, 0x7, 0x2, 0x2, 0x368, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36c, 
       0x3, 0x2, 0x2, 0x2, 0x36a, 0x368, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x36b, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36a, 
       0x3, 0x2, 0x2, 0x2, 0x36d, 0x371, 0x7, 0x1c, 0x2, 0x2, 0x36e, 0x370, 
       0x7, 0x7, 0x2, 0x2, 0x36f, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x370, 0x373, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 
       0x3, 0x2, 0x2, 0x2, 0x372, 0x374, 0x3, 0x2, 0x2, 0x2, 0x373, 0x371, 
       0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x5, 0x64, 0x33, 0x2, 0x375, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x376, 0x378, 0x5, 0x36, 0x1c, 0x2, 0x377, 0x379, 
       0x5, 0x96, 0x4c, 0x2, 0x378, 0x377, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x379, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x376, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37a, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x384, 
       0x5, 0x16, 0xc, 0x2, 0x380, 0x384, 0x5, 0x3a, 0x1e, 0x2, 0x381, 0x384, 
       0x5, 0x38, 0x1d, 0x2, 0x382, 0x384, 0x5, 0x5a, 0x2e, 0x2, 0x383, 
       0x37f, 0x3, 0x2, 0x2, 0x2, 0x383, 0x380, 0x3, 0x2, 0x2, 0x2, 0x383, 
       0x381, 0x3, 0x2, 0x2, 0x2, 0x383, 0x382, 0x3, 0x2, 0x2, 0x2, 0x384, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x385, 0x389, 0x7, 0x54, 0x2, 0x2, 0x386, 
       0x388, 0x7, 0x7, 0x2, 0x2, 0x387, 0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 
       0x38b, 0x3, 0x2, 0x2, 0x2, 0x389, 0x387, 0x3, 0x2, 0x2, 0x2, 0x389, 
       0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38b, 
       0x389, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x5, 0x88, 0x45, 0x2, 0x38d, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x390, 0x5, 0x12c, 0x97, 0x2, 0x38f, 
       0x38e, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x3, 0x2, 0x2, 0x2, 0x390, 
       0x391, 0x3, 0x2, 0x2, 0x2, 0x391, 0x395, 0x7, 0x53, 0x2, 0x2, 0x392, 
       0x394, 0x7, 0x7, 0x2, 0x2, 0x393, 0x392, 0x3, 0x2, 0x2, 0x2, 0x394, 
       0x397, 0x3, 0x2, 0x2, 0x2, 0x395, 0x393, 0x3, 0x2, 0x2, 0x2, 0x395, 
       0x396, 0x3, 0x2, 0x2, 0x2, 0x396, 0x398, 0x3, 0x2, 0x2, 0x2, 0x397, 
       0x395, 0x3, 0x2, 0x2, 0x2, 0x398, 0x3a0, 0x7, 0x4d, 0x2, 0x2, 0x399, 
       0x39b, 0x7, 0x7, 0x2, 0x2, 0x39a, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 
       0x39e, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39c, 
       0x39d, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39e, 
       0x39c, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a1, 0x5, 0x158, 0xad, 0x2, 0x3a0, 
       0x39c, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 
       0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a4, 0x7, 0x7, 0x2, 0x2, 0x3a3, 
       0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a5, 
       0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a6, 
       0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a8, 
       0x3ac, 0x7, 0x1c, 0x2, 0x2, 0x3a9, 0x3ab, 0x7, 0x7, 0x2, 0x2, 0x3aa, 
       0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ac, 
       0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ad, 
       0x3af, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3af, 
       0x3b1, 0x5, 0x22, 0x12, 0x2, 0x3b0, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3b0, 
       0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b2, 
       0x3b4, 0x7, 0x7, 0x2, 0x2, 0x3b3, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b4, 
       0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b5, 
       0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
       0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3ba, 0x5, 0x1c, 0xf, 0x2, 0x3b9, 
       0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 
       0x3b, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bf, 0x7, 0xb, 0x2, 0x2, 0x3bc, 
       0x3be, 0x7, 0x7, 0x2, 0x2, 0x3bd, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3be, 
       0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3bf, 
       0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3c1, 
       0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3d3, 0x5, 0x3e, 0x20, 0x2, 0x3c3, 
       0x3c5, 0x7, 0x7, 0x2, 0x2, 0x3c4, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c5, 
       0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c6, 
       0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c8, 
       0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3cd, 0x7, 0xa, 0x2, 0x2, 0x3ca, 
       0x3cc, 0x7, 0x7, 0x2, 0x2, 0x3cb, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cc, 
       0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cd, 
       0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
       0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d2, 0x5, 0x3e, 0x20, 0x2, 0x3d1, 
       0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
       0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
       0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d6, 
       0x3d8, 0x7, 0x7, 0x2, 0x2, 0x3d7, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d8, 
       0x3db, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
       0x3da, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3db, 
       0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3de, 0x7, 0xa, 0x2, 0x2, 0x3dd, 
       0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3df, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
       0x3e3, 0x7, 0x7, 0x2, 0x2, 0x3e2, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
       0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e6, 
       0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x7, 0xc, 0x2, 0x2, 0x3e8, 
       0x3d, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3eb, 0x5, 0x12e, 0x98, 0x2, 0x3ea, 
       0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
       0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3fb, 0x5, 0x56, 0x2c, 0x2, 0x3ed, 
       0x3ef, 0x7, 0x7, 0x2, 0x2, 0x3ee, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ef, 
       0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f0, 
       0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
       0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f7, 0x7, 0x1e, 0x2, 0x2, 0x3f4, 
       0x3f6, 0x7, 0x7, 0x2, 0x2, 0x3f5, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
       0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
       0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fc, 0x5, 0x98, 0x4d, 0x2, 0x3fb, 
       0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fc, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3ff, 0x5, 0x12c, 0x97, 0x2, 0x3fe, 
       0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3ff, 
       0x400, 0x3, 0x2, 0x2, 0x2, 0x400, 0x408, 0x7, 0x4c, 0x2, 0x2, 0x401, 
       0x403, 0x7, 0x7, 0x2, 0x2, 0x402, 0x401, 0x3, 0x2, 0x2, 0x2, 0x403, 
       0x406, 0x3, 0x2, 0x2, 0x2, 0x404, 0x402, 0x3, 0x2, 0x2, 0x2, 0x404, 
       0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 0x407, 0x3, 0x2, 0x2, 0x2, 0x406, 
       0x404, 0x3, 0x2, 0x2, 0x2, 0x407, 0x409, 0x5, 0x2c, 0x17, 0x2, 0x408, 
       0x404, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x3, 0x2, 0x2, 0x2, 0x409, 
       0x419, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40c, 0x7, 0x7, 0x2, 0x2, 0x40b, 
       0x40a, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40d, 
       0x40b, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40e, 
       0x410, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x410, 
       0x414, 0x5, 0x7c, 0x3f, 0x2, 0x411, 0x413, 0x7, 0x7, 0x2, 0x2, 0x412, 
       0x411, 0x3, 0x2, 0x2, 0x2, 0x413, 0x416, 0x3, 0x2, 0x2, 0x2, 0x414, 
       0x412, 0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 0x3, 0x2, 0x2, 0x2, 0x415, 
       0x417, 0x3, 0x2, 0x2, 0x2, 0x416, 0x414, 0x3, 0x2, 0x2, 0x2, 0x417, 
       0x418, 0x7, 0x9, 0x2, 0x2, 0x418, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x419, 
       0x40d, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41a, 
       0x41e, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41d, 0x7, 0x7, 0x2, 0x2, 0x41c, 
       0x41b, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41e, 
       0x41c, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x41f, 
       0x421, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x421, 
       0x425, 0x5, 0x158, 0xad, 0x2, 0x422, 0x424, 0x7, 0x7, 0x2, 0x2, 0x423, 
       0x422, 0x3, 0x2, 0x2, 0x2, 0x424, 0x427, 0x3, 0x2, 0x2, 0x2, 0x425, 
       0x423, 0x3, 0x2, 0x2, 0x2, 0x425, 0x426, 0x3, 0x2, 0x2, 0x2, 0x426, 
       0x428, 0x3, 0x2, 0x2, 0x2, 0x427, 0x425, 0x3, 0x2, 0x2, 0x2, 0x428, 
       0x437, 0x5, 0x3c, 0x1f, 0x2, 0x429, 0x42b, 0x7, 0x7, 0x2, 0x2, 0x42a, 
       0x429, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x42c, 
       0x42a, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42d, 
       0x42f, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42f, 
       0x433, 0x7, 0x1c, 0x2, 0x2, 0x430, 0x432, 0x7, 0x7, 0x2, 0x2, 0x431, 
       0x430, 0x3, 0x2, 0x2, 0x2, 0x432, 0x435, 0x3, 0x2, 0x2, 0x2, 0x433, 
       0x431, 0x3, 0x2, 0x2, 0x2, 0x433, 0x434, 0x3, 0x2, 0x2, 0x2, 0x434, 
       0x436, 0x3, 0x2, 0x2, 0x2, 0x435, 0x433, 0x3, 0x2, 0x2, 0x2, 0x436, 
       0x438, 0x5, 0x64, 0x33, 0x2, 0x437, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x437, 
       0x438, 0x3, 0x2, 0x2, 0x2, 0x438, 0x440, 0x3, 0x2, 0x2, 0x2, 0x439, 
       0x43b, 0x7, 0x7, 0x2, 0x2, 0x43a, 0x439, 0x3, 0x2, 0x2, 0x2, 0x43b, 
       0x43e, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43c, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43e, 
       0x43c, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x441, 0x5, 0x30, 0x19, 0x2, 0x440, 
       0x43c, 0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 
       0x449, 0x3, 0x2, 0x2, 0x2, 0x442, 0x444, 0x7, 0x7, 0x2, 0x2, 0x443, 
       0x442, 0x3, 0x2, 0x2, 0x2, 0x444, 0x447, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0x443, 0x3, 0x2, 0x2, 0x2, 0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0x448, 0x3, 0x2, 0x2, 0x2, 0x447, 0x445, 0x3, 0x2, 0x2, 0x2, 0x448, 
       0x44a, 0x5, 0x42, 0x22, 0x2, 0x449, 0x445, 0x3, 0x2, 0x2, 0x2, 0x449, 
       0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44b, 
       0x455, 0x5, 0x88, 0x45, 0x2, 0x44c, 0x450, 0x7, 0x1e, 0x2, 0x2, 0x44d, 
       0x44f, 0x7, 0x7, 0x2, 0x2, 0x44e, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44f, 
       0x452, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x450, 
       0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 0x453, 0x3, 0x2, 0x2, 0x2, 0x452, 
       0x450, 0x3, 0x2, 0x2, 0x2, 0x453, 0x455, 0x5, 0x98, 0x4d, 0x2, 0x454, 
       0x44b, 0x3, 0x2, 0x2, 0x2, 0x454, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x455, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x456, 0x458, 0x5, 0x14e, 0xa8, 0x2, 0x457, 
       0x456, 0x3, 0x2, 0x2, 0x2, 0x458, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x459, 
       0x457, 0x3, 0x2, 0x2, 0x2, 0x459, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x45a, 
       0x45f, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45c, 
       0x45e, 0x7, 0x7, 0x2, 0x2, 0x45d, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45e, 
       0x461, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x45f, 
       0x460, 0x3, 0x2, 0x2, 0x2, 0x460, 0x462, 0x3, 0x2, 0x2, 0x2, 0x461, 
       0x45f, 0x3, 0x2, 0x2, 0x2, 0x462, 0x471, 0x5, 0x158, 0xad, 0x2, 0x463, 
       0x465, 0x7, 0x7, 0x2, 0x2, 0x464, 0x463, 0x3, 0x2, 0x2, 0x2, 0x465, 
       0x468, 0x3, 0x2, 0x2, 0x2, 0x466, 0x464, 0x3, 0x2, 0x2, 0x2, 0x466, 
       0x467, 0x3, 0x2, 0x2, 0x2, 0x467, 0x469, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x466, 0x3, 0x2, 0x2, 0x2, 0x469, 0x46d, 0x7, 0x1c, 0x2, 0x2, 0x46a, 
       0x46c, 0x7, 0x7, 0x2, 0x2, 0x46b, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46c, 
       0x46f, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46d, 
       0x46e, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x470, 0x3, 0x2, 0x2, 0x2, 0x46f, 
       0x46d, 0x3, 0x2, 0x2, 0x2, 0x470, 0x472, 0x5, 0x64, 0x33, 0x2, 0x471, 
       0x466, 0x3, 0x2, 0x2, 0x2, 0x471, 0x472, 0x3, 0x2, 0x2, 0x2, 0x472, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x473, 0x477, 0x7, 0xb, 0x2, 0x2, 0x474, 
       0x476, 0x7, 0x7, 0x2, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x476, 
       0x479, 0x3, 0x2, 0x2, 0x2, 0x477, 0x475, 0x3, 0x2, 0x2, 0x2, 0x477, 
       0x478, 0x3, 0x2, 0x2, 0x2, 0x478, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x479, 
       0x477, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x48b, 0x5, 0x44, 0x23, 0x2, 0x47b, 
       0x47d, 0x7, 0x7, 0x2, 0x2, 0x47c, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47d, 
       0x480, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47e, 
       0x47f, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x481, 0x3, 0x2, 0x2, 0x2, 0x480, 
       0x47e, 0x3, 0x2, 0x2, 0x2, 0x481, 0x485, 0x7, 0xa, 0x2, 0x2, 0x482, 
       0x484, 0x7, 0x7, 0x2, 0x2, 0x483, 0x482, 0x3, 0x2, 0x2, 0x2, 0x484, 
       0x487, 0x3, 0x2, 0x2, 0x2, 0x485, 0x483, 0x3, 0x2, 0x2, 0x2, 0x485, 
       0x486, 0x3, 0x2, 0x2, 0x2, 0x486, 0x488, 0x3, 0x2, 0x2, 0x2, 0x487, 
       0x485, 0x3, 0x2, 0x2, 0x2, 0x488, 0x48a, 0x5, 0x44, 0x23, 0x2, 0x489, 
       0x47e, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48b, 
       0x489, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48c, 
       0x495, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48e, 
       0x490, 0x7, 0x7, 0x2, 0x2, 0x48f, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x490, 
       0x493, 0x3, 0x2, 0x2, 0x2, 0x491, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x491, 
       0x492, 0x3, 0x2, 0x2, 0x2, 0x492, 0x494, 0x3, 0x2, 0x2, 0x2, 0x493, 
       0x491, 0x3, 0x2, 0x2, 0x2, 0x494, 0x496, 0x7, 0xa, 0x2, 0x2, 0x495, 
       0x491, 0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 
       0x49a, 0x3, 0x2, 0x2, 0x2, 0x497, 0x499, 0x7, 0x7, 0x2, 0x2, 0x498, 
       0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x49a, 
       0x498, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49b, 
       0x49d, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49d, 
       0x49e, 0x7, 0xc, 0x2, 0x2, 0x49e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49f, 
       0x4a1, 0x5, 0x12c, 0x97, 0x2, 0x4a0, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x4a0, 
       0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a2, 
       0x4aa, 0x9, 0x3, 0x2, 0x2, 0x4a3, 0x4a5, 0x7, 0x7, 0x2, 0x2, 0x4a4, 
       0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4a6, 
       0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a7, 
       0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a9, 
       0x4ab, 0x5, 0x2c, 0x17, 0x2, 0x4aa, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4aa, 
       0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4ac, 
       0x4ae, 0x7, 0x7, 0x2, 0x2, 0x4ad, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ae, 
       0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
       0x4af, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b6, 0x5, 0x7c, 0x3f, 0x2, 0x4b3, 
       0x4b5, 0x7, 0x7, 0x2, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b5, 
       0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b6, 
       0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4b8, 
       0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4ba, 0x7, 0x9, 0x2, 0x2, 0x4ba, 
       0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4bb, 
       0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4bd, 
       0x4bf, 0x7, 0x7, 0x2, 0x2, 0x4be, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bf, 
       0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c2, 
       0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c6, 0x5, 0x46, 0x24, 0x2, 0x4c4, 
       0x4c6, 0x5, 0x44, 0x23, 0x2, 0x4c5, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c5, 
       0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4c7, 
       0x4c9, 0x7, 0x7, 0x2, 0x2, 0x4c8, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c9, 
       0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4ca, 
       0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
       0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cf, 0x5, 0x30, 0x19, 0x2, 0x4ce, 
       0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d2, 0x7, 0x7, 0x2, 0x2, 0x4d1, 
       0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d3, 
       0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d4, 
       0x4df, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d6, 
       0x4da, 0x7, 0x1e, 0x2, 0x2, 0x4d7, 0x4d9, 0x7, 0x7, 0x2, 0x2, 0x4d8, 
       0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4da, 
       0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4db, 
       0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4e0, 0x5, 0x98, 0x4d, 0x2, 0x4de, 0x4e0, 0x5, 0x4a, 0x26, 0x2, 
       0x4df, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4de, 0x3, 0x2, 0x2, 0x2, 
       0x4e0, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4d3, 0x3, 0x2, 0x2, 0x2, 
       0x4e1, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e9, 0x3, 0x2, 0x2, 0x2, 
       0x4e3, 0x4e5, 0x7, 0x7, 0x2, 0x2, 0x4e4, 0x4e3, 0x3, 0x2, 0x2, 0x2, 
       0x4e5, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e4, 0x3, 0x2, 0x2, 0x2, 
       0x4e6, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e8, 0x3, 0x2, 0x2, 0x2, 
       0x4e8, 0x4ea, 0x7, 0x1d, 0x2, 0x2, 0x4e9, 0x4e4, 0x3, 0x2, 0x2, 0x2, 
       0x4e9, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4ee, 0x3, 0x2, 0x2, 0x2, 
       0x4eb, 0x4ed, 0x7, 0x7, 0x2, 0x2, 0x4ec, 0x4eb, 0x3, 0x2, 0x2, 0x2, 
       0x4ed, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ec, 0x3, 0x2, 0x2, 0x2, 
       0x4ee, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x50f, 0x3, 0x2, 0x2, 0x2, 
       0x4f0, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f3, 0x5, 0x4c, 0x27, 
       0x2, 0x4f2, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f3, 0x3, 0x2, 0x2, 
       0x2, 0x4f3, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f6, 0x7, 0x7, 0x2, 
       0x2, 0x4f5, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4f9, 0x3, 0x2, 0x2, 
       0x2, 0x4f7, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x3, 0x2, 0x2, 
       0x2, 0x4f8, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4f7, 0x3, 0x2, 0x2, 
       0x2, 0x4fa, 0x4fc, 0x5, 0x94, 0x4b, 0x2, 0x4fb, 0x4fa, 0x3, 0x2, 
       0x2, 0x2, 0x4fb, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0x3, 0x2, 
       0x2, 0x2, 0x4fd, 0x4ff, 0x5, 0x4e, 0x28, 0x2, 0x4fe, 0x4f7, 0x3, 
       0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x510, 0x3, 
       0x2, 0x2, 0x2, 0x500, 0x502, 0x5, 0x4e, 0x28, 0x2, 0x501, 0x500, 
       0x3, 0x2, 0x2, 0x2, 0x501, 0x502, 0x3, 0x2, 0x2, 0x2, 0x502, 0x50d, 
       0x3, 0x2, 0x2, 0x2, 0x503, 0x505, 0x7, 0x7, 0x2, 0x2, 0x504, 0x503, 
       0x3, 0x2, 0x2, 0x2, 0x505, 0x508, 0x3, 0x2, 0x2, 0x2, 0x506, 0x504, 
       0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x3, 0x2, 0x2, 0x2, 0x507, 0x50a, 
       0x3, 0x2, 0x2, 0x2, 0x508, 0x506, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50b, 
       0x5, 0x94, 0x4b, 0x2, 0x50a, 0x509, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x50b, 
       0x3, 0x2, 0x2, 0x2, 0x50b, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50e, 
       0x5, 0x4c, 0x27, 0x2, 0x50d, 0x506, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x50e, 0x510, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4f2, 
       0x3, 0x2, 0x2, 0x2, 0x50f, 0x501, 0x3, 0x2, 0x2, 0x2, 0x510, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x511, 0x515, 0x7, 0x52, 0x2, 0x2, 0x512, 0x514, 
       0x7, 0x7, 0x2, 0x2, 0x513, 0x512, 0x3, 0x2, 0x2, 0x2, 0x514, 0x517, 
       0x3, 0x2, 0x2, 0x2, 0x515, 0x513, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 
       0x3, 0x2, 0x2, 0x2, 0x516, 0x518, 0x3, 0x2, 0x2, 0x2, 0x517, 0x515, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x519, 0x5, 0x98, 0x4d, 0x2, 0x519, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x51c, 0x5, 0x12c, 0x97, 0x2, 0x51b, 0x51a, 
       0x3, 0x2, 0x2, 0x2, 0x51b, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 
       0x3, 0x2, 0x2, 0x2, 0x51d, 0x543, 0x7, 0x42, 0x2, 0x2, 0x51e, 0x520, 
       0x7, 0x7, 0x2, 0x2, 0x51f, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x520, 0x523, 
       0x3, 0x2, 0x2, 0x2, 0x521, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x521, 0x522, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x524, 0x3, 0x2, 0x2, 0x2, 0x523, 0x521, 
       0x3, 0x2, 0x2, 0x2, 0x524, 0x528, 0x7, 0xb, 0x2, 0x2, 0x525, 0x527, 
       0x7, 0x7, 0x2, 0x2, 0x526, 0x525, 0x3, 0x2, 0x2, 0x2, 0x527, 0x52a, 
       0x3, 0x2, 0x2, 0x2, 0x528, 0x526, 0x3, 0x2, 0x2, 0x2, 0x528, 0x529, 
       0x3, 0x2, 0x2, 0x2, 0x529, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x528, 
       0x3, 0x2, 0x2, 0x2, 0x52b, 0x53a, 0x7, 0xc, 0x2, 0x2, 0x52c, 0x52e, 
       0x7, 0x7, 0x2, 0x2, 0x52d, 0x52c, 0x3, 0x2, 0x2, 0x2, 0x52e, 0x531, 
       0x3, 0x2, 0x2, 0x2, 0x52f, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 
       0x3, 0x2, 0x2, 0x2, 0x530, 0x532, 0x3, 0x2, 0x2, 0x2, 0x531, 0x52f, 
       0x3, 0x2, 0x2, 0x2, 0x532, 0x536, 0x7, 0x1c, 0x2, 0x2, 0x533, 0x535, 
       0x7, 0x7, 0x2, 0x2, 0x534, 0x533, 0x3, 0x2, 0x2, 0x2, 0x535, 0x538, 
       0x3, 0x2, 0x2, 0x2, 0x536, 0x534, 0x3, 0x2, 0x2, 0x2, 0x536, 0x537, 
       0x3, 0x2, 0x2, 0x2, 0x537, 0x539, 0x3, 0x2, 0x2, 0x2, 0x538, 0x536, 
       0x3, 0x2, 0x2, 0x2, 0x539, 0x53b, 0x5, 0x64, 0x33, 0x2, 0x53a, 0x52f, 
       0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53f, 
       0x3, 0x2, 0x2, 0x2, 0x53c, 0x53e, 0x7, 0x7, 0x2, 0x2, 0x53d, 0x53c, 
       0x3, 0x2, 0x2, 0x2, 0x53e, 0x541, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x53d, 
       0x3, 0x2, 0x2, 0x2, 0x53f, 0x540, 0x3, 0x2, 0x2, 0x2, 0x540, 0x542, 
       0x3, 0x2, 0x2, 0x2, 0x541, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x542, 0x544, 
       0x5, 0x42, 0x22, 0x2, 0x543, 0x521, 0x3, 0x2, 0x2, 0x2, 0x543, 0x544, 
       0x3, 0x2, 0x2, 0x2, 0x544, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x545, 0x547, 
       0x5, 0x12c, 0x97, 0x2, 0x546, 0x545, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 
       0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x3, 0x2, 0x2, 0x2, 0x548, 0x57f, 
       0x7, 0x43, 0x2, 0x2, 0x549, 0x54b, 0x7, 0x7, 0x2, 0x2, 0x54a, 0x549, 
       0x3, 0x2, 0x2, 0x2, 0x54b, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54a, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x54d, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x54f, 
       0x3, 0x2, 0x2, 0x2, 0x54e, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x553, 
       0x7, 0xb, 0x2, 0x2, 0x550, 0x552, 0x7, 0x7, 0x2, 0x2, 0x551, 0x550, 
       0x3, 0x2, 0x2, 0x2, 0x552, 0x555, 0x3, 0x2, 0x2, 0x2, 0x553, 0x551, 
       0x3, 0x2, 0x2, 0x2, 0x553, 0x554, 0x3, 0x2, 0x2, 0x2, 0x554, 0x556, 
       0x3, 0x2, 0x2, 0x2, 0x555, 0x553, 0x3, 0x2, 0x2, 0x2, 0x556, 0x55e, 
       0x5, 0x52, 0x2a, 0x2, 0x557, 0x559, 0x7, 0x7, 0x2, 0x2, 0x558, 0x557, 
       0x3, 0x2, 0x2, 0x2, 0x559, 0x55c, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x558, 
       0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55d, 
       0x3, 0x2, 0x2, 0x2, 0x55c, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x55f, 
       0x7, 0xa, 0x2, 0x2, 0x55e, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x55f, 
       0x3, 0x2, 0x2, 0x2, 0x55f, 0x563, 0x3, 0x2, 0x2, 0x2, 0x560, 0x562, 
       0x7, 0x7, 0x2, 0x2, 0x561, 0x560, 0x3, 0x2, 0x2, 0x2, 0x562, 0x565, 
       0x3, 0x2, 0x2, 0x2, 0x563, 0x561, 0x3, 0x2, 0x2, 0x2, 0x563, 0x564, 
       0x3, 0x2, 0x2, 0x2, 0x564, 0x566, 0x3, 0x2, 0x2, 0x2, 0x565, 0x563, 
       0x3, 0x2, 0x2, 0x2, 0x566, 0x575, 0x7, 0xc, 0x2, 0x2, 0x567, 0x569, 
       0x7, 0x7, 0x2, 0x2, 0x568, 0x567, 0x3, 0x2, 0x2, 0x2, 0x569, 0x56c, 
       0x3, 0x2, 0x2, 0x2, 0x56a, 0x568, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56b, 
       0x3, 0x2, 0x2, 0x2, 0x56b, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56a, 
       0x3, 0x2, 0x2, 0x2, 0x56d, 0x571, 0x7, 0x1c, 0x2, 0x2, 0x56e, 0x570, 
       0x7, 0x7, 0x2, 0x2, 0x56f, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x570, 0x573, 
       0x3, 0x2, 0x2, 0x2, 0x571, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 
       0x3, 0x2, 0x2, 0x2, 0x572, 0x574, 0x3, 0x2, 0x2, 0x2, 0x573, 0x571, 
       0x3, 0x2, 0x2, 0x2, 0x574, 0x576, 0x5, 0x64, 0x33, 0x2, 0x575, 0x56a, 
       0x3, 0x2, 0x2, 0x2, 0x575, 0x576, 0x3, 0x2, 0x2, 0x2, 0x576, 0x57a, 
       0x3, 0x2, 0x2, 0x2, 0x577, 0x579, 0x7, 0x7, 0x2, 0x2, 0x578, 0x577, 
       0x3, 0x2, 0x2, 0x2, 0x579, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57a, 0x578, 
       0x3, 0x2, 0x2, 0x2, 0x57a, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57d, 
       0x3, 0x2, 0x2, 0x2, 0x57c, 0x57a, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x57e, 
       0x5, 0x42, 0x22, 0x2, 0x57e, 0x580, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x54c, 
       0x3, 0x2, 0x2, 0x2, 0x57f, 0x580, 0x3, 0x2, 0x2, 0x2, 0x580, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x581, 0x585, 0x7, 0xb, 0x2, 0x2, 0x582, 0x584, 
       0x7, 0x7, 0x2, 0x2, 0x583, 0x582, 0x3, 0x2, 0x2, 0x2, 0x584, 0x587, 
       0x3, 0x2, 0x2, 0x2, 0x585, 0x583, 0x3, 0x2, 0x2, 0x2, 0x585, 0x586, 
       0x3, 0x2, 0x2, 0x2, 0x586, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x587, 0x585, 
       0x3, 0x2, 0x2, 0x2, 0x588, 0x599, 0x5, 0x52, 0x2a, 0x2, 0x589, 0x58b, 
       0x7, 0x7, 0x2, 0x2, 0x58a, 0x589, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x58e, 
       0x3, 0x2, 0x2, 0x2, 0x58c, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 
       0x3, 0x2, 0x2, 0x2, 0x58d, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58c, 
       0x3, 0x2, 0x2, 0x2, 0x58f, 0x593, 0x7, 0xa, 0x2, 0x2, 0x590, 0x592, 
       0x7, 0x7, 0x2, 0x2, 0x591, 0x590, 0x3, 0x2, 0x2, 0x2, 0x592, 0x595, 
       0x3, 0x2, 0x2, 0x2, 0x593, 0x591, 0x3, 0x2, 0x2, 0x2, 0x593, 0x594, 
       0x3, 0x2, 0x2, 0x2, 0x594, 0x596, 0x3, 0x2, 0x2, 0x2, 0x595, 0x593, 
       0x3, 0x2, 0x2, 0x2, 0x596, 0x598, 0x5, 0x52, 0x2a, 0x2, 0x597, 0x58c, 
       0x3, 0x2, 0x2, 0x2, 0x598, 0x59b, 0x3, 0x2, 0x2, 0x2, 0x599, 0x597, 
       0x3, 0x2, 0x2, 0x2, 0x599, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x5a3, 
       0x3, 0x2, 0x2, 0x2, 0x59b, 0x599, 0x3, 0x2, 0x2, 0x2, 0x59c, 0x59e, 
       0x7, 0x7, 0x2, 0x2, 0x59d, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x5a1, 
       0x3, 0x2, 0x2, 0x2, 0x59f, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a0, 
       0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x59f, 
       0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a4, 0x7, 0xa, 0x2, 0x2, 0x5a3, 0x59f, 
       0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a6, 
       0x3, 0x2, 0x2, 0x2, 0x5a5, 0x588, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a6, 
       0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a9, 
       0x7, 0x7, 0x2, 0x2, 0x5a8, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5ac, 
       0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 
       0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5aa, 
       0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x7, 0xc, 0x2, 0x2, 0x5ae, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b1, 0x5, 0x12e, 0x98, 0x2, 0x5b0, 0x5af, 
       0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 
       0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5c1, 0x5, 0x54, 0x2b, 0x2, 0x5b3, 0x5b5, 
       0x7, 0x7, 0x2, 0x2, 0x5b4, 0x5b3, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b8, 
       0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 
       0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5b6, 
       0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5bd, 0x7, 0x1e, 0x2, 0x2, 0x5ba, 0x5bc, 
       0x7, 0x7, 0x2, 0x2, 0x5bb, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bf, 
       0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5be, 
       0x3, 0x2, 0x2, 0x2, 0x5be, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5bd, 
       0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c2, 0x5, 0x98, 0x4d, 0x2, 0x5c1, 0x5b6, 
       0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c7, 0x5, 0x158, 0xad, 0x2, 0x5c4, 0x5c6, 
       0x7, 0x7, 0x2, 0x2, 0x5c5, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c9, 
       0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c8, 
       0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5c7, 
       0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5ce, 0x7, 0x1c, 0x2, 0x2, 0x5cb, 0x5cd, 
       0x7, 0x7, 0x2, 0x2, 0x5cc, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5d0, 
       0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5cf, 
       0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5ce, 
       0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d3, 0x5, 0x64, 0x33, 0x2, 0x5d2, 0x5ca, 
       0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d8, 0x5, 0x158, 0xad, 0x2, 0x5d5, 0x5d7, 
       0x7, 0x7, 0x2, 0x2, 0x5d6, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5da, 
       0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 
       0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5d8, 
       0x3, 0x2, 0x2, 0x2, 0x5db, 0x5df, 0x7, 0x1c, 0x2, 0x2, 0x5dc, 0x5de, 
       0x7, 0x7, 0x2, 0x2, 0x5dd, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5de, 0x5e1, 
       0x3, 0x2, 0x2, 0x2, 0x5df, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e0, 
       0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5df, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e3, 0x5, 0x64, 0x33, 0x2, 0x5e3, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e6, 0x5, 0x12c, 0x97, 0x2, 0x5e5, 0x5e4, 
       0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 
       0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5eb, 0x7, 0x4d, 0x2, 0x2, 0x5e8, 0x5ea, 
       0x7, 0x7, 0x2, 0x2, 0x5e9, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5ed, 
       0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 
       0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5eb, 
       0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5fd, 0x5, 0x158, 0xad, 0x2, 0x5ef, 0x5f1, 
       0x7, 0x7, 0x2, 0x2, 0x5f0, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5f4, 
       0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5f0, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5f3, 
       0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f2, 
       0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f9, 0x7, 0x1c, 0x2, 0x2, 0x5f6, 0x5f8, 
       0x7, 0x7, 0x2, 0x2, 0x5f7, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5fb, 
       0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 
       0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5f9, 
       0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fe, 0x5, 0x22, 0x12, 0x2, 0x5fd, 0x5f2, 
       0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x606, 
       0x3, 0x2, 0x2, 0x2, 0x5ff, 0x601, 0x7, 0x7, 0x2, 0x2, 0x600, 0x5ff, 
       0x3, 0x2, 0x2, 0x2, 0x601, 0x604, 0x3, 0x2, 0x2, 0x2, 0x602, 0x600, 
       0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 0x3, 0x2, 0x2, 0x2, 0x603, 0x605, 
       0x3, 0x2, 0x2, 0x2, 0x604, 0x602, 0x3, 0x2, 0x2, 0x2, 0x605, 0x607, 
       0x5, 0x1c, 0xf, 0x2, 0x606, 0x602, 0x3, 0x2, 0x2, 0x2, 0x606, 0x607, 
       0x3, 0x2, 0x2, 0x2, 0x607, 0x59, 0x3, 0x2, 0x2, 0x2, 0x608, 0x60a, 
       0x5, 0x12c, 0x97, 0x2, 0x609, 0x608, 0x3, 0x2, 0x2, 0x2, 0x609, 0x60a, 
       0x3, 0x2, 0x2, 0x2, 0x60a, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60f, 
       0x7, 0x51, 0x2, 0x2, 0x60c, 0x60e, 0x7, 0x7, 0x2, 0x2, 0x60d, 0x60c, 
       0x3, 0x2, 0x2, 0x2, 0x60e, 0x611, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x60d, 
       0x3, 0x2, 0x2, 0x2, 0x60f, 0x610, 0x3, 0x2, 0x2, 0x2, 0x610, 0x612, 
       0x3, 0x2, 0x2, 0x2, 0x611, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x612, 0x621, 
       0x5, 0x3c, 0x1f, 0x2, 0x613, 0x615, 0x7, 0x7, 0x2, 0x2, 0x614, 0x613, 
       0x3, 0x2, 0x2, 0x2, 0x615, 0x618, 0x3, 0x2, 0x2, 0x2, 0x616, 0x614, 
       0x3, 0x2, 0x2, 0x2, 0x616, 0x617, 0x3, 0x2, 0x2, 0x2, 0x617, 0x619, 
       0x3, 0x2, 0x2, 0x2, 0x618, 0x616, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61d, 
       0x7, 0x1c, 0x2, 0x2, 0x61a, 0x61c, 0x7, 0x7, 0x2, 0x2, 0x61b, 0x61a, 
       0x3, 0x2, 0x2, 0x2, 0x61c, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61b, 
       0x3, 0x2, 0x2, 0x2, 0x61d, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x620, 
       0x3, 0x2, 0x2, 0x2, 0x61f, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x620, 0x622, 
       0x5, 0x5c, 0x2f, 0x2, 0x621, 0x616, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 
       0x3, 0x2, 0x2, 0x2, 0x622, 0x626, 0x3, 0x2, 0x2, 0x2, 0x623, 0x625, 
       0x7, 0x7, 0x2, 0x2, 0x624, 0x623, 0x3, 0x2, 0x2, 0x2, 0x625, 0x628, 
       0x3, 0x2, 0x2, 0x2, 0x626, 0x624, 0x3, 0x2, 0x2, 0x2, 0x626, 0x627, 
       0x3, 0x2, 0x2, 0x2, 0x627, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x628, 0x626, 
       0x3, 0x2, 0x2, 0x2, 0x629, 0x62b, 0x5, 0x88, 0x45, 0x2, 0x62a, 0x629, 
       0x3, 0x2, 0x2, 0x2, 0x62a, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x62b, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x62c, 0x630, 0x9, 0x4, 0x2, 0x2, 0x62d, 0x62f, 
       0x7, 0x7, 0x2, 0x2, 0x62e, 0x62d, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x632, 
       0x3, 0x2, 0x2, 0x2, 0x630, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x630, 0x631, 
       0x3, 0x2, 0x2, 0x2, 0x631, 0x633, 0x3, 0x2, 0x2, 0x2, 0x632, 0x630, 
       0x3, 0x2, 0x2, 0x2, 0x633, 0x634, 0x5, 0xd0, 0x69, 0x2, 0x634, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x635, 0x639, 0x7, 0xf, 0x2, 0x2, 0x636, 0x638, 
       0x7, 0x7, 0x2, 0x2, 0x637, 0x636, 0x3, 0x2, 0x2, 0x2, 0x638, 0x63b, 
       0x3, 0x2, 0x2, 0x2, 0x639, 0x637, 0x3, 0x2, 0x2, 0x2, 0x639, 0x63a, 
       0x3, 0x2, 0x2, 0x2, 0x63a, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x639, 
       0x3, 0x2, 0x2, 0x2, 0x63c, 0x63e, 0x5, 0x60, 0x31, 0x2, 0x63d, 0x63c, 
       0x3, 0x2, 0x2, 0x2, 0x63d, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x64d, 
       0x3, 0x2, 0x2, 0x2, 0x63f, 0x641, 0x7, 0x7, 0x2, 0x2, 0x640, 0x63f, 
       0x3, 0x2, 0x2, 0x2, 0x641, 0x644, 0x3, 0x2, 0x2, 0x2, 0x642, 0x640, 
       0x3, 0x2, 0x2, 0x2, 0x642, 0x643, 0x3, 0x2, 0x2, 0x2, 0x643, 0x645, 
       0x3, 0x2, 0x2, 0x2, 0x644, 0x642, 0x3, 0x2, 0x2, 0x2, 0x645, 0x649, 
       0x7, 0x1d, 0x2, 0x2, 0x646, 0x648, 0x7, 0x7, 0x2, 0x2, 0x647, 0x646, 
       0x3, 0x2, 0x2, 0x2, 0x648, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x649, 0x647, 
       0x3, 0x2, 0x2, 0x2, 0x649, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64c, 
       0x3, 0x2, 0x2, 0x2, 0x64b, 0x649, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64e, 
       0x5, 0x34, 0x1b, 0x2, 0x64d, 0x642, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x64e, 
       0x3, 0x2, 0x2, 0x2, 0x64e, 0x652, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x651, 
       0x7, 0x7, 0x2, 0x2, 0x650, 0x64f, 0x3, 0x2, 0x2, 0x2, 0x651, 0x654, 
       0x3, 0x2, 0x2, 0x2, 0x652, 0x650, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 
       0x3, 0x2, 0x2, 0x2, 0x653, 0x655, 0x3, 0x2, 0x2, 0x2, 0x654, 0x652, 
       0x3, 0x2, 0x2, 0x2, 0x655, 0x656, 0x7, 0x10, 0x2, 0x2, 0x656, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x657, 0x668, 0x5, 0x62, 0x32, 0x2, 0x658, 0x65a, 
       0x7, 0x7, 0x2, 0x2, 0x659, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x65d, 
       0x3, 0x2, 0x2, 0x2, 0x65b, 0x659, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 
       0x3, 0x2, 0x2, 0x2, 0x65c, 0x65e, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65b, 
       0x3, 0x2, 0x2, 0x2, 0x65e, 0x662, 0x7, 0xa, 0x2, 0x2, 0x65f, 0x661, 
       0x7, 0x7, 0x2, 0x2, 0x660, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x661, 0x664, 
       0x3, 0x2, 0x2, 0x2, 0x662, 0x660, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 
       0x3, 0x2, 0x2, 0x2, 0x663, 0x665, 0x3, 0x2, 0x2, 0x2, 0x664, 0x662, 
       0x3, 0x2, 0x2, 0x2, 0x665, 0x667, 0x5, 0x62, 0x32, 0x2, 0x666, 0x65b, 
       0x3, 0x2, 0x2, 0x2, 0x667, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x668, 0x666, 
       0x3, 0x2, 0x2, 0x2, 0x668, 0x669, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66e, 
       0x3, 0x2, 0x2, 0x2, 0x66a, 0x668, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x66d, 
       0x7, 0x7, 0x2, 0x2, 0x66c, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x670, 
       0x3, 0x2, 0x2, 0x2, 0x66e, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x66f, 
       0x3, 0x2, 0x2, 0x2, 0x66f, 0x672, 0x3, 0x2, 0x2, 0x2, 0x670, 0x66e, 
       0x3, 0x2, 0x2, 0x2, 0x671, 0x673, 0x7, 0xa, 0x2, 0x2, 0x672, 0x671, 
       0x3, 0x2, 0x2, 0x2, 0x672, 0x673, 0x3, 0x2, 0x2, 0x2, 0x673, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x674, 0x678, 0x5, 0x12c, 0x97, 0x2, 0x675, 0x677, 
       0x7, 0x7, 0x2, 0x2, 0x676, 0x675, 0x3, 0x2, 0x2, 0x2, 0x677, 0x67a, 
       0x3, 0x2, 0x2, 0x2, 0x678, 0x676, 0x3, 0x2, 0x2, 0x2, 0x678, 0x679, 
       0x3, 0x2, 0x2, 0x2, 0x679, 0x67c, 0x3, 0x2, 0x2, 0x2, 0x67a, 0x678, 
       0x3, 0x2, 0x2, 0x2, 0x67b, 0x674, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67c, 
       0x3, 0x2, 0x2, 0x2, 0x67c, 0x67d, 0x3, 0x2, 0x2, 0x2, 0x67d, 0x685, 
       0x5, 0x158, 0xad, 0x2, 0x67e, 0x680, 0x7, 0x7, 0x2, 0x2, 0x67f, 0x67e, 
       0x3, 0x2, 0x2, 0x2, 0x680, 0x683, 0x3, 0x2, 0x2, 0x2, 0x681, 0x67f, 
       0x3, 0x2, 0x2, 0x2, 0x681, 0x682, 0x3, 0x2, 0x2, 0x2, 0x682, 0x684, 
       0x3, 0x2, 0x2, 0x2, 0x683, 0x681, 0x3, 0x2, 0x2, 0x2, 0x684, 0x686, 
       0x5, 0xd0, 0x69, 0x2, 0x685, 0x681, 0x3, 0x2, 0x2, 0x2, 0x685, 0x686, 
       0x3, 0x2, 0x2, 0x2, 0x686, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x687, 0x689, 
       0x7, 0x7, 0x2, 0x2, 0x688, 0x687, 0x3, 0x2, 0x2, 0x2, 0x689, 0x68c, 
       0x3, 0x2, 0x2, 0x2, 0x68a, 0x688, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 
       0x3, 0x2, 0x2, 0x2, 0x68b, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x68a, 
       0x3, 0x2, 0x2, 0x2, 0x68d, 0x68f, 0x5, 0x1c, 0xf, 0x2, 0x68e, 0x68a, 
       0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x690, 0x692, 0x5, 0x132, 0x9a, 0x2, 0x691, 0x690, 
       0x3, 0x2, 0x2, 0x2, 0x691, 0x692, 0x3, 0x2, 0x2, 0x2, 0x692, 0x697, 
       0x3, 0x2, 0x2, 0x2, 0x693, 0x698, 0x5, 0x7a, 0x3e, 0x2, 0x694, 0x698, 
       0x5, 0x68, 0x35, 0x2, 0x695, 0x698, 0x5, 0x66, 0x34, 0x2, 0x696, 
       0x698, 0x5, 0x76, 0x3c, 0x2, 0x697, 0x693, 0x3, 0x2, 0x2, 0x2, 0x697, 
       0x694, 0x3, 0x2, 0x2, 0x2, 0x697, 0x695, 0x3, 0x2, 0x2, 0x2, 0x697, 
       0x696, 0x3, 0x2, 0x2, 0x2, 0x698, 0x65, 0x3, 0x2, 0x2, 0x2, 0x699, 
       0x69c, 0x5, 0x6c, 0x37, 0x2, 0x69a, 0x69c, 0x7, 0x6c, 0x2, 0x2, 0x69b, 
       0x699, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69c, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x6a0, 0x5, 0x66, 0x34, 0x2, 0x69e, 
       0x6a0, 0x5, 0x7a, 0x3e, 0x2, 0x69f, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x69f, 
       0x69e, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a4, 0x3, 0x2, 0x2, 0x2, 0x6a1, 
       0x6a3, 0x7, 0x7, 0x2, 0x2, 0x6a2, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a3, 
       0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a4, 
       0x6a5, 0x3, 0x2, 0x2, 0x2, 0x6a5, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6a6, 
       0x6a4, 0x3, 0x2, 0x2, 0x2, 0x6a7, 0x6a9, 0x5, 0x6a, 0x36, 0x2, 0x6a8, 
       0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6aa, 
       0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ad, 0x9, 0x5, 0x2, 0x2, 0x6ad, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x6ae, 0x6bf, 0x5, 0x6e, 0x38, 0x2, 0x6af, 
       0x6b1, 0x7, 0x7, 0x2, 0x2, 0x6b0, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
       0x6b4, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6b2, 
       0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b4, 
       0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0x6b9, 0x7, 0x9, 0x2, 0x2, 0x6b6, 
       0x6b8, 0x7, 0x7, 0x2, 0x2, 0x6b7, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b8, 
       0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bb, 
       0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6be, 0x5, 0x6e, 0x38, 0x2, 0x6bd, 
       0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6bf, 
       0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6c0, 
       0x6d, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6c2, 
       0x6ca, 0x5, 0x158, 0xad, 0x2, 0x6c3, 0x6c5, 0x7, 0x7, 0x2, 0x2, 0x6c4, 
       0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6c6, 
       0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 
       0x6c9, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6c9, 
       0x6cb, 0x5, 0xce, 0x68, 0x2, 0x6ca, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6ca, 
       0x6cb, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6cc, 
       0x6ce, 0x5, 0x72, 0x3a, 0x2, 0x6cd, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6cd, 
       0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6ce, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6cf, 
       0x6d2, 0x5, 0x64, 0x33, 0x2, 0x6d0, 0x6d2, 0x7, 0x11, 0x2, 0x2, 0x6d1, 
       0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6d2, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x6d3, 0x6d5, 0x5, 0x74, 0x3b, 0x2, 0x6d4, 
       0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d6, 
       0x6d4, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6d7, 
       0x73, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6dc, 0x5, 0x13c, 0x9f, 0x2, 0x6d9, 
       0x6db, 0x7, 0x7, 0x2, 0x2, 0x6da, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6db, 
       0x6de, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6da, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6de, 
       0x6dc, 0x3, 0x2, 0x2, 0x2, 0x6df, 0x6e1, 0x5, 0x14e, 0xa8, 0x2, 0x6e0, 
       0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6e1, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e6, 0x5, 0x7c, 0x3f, 0x2, 0x6e3, 
       0x6e5, 0x7, 0x7, 0x2, 0x2, 0x6e4, 0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6e5, 
       0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6e6, 
       0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e7, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6e8, 
       0x6e6, 0x3, 0x2, 0x2, 0x2, 0x6e9, 0x6ed, 0x7, 0x9, 0x2, 0x2, 0x6ea, 
       0x6ec, 0x7, 0x7, 0x2, 0x2, 0x6eb, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6ec, 
       0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6ed, 
       0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6ef, 
       0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6f0, 
       0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x6f2, 
       0x6f6, 0x5, 0x78, 0x3d, 0x2, 0x6f3, 0x6f5, 0x7, 0x7, 0x2, 0x2, 0x6f4, 
       0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f6, 
       0x6f4, 0x3, 0x2, 0x2, 0x2, 0x6f6, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6f7, 
       0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6f8, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x6f9, 
       0x6fd, 0x7, 0x24, 0x2, 0x2, 0x6fa, 0x6fc, 0x7, 0x7, 0x2, 0x2, 0x6fb, 
       0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fc, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x6fd, 
       0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6fe, 0x3, 0x2, 0x2, 0x2, 0x6fe, 
       0x700, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x700, 
       0x701, 0x5, 0x64, 0x33, 0x2, 0x701, 0x77, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x706, 0x7, 0xb, 0x2, 0x2, 0x703, 0x705, 0x7, 0x7, 0x2, 0x2, 0x704, 
       0x703, 0x3, 0x2, 0x2, 0x2, 0x705, 0x708, 0x3, 0x2, 0x2, 0x2, 0x706, 
       0x704, 0x3, 0x2, 0x2, 0x2, 0x706, 0x707, 0x3, 0x2, 0x2, 0x2, 0x707, 
       0x70b, 0x3, 0x2, 0x2, 0x2, 0x708, 0x706, 0x3, 0x2, 0x2, 0x2, 0x709, 
       0x70c, 0x5, 0x56, 0x2c, 0x2, 0x70a, 0x70c, 0x5, 0x64, 0x33, 0x2, 
       0x70b, 0x709, 0x3, 0x2, 0x2, 0x2, 0x70b, 0x70a, 0x3, 0x2, 0x2, 0x2, 
       0x70b, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x720, 0x3, 0x2, 0x2, 0x2, 
       0x70d, 0x70f, 0x7, 0x7, 0x2, 0x2, 0x70e, 0x70d, 0x3, 0x2, 0x2, 0x2, 
       0x70f, 0x712, 0x3, 0x2, 0x2, 0x2, 0x710, 0x70e, 0x3, 0x2, 0x2, 0x2, 
       0x710, 0x711, 0x3, 0x2, 0x2, 0x2, 0x711, 0x713, 0x3, 0x2, 0x2, 0x2, 
       0x712, 0x710, 0x3, 0x2, 0x2, 0x2, 0x713, 0x717, 0x7, 0xa, 0x2, 0x2, 
       0x714, 0x716, 0x7, 0x7, 0x2, 0x2, 0x715, 0x714, 0x3, 0x2, 0x2, 0x2, 
       0x716, 0x719, 0x3, 0x2, 0x2, 0x2, 0x717, 0x715, 0x3, 0x2, 0x2, 0x2, 
       0x717, 0x718, 0x3, 0x2, 0x2, 0x2, 0x718, 0x71c, 0x3, 0x2, 0x2, 0x2, 
       0x719, 0x717, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71d, 0x5, 0x56, 0x2c, 
       0x2, 0x71b, 0x71d, 0x5, 0x64, 0x33, 0x2, 0x71c, 0x71a, 0x3, 0x2, 
       0x2, 0x2, 0x71c, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71f, 0x3, 0x2, 
       0x2, 0x2, 0x71e, 0x710, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x722, 0x3, 0x2, 
       0x2, 0x2, 0x720, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x720, 0x721, 0x3, 0x2, 
       0x2, 0x2, 0x721, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x722, 0x720, 0x3, 0x2, 
       0x2, 0x2, 0x723, 0x725, 0x7, 0x7, 0x2, 0x2, 0x724, 0x723, 0x3, 0x2, 
       0x2, 0x2, 0x725, 0x728, 0x3, 0x2, 0x2, 0x2, 0x726, 0x724, 0x3, 0x2, 
       0x2, 0x2, 0x726, 0x727, 0x3, 0x2, 0x2, 0x2, 0x727, 0x729, 0x3, 0x2, 
       0x2, 0x2, 0x728, 0x726, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72b, 0x7, 0xa, 
       0x2, 0x2, 0x72a, 0x726, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x72b, 0x3, 0x2, 
       0x2, 0x2, 0x72b, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72e, 0x7, 0x7, 
       0x2, 0x2, 0x72d, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x731, 0x3, 0x2, 
       0x2, 0x2, 0x72f, 0x72d, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x730, 0x3, 0x2, 
       0x2, 0x2, 0x730, 0x732, 0x3, 0x2, 0x2, 0x2, 0x731, 0x72f, 0x3, 0x2, 
       0x2, 0x2, 0x732, 0x733, 0x7, 0xc, 0x2, 0x2, 0x733, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x734, 0x738, 0x7, 0xb, 0x2, 0x2, 0x735, 0x737, 0x7, 0x7, 
       0x2, 0x2, 0x736, 0x735, 0x3, 0x2, 0x2, 0x2, 0x737, 0x73a, 0x3, 0x2, 
       0x2, 0x2, 0x738, 0x736, 0x3, 0x2, 0x2, 0x2, 0x738, 0x739, 0x3, 0x2, 
       0x2, 0x2, 0x739, 0x73b, 0x3, 0x2, 0x2, 0x2, 0x73a, 0x738, 0x3, 0x2, 
       0x2, 0x2, 0x73b, 0x73f, 0x5, 0x64, 0x33, 0x2, 0x73c, 0x73e, 0x7, 
       0x7, 0x2, 0x2, 0x73d, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x741, 0x3, 
       0x2, 0x2, 0x2, 0x73f, 0x73d, 0x3, 0x2, 0x2, 0x2, 0x73f, 0x740, 0x3, 
       0x2, 0x2, 0x2, 0x740, 0x742, 0x3, 0x2, 0x2, 0x2, 0x741, 0x73f, 0x3, 
       0x2, 0x2, 0x2, 0x742, 0x743, 0x7, 0xc, 0x2, 0x2, 0x743, 0x7b, 0x3, 
       0x2, 0x2, 0x2, 0x744, 0x746, 0x5, 0x132, 0x9a, 0x2, 0x745, 0x744, 
       0x3, 0x2, 0x2, 0x2, 0x745, 0x746, 0x3, 0x2, 0x2, 0x2, 0x746, 0x74a, 
       0x3, 0x2, 0x2, 0x2, 0x747, 0x74b, 0x5, 0x7a, 0x3e, 0x2, 0x748, 0x74b, 
       0x5, 0x68, 0x35, 0x2, 0x749, 0x74b, 0x5, 0x66, 0x34, 0x2, 0x74a, 
       0x747, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x748, 0x3, 0x2, 0x2, 0x2, 0x74a, 
       0x749, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x74c, 
       0x750, 0x7, 0xb, 0x2, 0x2, 0x74d, 0x74f, 0x7, 0x7, 0x2, 0x2, 0x74e, 
       0x74d, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x752, 0x3, 0x2, 0x2, 0x2, 0x750, 
       0x74e, 0x3, 0x2, 0x2, 0x2, 0x750, 0x751, 0x3, 0x2, 0x2, 0x2, 0x751, 
       0x755, 0x3, 0x2, 0x2, 0x2, 0x752, 0x750, 0x3, 0x2, 0x2, 0x2, 0x753, 
       0x756, 0x5, 0x6c, 0x37, 0x2, 0x754, 0x756, 0x5, 0x7e, 0x40, 0x2, 
       0x755, 0x753, 0x3, 0x2, 0x2, 0x2, 0x755, 0x754, 0x3, 0x2, 0x2, 0x2, 
       0x756, 0x75a, 0x3, 0x2, 0x2, 0x2, 0x757, 0x759, 0x7, 0x7, 0x2, 0x2, 
       0x758, 0x757, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75c, 0x3, 0x2, 0x2, 0x2, 
       0x75a, 0x758, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 0x3, 0x2, 0x2, 0x2, 
       0x75b, 0x75d, 0x3, 0x2, 0x2, 0x2, 0x75c, 0x75a, 0x3, 0x2, 0x2, 0x2, 
       0x75d, 0x75e, 0x7, 0xc, 0x2, 0x2, 0x75e, 0x7f, 0x3, 0x2, 0x2, 0x2, 
       0x75f, 0x765, 0x5, 0x82, 0x42, 0x2, 0x760, 0x761, 0x5, 0x96, 0x4c, 
       0x2, 0x761, 0x762, 0x5, 0x82, 0x42, 0x2, 0x762, 0x764, 0x3, 0x2, 
       0x2, 0x2, 0x763, 0x760, 0x3, 0x2, 0x2, 0x2, 0x764, 0x767, 0x3, 0x2, 
       0x2, 0x2, 0x765, 0x763, 0x3, 0x2, 0x2, 0x2, 0x765, 0x766, 0x3, 0x2, 
       0x2, 0x2, 0x766, 0x769, 0x3, 0x2, 0x2, 0x2, 0x767, 0x765, 0x3, 0x2, 
       0x2, 0x2, 0x768, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x768, 0x769, 0x3, 0x2, 
       0x2, 0x2, 0x769, 0x76b, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76c, 0x5, 0x96, 
       0x4c, 0x2, 0x76b, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x76c, 0x3, 0x2, 
       0x2, 0x2, 0x76c, 0x81, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x770, 0x5, 0x84, 
       0x43, 0x2, 0x76e, 0x770, 0x5, 0x14e, 0xa8, 0x2, 0x76f, 0x76d, 0x3, 
       0x2, 0x2, 0x2, 0x76f, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x770, 0x773, 0x3, 
       0x2, 0x2, 0x2, 0x771, 0x76f, 0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x3, 
       0x2, 0x2, 0x2, 0x772, 0x778, 0x3, 0x2, 0x2, 0x2, 0x773, 0x771, 0x3, 
       0x2, 0x2, 0x2, 0x774, 0x779, 0x5, 0x16, 0xc, 0x2, 0x775, 0x779, 0x5, 
       0x92, 0x4a, 0x2, 0x776, 0x779, 0x5, 0x8a, 0x46, 0x2, 0x777, 0x779, 
       0x5, 0x98, 0x4d, 0x2, 0x778, 0x774, 0x3, 0x2, 0x2, 0x2, 0x778, 0x775, 
       0x3, 0x2, 0x2, 0x2, 0x778, 0x776, 0x3, 0x2, 0x2, 0x2, 0x778, 0x777, 
       0x3, 0x2, 0x2, 0x2, 0x779, 0x83, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x77b, 
       0x5, 0x158, 0xad, 0x2, 0x77b, 0x77f, 0x9, 0x6, 0x2, 0x2, 0x77c, 0x77e, 
       0x7, 0x7, 0x2, 0x2, 0x77d, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x781, 
       0x3, 0x2, 0x2, 0x2, 0x77f, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x780, 
       0x3, 0x2, 0x2, 0x2, 0x780, 0x85, 0x3, 0x2, 0x2, 0x2, 0x781, 0x77f, 
       0x3, 0x2, 0x2, 0x2, 0x782, 0x785, 0x5, 0x88, 0x45, 0x2, 0x783, 0x785, 
       0x5, 0x82, 0x42, 0x2, 0x784, 0x782, 0x3, 0x2, 0x2, 0x2, 0x784, 0x783, 
       0x3, 0x2, 0x2, 0x2, 0x785, 0x87, 0x3, 0x2, 0x2, 0x2, 0x786, 0x78a, 
       0x7, 0xf, 0x2, 0x2, 0x787, 0x789, 0x7, 0x7, 0x2, 0x2, 0x788, 0x787, 
       0x3, 0x2, 0x2, 0x2, 0x789, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78a, 0x788, 
       0x3, 0x2, 0x2, 0x2, 0x78a, 0x78b, 0x3, 0x2, 0x2, 0x2, 0x78b, 0x78d, 
       0x3, 0x2, 0x2, 0x2, 0x78c, 0x78a, 0x3, 0x2, 0x2, 0x2, 0x78d, 0x791, 
       0x5, 0x80, 0x41, 0x2, 0x78e, 0x790, 0x7, 0x7, 0x2, 0x2, 0x78f, 0x78e, 
       0x3, 0x2, 0x2, 0x2, 0x790, 0x793, 0x3, 0x2, 0x2, 0x2, 0x791, 0x78f, 
       0x3, 0x2, 0x2, 0x2, 0x791, 0x792, 0x3, 0x2, 0x2, 0x2, 0x792, 0x794, 
       0x3, 0x2, 0x2, 0x2, 0x793, 0x791, 0x3, 0x2, 0x2, 0x2, 0x794, 0x795, 
       0x7, 0x10, 0x2, 0x2, 0x795, 0x89, 0x3, 0x2, 0x2, 0x2, 0x796, 0x79a, 
       0x5, 0x8c, 0x47, 0x2, 0x797, 0x79a, 0x5, 0x8e, 0x48, 0x2, 0x798, 
       0x79a, 0x5, 0x90, 0x49, 0x2, 0x799, 0x796, 0x3, 0x2, 0x2, 0x2, 0x799, 
       0x797, 0x3, 0x2, 0x2, 0x2, 0x799, 0x798, 0x3, 0x2, 0x2, 0x2, 0x79a, 
       0x8b, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79f, 0x7, 0x5f, 0x2, 0x2, 0x79c, 
       0x79e, 0x7, 0x7, 0x2, 0x2, 0x79d, 0x79c, 0x3, 0x2, 0x2, 0x2, 0x79e, 
       0x7a1, 0x3, 0x2, 0x2, 0x2, 0x79f, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x79f, 
       0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x7a1, 
       0x79f, 0x3, 0x2, 0x2, 0x2, 0x7a2, 0x7a6, 0x7, 0xb, 0x2, 0x2, 0x7a3, 
       0x7a5, 0x5, 0x14e, 0xa8, 0x2, 0x7a4, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a5, 
       0x7a8, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x7a7, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7ab, 0x3, 0x2, 0x2, 0x2, 0x7a8, 
       0x7a6, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7ac, 0x5, 0x44, 0x23, 0x2, 0x7aa, 
       0x7ac, 0x5, 0x46, 0x24, 0x2, 0x7ab, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7ab, 
       0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ac, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7ad, 
       0x7ae, 0x7, 0x68, 0x2, 0x2, 0x7ae, 0x7af, 0x5, 0x98, 0x4d, 0x2, 0x7af, 
       0x7b3, 0x7, 0xc, 0x2, 0x2, 0x7b0, 0x7b2, 0x7, 0x7, 0x2, 0x2, 0x7b1, 
       0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b5, 0x3, 0x2, 0x2, 0x2, 0x7b3, 
       0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7b4, 
       0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b5, 0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7b6, 
       0x7b8, 0x5, 0x86, 0x44, 0x2, 0x7b7, 0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7b7, 
       0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b8, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x7b9, 
       0x7bd, 0x7, 0x61, 0x2, 0x2, 0x7ba, 0x7bc, 0x7, 0x7, 0x2, 0x2, 0x7bb, 
       0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7bd, 
       0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7be, 
       0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7bd, 0x3, 0x2, 0x2, 0x2, 0x7c0, 
       0x7c1, 0x7, 0xb, 0x2, 0x2, 0x7c1, 0x7c2, 0x5, 0x98, 0x4d, 0x2, 0x7c2, 
       0x7c6, 0x7, 0xc, 0x2, 0x2, 0x7c3, 0x7c5, 0x7, 0x7, 0x2, 0x2, 0x7c4, 
       0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x7c6, 
       0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c7, 
       0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x7c9, 
       0x7cc, 0x5, 0x86, 0x44, 0x2, 0x7ca, 0x7cc, 0x7, 0x1d, 0x2, 0x2, 0x7cb, 
       0x7c9, 0x3, 0x2, 0x2, 0x2, 0x7cb, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7cc, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7d1, 0x7, 0x60, 0x2, 0x2, 0x7ce, 
       0x7d0, 0x7, 0x7, 0x2, 0x2, 0x7cf, 0x7ce, 0x3, 0x2, 0x2, 0x2, 0x7d0, 
       0x7d3, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7cf, 0x3, 0x2, 0x2, 0x2, 0x7d1, 
       0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d2, 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7d3, 
       0x7d1, 0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d6, 0x5, 0x86, 0x44, 0x2, 0x7d5, 
       0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d6, 
       0x7da, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d9, 0x7, 0x7, 0x2, 0x2, 0x7d8, 
       0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d9, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7da, 
       0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7db, 
       0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x7dd, 
       0x7e1, 0x7, 0x61, 0x2, 0x2, 0x7de, 0x7e0, 0x7, 0x7, 0x2, 0x2, 0x7df, 
       0x7de, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7e1, 
       0x7df, 0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x7e2, 
       0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e4, 
       0x7e5, 0x7, 0xb, 0x2, 0x2, 0x7e5, 0x7e6, 0x5, 0x98, 0x4d, 0x2, 0x7e6, 
       0x7e7, 0x7, 0xc, 0x2, 0x2, 0x7e7, 0x91, 0x3, 0x2, 0x2, 0x2, 0x7e8, 
       0x7e9, 0x5, 0xbc, 0x5f, 0x2, 0x7e9, 0x7ea, 0x7, 0x1e, 0x2, 0x2, 0x7ea, 
       0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ec, 0x5, 0xc0, 0x61, 0x2, 0x7ec, 
       0x7ed, 0x5, 0x112, 0x8a, 0x2, 0x7ed, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7ee, 
       0x7e8, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0x7ef, 
       0x7f3, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f2, 0x7, 0x7, 0x2, 0x2, 0x7f1, 
       0x7f0, 0x3, 0x2, 0x2, 0x2, 0x7f2, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x7f3, 
       0x7f1, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x7f4, 
       0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f3, 0x3, 0x2, 0x2, 0x2, 0x7f6, 
       0x7f7, 0x5, 0x98, 0x4d, 0x2, 0x7f7, 0x93, 0x3, 0x2, 0x2, 0x2, 0x7f8, 
       0x7fc, 0x9, 0x7, 0x2, 0x2, 0x7f9, 0x7fb, 0x7, 0x7, 0x2, 0x2, 0x7fa, 
       0x7f9, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fc, 
       0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fd, 
       0x801, 0x3, 0x2, 0x2, 0x2, 0x7fe, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7ff, 
       0x801, 0x7, 0x2, 0x2, 0x3, 0x800, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x800, 
       0x7ff, 0x3, 0x2, 0x2, 0x2, 0x801, 0x95, 0x3, 0x2, 0x2, 0x2, 0x802, 
       0x804, 0x9, 0x7, 0x2, 0x2, 0x803, 0x802, 0x3, 0x2, 0x2, 0x2, 0x804, 
       0x805, 0x3, 0x2, 0x2, 0x2, 0x805, 0x803, 0x3, 0x2, 0x2, 0x2, 0x805, 
       0x806, 0x3, 0x2, 0x2, 0x2, 0x806, 0x809, 0x3, 0x2, 0x2, 0x2, 0x807, 
       0x809, 0x7, 0x2, 0x2, 0x3, 0x808, 0x803, 0x3, 0x2, 0x2, 0x2, 0x808, 
       0x807, 0x3, 0x2, 0x2, 0x2, 0x809, 0x97, 0x3, 0x2, 0x2, 0x2, 0x80a, 
       0x80b, 0x5, 0x9a, 0x4e, 0x2, 0x80b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x80c, 
       0x81d, 0x5, 0x9c, 0x4f, 0x2, 0x80d, 0x80f, 0x7, 0x7, 0x2, 0x2, 0x80e, 
       0x80d, 0x3, 0x2, 0x2, 0x2, 0x80f, 0x812, 0x3, 0x2, 0x2, 0x2, 0x810, 
       0x80e, 0x3, 0x2, 0x2, 0x2, 0x810, 0x811, 0x3, 0x2, 0x2, 0x2, 0x811, 
       0x813, 0x3, 0x2, 0x2, 0x2, 0x812, 0x810, 0x3, 0x2, 0x2, 0x2, 0x813, 
       0x817, 0x7, 0x19, 0x2, 0x2, 0x814, 0x816, 0x7, 0x7, 0x2, 0x2, 0x815, 
       0x814, 0x3, 0x2, 0x2, 0x2, 0x816, 0x819, 0x3, 0x2, 0x2, 0x2, 0x817, 
       0x815, 0x3, 0x2, 0x2, 0x2, 0x817, 0x818, 0x3, 0x2, 0x2, 0x2, 0x818, 
       0x81a, 0x3, 0x2, 0x2, 0x2, 0x819, 0x817, 0x3, 0x2, 0x2, 0x2, 0x81a, 
       0x81c, 0x5, 0x9c, 0x4f, 0x2, 0x81b, 0x810, 0x3, 0x2, 0x2, 0x2, 0x81c, 
       0x81f, 0x3, 0x2, 0x2, 0x2, 0x81d, 0x81b, 0x3, 0x2, 0x2, 0x2, 0x81d, 
       0x81e, 0x3, 0x2, 0x2, 0x2, 0x81e, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x81f, 
       0x81d, 0x3, 0x2, 0x2, 0x2, 0x820, 0x831, 0x5, 0x9e, 0x50, 0x2, 0x821, 
       0x823, 0x7, 0x7, 0x2, 0x2, 0x822, 0x821, 0x3, 0x2, 0x2, 0x2, 0x823, 
       0x826, 0x3, 0x2, 0x2, 0x2, 0x824, 0x822, 0x3, 0x2, 0x2, 0x2, 0x824, 
       0x825, 0x3, 0x2, 0x2, 0x2, 0x825, 0x827, 0x3, 0x2, 0x2, 0x2, 0x826, 
       0x824, 0x3, 0x2, 0x2, 0x2, 0x827, 0x82b, 0x7, 0x18, 0x2, 0x2, 0x828, 
       0x82a, 0x7, 0x7, 0x2, 0x2, 0x829, 0x828, 0x3, 0x2, 0x2, 0x2, 0x82a, 
       0x82d, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x829, 0x3, 0x2, 0x2, 0x2, 0x82b, 
       0x82c, 0x3, 0x2, 0x2, 0x2, 0x82c, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x82d, 
       0x82b, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x830, 0x5, 0x9e, 0x50, 0x2, 0x82f, 
       0x824, 0x3, 0x2, 0x2, 0x2, 0x830, 0x833, 0x3, 0x2, 0x2, 0x2, 0x831, 
       0x82f, 0x3, 0x2, 0x2, 0x2, 0x831, 0x832, 0x3, 0x2, 0x2, 0x2, 0x832, 
       0x9d, 0x3, 0x2, 0x2, 0x2, 0x833, 0x831, 0x3, 0x2, 0x2, 0x2, 0x834, 
       0x840, 0x5, 0xa0, 0x51, 0x2, 0x835, 0x839, 0x5, 0x114, 0x8b, 0x2, 
       0x836, 0x838, 0x7, 0x7, 0x2, 0x2, 0x837, 0x836, 0x3, 0x2, 0x2, 0x2, 
       0x838, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x839, 0x837, 0x3, 0x2, 0x2, 0x2, 
       0x839, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83c, 0x3, 0x2, 0x2, 0x2, 
       0x83b, 0x839, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x83d, 0x5, 0xa0, 0x51, 
       0x2, 0x83d, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83e, 0x835, 0x3, 0x2, 0x2, 
       0x2, 0x83f, 0x842, 0x3, 0x2, 0x2, 0x2, 0x840, 0x83e, 0x3, 0x2, 0x2, 
       0x2, 0x840, 0x841, 0x3, 0x2, 0x2, 0x2, 0x841, 0x9f, 0x3, 0x2, 0x2, 
       0x2, 0x842, 0x840, 0x3, 0x2, 0x2, 0x2, 0x843, 0x84f, 0x5, 0xa2, 0x52, 
       0x2, 0x844, 0x848, 0x5, 0x116, 0x8c, 0x2, 0x845, 0x847, 0x7, 0x7, 
       0x2, 0x2, 0x846, 0x845, 0x3, 0x2, 0x2, 0x2, 0x847, 0x84a, 0x3, 0x2, 
       0x2, 0x2, 0x848, 0x846, 0x3, 0x2, 0x2, 0x2, 0x848, 0x849, 0x3, 0x2, 
       0x2, 0x2, 0x849, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x848, 0x3, 0x2, 
       0x2, 0x2, 0x84b, 0x84c, 0x5, 0xa2, 0x52, 0x2, 0x84c, 0x84e, 0x3, 
       0x2, 0x2, 0x2, 0x84d, 0x844, 0x3, 0x2, 0x2, 0x2, 0x84e, 0x851, 0x3, 
       0x2, 0x2, 0x2, 0x84f, 0x84d, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x850, 0x3, 
       0x2, 0x2, 0x2, 0x850, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x851, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x84f, 0x3, 0x2, 0x2, 0x2, 0x852, 0x856, 0x5, 0xa4, 0x53, 0x2, 0x853, 
       0x855, 0x5, 0xca, 0x66, 0x2, 0x854, 0x853, 0x3, 0x2, 0x2, 0x2, 0x855, 
       0x858, 0x3, 0x2, 0x2, 0x2, 0x856, 0x854, 0x3, 0x2, 0x2, 0x2, 0x856, 
       0x857, 0x3, 0x2, 0x2, 0x2, 0x857, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x858, 
       0x856, 0x3, 0x2, 0x2, 0x2, 0x859, 0x86e, 0x5, 0xa6, 0x54, 0x2, 0x85a, 
       0x85e, 0x5, 0x118, 0x8d, 0x2, 0x85b, 0x85d, 0x7, 0x7, 0x2, 0x2, 0x85c, 
       0x85b, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x860, 0x3, 0x2, 0x2, 0x2, 0x85e, 
       0x85c, 0x3, 0x2, 0x2, 0x2, 0x85e, 0x85f, 0x3, 0x2, 0x2, 0x2, 0x85f, 
       0x861, 0x3, 0x2, 0x2, 0x2, 0x860, 0x85e, 0x3, 0x2, 0x2, 0x2, 0x861, 
       0x862, 0x5, 0xa6, 0x54, 0x2, 0x862, 0x86d, 0x3, 0x2, 0x2, 0x2, 0x863, 
       0x867, 0x5, 0x11a, 0x8e, 0x2, 0x864, 0x866, 0x7, 0x7, 0x2, 0x2, 0x865, 
       0x864, 0x3, 0x2, 0x2, 0x2, 0x866, 0x869, 0x3, 0x2, 0x2, 0x2, 0x867, 
       0x865, 0x3, 0x2, 0x2, 0x2, 0x867, 0x868, 0x3, 0x2, 0x2, 0x2, 0x868, 
       0x86a, 0x3, 0x2, 0x2, 0x2, 0x869, 0x867, 0x3, 0x2, 0x2, 0x2, 0x86a, 
       0x86b, 0x5, 0x64, 0x33, 0x2, 0x86b, 0x86d, 0x3, 0x2, 0x2, 0x2, 0x86c, 
       0x85a, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x863, 0x3, 0x2, 0x2, 0x2, 0x86d, 
       0x870, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x86e, 
       0x86f, 0x3, 0x2, 0x2, 0x2, 0x86f, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x870, 
       0x86e, 0x3, 0x2, 0x2, 0x2, 0x871, 0x883, 0x5, 0xaa, 0x56, 0x2, 0x872, 
       0x874, 0x7, 0x7, 0x2, 0x2, 0x873, 0x872, 0x3, 0x2, 0x2, 0x2, 0x874, 
       0x877, 0x3, 0x2, 0x2, 0x2, 0x875, 0x873, 0x3, 0x2, 0x2, 0x2, 0x875, 
       0x876, 0x3, 0x2, 0x2, 0x2, 0x876, 0x878, 0x3, 0x2, 0x2, 0x2, 0x877, 
       0x875, 0x3, 0x2, 0x2, 0x2, 0x878, 0x87c, 0x5, 0xa8, 0x55, 0x2, 0x879, 
       0x87b, 0x7, 0x7, 0x2, 0x2, 0x87a, 0x879, 0x3, 0x2, 0x2, 0x2, 0x87b, 
       0x87e, 0x3, 0x2, 0x2, 0x2, 0x87c, 0x87a, 0x3, 0x2, 0x2, 0x2, 0x87c, 
       0x87d, 0x3, 0x2, 0x2, 0x2, 0x87d, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x87e, 
       0x87c, 0x3, 0x2, 0x2, 0x2, 0x87f, 0x880, 0x5, 0xaa, 0x56, 0x2, 0x880, 
       0x882, 0x3, 0x2, 0x2, 0x2, 0x881, 0x875, 0x3, 0x2, 0x2, 0x2, 0x882, 
       0x885, 0x3, 0x2, 0x2, 0x2, 0x883, 0x881, 0x3, 0x2, 0x2, 0x2, 0x883, 
       0x884, 0x3, 0x2, 0x2, 0x2, 0x884, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x885, 
       0x883, 0x3, 0x2, 0x2, 0x2, 0x886, 0x887, 0x7, 0x2f, 0x2, 0x2, 0x887, 
       0x888, 0x7, 0x1c, 0x2, 0x2, 0x888, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x889, 
       0x895, 0x5, 0xac, 0x57, 0x2, 0x88a, 0x88e, 0x5, 0x158, 0xad, 0x2, 
       0x88b, 0x88d, 0x7, 0x7, 0x2, 0x2, 0x88c, 0x88b, 0x3, 0x2, 0x2, 0x2, 
       0x88d, 0x890, 0x3, 0x2, 0x2, 0x2, 0x88e, 0x88c, 0x3, 0x2, 0x2, 0x2, 
       0x88e, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x88f, 0x891, 0x3, 0x2, 0x2, 0x2, 
       0x890, 0x88e, 0x3, 0x2, 0x2, 0x2, 0x891, 0x892, 0x5, 0xac, 0x57, 
       0x2, 0x892, 0x894, 0x3, 0x2, 0x2, 0x2, 0x893, 0x88a, 0x3, 0x2, 0x2, 
       0x2, 0x894, 0x897, 0x3, 0x2, 0x2, 0x2, 0x895, 0x893, 0x3, 0x2, 0x2, 
       0x2, 0x895, 0x896, 0x3, 0x2, 0x2, 0x2, 0x896, 0xab, 0x3, 0x2, 0x2, 
       0x2, 0x897, 0x895, 0x3, 0x2, 0x2, 0x2, 0x898, 0x8a3, 0x5, 0xae, 0x58, 
       0x2, 0x899, 0x89d, 0x7, 0x26, 0x2, 0x2, 0x89a, 0x89c, 0x7, 0x7, 0x2, 
       0x2, 0x89b, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x89c, 0x89f, 0x3, 0x2, 0x2, 
       0x2, 0x89d, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x89d, 0x89e, 0x3, 0x2, 0x2, 
       0x2, 0x89e, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x89d, 0x3, 0x2, 0x2, 
       0x2, 0x8a0, 0x8a2, 0x5, 0xae, 0x58, 0x2, 0x8a1, 0x899, 0x3, 0x2, 
       0x2, 0x2, 0x8a2, 0x8a5, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a1, 0x3, 0x2, 
       0x2, 0x2, 0x8a3, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a4, 0xad, 0x3, 0x2, 
       0x2, 0x2, 0x8a5, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8b2, 0x5, 0xb0, 
       0x59, 0x2, 0x8a7, 0x8ab, 0x5, 0x11c, 0x8f, 0x2, 0x8a8, 0x8aa, 0x7, 
       0x7, 0x2, 0x2, 0x8a9, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ad, 0x3, 
       0x2, 0x2, 0x2, 0x8ab, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8ab, 0x8ac, 0x3, 
       0x2, 0x2, 0x2, 0x8ac, 0x8ae, 0x3, 0x2, 0x2, 0x2, 0x8ad, 0x8ab, 0x3, 
       0x2, 0x2, 0x2, 0x8ae, 0x8af, 0x5, 0xb0, 0x59, 0x2, 0x8af, 0x8b1, 
       0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8b1, 0x8b4, 
       0x3, 0x2, 0x2, 0x2, 0x8b2, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8b2, 0x8b3, 
       0x3, 0x2, 0x2, 0x2, 0x8b3, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b2, 
       0x3, 0x2, 0x2, 0x2, 0x8b5, 0x8c1, 0x5, 0xb2, 0x5a, 0x2, 0x8b6, 0x8ba, 
       0x5, 0x11e, 0x90, 0x2, 0x8b7, 0x8b9, 0x7, 0x7, 0x2, 0x2, 0x8b8, 0x8b7, 
       0x3, 0x2, 0x2, 0x2, 0x8b9, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x8ba, 0x8b8, 
       0x3, 0x2, 0x2, 0x2, 0x8ba, 0x8bb, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8bd, 
       0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8ba, 0x3, 0x2, 0x2, 0x2, 0x8bd, 0x8be, 
       0x5, 0xb2, 0x5a, 0x2, 0x8be, 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8bf, 0x8b6, 
       0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8c3, 0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8bf, 
       0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8c2, 0x3, 0x2, 0x2, 0x2, 0x8c2, 0xb1, 
       0x3, 0x2, 0x2, 0x2, 0x8c3, 0x8c1, 0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8d6, 
       0x5, 0xb4, 0x5b, 0x2, 0x8c5, 0x8c7, 0x7, 0x7, 0x2, 0x2, 0x8c6, 0x8c5, 
       0x3, 0x2, 0x2, 0x2, 0x8c7, 0x8ca, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c6, 
       0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8cb, 
       0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8cf, 
       0x5, 0x120, 0x91, 0x2, 0x8cc, 0x8ce, 0x7, 0x7, 0x2, 0x2, 0x8cd, 0x8cc, 
       0x3, 0x2, 0x2, 0x2, 0x8ce, 0x8d1, 0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8cd, 
       0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8d0, 0x8d2, 
       0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8cf, 0x3, 0x2, 0x2, 0x2, 0x8d2, 0x8d3, 
       0x5, 0x64, 0x33, 0x2, 0x8d3, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8c8, 
       0x3, 0x2, 0x2, 0x2, 0x8d5, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d4, 
       0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8d7, 0x3, 0x2, 0x2, 0x2, 0x8d7, 0xb3, 
       0x3, 0x2, 0x2, 0x2, 0x8d8, 0x8d6, 0x3, 0x2, 0x2, 0x2, 0x8d9, 0x8db, 
       0x5, 0xb6, 0x5c, 0x2, 0x8da, 0x8d9, 0x3, 0x2, 0x2, 0x2, 0x8db, 0x8de, 
       0x3, 0x2, 0x2, 0x2, 0x8dc, 0x8da, 0x3, 0x2, 0x2, 0x2, 0x8dc, 0x8dd, 
       0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8df, 0x3, 0x2, 0x2, 0x2, 0x8de, 0x8dc, 
       0x3, 0x2, 0x2, 0x2, 0x8df, 0x8e0, 0x5, 0xb8, 0x5d, 0x2, 0x8e0, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8eb, 0x5, 0x14e, 0xa8, 0x2, 0x8e2, 0x8eb, 
       0x5, 0x84, 0x43, 0x2, 0x8e3, 0x8e7, 0x5, 0x122, 0x92, 0x2, 0x8e4, 
       0x8e6, 0x7, 0x7, 0x2, 0x2, 0x8e5, 0x8e4, 0x3, 0x2, 0x2, 0x2, 0x8e6, 
       0x8e9, 0x3, 0x2, 0x2, 0x2, 0x8e7, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8e7, 
       0x8e8, 0x3, 0x2, 0x2, 0x2, 0x8e8, 0x8eb, 0x3, 0x2, 0x2, 0x2, 0x8e9, 
       0x8e7, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x8ea, 
       0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8e3, 0x3, 0x2, 0x2, 0x2, 0x8eb, 
       0xb7, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8f0, 0x5, 0xd4, 0x6b, 0x2, 0x8ed, 
       0x8ef, 0x5, 0xba, 0x5e, 0x2, 0x8ee, 0x8ed, 0x3, 0x2, 0x2, 0x2, 0x8ef, 
       0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8f0, 
       0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x8f2, 
       0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f9, 0x5, 0x124, 0x93, 0x2, 0x8f4, 
       0x8f9, 0x5, 0xce, 0x68, 0x2, 0x8f5, 0x8f9, 0x5, 0xca, 0x66, 0x2, 
       0x8f6, 0x8f9, 0x5, 0xc6, 0x64, 0x2, 0x8f7, 0x8f9, 0x5, 0xc8, 0x65, 
       0x2, 0x8f8, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f4, 0x3, 0x2, 0x2, 
       0x2, 0x8f8, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f6, 0x3, 0x2, 0x2, 
       0x2, 0x8f8, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0xbb, 0x3, 0x2, 0x2, 
       0x2, 0x8fa, 0x8fb, 0x5, 0xb8, 0x5d, 0x2, 0x8fb, 0x8fc, 0x5, 0xc4, 
       0x63, 0x2, 0x8fc, 0x900, 0x3, 0x2, 0x2, 0x2, 0x8fd, 0x900, 0x5, 0x158, 
       0xad, 0x2, 0x8fe, 0x900, 0x5, 0xbe, 0x60, 0x2, 0x8ff, 0x8fa, 0x3, 
       0x2, 0x2, 0x2, 0x8ff, 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x8ff, 0x8fe, 0x3, 
       0x2, 0x2, 0x2, 0x900, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x901, 0x905, 0x7, 
       0xb, 0x2, 0x2, 0x902, 0x904, 0x7, 0x7, 0x2, 0x2, 0x903, 0x902, 0x3, 
       0x2, 0x2, 0x2, 0x904, 0x907, 0x3, 0x2, 0x2, 0x2, 0x905, 0x903, 0x3, 
       0x2, 0x2, 0x2, 0x905, 0x906, 0x3, 0x2, 0x2, 0x2, 0x906, 0x908, 0x3, 
       0x2, 0x2, 0x2, 0x907, 0x905, 0x3, 0x2, 0x2, 0x2, 0x908, 0x90c, 0x5, 
       0xbc, 0x5f, 0x2, 0x909, 0x90b, 0x7, 0x7, 0x2, 0x2, 0x90a, 0x909, 
       0x3, 0x2, 0x2, 0x2, 0x90b, 0x90e, 0x3, 0x2, 0x2, 0x2, 0x90c, 0x90a, 
       0x3, 0x2, 0x2, 0x2, 0x90c, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x90d, 0x90f, 
       0x3, 0x2, 0x2, 0x2, 0x90e, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x90f, 0x910, 
       0x7, 0xc, 0x2, 0x2, 0x910, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x911, 0x914, 
       0x5, 0xb4, 0x5b, 0x2, 0x912, 0x914, 0x5, 0xc2, 0x62, 0x2, 0x913, 
       0x911, 0x3, 0x2, 0x2, 0x2, 0x913, 0x912, 0x3, 0x2, 0x2, 0x2, 0x914, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0x915, 0x919, 0x7, 0xb, 0x2, 0x2, 0x916, 
       0x918, 0x7, 0x7, 0x2, 0x2, 0x917, 0x916, 0x3, 0x2, 0x2, 0x2, 0x918, 
       0x91b, 0x3, 0x2, 0x2, 0x2, 0x919, 0x917, 0x3, 0x2, 0x2, 0x2, 0x919, 
       0x91a, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x91b, 
       0x919, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x920, 0x5, 0xc0, 0x61, 0x2, 0x91d, 
       0x91f, 0x7, 0x7, 0x2, 0x2, 0x91e, 0x91d, 0x3, 0x2, 0x2, 0x2, 0x91f, 
       0x922, 0x3, 0x2, 0x2, 0x2, 0x920, 0x91e, 0x3, 0x2, 0x2, 0x2, 0x920, 
       0x921, 0x3, 0x2, 0x2, 0x2, 0x921, 0x923, 0x3, 0x2, 0x2, 0x2, 0x922, 
       0x920, 0x3, 0x2, 0x2, 0x2, 0x923, 0x924, 0x7, 0xc, 0x2, 0x2, 0x924, 
       0xc3, 0x3, 0x2, 0x2, 0x2, 0x925, 0x929, 0x5, 0xce, 0x68, 0x2, 0x926, 
       0x929, 0x5, 0xc6, 0x64, 0x2, 0x927, 0x929, 0x5, 0xc8, 0x65, 0x2, 
       0x928, 0x925, 0x3, 0x2, 0x2, 0x2, 0x928, 0x926, 0x3, 0x2, 0x2, 0x2, 
       0x928, 0x927, 0x3, 0x2, 0x2, 0x2, 0x929, 0xc5, 0x3, 0x2, 0x2, 0x2, 
       0x92a, 0x92e, 0x7, 0xd, 0x2, 0x2, 0x92b, 0x92d, 0x7, 0x7, 0x2, 0x2, 
       0x92c, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x930, 0x3, 0x2, 0x2, 0x2, 
       0x92e, 0x92c, 0x3, 0x2, 0x2, 0x2, 0x92e, 0x92f, 0x3, 0x2, 0x2, 0x2, 
       0x92f, 0x931, 0x3, 0x2, 0x2, 0x2, 0x930, 0x92e, 0x3, 0x2, 0x2, 0x2, 
       0x931, 0x942, 0x5, 0x98, 0x4d, 0x2, 0x932, 0x934, 0x7, 0x7, 0x2, 
       0x2, 0x933, 0x932, 0x3, 0x2, 0x2, 0x2, 0x934, 0x937, 0x3, 0x2, 0x2, 
       0x2, 0x935, 0x933, 0x3, 0x2, 0x2, 0x2, 0x935, 0x936, 0x3, 0x2, 0x2, 
       0x2, 0x936, 0x938, 0x3, 0x2, 0x2, 0x2, 0x937, 0x935, 0x3, 0x2, 0x2, 
       0x2, 0x938, 0x93c, 0x7, 0xa, 0x2, 0x2, 0x939, 0x93b, 0x7, 0x7, 0x2, 
       0x2, 0x93a, 0x939, 0x3, 0x2, 0x2, 0x2, 0x93b, 0x93e, 0x3, 0x2, 0x2, 
       0x2, 0x93c, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x93d, 0x3, 0x2, 0x2, 
       0x2, 0x93d, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x93c, 0x3, 0x2, 0x2, 
       0x2, 0x93f, 0x941, 0x5, 0x98, 0x4d, 0x2, 0x940, 0x935, 0x3, 0x2, 
       0x2, 0x2, 0x941, 0x944, 0x3, 0x2, 0x2, 0x2, 0x942, 0x940, 0x3, 0x2, 
       0x2, 0x2, 0x942, 0x943, 0x3, 0x2, 0x2, 0x2, 0x943, 0x94c, 0x3, 0x2, 
       0x2, 0x2, 0x944, 0x942, 0x3, 0x2, 0x2, 0x2, 0x945, 0x947, 0x7, 0x7, 
       0x2, 0x2, 0x946, 0x945, 0x3, 0x2, 0x2, 0x2, 0x947, 0x94a, 0x3, 0x2, 
       0x2, 0x2, 0x948, 0x946, 0x3, 0x2, 0x2, 0x2, 0x948, 0x949, 0x3, 0x2, 
       0x2, 0x2, 0x949, 0x94b, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x948, 0x3, 0x2, 
       0x2, 0x2, 0x94b, 0x94d, 0x7, 0xa, 0x2, 0x2, 0x94c, 0x948, 0x3, 0x2, 
       0x2, 0x2, 0x94c, 0x94d, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x951, 0x3, 0x2, 
       0x2, 0x2, 0x94e, 0x950, 0x7, 0x7, 0x2, 0x2, 0x94f, 0x94e, 0x3, 0x2, 
       0x2, 0x2, 0x950, 0x953, 0x3, 0x2, 0x2, 0x2, 0x951, 0x94f, 0x3, 0x2, 
       0x2, 0x2, 0x951, 0x952, 0x3, 0x2, 0x2, 0x2, 0x952, 0x954, 0x3, 0x2, 
       0x2, 0x2, 0x953, 0x951, 0x3, 0x2, 0x2, 0x2, 0x954, 0x955, 0x7, 0xe, 
       0x2, 0x2, 0x955, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x956, 0x95a, 0x5, 0x128, 
       0x95, 0x2, 0x957, 0x959, 0x7, 0x7, 0x2, 0x2, 0x958, 0x957, 0x3, 0x2, 
       0x2, 0x2, 0x959, 0x95c, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x958, 0x3, 0x2, 
       0x2, 0x2, 0x95a, 0x95b, 0x3, 0x2, 0x2, 0x2, 0x95b, 0x960, 0x3, 0x2, 
       0x2, 0x2, 0x95c, 0x95a, 0x3, 0x2, 0x2, 0x2, 0x95d, 0x961, 0x5, 0x158, 
       0xad, 0x2, 0x95e, 0x961, 0x5, 0xd6, 0x6c, 0x2, 0x95f, 0x961, 0x7, 
       0x4a, 0x2, 0x2, 0x960, 0x95d, 0x3, 0x2, 0x2, 0x2, 0x960, 0x95e, 0x3, 
       0x2, 0x2, 0x2, 0x960, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x961, 0xc9, 0x3, 
       0x2, 0x2, 0x2, 0x962, 0x964, 0x5, 0xce, 0x68, 0x2, 0x963, 0x962, 
       0x3, 0x2, 0x2, 0x2, 0x963, 0x964, 0x3, 0x2, 0x2, 0x2, 0x964, 0x96a, 
       0x3, 0x2, 0x2, 0x2, 0x965, 0x967, 0x5, 0xd0, 0x69, 0x2, 0x966, 0x965, 
       0x3, 0x2, 0x2, 0x2, 0x966, 0x967, 0x3, 0x2, 0x2, 0x2, 0x967, 0x968, 
       0x3, 0x2, 0x2, 0x2, 0x968, 0x96b, 0x5, 0xcc, 0x67, 0x2, 0x969, 0x96b, 
       0x5, 0xd0, 0x69, 0x2, 0x96a, 0x966, 0x3, 0x2, 0x2, 0x2, 0x96a, 0x969, 
       0x3, 0x2, 0x2, 0x2, 0x96b, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x96c, 0x96e, 
       0x5, 0x14e, 0xa8, 0x2, 0x96d, 0x96c, 0x3, 0x2, 0x2, 0x2, 0x96e, 0x971, 
       0x3, 0x2, 0x2, 0x2, 0x96f, 0x96d, 0x3, 0x2, 0x2, 0x2, 0x96f, 0x970, 
       0x3, 0x2, 0x2, 0x2, 0x970, 0x973, 0x3, 0x2, 0x2, 0x2, 0x971, 0x96f, 
       0x3, 0x2, 0x2, 0x2, 0x972, 0x974, 0x5, 0x84, 0x43, 0x2, 0x973, 0x972, 
       0x3, 0x2, 0x2, 0x2, 0x973, 0x974, 0x3, 0x2, 0x2, 0x2, 0x974, 0x978, 
       0x3, 0x2, 0x2, 0x2, 0x975, 0x977, 0x7, 0x7, 0x2, 0x2, 0x976, 0x975, 
       0x3, 0x2, 0x2, 0x2, 0x977, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x978, 0x976, 
       0x3, 0x2, 0x2, 0x2, 0x978, 0x979, 0x3, 0x2, 0x2, 0x2, 0x979, 0x97b, 
       0x3, 0x2, 0x2, 0x2, 0x97a, 0x978, 0x3, 0x2, 0x2, 0x2, 0x97b, 0x97c, 
       0x5, 0xea, 0x76, 0x2, 0x97c, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x97d, 0x981, 
       0x7, 0x30, 0x2, 0x2, 0x97e, 0x980, 0x7, 0x7, 0x2, 0x2, 0x97f, 0x97e, 
       0x3, 0x2, 0x2, 0x2, 0x980, 0x983, 0x3, 0x2, 0x2, 0x2, 0x981, 0x97f, 
       0x3, 0x2, 0x2, 0x2, 0x981, 0x982, 0x3, 0x2, 0x2, 0x2, 0x982, 0x984, 
       0x3, 0x2, 0x2, 0x2, 0x983, 0x981, 0x3, 0x2, 0x2, 0x2, 0x984, 0x995, 
       0x5, 0x70, 0x39, 0x2, 0x985, 0x987, 0x7, 0x7, 0x2, 0x2, 0x986, 0x985, 
       0x3, 0x2, 0x2, 0x2, 0x987, 0x98a, 0x3, 0x2, 0x2, 0x2, 0x988, 0x986, 
       0x3, 0x2, 0x2, 0x2, 0x988, 0x989, 0x3, 0x2, 0x2, 0x2, 0x989, 0x98b, 
       0x3, 0x2, 0x2, 0x2, 0x98a, 0x988, 0x3, 0x2, 0x2, 0x2, 0x98b, 0x98f, 
       0x7, 0xa, 0x2, 0x2, 0x98c, 0x98e, 0x7, 0x7, 0x2, 0x2, 0x98d, 0x98c, 
       0x3, 0x2, 0x2, 0x2, 0x98e, 0x991, 0x3, 0x2, 0x2, 0x2, 0x98f, 0x98d, 
       0x3, 0x2, 0x2, 0x2, 0x98f, 0x990, 0x3, 0x2, 0x2, 0x2, 0x990, 0x992, 
       0x3, 0x2, 0x2, 0x2, 0x991, 0x98f, 0x3, 0x2, 0x2, 0x2, 0x992, 0x994, 
       0x5, 0x70, 0x39, 0x2, 0x993, 0x988, 0x3, 0x2, 0x2, 0x2, 0x994, 0x997, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x993, 0x3, 0x2, 0x2, 0x2, 0x995, 0x996, 
       0x3, 0x2, 0x2, 0x2, 0x996, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x997, 0x995, 
       0x3, 0x2, 0x2, 0x2, 0x998, 0x99a, 0x7, 0x7, 0x2, 0x2, 0x999, 0x998, 
       0x3, 0x2, 0x2, 0x2, 0x99a, 0x99d, 0x3, 0x2, 0x2, 0x2, 0x99b, 0x999, 
       0x3, 0x2, 0x2, 0x2, 0x99b, 0x99c, 0x3, 0x2, 0x2, 0x2, 0x99c, 0x99e, 
       0x3, 0x2, 0x2, 0x2, 0x99d, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x9a0, 
       0x7, 0xa, 0x2, 0x2, 0x99f, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 
       0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a4, 0x3, 0x2, 0x2, 0x2, 0x9a1, 0x9a3, 
       0x7, 0x7, 0x2, 0x2, 0x9a2, 0x9a1, 0x3, 0x2, 0x2, 0x2, 0x9a3, 0x9a6, 
       0x3, 0x2, 0x2, 0x2, 0x9a4, 0x9a2, 0x3, 0x2, 0x2, 0x2, 0x9a4, 0x9a5, 
       0x3, 0x2, 0x2, 0x2, 0x9a5, 0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9a6, 0x9a4, 
       0x3, 0x2, 0x2, 0x2, 0x9a7, 0x9a8, 0x7, 0x31, 0x2, 0x2, 0x9a8, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x9a9, 0x9ad, 0x7, 0xb, 0x2, 0x2, 0x9aa, 0x9ac, 
       0x7, 0x7, 0x2, 0x2, 0x9ab, 0x9aa, 0x3, 0x2, 0x2, 0x2, 0x9ac, 0x9af, 
       0x3, 0x2, 0x2, 0x2, 0x9ad, 0x9ab, 0x3, 0x2, 0x2, 0x2, 0x9ad, 0x9ae, 
       0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9d3, 0x3, 0x2, 0x2, 0x2, 0x9af, 0x9ad, 
       0x3, 0x2, 0x2, 0x2, 0x9b0, 0x9c1, 0x5, 0xd2, 0x6a, 0x2, 0x9b1, 0x9b3, 
       0x7, 0x7, 0x2, 0x2, 0x9b2, 0x9b1, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9b6, 
       0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9b2, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9b5, 
       0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9b7, 0x3, 0x2, 0x2, 0x2, 0x9b6, 0x9b4, 
       0x3, 0x2, 0x2, 0x2, 0x9b7, 0x9bb, 0x7, 0xa, 0x2, 0x2, 0x9b8, 0x9ba, 
       0x7, 0x7, 0x2, 0x2, 0x9b9, 0x9b8, 0x3, 0x2, 0x2, 0x2, 0x9ba, 0x9bd, 
       0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9b9, 0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9bc, 
       0x3, 0x2, 0x2, 0x2, 0x9bc, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9bb, 
       0x3, 0x2, 0x2, 0x2, 0x9be, 0x9c0, 0x5, 0xd2, 0x6a, 0x2, 0x9bf, 0x9b4, 
       0x3, 0x2, 0x2, 0x2, 0x9c0, 0x9c3, 0x3, 0x2, 0x2, 0x2, 0x9c1, 0x9bf, 
       0x3, 0x2, 0x2, 0x2, 0x9c1, 0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9c2, 0x9cb, 
       0x3, 0x2, 0x2, 0x2, 0x9c3, 0x9c1, 0x3, 0x2, 0x2, 0x2, 0x9c4, 0x9c6, 
       0x7, 0x7, 0x2, 0x2, 0x9c5, 0x9c4, 0x3, 0x2, 0x2, 0x2, 0x9c6, 0x9c9, 
       0x3, 0x2, 0x2, 0x2, 0x9c7, 0x9c5, 0x3, 0x2, 0x2, 0x2, 0x9c7, 0x9c8, 
       0x3, 0x2, 0x2, 0x2, 0x9c8, 0x9ca, 0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9c7, 
       0x3, 0x2, 0x2, 0x2, 0x9ca, 0x9cc, 0x7, 0xa, 0x2, 0x2, 0x9cb, 0x9c7, 
       0x3, 0x2, 0x2, 0x2, 0x9cb, 0x9cc, 0x3, 0x2, 0x2, 0x2, 0x9cc, 0x9d0, 
       0x3, 0x2, 0x2, 0x2, 0x9cd, 0x9cf, 0x7, 0x7, 0x2, 0x2, 0x9ce, 0x9cd, 
       0x3, 0x2, 0x2, 0x2, 0x9cf, 0x9d2, 0x3, 0x2, 0x2, 0x2, 0x9d0, 0x9ce, 
       0x3, 0x2, 0x2, 0x2, 0x9d0, 0x9d1, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9d4, 
       0x3, 0x2, 0x2, 0x2, 0x9d2, 0x9d0, 0x3, 0x2, 0x2, 0x2, 0x9d3, 0x9b0, 
       0x3, 0x2, 0x2, 0x2, 0x9d3, 0x9d4, 0x3, 0x2, 0x2, 0x2, 0x9d4, 0x9d5, 
       0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d6, 0x7, 0xc, 0x2, 0x2, 0x9d6, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x9d7, 0x9d9, 0x5, 0x14e, 0xa8, 0x2, 0x9d8, 0x9d7, 
       0x3, 0x2, 0x2, 0x2, 0x9d8, 0x9d9, 0x3, 0x2, 0x2, 0x2, 0x9d9, 0x9dd, 
       0x3, 0x2, 0x2, 0x2, 0x9da, 0x9dc, 0x7, 0x7, 0x2, 0x2, 0x9db, 0x9da, 
       0x3, 0x2, 0x2, 0x2, 0x9dc, 0x9df, 0x3, 0x2, 0x2, 0x2, 0x9dd, 0x9db, 
       0x3, 0x2, 0x2, 0x2, 0x9dd, 0x9de, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9ee, 
       0x3, 0x2, 0x2, 0x2, 0x9df, 0x9dd, 0x3, 0x2, 0x2, 0x2, 0x9e0, 0x9e4, 
       0x5, 0x158, 0xad, 0x2, 0x9e1, 0x9e3, 0x7, 0x7, 0x2, 0x2, 0x9e2, 0x9e1, 
       0x3, 0x2, 0x2, 0x2, 0x9e3, 0x9e6, 0x3, 0x2, 0x2, 0x2, 0x9e4, 0x9e2, 
       0x3, 0x2, 0x2, 0x2, 0x9e4, 0x9e5, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9e7, 
       0x3, 0x2, 0x2, 0x2, 0x9e6, 0x9e4, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x9eb, 
       0x7, 0x1e, 0x2, 0x2, 0x9e8, 0x9ea, 0x7, 0x7, 0x2, 0x2, 0x9e9, 0x9e8, 
       0x3, 0x2, 0x2, 0x2, 0x9ea, 0x9ed, 0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9e9, 
       0x3, 0x2, 0x2, 0x2, 0x9eb, 0x9ec, 0x3, 0x2, 0x2, 0x2, 0x9ec, 0x9ef, 
       0x3, 0x2, 0x2, 0x2, 0x9ed, 0x9eb, 0x3, 0x2, 0x2, 0x2, 0x9ee, 0x9e0, 
       0x3, 0x2, 0x2, 0x2, 0x9ee, 0x9ef, 0x3, 0x2, 0x2, 0x2, 0x9ef, 0x9f1, 
       0x3, 0x2, 0x2, 0x2, 0x9f0, 0x9f2, 0x7, 0x11, 0x2, 0x2, 0x9f1, 0x9f0, 
       0x3, 0x2, 0x2, 0x2, 0x9f1, 0x9f2, 0x3, 0x2, 0x2, 0x2, 0x9f2, 0x9f6, 
       0x3, 0x2, 0x2, 0x2, 0x9f3, 0x9f5, 0x7, 0x7, 0x2, 0x2, 0x9f4, 0x9f3, 
       0x3, 0x2, 0x2, 0x2, 0x9f5, 0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f4, 
       0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f7, 0x3, 0x2, 0x2, 0x2, 0x9f7, 0x9f9, 
       0x3, 0x2, 0x2, 0x2, 0x9f8, 0x9f6, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0x9fa, 
       0x5, 0x98, 0x4d, 0x2, 0x9fa, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x9fb, 0xa0a, 
       0x5, 0xd6, 0x6c, 0x2, 0x9fc, 0xa0a, 0x5, 0x158, 0xad, 0x2, 0x9fd, 
       0xa0a, 0x5, 0xda, 0x6e, 0x2, 0x9fe, 0xa0a, 0x5, 0xdc, 0x6f, 0x2, 
       0x9ff, 0xa0a, 0x5, 0x110, 0x89, 0x2, 0xa00, 0xa0a, 0x5, 0xf2, 0x7a, 
       0x2, 0xa01, 0xa0a, 0x5, 0xf4, 0x7b, 0x2, 0xa02, 0xa0a, 0x5, 0xd8, 
       0x6d, 0x2, 0xa03, 0xa0a, 0x5, 0xf6, 0x7c, 0x2, 0xa04, 0xa0a, 0x5, 
       0xf8, 0x7d, 0x2, 0xa05, 0xa0a, 0x5, 0xfa, 0x7e, 0x2, 0xa06, 0xa0a, 
       0x5, 0xfe, 0x80, 0x2, 0xa07, 0xa0a, 0x5, 0x108, 0x85, 0x2, 0xa08, 
       0xa0a, 0x5, 0x10e, 0x88, 0x2, 0xa09, 0x9fb, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0x9fc, 0x3, 0x2, 0x2, 0x2, 0xa09, 0x9fd, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0x9fe, 0x3, 0x2, 0x2, 0x2, 0xa09, 0x9ff, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0xa00, 0x3, 0x2, 0x2, 0x2, 0xa09, 0xa01, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0xa02, 0x3, 0x2, 0x2, 0x2, 0xa09, 0xa03, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0xa04, 0x3, 0x2, 0x2, 0x2, 0xa09, 0xa05, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0xa06, 0x3, 0x2, 0x2, 0x2, 0xa09, 0xa07, 0x3, 0x2, 0x2, 0x2, 0xa09, 
       0xa08, 0x3, 0x2, 0x2, 0x2, 0xa0a, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xa0b, 
       0xa0f, 0x7, 0xb, 0x2, 0x2, 0xa0c, 0xa0e, 0x7, 0x7, 0x2, 0x2, 0xa0d, 
       0xa0c, 0x3, 0x2, 0x2, 0x2, 0xa0e, 0xa11, 0x3, 0x2, 0x2, 0x2, 0xa0f, 
       0xa0d, 0x3, 0x2, 0x2, 0x2, 0xa0f, 0xa10, 0x3, 0x2, 0x2, 0x2, 0xa10, 
       0xa12, 0x3, 0x2, 0x2, 0x2, 0xa11, 0xa0f, 0x3, 0x2, 0x2, 0x2, 0xa12, 
       0xa16, 0x5, 0x98, 0x4d, 0x2, 0xa13, 0xa15, 0x7, 0x7, 0x2, 0x2, 0xa14, 
       0xa13, 0x3, 0x2, 0x2, 0x2, 0xa15, 0xa18, 0x3, 0x2, 0x2, 0x2, 0xa16, 
       0xa14, 0x3, 0x2, 0x2, 0x2, 0xa16, 0xa17, 0x3, 0x2, 0x2, 0x2, 0xa17, 
       0xa19, 0x3, 0x2, 0x2, 0x2, 0xa18, 0xa16, 0x3, 0x2, 0x2, 0x2, 0xa19, 
       0xa1a, 0x7, 0xc, 0x2, 0x2, 0xa1a, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xa1b, 
       0xa1f, 0x7, 0xd, 0x2, 0x2, 0xa1c, 0xa1e, 0x7, 0x7, 0x2, 0x2, 0xa1d, 
       0xa1c, 0x3, 0x2, 0x2, 0x2, 0xa1e, 0xa21, 0x3, 0x2, 0x2, 0x2, 0xa1f, 
       0xa1d, 0x3, 0x2, 0x2, 0x2, 0xa1f, 0xa20, 0x3, 0x2, 0x2, 0x2, 0xa20, 
       0xa45, 0x3, 0x2, 0x2, 0x2, 0xa21, 0xa1f, 0x3, 0x2, 0x2, 0x2, 0xa22, 
       0xa33, 0x5, 0x98, 0x4d, 0x2, 0xa23, 0xa25, 0x7, 0x7, 0x2, 0x2, 0xa24, 
       0xa23, 0x3, 0x2, 0x2, 0x2, 0xa25, 0xa28, 0x3, 0x2, 0x2, 0x2, 0xa26, 
       0xa24, 0x3, 0x2, 0x2, 0x2, 0xa26, 0xa27, 0x3, 0x2, 0x2, 0x2, 0xa27, 
       0xa29, 0x3, 0x2, 0x2, 0x2, 0xa28, 0xa26, 0x3, 0x2, 0x2, 0x2, 0xa29, 
       0xa2d, 0x7, 0xa, 0x2, 0x2, 0xa2a, 0xa2c, 0x7, 0x7, 0x2, 0x2, 0xa2b, 
       0xa2a, 0x3, 0x2, 0x2, 0x2, 0xa2c, 0xa2f, 0x3, 0x2, 0x2, 0x2, 0xa2d, 
       0xa2b, 0x3, 0x2, 0x2, 0x2, 0xa2d, 0xa2e, 0x3, 0x2, 0x2, 0x2, 0xa2e, 
       0xa30, 0x3, 0x2, 0x2, 0x2, 0xa2f, 0xa2d, 0x3, 0x2, 0x2, 0x2, 0xa30, 
       0xa32, 0x5, 0x98, 0x4d, 0x2, 0xa31, 0xa26, 0x3, 0x2, 0x2, 0x2, 0xa32, 
       0xa35, 0x3, 0x2, 0x2, 0x2, 0xa33, 0xa31, 0x3, 0x2, 0x2, 0x2, 0xa33, 
       0xa34, 0x3, 0x2, 0x2, 0x2, 0xa34, 0xa3d, 0x3, 0x2, 0x2, 0x2, 0xa35, 
       0xa33, 0x3, 0x2, 0x2, 0x2, 0xa36, 0xa38, 0x7, 0x7, 0x2, 0x2, 0xa37, 
       0xa36, 0x3, 0x2, 0x2, 0x2, 0xa38, 0xa3b, 0x3, 0x2, 0x2, 0x2, 0xa39, 
       0xa37, 0x3, 0x2, 0x2, 0x2, 0xa39, 0xa3a, 0x3, 0x2, 0x2, 0x2, 0xa3a, 
       0xa3c, 0x3, 0x2, 0x2, 0x2, 0xa3b, 0xa39, 0x3, 0x2, 0x2, 0x2, 0xa3c, 
       0xa3e, 0x7, 0xa, 0x2, 0x2, 0xa3d, 0xa39, 0x3, 0x2, 0x2, 0x2, 0xa3d, 
       0xa3e, 0x3, 0x2, 0x2, 0x2, 0xa3e, 0xa42, 0x3, 0x2, 0x2, 0x2, 0xa3f, 
       0xa41, 0x7, 0x7, 0x2, 0x2, 0xa40, 0xa3f, 0x3, 0x2, 0x2, 0x2, 0xa41, 
       0xa44, 0x3, 0x2, 0x2, 0x2, 0xa42, 0xa40, 0x3, 0x2, 0x2, 0x2, 0xa42, 
       0xa43, 0x3, 0x2, 0x2, 0x2, 0xa43, 0xa46, 0x3, 0x2, 0x2, 0x2, 0xa44, 
       0xa42, 0x3, 0x2, 0x2, 0x2, 0xa45, 0xa22, 0x3, 0x2, 0x2, 0x2, 0xa45, 
       0xa46, 0x3, 0x2, 0x2, 0x2, 0xa46, 0xa47, 0x3, 0x2, 0x2, 0x2, 0xa47, 
       0xa48, 0x7, 0xe, 0x2, 0x2, 0xa48, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xa49, 
       0xa4a, 0x9, 0x8, 0x2, 0x2, 0xa4a, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xa4b, 
       0xa4e, 0x5, 0xde, 0x70, 0x2, 0xa4c, 0xa4e, 0x5, 0xe0, 0x71, 0x2, 
       0xa4d, 0xa4b, 0x3, 0x2, 0x2, 0x2, 0xa4d, 0xa4c, 0x3, 0x2, 0x2, 0x2, 
       0xa4e, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xa4f, 0xa54, 0x7, 0x97, 0x2, 0x2, 
       0xa50, 0xa53, 0x5, 0xe2, 0x72, 0x2, 0xa51, 0xa53, 0x5, 0xe4, 0x73, 
       0x2, 0xa52, 0xa50, 0x3, 0x2, 0x2, 0x2, 0xa52, 0xa51, 0x3, 0x2, 0x2, 
       0x2, 0xa53, 0xa56, 0x3, 0x2, 0x2, 0x2, 0xa54, 0xa52, 0x3, 0x2, 0x2, 
       0x2, 0xa54, 0xa55, 0x3, 0x2, 0x2, 0x2, 0xa55, 0xa57, 0x3, 0x2, 0x2, 
       0x2, 0xa56, 0xa54, 0x3, 0x2, 0x2, 0x2, 0xa57, 0xa58, 0x7, 0xa0, 0x2, 
       0x2, 0xa58, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xa59, 0xa5f, 0x7, 0x98, 0x2, 
       0x2, 0xa5a, 0xa5e, 0x5, 0xe6, 0x74, 0x2, 0xa5b, 0xa5e, 0x5, 0xe8, 
       0x75, 0x2, 0xa5c, 0xa5e, 0x7, 0xa6, 0x2, 0x2, 0xa5d, 0xa5a, 0x3, 
       0x2, 0x2, 0x2, 0xa5d, 0xa5b, 0x3, 0x2, 0x2, 0x2, 0xa5d, 0xa5c, 0x3, 
       0x2, 0x2, 0x2, 0xa5e, 0xa61, 0x3, 0x2, 0x2, 0x2, 0xa5f, 0xa5d, 0x3, 
       0x2, 0x2, 0x2, 0xa5f, 0xa60, 0x3, 0x2, 0x2, 0x2, 0xa60, 0xa62, 0x3, 
       0x2, 0x2, 0x2, 0xa61, 0xa5f, 0x3, 0x2, 0x2, 0x2, 0xa62, 0xa63, 0x7, 
       0xa5, 0x2, 0x2, 0xa63, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xa64, 0xa65, 0x9, 
       0x9, 0x2, 0x2, 0xa65, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xa66, 0xa6a, 0x7, 
       0xa4, 0x2, 0x2, 0xa67, 0xa69, 0x7, 0x7, 0x2, 0x2, 0xa68, 0xa67, 0x3, 
       0x2, 0x2, 0x2, 0xa69, 0xa6c, 0x3, 0x2, 0x2, 0x2, 0xa6a, 0xa68, 0x3, 
       0x2, 0x2, 0x2, 0xa6a, 0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa6b, 0xa6d, 0x3, 
       0x2, 0x2, 0x2, 0xa6c, 0xa6a, 0x3, 0x2, 0x2, 0x2, 0xa6d, 0xa71, 0x5, 
       0x98, 0x4d, 0x2, 0xa6e, 0xa70, 0x7, 0x7, 0x2, 0x2, 0xa6f, 0xa6e, 
       0x3, 0x2, 0x2, 0x2, 0xa70, 0xa73, 0x3, 0x2, 0x2, 0x2, 0xa71, 0xa6f, 
       0x3, 0x2, 0x2, 0x2, 0xa71, 0xa72, 0x3, 0x2, 0x2, 0x2, 0xa72, 0xa74, 
       0x3, 0x2, 0x2, 0x2, 0xa73, 0xa71, 0x3, 0x2, 0x2, 0x2, 0xa74, 0xa75, 
       0x7, 0x10, 0x2, 0x2, 0xa75, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xa76, 0xa77, 
       0x9, 0xa, 0x2, 0x2, 0xa77, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xa78, 0xa7c, 
       0x7, 0xa9, 0x2, 0x2, 0xa79, 0xa7b, 0x7, 0x7, 0x2, 0x2, 0xa7a, 0xa79, 
       0x3, 0x2, 0x2, 0x2, 0xa7b, 0xa7e, 0x3, 0x2, 0x2, 0x2, 0xa7c, 0xa7a, 
       0x3, 0x2, 0x2, 0x2, 0xa7c, 0xa7d, 0x3, 0x2, 0x2, 0x2, 0xa7d, 0xa7f, 
       0x3, 0x2, 0x2, 0x2, 0xa7e, 0xa7c, 0x3, 0x2, 0x2, 0x2, 0xa7f, 0xa83, 
       0x5, 0x98, 0x4d, 0x2, 0xa80, 0xa82, 0x7, 0x7, 0x2, 0x2, 0xa81, 0xa80, 
       0x3, 0x2, 0x2, 0x2, 0xa82, 0xa85, 0x3, 0x2, 0x2, 0x2, 0xa83, 0xa81, 
       0x3, 0x2, 0x2, 0x2, 0xa83, 0xa84, 0x3, 0x2, 0x2, 0x2, 0xa84, 0xa86, 
       0x3, 0x2, 0x2, 0x2, 0xa85, 0xa83, 0x3, 0x2, 0x2, 0x2, 0xa86, 0xa87, 
       0x7, 0x10, 0x2, 0x2, 0xa87, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xa88, 0xa8c, 
       0x7, 0xf, 0x2, 0x2, 0xa89, 0xa8b, 0x7, 0x7, 0x2, 0x2, 0xa8a, 0xa89, 
       0x3, 0x2, 0x2, 0x2, 0xa8b, 0xa8e, 0x3, 0x2, 0x2, 0x2, 0xa8c, 0xa8a, 
       0x3, 0x2, 0x2, 0x2, 0xa8c, 0xa8d, 0x3, 0x2, 0x2, 0x2, 0xa8d, 0xa9f, 
       0x3, 0x2, 0x2, 0x2, 0xa8e, 0xa8c, 0x3, 0x2, 0x2, 0x2, 0xa8f, 0xa91, 
       0x5, 0xec, 0x77, 0x2, 0xa90, 0xa8f, 0x3, 0x2, 0x2, 0x2, 0xa90, 0xa91, 
       0x3, 0x2, 0x2, 0x2, 0xa91, 0xa95, 0x3, 0x2, 0x2, 0x2, 0xa92, 0xa94, 
       0x7, 0x7, 0x2, 0x2, 0xa93, 0xa92, 0x3, 0x2, 0x2, 0x2, 0xa94, 0xa97, 
       0x3, 0x2, 0x2, 0x2, 0xa95, 0xa93, 0x3, 0x2, 0x2, 0x2, 0xa95, 0xa96, 
       0x3, 0x2, 0x2, 0x2, 0xa96, 0xa98, 0x3, 0x2, 0x2, 0x2, 0xa97, 0xa95, 
       0x3, 0x2, 0x2, 0x2, 0xa98, 0xa9c, 0x7, 0x24, 0x2, 0x2, 0xa99, 0xa9b, 
       0x7, 0x7, 0x2, 0x2, 0xa9a, 0xa99, 0x3, 0x2, 0x2, 0x2, 0xa9b, 0xa9e, 
       0x3, 0x2, 0x2, 0x2, 0xa9c, 0xa9a, 0x3, 0x2, 0x2, 0x2, 0xa9c, 0xa9d, 
       0x3, 0x2, 0x2, 0x2, 0xa9d, 0xaa0, 0x3, 0x2, 0x2, 0x2, 0xa9e, 0xa9c, 
       0x3, 0x2, 0x2, 0x2, 0xa9f, 0xa90, 0x3, 0x2, 0x2, 0x2, 0xa9f, 0xaa0, 
       0x3, 0x2, 0x2, 0x2, 0xaa0, 0xaa1, 0x3, 0x2, 0x2, 0x2, 0xaa1, 0xaa5, 
       0x5, 0x80, 0x41, 0x2, 0xaa2, 0xaa4, 0x7, 0x7, 0x2, 0x2, 0xaa3, 0xaa2, 
       0x3, 0x2, 0x2, 0x2, 0xaa4, 0xaa7, 0x3, 0x2, 0x2, 0x2, 0xaa5, 0xaa3, 
       0x3, 0x2, 0x2, 0x2, 0xaa5, 0xaa6, 0x3, 0x2, 0x2, 0x2, 0xaa6, 0xaa8, 
       0x3, 0x2, 0x2, 0x2, 0xaa7, 0xaa5, 0x3, 0x2, 0x2, 0x2, 0xaa8, 0xaa9, 
       0x7, 0x10, 0x2, 0x2, 0xaa9, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xaaa, 0xabb, 
       0x5, 0xee, 0x78, 0x2, 0xaab, 0xaad, 0x7, 0x7, 0x2, 0x2, 0xaac, 0xaab, 
       0x3, 0x2, 0x2, 0x2, 0xaad, 0xab0, 0x3, 0x2, 0x2, 0x2, 0xaae, 0xaac, 
       0x3, 0x2, 0x2, 0x2, 0xaae, 0xaaf, 0x3, 0x2, 0x2, 0x2, 0xaaf, 0xab1, 
       0x3, 0x2, 0x2, 0x2, 0xab0, 0xaae, 0x3, 0x2, 0x2, 0x2, 0xab1, 0xab5, 
       0x7, 0xa, 0x2, 0x2, 0xab2, 0xab4, 0x7, 0x7, 0x2, 0x2, 0xab3, 0xab2, 
       0x3, 0x2, 0x2, 0x2, 0xab4, 0xab7, 0x3, 0x2, 0x2, 0x2, 0xab5, 0xab3, 
       0x3, 0x2, 0x2, 0x2, 0xab5, 0xab6, 0x3, 0x2, 0x2, 0x2, 0xab6, 0xab8, 
       0x3, 0x2, 0x2, 0x2, 0xab7, 0xab5, 0x3, 0x2, 0x2, 0x2, 0xab8, 0xaba, 
       0x5, 0xee, 0x78, 0x2, 0xab9, 0xaae, 0x3, 0x2, 0x2, 0x2, 0xaba, 0xabd, 
       0x3, 0x2, 0x2, 0x2, 0xabb, 0xab9, 0x3, 0x2, 0x2, 0x2, 0xabb, 0xabc, 
       0x3, 0x2, 0x2, 0x2, 0xabc, 0xac5, 0x3, 0x2, 0x2, 0x2, 0xabd, 0xabb, 
       0x3, 0x2, 0x2, 0x2, 0xabe, 0xac0, 0x7, 0x7, 0x2, 0x2, 0xabf, 0xabe, 
       0x3, 0x2, 0x2, 0x2, 0xac0, 0xac3, 0x3, 0x2, 0x2, 0x2, 0xac1, 0xabf, 
       0x3, 0x2, 0x2, 0x2, 0xac1, 0xac2, 0x3, 0x2, 0x2, 0x2, 0xac2, 0xac4, 
       0x3, 0x2, 0x2, 0x2, 0xac3, 0xac1, 0x3, 0x2, 0x2, 0x2, 0xac4, 0xac6, 
       0x7, 0xa, 0x2, 0x2, 0xac5, 0xac1, 0x3, 0x2, 0x2, 0x2, 0xac5, 0xac6, 
       0x3, 0x2, 0x2, 0x2, 0xac6, 0xed, 0x3, 0x2, 0x2, 0x2, 0xac7, 0xada, 
       0x5, 0x44, 0x23, 0x2, 0xac8, 0xad7, 0x5, 0x46, 0x24, 0x2, 0xac9, 
       0xacb, 0x7, 0x7, 0x2, 0x2, 0xaca, 0xac9, 0x3, 0x2, 0x2, 0x2, 0xacb, 
       0xace, 0x3, 0x2, 0x2, 0x2, 0xacc, 0xaca, 0x3, 0x2, 0x2, 0x2, 0xacc, 
       0xacd, 0x3, 0x2, 0x2, 0x2, 0xacd, 0xacf, 0x3, 0x2, 0x2, 0x2, 0xace, 
       0xacc, 0x3, 0x2, 0x2, 0x2, 0xacf, 0xad3, 0x7, 0x1c, 0x2, 0x2, 0xad0, 
       0xad2, 0x7, 0x7, 0x2, 0x2, 0xad1, 0xad0, 0x3, 0x2, 0x2, 0x2, 0xad2, 
       0xad5, 0x3, 0x2, 0x2, 0x2, 0xad3, 0xad1, 0x3, 0x2, 0x2, 0x2, 0xad3, 
       0xad4, 0x3, 0x2, 0x2, 0x2, 0xad4, 0xad6, 0x3, 0x2, 0x2, 0x2, 0xad5, 
       0xad3, 0x3, 0x2, 0x2, 0x2, 0xad6, 0xad8, 0x5, 0x64, 0x33, 0x2, 0xad7, 
       0xacc, 0x3, 0x2, 0x2, 0x2, 0xad7, 0xad8, 0x3, 0x2, 0x2, 0x2, 0xad8, 
       0xada, 0x3, 0x2, 0x2, 0x2, 0xad9, 0xac7, 0x3, 0x2, 0x2, 0x2, 0xad9, 
       0xac8, 0x3, 0x2, 0x2, 0x2, 0xada, 0xef, 0x3, 0x2, 0x2, 0x2, 0xadb, 
       0xaeb, 0x7, 0x4c, 0x2, 0x2, 0xadc, 0xade, 0x7, 0x7, 0x2, 0x2, 0xadd, 
       0xadc, 0x3, 0x2, 0x2, 0x2, 0xade, 0xae1, 0x3, 0x2, 0x2, 0x2, 0xadf, 
       0xadd, 0x3, 0x2, 0x2, 0x2, 0xadf, 0xae0, 0x3, 0x2, 0x2, 0x2, 0xae0, 
       0xae2, 0x3, 0x2, 0x2, 0x2, 0xae1, 0xadf, 0x3, 0x2, 0x2, 0x2, 0xae2, 
       0xae6, 0x5, 0x64, 0x33, 0x2, 0xae3, 0xae5, 0x7, 0x7, 0x2, 0x2, 0xae4, 
       0xae3, 0x3, 0x2, 0x2, 0x2, 0xae5, 0xae8, 0x3, 0x2, 0x2, 0x2, 0xae6, 
       0xae4, 0x3, 0x2, 0x2, 0x2, 0xae6, 0xae7, 0x3, 0x2, 0x2, 0x2, 0xae7, 
       0xae9, 0x3, 0x2, 0x2, 0x2, 0xae8, 0xae6, 0x3, 0x2, 0x2, 0x2, 0xae9, 
       0xaea, 0x7, 0x9, 0x2, 0x2, 0xaea, 0xaec, 0x3, 0x2, 0x2, 0x2, 0xaeb, 
       0xadf, 0x3, 0x2, 0x2, 0x2, 0xaeb, 0xaec, 0x3, 0x2, 0x2, 0x2, 0xaec, 
       0xaf0, 0x3, 0x2, 0x2, 0x2, 0xaed, 0xaef, 0x7, 0x7, 0x2, 0x2, 0xaee, 
       0xaed, 0x3, 0x2, 0x2, 0x2, 0xaef, 0xaf2, 0x3, 0x2, 0x2, 0x2, 0xaf0, 
       0xaee, 0x3, 0x2, 0x2, 0x2, 0xaf0, 0xaf1, 0x3, 0x2, 0x2, 0x2, 0xaf1, 
       0xaf3, 0x3, 0x2, 0x2, 0x2, 0xaf2, 0xaf0, 0x3, 0x2, 0x2, 0x2, 0xaf3, 
       0xb02, 0x5, 0x50, 0x29, 0x2, 0xaf4, 0xaf6, 0x7, 0x7, 0x2, 0x2, 0xaf5, 
       0xaf4, 0x3, 0x2, 0x2, 0x2, 0xaf6, 0xaf9, 0x3, 0x2, 0x2, 0x2, 0xaf7, 
       0xaf5, 0x3, 0x2, 0x2, 0x2, 0xaf7, 0xaf8, 0x3, 0x2, 0x2, 0x2, 0xaf8, 
       0xafa, 0x3, 0x2, 0x2, 0x2, 0xaf9, 0xaf7, 0x3, 0x2, 0x2, 0x2, 0xafa, 
       0xafe, 0x7, 0x1c, 0x2, 0x2, 0xafb, 0xafd, 0x7, 0x7, 0x2, 0x2, 0xafc, 
       0xafb, 0x3, 0x2, 0x2, 0x2, 0xafd, 0xb00, 0x3, 0x2, 0x2, 0x2, 0xafe, 
       0xafc, 0x3, 0x2, 0x2, 0x2, 0xafe, 0xaff, 0x3, 0x2, 0x2, 0x2, 0xaff, 
       0xb01, 0x3, 0x2, 0x2, 0x2, 0xb00, 0xafe, 0x3, 0x2, 0x2, 0x2, 0xb01, 
       0xb03, 0x5, 0x64, 0x33, 0x2, 0xb02, 0xaf7, 0x3, 0x2, 0x2, 0x2, 0xb02, 
       0xb03, 0x3, 0x2, 0x2, 0x2, 0xb03, 0xb0b, 0x3, 0x2, 0x2, 0x2, 0xb04, 
       0xb06, 0x7, 0x7, 0x2, 0x2, 0xb05, 0xb04, 0x3, 0x2, 0x2, 0x2, 0xb06, 
       0xb09, 0x3, 0x2, 0x2, 0x2, 0xb07, 0xb05, 0x3, 0x2, 0x2, 0x2, 0xb07, 
       0xb08, 0x3, 0x2, 0x2, 0x2, 0xb08, 0xb0a, 0x3, 0x2, 0x2, 0x2, 0xb09, 
       0xb07, 0x3, 0x2, 0x2, 0x2, 0xb0a, 0xb0c, 0x5, 0x30, 0x19, 0x2, 0xb0b, 
       0xb07, 0x3, 0x2, 0x2, 0x2, 0xb0b, 0xb0c, 0x3, 0x2, 0x2, 0x2, 0xb0c, 
       0xb14, 0x3, 0x2, 0x2, 0x2, 0xb0d, 0xb0f, 0x7, 0x7, 0x2, 0x2, 0xb0e, 
       0xb0d, 0x3, 0x2, 0x2, 0x2, 0xb0f, 0xb12, 0x3, 0x2, 0x2, 0x2, 0xb10, 
       0xb0e, 0x3, 0x2, 0x2, 0x2, 0xb10, 0xb11, 0x3, 0x2, 0x2, 0x2, 0xb11, 
       0xb13, 0x3, 0x2, 0x2, 0x2, 0xb12, 0xb10, 0x3, 0x2, 0x2, 0x2, 0xb13, 
       0xb15, 0x5, 0x42, 0x22, 0x2, 0xb14, 0xb10, 0x3, 0x2, 0x2, 0x2, 0xb14, 
       0xb15, 0x3, 0x2, 0x2, 0x2, 0xb15, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xb16, 
       0xb19, 0x5, 0xea, 0x76, 0x2, 0xb17, 0xb19, 0x5, 0xf0, 0x79, 0x2, 
       0xb18, 0xb16, 0x3, 0x2, 0x2, 0x2, 0xb18, 0xb17, 0x3, 0x2, 0x2, 0x2, 
       0xb19, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xb1a, 0xb2f, 0x7, 0x4d, 0x2, 0x2, 
       0xb1b, 0xb1d, 0x7, 0x7, 0x2, 0x2, 0xb1c, 0xb1b, 0x3, 0x2, 0x2, 0x2, 
       0xb1d, 0xb20, 0x3, 0x2, 0x2, 0x2, 0xb1e, 0xb1c, 0x3, 0x2, 0x2, 0x2, 
       0xb1e, 0xb1f, 0x3, 0x2, 0x2, 0x2, 0xb1f, 0xb21, 0x3, 0x2, 0x2, 0x2, 
       0xb20, 0xb1e, 0x3, 0x2, 0x2, 0x2, 0xb21, 0xb25, 0x7, 0x1c, 0x2, 0x2, 
       0xb22, 0xb24, 0x7, 0x7, 0x2, 0x2, 0xb23, 0xb22, 0x3, 0x2, 0x2, 0x2, 
       0xb24, 0xb27, 0x3, 0x2, 0x2, 0x2, 0xb25, 0xb23, 0x3, 0x2, 0x2, 0x2, 
       0xb25, 0xb26, 0x3, 0x2, 0x2, 0x2, 0xb26, 0xb28, 0x3, 0x2, 0x2, 0x2, 
       0xb27, 0xb25, 0x3, 0x2, 0x2, 0x2, 0xb28, 0xb2c, 0x5, 0x22, 0x12, 
       0x2, 0xb29, 0xb2b, 0x7, 0x7, 0x2, 0x2, 0xb2a, 0xb29, 0x3, 0x2, 0x2, 
       0x2, 0xb2b, 0xb2e, 0x3, 0x2, 0x2, 0x2, 0xb2c, 0xb2a, 0x3, 0x2, 0x2, 
       0x2, 0xb2c, 0xb2d, 0x3, 0x2, 0x2, 0x2, 0xb2d, 0xb30, 0x3, 0x2, 0x2, 
       0x2, 0xb2e, 0xb2c, 0x3, 0x2, 0x2, 0x2, 0xb2f, 0xb1e, 0x3, 0x2, 0x2, 
       0x2, 0xb2f, 0xb30, 0x3, 0x2, 0x2, 0x2, 0xb30, 0xb38, 0x3, 0x2, 0x2, 
       0x2, 0xb31, 0xb33, 0x7, 0x7, 0x2, 0x2, 0xb32, 0xb31, 0x3, 0x2, 0x2, 
       0x2, 0xb33, 0xb36, 0x3, 0x2, 0x2, 0x2, 0xb34, 0xb32, 0x3, 0x2, 0x2, 
       0x2, 0xb34, 0xb35, 0x3, 0x2, 0x2, 0x2, 0xb35, 0xb37, 0x3, 0x2, 0x2, 
       0x2, 0xb36, 0xb34, 0x3, 0x2, 0x2, 0x2, 0xb37, 0xb39, 0x5, 0x1c, 0xf, 
       0x2, 0xb38, 0xb34, 0x3, 0x2, 0x2, 0x2, 0xb38, 0xb39, 0x3, 0x2, 0x2, 
       0x2, 0xb39, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xb3a, 0xb3b, 0x9, 0xb, 0x2, 
       0x2, 0xb3b, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xb3c, 0xb4d, 0x7, 0x56, 0x2, 
       0x2, 0xb3d, 0xb41, 0x7, 0x30, 0x2, 0x2, 0xb3e, 0xb40, 0x7, 0x7, 0x2, 
       0x2, 0xb3f, 0xb3e, 0x3, 0x2, 0x2, 0x2, 0xb40, 0xb43, 0x3, 0x2, 0x2, 
       0x2, 0xb41, 0xb3f, 0x3, 0x2, 0x2, 0x2, 0xb41, 0xb42, 0x3, 0x2, 0x2, 
       0x2, 0xb42, 0xb44, 0x3, 0x2, 0x2, 0x2, 0xb43, 0xb41, 0x3, 0x2, 0x2, 
       0x2, 0xb44, 0xb48, 0x5, 0x64, 0x33, 0x2, 0xb45, 0xb47, 0x7, 0x7, 
       0x2, 0x2, 0xb46, 0xb45, 0x3, 0x2, 0x2, 0x2, 0xb47, 0xb4a, 0x3, 0x2, 
       0x2, 0x2, 0xb48, 0xb46, 0x3, 0x2, 0x2, 0x2, 0xb48, 0xb49, 0x3, 0x2, 
       0x2, 0x2, 0xb49, 0xb4b, 0x3, 0x2, 0x2, 0x2, 0xb4a, 0xb48, 0x3, 0x2, 
       0x2, 0x2, 0xb4b, 0xb4c, 0x7, 0x31, 0x2, 0x2, 0xb4c, 0xb4e, 0x3, 0x2, 
       0x2, 0x2, 0xb4d, 0xb3d, 0x3, 0x2, 0x2, 0x2, 0xb4d, 0xb4e, 0x3, 0x2, 
       0x2, 0x2, 0xb4e, 0xb51, 0x3, 0x2, 0x2, 0x2, 0xb4f, 0xb50, 0x7, 0x2a, 
       0x2, 0x2, 0xb50, 0xb52, 0x5, 0x158, 0xad, 0x2, 0xb51, 0xb4f, 0x3, 
       0x2, 0x2, 0x2, 0xb51, 0xb52, 0x3, 0x2, 0x2, 0x2, 0xb52, 0xb55, 0x3, 
       0x2, 0x2, 0x2, 0xb53, 0xb55, 0x7, 0x3e, 0x2, 0x2, 0xb54, 0xb3c, 0x3, 
       0x2, 0x2, 0x2, 0xb54, 0xb53, 0x3, 0x2, 0x2, 0x2, 0xb55, 0xf9, 0x3, 
       0x2, 0x2, 0x2, 0xb56, 0xb5a, 0x7, 0x59, 0x2, 0x2, 0xb57, 0xb59, 0x7, 
       0x7, 0x2, 0x2, 0xb58, 0xb57, 0x3, 0x2, 0x2, 0x2, 0xb59, 0xb5c, 0x3, 
       0x2, 0x2, 0x2, 0xb5a, 0xb58, 0x3, 0x2, 0x2, 0x2, 0xb5a, 0xb5b, 0x3, 
       0x2, 0x2, 0x2, 0xb5b, 0xb5d, 0x3, 0x2, 0x2, 0x2, 0xb5c, 0xb5a, 0x3, 
       0x2, 0x2, 0x2, 0xb5d, 0xb61, 0x7, 0xb, 0x2, 0x2, 0xb5e, 0xb60, 0x7, 
       0x7, 0x2, 0x2, 0xb5f, 0xb5e, 0x3, 0x2, 0x2, 0x2, 0xb60, 0xb63, 0x3, 
       0x2, 0x2, 0x2, 0xb61, 0xb5f, 0x3, 0x2, 0x2, 0x2, 0xb61, 0xb62, 0x3, 
       0x2, 0x2, 0x2, 0xb62, 0xb64, 0x3, 0x2, 0x2, 0x2, 0xb63, 0xb61, 0x3, 
       0x2, 0x2, 0x2, 0xb64, 0xb68, 0x5, 0x98, 0x4d, 0x2, 0xb65, 0xb67, 
       0x7, 0x7, 0x2, 0x2, 0xb66, 0xb65, 0x3, 0x2, 0x2, 0x2, 0xb67, 0xb6a, 
       0x3, 0x2, 0x2, 0x2, 0xb68, 0xb66, 0x3, 0x2, 0x2, 0x2, 0xb68, 0xb69, 
       0x3, 0x2, 0x2, 0x2, 0xb69, 0xb6b, 0x3, 0x2, 0x2, 0x2, 0xb6a, 0xb68, 
       0x3, 0x2, 0x2, 0x2, 0xb6b, 0xb6f, 0x7, 0xc, 0x2, 0x2, 0xb6c, 0xb6e, 
       0x7, 0x7, 0x2, 0x2, 0xb6d, 0xb6c, 0x3, 0x2, 0x2, 0x2, 0xb6e, 0xb71, 
       0x3, 0x2, 0x2, 0x2, 0xb6f, 0xb6d, 0x3, 0x2, 0x2, 0x2, 0xb6f, 0xb70, 
       0x3, 0x2, 0x2, 0x2, 0xb70, 0xb91, 0x3, 0x2, 0x2, 0x2, 0xb71, 0xb6f, 
       0x3, 0x2, 0x2, 0x2, 0xb72, 0xb92, 0x5, 0x86, 0x44, 0x2, 0xb73, 0xb75, 
       0x5, 0x86, 0x44, 0x2, 0xb74, 0xb73, 0x3, 0x2, 0x2, 0x2, 0xb74, 0xb75, 
       0x3, 0x2, 0x2, 0x2, 0xb75, 0xb79, 0x3, 0x2, 0x2, 0x2, 0xb76, 0xb78, 
       0x7, 0x7, 0x2, 0x2, 0xb77, 0xb76, 0x3, 0x2, 0x2, 0x2, 0xb78, 0xb7b, 
       0x3, 0x2, 0x2, 0x2, 0xb79, 0xb77, 0x3, 0x2, 0x2, 0x2, 0xb79, 0xb7a, 
       0x3, 0x2, 0x2, 0x2, 0xb7a, 0xb7d, 0x3, 0x2, 0x2, 0x2, 0xb7b, 0xb79, 
       0x3, 0x2, 0x2, 0x2, 0xb7c, 0xb7e, 0x7, 0x1d, 0x2, 0x2, 0xb7d, 0xb7c, 
       0x3, 0x2, 0x2, 0x2, 0xb7d, 0xb7e, 0x3, 0x2, 0x2, 0x2, 0xb7e, 0xb82, 
       0x3, 0x2, 0x2, 0x2, 0xb7f, 0xb81, 0x7, 0x7, 0x2, 0x2, 0xb80, 0xb7f, 
       0x3, 0x2, 0x2, 0x2, 0xb81, 0xb84, 0x3, 0x2, 0x2, 0x2, 0xb82, 0xb80, 
       0x3, 0x2, 0x2, 0x2, 0xb82, 0xb83, 0x3, 0x2, 0x2, 0x2, 0xb83, 0xb85, 
       0x3, 0x2, 0x2, 0x2, 0xb84, 0xb82, 0x3, 0x2, 0x2, 0x2, 0xb85, 0xb89, 
       0x7, 0x5a, 0x2, 0x2, 0xb86, 0xb88, 0x7, 0x7, 0x2, 0x2, 0xb87, 0xb86, 
       0x3, 0x2, 0x2, 0x2, 0xb88, 0xb8b, 0x3, 0x2, 0x2, 0x2, 0xb89, 0xb87, 
       0x3, 0x2, 0x2, 0x2, 0xb89, 0xb8a, 0x3, 0x2, 0x2, 0x2, 0xb8a, 0xb8e, 
       0x3, 0x2, 0x2, 0x2, 0xb8b, 0xb89, 0x3, 0x2, 0x2, 0x2, 0xb8c, 0xb8f, 
       0x5, 0x86, 0x44, 0x2, 0xb8d, 0xb8f, 0x7, 0x1d, 0x2, 0x2, 0xb8e, 0xb8c, 
       0x3, 0x2, 0x2, 0x2, 0xb8e, 0xb8d, 0x3, 0x2, 0x2, 0x2, 0xb8f, 0xb92, 
       0x3, 0x2, 0x2, 0x2, 0xb90, 0xb92, 0x7, 0x1d, 0x2, 0x2, 0xb91, 0xb72, 
       0x3, 0x2, 0x2, 0x2, 0xb91, 0xb74, 0x3, 0x2, 0x2, 0x2, 0xb91, 0xb90, 
       0x3, 0x2, 0x2, 0x2, 0xb92, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xb93, 0xbb5, 
       0x7, 0xb, 0x2, 0x2, 0xb94, 0xb96, 0x5, 0x14e, 0xa8, 0x2, 0xb95, 0xb94, 
       0x3, 0x2, 0x2, 0x2, 0xb96, 0xb99, 0x3, 0x2, 0x2, 0x2, 0xb97, 0xb95, 
       0x3, 0x2, 0x2, 0x2, 0xb97, 0xb98, 0x3, 0x2, 0x2, 0x2, 0xb98, 0xb9d, 
       0x3, 0x2, 0x2, 0x2, 0xb99, 0xb97, 0x3, 0x2, 0x2, 0x2, 0xb9a, 0xb9c, 
       0x7, 0x7, 0x2, 0x2, 0xb9b, 0xb9a, 0x3, 0x2, 0x2, 0x2, 0xb9c, 0xb9f, 
       0x3, 0x2, 0x2, 0x2, 0xb9d, 0xb9b, 0x3, 0x2, 0x2, 0x2, 0xb9d, 0xb9e, 
       0x3, 0x2, 0x2, 0x2, 0xb9e, 0xba0, 0x3, 0x2, 0x2, 0x2, 0xb9f, 0xb9d, 
       0x3, 0x2, 0x2, 0x2, 0xba0, 0xba4, 0x7, 0x4e, 0x2, 0x2, 0xba1, 0xba3, 
       0x7, 0x7, 0x2, 0x2, 0xba2, 0xba1, 0x3, 0x2, 0x2, 0x2, 0xba3, 0xba6, 
       0x3, 0x2, 0x2, 0x2, 0xba4, 0xba2, 0x3, 0x2, 0x2, 0x2, 0xba4, 0xba5, 
       0x3, 0x2, 0x2, 0x2, 0xba5, 0xba7, 0x3, 0x2, 0x2, 0x2, 0xba6, 0xba4, 
       0x3, 0x2, 0x2, 0x2, 0xba7, 0xbab, 0x5, 0x44, 0x23, 0x2, 0xba8, 0xbaa, 
       0x7, 0x7, 0x2, 0x2, 0xba9, 0xba8, 0x3, 0x2, 0x2, 0x2, 0xbaa, 0xbad, 
       0x3, 0x2, 0x2, 0x2, 0xbab, 0xba9, 0x3, 0x2, 0x2, 0x2, 0xbab, 0xbac, 
       0x3, 0x2, 0x2, 0x2, 0xbac, 0xbae, 0x3, 0x2, 0x2, 0x2, 0xbad, 0xbab, 
       0x3, 0x2, 0x2, 0x2, 0xbae, 0xbb2, 0x7, 0x1e, 0x2, 0x2, 0xbaf, 0xbb1, 
       0x7, 0x7, 0x2, 0x2, 0xbb0, 0xbaf, 0x3, 0x2, 0x2, 0x2, 0xbb1, 0xbb4, 
       0x3, 0x2, 0x2, 0x2, 0xbb2, 0xbb0, 0x3, 0x2, 0x2, 0x2, 0xbb2, 0xbb3, 
       0x3, 0x2, 0x2, 0x2, 0xbb3, 0xbb6, 0x3, 0x2, 0x2, 0x2, 0xbb4, 0xbb2, 
       0x3, 0x2, 0x2, 0x2, 0xbb5, 0xb97, 0x3, 0x2, 0x2, 0x2, 0xbb5, 0xbb6, 
       0x3, 0x2, 0x2, 0x2, 0xbb6, 0xbb7, 0x3, 0x2, 0x2, 0x2, 0xbb7, 0xbb8, 
       0x5, 0x98, 0x4d, 0x2, 0xbb8, 0xbb9, 0x7, 0xc, 0x2, 0x2, 0xbb9, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0xbba, 0xbbe, 0x7, 0x5b, 0x2, 0x2, 0xbbb, 0xbbd, 
       0x7, 0x7, 0x2, 0x2, 0xbbc, 0xbbb, 0x3, 0x2, 0x2, 0x2, 0xbbd, 0xbc0, 
       0x3, 0x2, 0x2, 0x2, 0xbbe, 0xbbc, 0x3, 0x2, 0x2, 0x2, 0xbbe, 0xbbf, 
       0x3, 0x2, 0x2, 0x2, 0xbbf, 0xbc2, 0x3, 0x2, 0x2, 0x2, 0xbc0, 0xbbe, 
       0x3, 0x2, 0x2, 0x2, 0xbc1, 0xbc3, 0x5, 0xfc, 0x7f, 0x2, 0xbc2, 0xbc1, 
       0x3, 0x2, 0x2, 0x2, 0xbc2, 0xbc3, 0x3, 0x2, 0x2, 0x2, 0xbc3, 0xbc7, 
       0x3, 0x2, 0x2, 0x2, 0xbc4, 0xbc6, 0x7, 0x7, 0x2, 0x2, 0xbc5, 0xbc4, 
       0x3, 0x2, 0x2, 0x2, 0xbc6, 0xbc9, 0x3, 0x2, 0x2, 0x2, 0xbc7, 0xbc5, 
       0x3, 0x2, 0x2, 0x2, 0xbc7, 0xbc8, 0x3, 0x2, 0x2, 0x2, 0xbc8, 0xbca, 
       0x3, 0x2, 0x2, 0x2, 0xbc9, 0xbc7, 0x3, 0x2, 0x2, 0x2, 0xbca, 0xbce, 
       0x7, 0xf, 0x2, 0x2, 0xbcb, 0xbcd, 0x7, 0x7, 0x2, 0x2, 0xbcc, 0xbcb, 
       0x3, 0x2, 0x2, 0x2, 0xbcd, 0xbd0, 0x3, 0x2, 0x2, 0x2, 0xbce, 0xbcc, 
       0x3, 0x2, 0x2, 0x2, 0xbce, 0xbcf, 0x3, 0x2, 0x2, 0x2, 0xbcf, 0xbda, 
       0x3, 0x2, 0x2, 0x2, 0xbd0, 0xbce, 0x3, 0x2, 0x2, 0x2, 0xbd1, 0xbd5, 
       0x5, 0x100, 0x81, 0x2, 0xbd2, 0xbd4, 0x7, 0x7, 0x2, 0x2, 0xbd3, 0xbd2, 
       0x3, 0x2, 0x2, 0x2, 0xbd4, 0xbd7, 0x3, 0x2, 0x2, 0x2, 0xbd5, 0xbd3, 
       0x3, 0x2, 0x2, 0x2, 0xbd5, 0xbd6, 0x3, 0x2, 0x2, 0x2, 0xbd6, 0xbd9, 
       0x3, 0x2, 0x2, 0x2, 0xbd7, 0xbd5, 0x3, 0x2, 0x2, 0x2, 0xbd8, 0xbd1, 
       0x3, 0x2, 0x2, 0x2, 0xbd9, 0xbdc, 0x3, 0x2, 0x2, 0x2, 0xbda, 0xbd8, 
       0x3, 0x2, 0x2, 0x2, 0xbda, 0xbdb, 0x3, 0x2, 0x2, 0x2, 0xbdb, 0xbe0, 
       0x3, 0x2, 0x2, 0x2, 0xbdc, 0xbda, 0x3, 0x2, 0x2, 0x2, 0xbdd, 0xbdf, 
       0x7, 0x7, 0x2, 0x2, 0xbde, 0xbdd, 0x3, 0x2, 0x2, 0x2, 0xbdf, 0xbe2, 
       0x3, 0x2, 0x2, 0x2, 0xbe0, 0xbde, 0x3, 0x2, 0x2, 0x2, 0xbe0, 0xbe1, 
       0x3, 0x2, 0x2, 0x2, 0xbe1, 0xbe3, 0x3, 0x2, 0x2, 0x2, 0xbe2, 0xbe0, 
       0x3, 0x2, 0x2, 0x2, 0xbe3, 0xbe4, 0x7, 0x10, 0x2, 0x2, 0xbe4, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0xbe5, 0xbf6, 0x5, 0x102, 0x82, 0x2, 0xbe6, 0xbe8, 
       0x7, 0x7, 0x2, 0x2, 0xbe7, 0xbe6, 0x3, 0x2, 0x2, 0x2, 0xbe8, 0xbeb, 
       0x3, 0x2, 0x2, 0x2, 0xbe9, 0xbe7, 0x3, 0x2, 0x2, 0x2, 0xbe9, 0xbea, 
       0x3, 0x2, 0x2, 0x2, 0xbea, 0xbec, 0x3, 0x2, 0x2, 0x2, 0xbeb, 0xbe9, 
       0x3, 0x2, 0x2, 0x2, 0xbec, 0xbf0, 0x7, 0xa, 0x2, 0x2, 0xbed, 0xbef, 
       0x7, 0x7, 0x2, 0x2, 0xbee, 0xbed, 0x3, 0x2, 0x2, 0x2, 0xbef, 0xbf2, 
       0x3, 0x2, 0x2, 0x2, 0xbf0, 0xbee, 0x3, 0x2, 0x2, 0x2, 0xbf0, 0xbf1, 
       0x3, 0x2, 0x2, 0x2, 0xbf1, 0xbf3, 0x3, 0x2, 0x2, 0x2, 0xbf2, 0xbf0, 
       0x3, 0x2, 0x2, 0x2, 0xbf3, 0xbf5, 0x5, 0x102, 0x82, 0x2, 0xbf4, 0xbe9, 
       0x3, 0x2, 0x2, 0x2, 0xbf5, 0xbf8, 0x3, 0x2, 0x2, 0x2, 0xbf6, 0xbf4, 
       0x3, 0x2, 0x2, 0x2, 0xbf6, 0xbf7, 0x3, 0x2, 0x2, 0x2, 0xbf7, 0xc00, 
       0x3, 0x2, 0x2, 0x2, 0xbf8, 0xbf6, 0x3, 0x2, 0x2, 0x2, 0xbf9, 0xbfb, 
       0x7, 0x7, 0x2, 0x2, 0xbfa, 0xbf9, 0x3, 0x2, 0x2, 0x2, 0xbfb, 0xbfe, 
       0x3, 0x2, 0x2, 0x2, 0xbfc, 0xbfa, 0x3, 0x2, 0x2, 0x2, 0xbfc, 0xbfd, 
       0x3, 0x2, 0x2, 0x2, 0xbfd, 0xbff, 0x3, 0x2, 0x2, 0x2, 0xbfe, 0xbfc, 
       0x3, 0x2, 0x2, 0x2, 0xbff, 0xc01, 0x7, 0xa, 0x2, 0x2, 0xc00, 0xbfc, 
       0x3, 0x2, 0x2, 0x2, 0xc00, 0xc01, 0x3, 0x2, 0x2, 0x2, 0xc01, 0xc05, 
       0x3, 0x2, 0x2, 0x2, 0xc02, 0xc04, 0x7, 0x7, 0x2, 0x2, 0xc03, 0xc02, 
       0x3, 0x2, 0x2, 0x2, 0xc04, 0xc07, 0x3, 0x2, 0x2, 0x2, 0xc05, 0xc03, 
       0x3, 0x2, 0x2, 0x2, 0xc05, 0xc06, 0x3, 0x2, 0x2, 0x2, 0xc06, 0xc08, 
       0x3, 0x2, 0x2, 0x2, 0xc07, 0xc05, 0x3, 0x2, 0x2, 0x2, 0xc08, 0xc0c, 
       0x7, 0x24, 0x2, 0x2, 0xc09, 0xc0b, 0x7, 0x7, 0x2, 0x2, 0xc0a, 0xc09, 
       0x3, 0x2, 0x2, 0x2, 0xc0b, 0xc0e, 0x3, 0x2, 0x2, 0x2, 0xc0c, 0xc0a, 
       0x3, 0x2, 0x2, 0x2, 0xc0c, 0xc0d, 0x3, 0x2, 0x2, 0x2, 0xc0d, 0xc0f, 
       0x3, 0x2, 0x2, 0x2, 0xc0e, 0xc0c, 0x3, 0x2, 0x2, 0x2, 0xc0f, 0xc11, 
       0x5, 0x86, 0x44, 0x2, 0xc10, 0xc12, 0x5, 0x94, 0x4b, 0x2, 0xc11, 
       0xc10, 0x3, 0x2, 0x2, 0x2, 0xc11, 0xc12, 0x3, 0x2, 0x2, 0x2, 0xc12, 
       0xc26, 0x3, 0x2, 0x2, 0x2, 0xc13, 0xc17, 0x7, 0x5a, 0x2, 0x2, 0xc14, 
       0xc16, 0x7, 0x7, 0x2, 0x2, 0xc15, 0xc14, 0x3, 0x2, 0x2, 0x2, 0xc16, 
       0xc19, 0x3, 0x2, 0x2, 0x2, 0xc17, 0xc15, 0x3, 0x2, 0x2, 0x2, 0xc17, 
       0xc18, 0x3, 0x2, 0x2, 0x2, 0xc18, 0xc1a, 0x3, 0x2, 0x2, 0x2, 0xc19, 
       0xc17, 0x3, 0x2, 0x2, 0x2, 0xc1a, 0xc1e, 0x7, 0x24, 0x2, 0x2, 0xc1b, 
       0xc1d, 0x7, 0x7, 0x2, 0x2, 0xc1c, 0xc1b, 0x3, 0x2, 0x2, 0x2, 0xc1d, 
       0xc20, 0x3, 0x2, 0x2, 0x2, 0xc1e, 0xc1c, 0x3, 0x2, 0x2, 0x2, 0xc1e, 
       0xc1f, 0x3, 0x2, 0x2, 0x2, 0xc1f, 0xc21, 0x3, 0x2, 0x2, 0x2, 0xc20, 
       0xc1e, 0x3, 0x2, 0x2, 0x2, 0xc21, 0xc23, 0x5, 0x86, 0x44, 0x2, 0xc22, 
       0xc24, 0x5, 0x94, 0x4b, 0x2, 0xc23, 0xc22, 0x3, 0x2, 0x2, 0x2, 0xc23, 
       0xc24, 0x3, 0x2, 0x2, 0x2, 0xc24, 0xc26, 0x3, 0x2, 0x2, 0x2, 0xc25, 
       0xbe5, 0x3, 0x2, 0x2, 0x2, 0xc25, 0xc13, 0x3, 0x2, 0x2, 0x2, 0xc26, 
       0x101, 0x3, 0x2, 0x2, 0x2, 0xc27, 0xc2b, 0x5, 0x98, 0x4d, 0x2, 0xc28, 
       0xc2b, 0x5, 0x104, 0x83, 0x2, 0xc29, 0xc2b, 0x5, 0x106, 0x84, 0x2, 
       0xc2a, 0xc27, 0x3, 0x2, 0x2, 0x2, 0xc2a, 0xc28, 0x3, 0x2, 0x2, 0x2, 
       0xc2a, 0xc29, 0x3, 0x2, 0x2, 0x2, 0xc2b, 0x103, 0x3, 0x2, 0x2, 0x2, 
       0xc2c, 0xc30, 0x5, 0x118, 0x8d, 0x2, 0xc2d, 0xc2f, 0x7, 0x7, 0x2, 
       0x2, 0xc2e, 0xc2d, 0x3, 0x2, 0x2, 0x2, 0xc2f, 0xc32, 0x3, 0x2, 0x2, 
       0x2, 0xc30, 0xc2e, 0x3, 0x2, 0x2, 0x2, 0xc30, 0xc31, 0x3, 0x2, 0x2, 
       0x2, 0xc31, 0xc33, 0x3, 0x2, 0x2, 0x2, 0xc32, 0xc30, 0x3, 0x2, 0x2, 
       0x2, 0xc33, 0xc34, 0x5, 0x98, 0x4d, 0x2, 0xc34, 0x105, 0x3, 0x2, 
       0x2, 0x2, 0xc35, 0xc39, 0x5, 0x11a, 0x8e, 0x2, 0xc36, 0xc38, 0x7, 
       0x7, 0x2, 0x2, 0xc37, 0xc36, 0x3, 0x2, 0x2, 0x2, 0xc38, 0xc3b, 0x3, 
       0x2, 0x2, 0x2, 0xc39, 0xc37, 0x3, 0x2, 0x2, 0x2, 0xc39, 0xc3a, 0x3, 
       0x2, 0x2, 0x2, 0xc3a, 0xc3c, 0x3, 0x2, 0x2, 0x2, 0xc3b, 0xc39, 0x3, 
       0x2, 0x2, 0x2, 0xc3c, 0xc3d, 0x5, 0x64, 0x33, 0x2, 0xc3d, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0xc3e, 0xc42, 0x7, 0x5c, 0x2, 0x2, 0xc3f, 0xc41, 
       0x7, 0x7, 0x2, 0x2, 0xc40, 0xc3f, 0x3, 0x2, 0x2, 0x2, 0xc41, 0xc44, 
       0x3, 0x2, 0x2, 0x2, 0xc42, 0xc40, 0x3, 0x2, 0x2, 0x2, 0xc42, 0xc43, 
       0x3, 0x2, 0x2, 0x2, 0xc43, 0xc45, 0x3, 0x2, 0x2, 0x2, 0xc44, 0xc42, 
       0x3, 0x2, 0x2, 0x2, 0xc45, 0xc61, 0x5, 0x88, 0x45, 0x2, 0xc46, 0xc48, 
       0x7, 0x7, 0x2, 0x2, 0xc47, 0xc46, 0x3, 0x2, 0x2, 0x2, 0xc48, 0xc4b, 
       0x3, 0x2, 0x2, 0x2, 0xc49, 0xc47, 0x3, 0x2, 0x2, 0x2, 0xc49, 0xc4a, 
       0x3, 0x2, 0x2, 0x2, 0xc4a, 0xc4c, 0x3, 0x2, 0x2, 0x2, 0xc4b, 0xc49, 
       0x3, 0x2, 0x2, 0x2, 0xc4c, 0xc4e, 0x5, 0x10a, 0x86, 0x2, 0xc4d, 0xc49, 
       0x3, 0x2, 0x2, 0x2, 0xc4e, 0xc4f, 0x3, 0x2, 0x2, 0x2, 0xc4f, 0xc4d, 
       0x3, 0x2, 0x2, 0x2, 0xc4f, 0xc50, 0x3, 0x2, 0x2, 0x2, 0xc50, 0xc58, 
       0x3, 0x2, 0x2, 0x2, 0xc51, 0xc53, 0x7, 0x7, 0x2, 0x2, 0xc52, 0xc51, 
       0x3, 0x2, 0x2, 0x2, 0xc53, 0xc56, 0x3, 0x2, 0x2, 0x2, 0xc54, 0xc52, 
       0x3, 0x2, 0x2, 0x2, 0xc54, 0xc55, 0x3, 0x2, 0x2, 0x2, 0xc55, 0xc57, 
       0x3, 0x2, 0x2, 0x2, 0xc56, 0xc54, 0x3, 0x2, 0x2, 0x2, 0xc57, 0xc59, 
       0x5, 0x10c, 0x87, 0x2, 0xc58, 0xc54, 0x3, 0x2, 0x2, 0x2, 0xc58, 0xc59, 
       0x3, 0x2, 0x2, 0x2, 0xc59, 0xc62, 0x3, 0x2, 0x2, 0x2, 0xc5a, 0xc5c, 
       0x7, 0x7, 0x2, 0x2, 0xc5b, 0xc5a, 0x3, 0x2, 0x2, 0x2, 0xc5c, 0xc5f, 
       0x3, 0x2, 0x2, 0x2, 0xc5d, 0xc5b, 0x3, 0x2, 0x2, 0x2, 0xc5d, 0xc5e, 
       0x3, 0x2, 0x2, 0x2, 0xc5e, 0xc60, 0x3, 0x2, 0x2, 0x2, 0xc5f, 0xc5d, 
       0x3, 0x2, 0x2, 0x2, 0xc60, 0xc62, 0x5, 0x10c, 0x87, 0x2, 0xc61, 0xc4d, 
       0x3, 0x2, 0x2, 0x2, 0xc61, 0xc5d, 0x3, 0x2, 0x2, 0x2, 0xc62, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0xc63, 0xc67, 0x7, 0x5d, 0x2, 0x2, 0xc64, 0xc66, 
       0x7, 0x7, 0x2, 0x2, 0xc65, 0xc64, 0x3, 0x2, 0x2, 0x2, 0xc66, 0xc69, 
       0x3, 0x2, 0x2, 0x2, 0xc67, 0xc65, 0x3, 0x2, 0x2, 0x2, 0xc67, 0xc68, 
       0x3, 0x2, 0x2, 0x2, 0xc68, 0xc6a, 0x3, 0x2, 0x2, 0x2, 0xc69, 0xc67, 
       0x3, 0x2, 0x2, 0x2, 0xc6a, 0xc6e, 0x7, 0xb, 0x2, 0x2, 0xc6b, 0xc6d, 
       0x5, 0x14e, 0xa8, 0x2, 0xc6c, 0xc6b, 0x3, 0x2, 0x2, 0x2, 0xc6d, 0xc70, 
       0x3, 0x2, 0x2, 0x2, 0xc6e, 0xc6c, 0x3, 0x2, 0x2, 0x2, 0xc6e, 0xc6f, 
       0x3, 0x2, 0x2, 0x2, 0xc6f, 0xc71, 0x3, 0x2, 0x2, 0x2, 0xc70, 0xc6e, 
       0x3, 0x2, 0x2, 0x2, 0xc71, 0xc72, 0x5, 0x158, 0xad, 0x2, 0xc72, 0xc73, 
       0x7, 0x1c, 0x2, 0x2, 0xc73, 0xc7b, 0x5, 0x64, 0x33, 0x2, 0xc74, 0xc76, 
       0x7, 0x7, 0x2, 0x2, 0xc75, 0xc74, 0x3, 0x2, 0x2, 0x2, 0xc76, 0xc79, 
       0x3, 0x2, 0x2, 0x2, 0xc77, 0xc75, 0x3, 0x2, 0x2, 0x2, 0xc77, 0xc78, 
       0x3, 0x2, 0x2, 0x2, 0xc78, 0xc7a, 0x3, 0x2, 0x2, 0x2, 0xc79, 0xc77, 
       0x3, 0x2, 0x2, 0x2, 0xc7a, 0xc7c, 0x7, 0xa, 0x2, 0x2, 0xc7b, 0xc77, 
       0x3, 0x2, 0x2, 0x2, 0xc7b, 0xc7c, 0x3, 0x2, 0x2, 0x2, 0xc7c, 0xc7d, 
       0x3, 0x2, 0x2, 0x2, 0xc7d, 0xc81, 0x7, 0xc, 0x2, 0x2, 0xc7e, 0xc80, 
       0x7, 0x7, 0x2, 0x2, 0xc7f, 0xc7e, 0x3, 0x2, 0x2, 0x2, 0xc80, 0xc83, 
       0x3, 0x2, 0x2, 0x2, 0xc81, 0xc7f, 0x3, 0x2, 0x2, 0x2, 0xc81, 0xc82, 
       0x3, 0x2, 0x2, 0x2, 0xc82, 0xc84, 0x3, 0x2, 0x2, 0x2, 0xc83, 0xc81, 
       0x3, 0x2, 0x2, 0x2, 0xc84, 0xc85, 0x5, 0x88, 0x45, 0x2, 0xc85, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0xc86, 0xc8a, 0x7, 0x5e, 0x2, 0x2, 0xc87, 0xc89, 
       0x7, 0x7, 0x2, 0x2, 0xc88, 0xc87, 0x3, 0x2, 0x2, 0x2, 0xc89, 0xc8c, 
       0x3, 0x2, 0x2, 0x2, 0xc8a, 0xc88, 0x3, 0x2, 0x2, 0x2, 0xc8a, 0xc8b, 
       0x3, 0x2, 0x2, 0x2, 0xc8b, 0xc8d, 0x3, 0x2, 0x2, 0x2, 0xc8c, 0xc8a, 
       0x3, 0x2, 0x2, 0x2, 0xc8d, 0xc8e, 0x5, 0x88, 0x45, 0x2, 0xc8e, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0xc8f, 0xc93, 0x7, 0x62, 0x2, 0x2, 0xc90, 0xc92, 
       0x7, 0x7, 0x2, 0x2, 0xc91, 0xc90, 0x3, 0x2, 0x2, 0x2, 0xc92, 0xc95, 
       0x3, 0x2, 0x2, 0x2, 0xc93, 0xc91, 0x3, 0x2, 0x2, 0x2, 0xc93, 0xc94, 
       0x3, 0x2, 0x2, 0x2, 0xc94, 0xc96, 0x3, 0x2, 0x2, 0x2, 0xc95, 0xc93, 
       0x3, 0x2, 0x2, 0x2, 0xc96, 0xca0, 0x5, 0x98, 0x4d, 0x2, 0xc97, 0xc99, 
       0x9, 0xc, 0x2, 0x2, 0xc98, 0xc9a, 0x5, 0x98, 0x4d, 0x2, 0xc99, 0xc98, 
       0x3, 0x2, 0x2, 0x2, 0xc99, 0xc9a, 0x3, 0x2, 0x2, 0x2, 0xc9a, 0xca0, 
       0x3, 0x2, 0x2, 0x2, 0xc9b, 0xca0, 0x7, 0x64, 0x2, 0x2, 0xc9c, 0xca0, 
       0x7, 0x3b, 0x2, 0x2, 0xc9d, 0xca0, 0x7, 0x65, 0x2, 0x2, 0xc9e, 0xca0, 
       0x7, 0x3c, 0x2, 0x2, 0xc9f, 0xc8f, 0x3, 0x2, 0x2, 0x2, 0xc9f, 0xc97, 
       0x3, 0x2, 0x2, 0x2, 0xc9f, 0xc9b, 0x3, 0x2, 0x2, 0x2, 0xc9f, 0xc9c, 
       0x3, 0x2, 0x2, 0x2, 0xc9f, 0xc9d, 0x3, 0x2, 0x2, 0x2, 0xc9f, 0xc9e, 
       0x3, 0x2, 0x2, 0x2, 0xca0, 0x10f, 0x3, 0x2, 0x2, 0x2, 0xca1, 0xca3, 
       0x5, 0x7c, 0x3f, 0x2, 0xca2, 0xca1, 0x3, 0x2, 0x2, 0x2, 0xca2, 0xca3, 
       0x3, 0x2, 0x2, 0x2, 0xca3, 0xca4, 0x3, 0x2, 0x2, 0x2, 0xca4, 0xca8, 
       0x7, 0x27, 0x2, 0x2, 0xca5, 0xca7, 0x7, 0x7, 0x2, 0x2, 0xca6, 0xca5, 
       0x3, 0x2, 0x2, 0x2, 0xca7, 0xcaa, 0x3, 0x2, 0x2, 0x2, 0xca8, 0xca6, 
       0x3, 0x2, 0x2, 0x2, 0xca8, 0xca9, 0x3, 0x2, 0x2, 0x2, 0xca9, 0xcad, 
       0x3, 0x2, 0x2, 0x2, 0xcaa, 0xca8, 0x3, 0x2, 0x2, 0x2, 0xcab, 0xcae, 
       0x5, 0x158, 0xad, 0x2, 0xcac, 0xcae, 0x7, 0x4a, 0x2, 0x2, 0xcad, 
       0xcab, 0x3, 0x2, 0x2, 0x2, 0xcad, 0xcac, 0x3, 0x2, 0x2, 0x2, 0xcae, 
       0x111, 0x3, 0x2, 0x2, 0x2, 0xcaf, 0xcb0, 0x9, 0xd, 0x2, 0x2, 0xcb0, 
       0x113, 0x3, 0x2, 0x2, 0x2, 0xcb1, 0xcb2, 0x9, 0xe, 0x2, 0x2, 0xcb2, 
       0x115, 0x3, 0x2, 0x2, 0x2, 0xcb3, 0xcb4, 0x9, 0xf, 0x2, 0x2, 0xcb4, 
       0x117, 0x3, 0x2, 0x2, 0x2, 0xcb5, 0xcb6, 0x9, 0x10, 0x2, 0x2, 0xcb6, 
       0x119, 0x3, 0x2, 0x2, 0x2, 0xcb7, 0xcb8, 0x9, 0x11, 0x2, 0x2, 0xcb8, 
       0x11b, 0x3, 0x2, 0x2, 0x2, 0xcb9, 0xcba, 0x9, 0x12, 0x2, 0x2, 0xcba, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0xcbb, 0xcbc, 0x9, 0x13, 0x2, 0x2, 0xcbc, 
       0x11f, 0x3, 0x2, 0x2, 0x2, 0xcbd, 0xcbe, 0x9, 0x14, 0x2, 0x2, 0xcbe, 
       0x121, 0x3, 0x2, 0x2, 0x2, 0xcbf, 0xcc5, 0x7, 0x16, 0x2, 0x2, 0xcc0, 
       0xcc5, 0x7, 0x17, 0x2, 0x2, 0xcc1, 0xcc5, 0x7, 0x15, 0x2, 0x2, 0xcc2, 
       0xcc5, 0x7, 0x14, 0x2, 0x2, 0xcc3, 0xcc5, 0x5, 0x126, 0x94, 0x2, 
       0xcc4, 0xcbf, 0x3, 0x2, 0x2, 0x2, 0xcc4, 0xcc0, 0x3, 0x2, 0x2, 0x2, 
       0xcc4, 0xcc1, 0x3, 0x2, 0x2, 0x2, 0xcc4, 0xcc2, 0x3, 0x2, 0x2, 0x2, 
       0xcc4, 0xcc3, 0x3, 0x2, 0x2, 0x2, 0xcc5, 0x123, 0x3, 0x2, 0x2, 0x2, 
       0xcc6, 0xccb, 0x7, 0x16, 0x2, 0x2, 0xcc7, 0xccb, 0x7, 0x17, 0x2, 
       0x2, 0xcc8, 0xcc9, 0x7, 0x1b, 0x2, 0x2, 0xcc9, 0xccb, 0x5, 0x126, 
       0x94, 0x2, 0xcca, 0xcc6, 0x3, 0x2, 0x2, 0x2, 0xcca, 0xcc7, 0x3, 0x2, 
       0x2, 0x2, 0xcca, 0xcc8, 0x3, 0x2, 0x2, 0x2, 0xccb, 0x125, 0x3, 0x2, 
       0x2, 0x2, 0xccc, 0xccd, 0x9, 0x15, 0x2, 0x2, 0xccd, 0x127, 0x3, 0x2, 
       0x2, 0x2, 0xcce, 0xcd0, 0x7, 0x7, 0x2, 0x2, 0xccf, 0xcce, 0x3, 0x2, 
       0x2, 0x2, 0xcd0, 0xcd3, 0x3, 0x2, 0x2, 0x2, 0xcd1, 0xccf, 0x3, 0x2, 
       0x2, 0x2, 0xcd1, 0xcd2, 0x3, 0x2, 0x2, 0x2, 0xcd2, 0xcd4, 0x3, 0x2, 
       0x2, 0x2, 0xcd3, 0xcd1, 0x3, 0x2, 0x2, 0x2, 0xcd4, 0xcde, 0x7, 0x9, 
       0x2, 0x2, 0xcd5, 0xcd7, 0x7, 0x7, 0x2, 0x2, 0xcd6, 0xcd5, 0x3, 0x2, 
       0x2, 0x2, 0xcd7, 0xcda, 0x3, 0x2, 0x2, 0x2, 0xcd8, 0xcd6, 0x3, 0x2, 
       0x2, 0x2, 0xcd8, 0xcd9, 0x3, 0x2, 0x2, 0x2, 0xcd9, 0xcdb, 0x3, 0x2, 
       0x2, 0x2, 0xcda, 0xcd8, 0x3, 0x2, 0x2, 0x2, 0xcdb, 0xcde, 0x5, 0x12a, 
       0x96, 0x2, 0xcdc, 0xcde, 0x7, 0x27, 0x2, 0x2, 0xcdd, 0xcd1, 0x3, 
       0x2, 0x2, 0x2, 0xcdd, 0xcd8, 0x3, 0x2, 0x2, 0x2, 0xcdd, 0xcdc, 0x3, 
       0x2, 0x2, 0x2, 0xcde, 0x129, 0x3, 0x2, 0x2, 0x2, 0xcdf, 0xce0, 0x7, 
       0x2f, 0x2, 0x2, 0xce0, 0xce1, 0x7, 0x9, 0x2, 0x2, 0xce1, 0x12b, 0x3, 
       0x2, 0x2, 0x2, 0xce2, 0xce5, 0x5, 0x14e, 0xa8, 0x2, 0xce3, 0xce5, 
       0x5, 0x130, 0x99, 0x2, 0xce4, 0xce2, 0x3, 0x2, 0x2, 0x2, 0xce4, 0xce3, 
       0x3, 0x2, 0x2, 0x2, 0xce5, 0xce6, 0x3, 0x2, 0x2, 0x2, 0xce6, 0xce4, 
       0x3, 0x2, 0x2, 0x2, 0xce6, 0xce7, 0x3, 0x2, 0x2, 0x2, 0xce7, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0xce8, 0xceb, 0x5, 0x14e, 0xa8, 0x2, 0xce9, 0xceb, 
       0x5, 0x148, 0xa5, 0x2, 0xcea, 0xce8, 0x3, 0x2, 0x2, 0x2, 0xcea, 0xce9, 
       0x3, 0x2, 0x2, 0x2, 0xceb, 0xcec, 0x3, 0x2, 0x2, 0x2, 0xcec, 0xcea, 
       0x3, 0x2, 0x2, 0x2, 0xcec, 0xced, 0x3, 0x2, 0x2, 0x2, 0xced, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0xcee, 0xcf7, 0x5, 0x136, 0x9c, 0x2, 0xcef, 0xcf7, 
       0x5, 0x138, 0x9d, 0x2, 0xcf0, 0xcf7, 0x5, 0x13a, 0x9e, 0x2, 0xcf1, 
       0xcf7, 0x5, 0x142, 0xa2, 0x2, 0xcf2, 0xcf7, 0x5, 0x144, 0xa3, 0x2, 
       0xcf3, 0xcf7, 0x5, 0x146, 0xa4, 0x2, 0xcf4, 0xcf7, 0x5, 0x148, 0xa5, 
       0x2, 0xcf5, 0xcf7, 0x5, 0x14c, 0xa7, 0x2, 0xcf6, 0xcee, 0x3, 0x2, 
       0x2, 0x2, 0xcf6, 0xcef, 0x3, 0x2, 0x2, 0x2, 0xcf6, 0xcf0, 0x3, 0x2, 
       0x2, 0x2, 0xcf6, 0xcf1, 0x3, 0x2, 0x2, 0x2, 0xcf6, 0xcf2, 0x3, 0x2, 
       0x2, 0x2, 0xcf6, 0xcf3, 0x3, 0x2, 0x2, 0x2, 0xcf6, 0xcf4, 0x3, 0x2, 
       0x2, 0x2, 0xcf6, 0xcf5, 0x3, 0x2, 0x2, 0x2, 0xcf7, 0xcfb, 0x3, 0x2, 
       0x2, 0x2, 0xcf8, 0xcfa, 0x7, 0x7, 0x2, 0x2, 0xcf9, 0xcf8, 0x3, 0x2, 
       0x2, 0x2, 0xcfa, 0xcfd, 0x3, 0x2, 0x2, 0x2, 0xcfb, 0xcf9, 0x3, 0x2, 
       0x2, 0x2, 0xcfb, 0xcfc, 0x3, 0x2, 0x2, 0x2, 0xcfc, 0x131, 0x3, 0x2, 
       0x2, 0x2, 0xcfd, 0xcfb, 0x3, 0x2, 0x2, 0x2, 0xcfe, 0xd00, 0x5, 0x134, 
       0x9b, 0x2, 0xcff, 0xcfe, 0x3, 0x2, 0x2, 0x2, 0xd00, 0xd01, 0x3, 0x2, 
       0x2, 0x2, 0xd01, 0xcff, 0x3, 0x2, 0x2, 0x2, 0xd01, 0xd02, 0x3, 0x2, 
       0x2, 0x2, 0xd02, 0x133, 0x3, 0x2, 0x2, 0x2, 0xd03, 0xd0c, 0x5, 0x14e, 
       0xa8, 0x2, 0xd04, 0xd08, 0x7, 0x7c, 0x2, 0x2, 0xd05, 0xd07, 0x7, 
       0x7, 0x2, 0x2, 0xd06, 0xd05, 0x3, 0x2, 0x2, 0x2, 0xd07, 0xd0a, 0x3, 
       0x2, 0x2, 0x2, 0xd08, 0xd06, 0x3, 0x2, 0x2, 0x2, 0xd08, 0xd09, 0x3, 
       0x2, 0x2, 0x2, 0xd09, 0xd0c, 0x3, 0x2, 0x2, 0x2, 0xd0a, 0xd08, 0x3, 
       0x2, 0x2, 0x2, 0xd0b, 0xd03, 0x3, 0x2, 0x2, 0x2, 0xd0b, 0xd04, 0x3, 
       0x2, 0x2, 0x2, 0xd0c, 0x135, 0x3, 0x2, 0x2, 0x2, 0xd0d, 0xd0e, 0x9, 
       0x16, 0x2, 0x2, 0xd0e, 0x137, 0x3, 0x2, 0x2, 0x2, 0xd0f, 0xd10, 0x9, 
       0x17, 0x2, 0x2, 0xd10, 0x139, 0x3, 0x2, 0x2, 0x2, 0xd11, 0xd12, 0x9, 
       0x18, 0x2, 0x2, 0xd12, 0x13b, 0x3, 0x2, 0x2, 0x2, 0xd13, 0xd14, 0x9, 
       0x19, 0x2, 0x2, 0xd14, 0x13d, 0x3, 0x2, 0x2, 0x2, 0xd15, 0xd17, 0x5, 
       0x140, 0xa1, 0x2, 0xd16, 0xd15, 0x3, 0x2, 0x2, 0x2, 0xd17, 0xd18, 
       0x3, 0x2, 0x2, 0x2, 0xd18, 0xd16, 0x3, 0x2, 0x2, 0x2, 0xd18, 0xd19, 
       0x3, 0x2, 0x2, 0x2, 0xd19, 0x13f, 0x3, 0x2, 0x2, 0x2, 0xd1a, 0xd1e, 
       0x5, 0x14a, 0xa6, 0x2, 0xd1b, 0xd1d, 0x7, 0x7, 0x2, 0x2, 0xd1c, 0xd1b, 
       0x3, 0x2, 0x2, 0x2, 0xd1d, 0xd20, 0x3, 0x2, 0x2, 0x2, 0xd1e, 0xd1c, 
       0x3, 0x2, 0x2, 0x2, 0xd1e, 0xd1f, 0x3, 0x2, 0x2, 0x2, 0xd1f, 0xd2a, 
       0x3, 0x2, 0x2, 0x2, 0xd20, 0xd1e, 0x3, 0x2, 0x2, 0x2, 0xd21, 0xd25, 
       0x5, 0x13c, 0x9f, 0x2, 0xd22, 0xd24, 0x7, 0x7, 0x2, 0x2, 0xd23, 0xd22, 
       0x3, 0x2, 0x2, 0x2, 0xd24, 0xd27, 0x3, 0x2, 0x2, 0x2, 0xd25, 0xd23, 
       0x3, 0x2, 0x2, 0x2, 0xd25, 0xd26, 0x3, 0x2, 0x2, 0x2, 0xd26, 0xd2a, 
       0x3, 0x2, 0x2, 0x2, 0xd27, 0xd25, 0x3, 0x2, 0x2, 0x2, 0xd28, 0xd2a, 
       0x5, 0x14e, 0xa8, 0x2, 0xd29, 0xd1a, 0x3, 0x2, 0x2, 0x2, 0xd29, 0xd21, 
       0x3, 0x2, 0x2, 0x2, 0xd29, 0xd28, 0x3, 0x2, 0x2, 0x2, 0xd2a, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0xd2b, 0xd2c, 0x9, 0x1a, 0x2, 0x2, 0xd2c, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0xd2d, 0xd2e, 0x7, 0x81, 0x2, 0x2, 0xd2e, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0xd2f, 0xd30, 0x9, 0x1b, 0x2, 0x2, 0xd30, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0xd31, 0xd32, 0x9, 0x1c, 0x2, 0x2, 0xd32, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0xd33, 0xd34, 0x7, 0x86, 0x2, 0x2, 0xd34, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0xd35, 0xd36, 0x9, 0x1d, 0x2, 0x2, 0xd36, 0x14d, 
       0x3, 0x2, 0x2, 0x2, 0xd37, 0xd3a, 0x5, 0x150, 0xa9, 0x2, 0xd38, 0xd3a, 
       0x5, 0x152, 0xaa, 0x2, 0xd39, 0xd37, 0x3, 0x2, 0x2, 0x2, 0xd39, 0xd38, 
       0x3, 0x2, 0x2, 0x2, 0xd3a, 0xd3e, 0x3, 0x2, 0x2, 0x2, 0xd3b, 0xd3d, 
       0x7, 0x7, 0x2, 0x2, 0xd3c, 0xd3b, 0x3, 0x2, 0x2, 0x2, 0xd3d, 0xd40, 
       0x3, 0x2, 0x2, 0x2, 0xd3e, 0xd3c, 0x3, 0x2, 0x2, 0x2, 0xd3e, 0xd3f, 
       0x3, 0x2, 0x2, 0x2, 0xd3f, 0x14f, 0x3, 0x2, 0x2, 0x2, 0xd40, 0xd3e, 
       0x3, 0x2, 0x2, 0x2, 0xd41, 0xd45, 0x5, 0x154, 0xab, 0x2, 0xd42, 0xd44, 
       0x7, 0x7, 0x2, 0x2, 0xd43, 0xd42, 0x3, 0x2, 0x2, 0x2, 0xd44, 0xd47, 
       0x3, 0x2, 0x2, 0x2, 0xd45, 0xd43, 0x3, 0x2, 0x2, 0x2, 0xd45, 0xd46, 
       0x3, 0x2, 0x2, 0x2, 0xd46, 0xd4b, 0x3, 0x2, 0x2, 0x2, 0xd47, 0xd45, 
       0x3, 0x2, 0x2, 0x2, 0xd48, 0xd4b, 0x7, 0x2a, 0x2, 0x2, 0xd49, 0xd4b, 
       0x7, 0x2c, 0x2, 0x2, 0xd4a, 0xd41, 0x3, 0x2, 0x2, 0x2, 0xd4a, 0xd48, 
       0x3, 0x2, 0x2, 0x2, 0xd4a, 0xd49, 0x3, 0x2, 0x2, 0x2, 0xd4b, 0xd4c, 
       0x3, 0x2, 0x2, 0x2, 0xd4c, 0xd4d, 0x5, 0x156, 0xac, 0x2, 0xd4d, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0xd4e, 0xd52, 0x5, 0x154, 0xab, 0x2, 0xd4f, 0xd51, 
       0x7, 0x7, 0x2, 0x2, 0xd50, 0xd4f, 0x3, 0x2, 0x2, 0x2, 0xd51, 0xd54, 
       0x3, 0x2, 0x2, 0x2, 0xd52, 0xd50, 0x3, 0x2, 0x2, 0x2, 0xd52, 0xd53, 
       0x3, 0x2, 0x2, 0x2, 0xd53, 0xd58, 0x3, 0x2, 0x2, 0x2, 0xd54, 0xd52, 
       0x3, 0x2, 0x2, 0x2, 0xd55, 0xd58, 0x7, 0x2a, 0x2, 0x2, 0xd56, 0xd58, 
       0x7, 0x2c, 0x2, 0x2, 0xd57, 0xd4e, 0x3, 0x2, 0x2, 0x2, 0xd57, 0xd55, 
       0x3, 0x2, 0x2, 0x2, 0xd57, 0xd56, 0x3, 0x2, 0x2, 0x2, 0xd58, 0xd59, 
       0x3, 0x2, 0x2, 0x2, 0xd59, 0xd5b, 0x7, 0xd, 0x2, 0x2, 0xd5a, 0xd5c, 
       0x5, 0x156, 0xac, 0x2, 0xd5b, 0xd5a, 0x3, 0x2, 0x2, 0x2, 0xd5c, 0xd5d, 
       0x3, 0x2, 0x2, 0x2, 0xd5d, 0xd5b, 0x3, 0x2, 0x2, 0x2, 0xd5d, 0xd5e, 
       0x3, 0x2, 0x2, 0x2, 0xd5e, 0xd5f, 0x3, 0x2, 0x2, 0x2, 0xd5f, 0xd60, 
       0x7, 0xe, 0x2, 0x2, 0xd60, 0x153, 0x3, 0x2, 0x2, 0x2, 0xd61, 0xd62, 
       0x9, 0x2, 0x2, 0x2, 0xd62, 0xd66, 0x9, 0x1e, 0x2, 0x2, 0xd63, 0xd65, 
       0x7, 0x7, 0x2, 0x2, 0xd64, 0xd63, 0x3, 0x2, 0x2, 0x2, 0xd65, 0xd68, 
       0x3, 0x2, 0x2, 0x2, 0xd66, 0xd64, 0x3, 0x2, 0x2, 0x2, 0xd66, 0xd67, 
       0x3, 0x2, 0x2, 0x2, 0xd67, 0xd69, 0x3, 0x2, 0x2, 0x2, 0xd68, 0xd66, 
       0x3, 0x2, 0x2, 0x2, 0xd69, 0xd6a, 0x7, 0x1c, 0x2, 0x2, 0xd6a, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0xd6b, 0xd6e, 0x5, 0x26, 0x14, 0x2, 0xd6c, 0xd6e, 
       0x5, 0x6c, 0x37, 0x2, 0xd6d, 0xd6b, 0x3, 0x2, 0x2, 0x2, 0xd6d, 0xd6c, 
       0x3, 0x2, 0x2, 0x2, 0xd6e, 0x157, 0x3, 0x2, 0x2, 0x2, 0xd6f, 0xd70, 
       0x9, 0x1f, 0x2, 0x2, 0xd70, 0x159, 0x3, 0x2, 0x2, 0x2, 0xd71, 0xd7c, 
       0x5, 0x158, 0xad, 0x2, 0xd72, 0xd74, 0x7, 0x7, 0x2, 0x2, 0xd73, 0xd72, 
       0x3, 0x2, 0x2, 0x2, 0xd74, 0xd77, 0x3, 0x2, 0x2, 0x2, 0xd75, 0xd73, 
       0x3, 0x2, 0x2, 0x2, 0xd75, 0xd76, 0x3, 0x2, 0x2, 0x2, 0xd76, 0xd78, 
       0x3, 0x2, 0x2, 0x2, 0xd77, 0xd75, 0x3, 0x2, 0x2, 0x2, 0xd78, 0xd79, 
       0x7, 0x9, 0x2, 0x2, 0xd79, 0xd7b, 0x5, 0x158, 0xad, 0x2, 0xd7a, 0xd75, 
       0x3, 0x2, 0x2, 0x2, 0xd7b, 0xd7e, 0x3, 0x2, 0x2, 0x2, 0xd7c, 0xd7a, 
       0x3, 0x2, 0x2, 0x2, 0xd7c, 0xd7d, 0x3, 0x2, 0x2, 0x2, 0xd7d, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0xd7e, 0xd7c, 0x3, 0x2, 0x2, 0x2, 0x214, 0x15d, 
       0x162, 0x168, 0x170, 0x176, 0x17b, 0x181, 0x18b, 0x194, 0x19b, 0x1a2, 
       0x1a9, 0x1ae, 0x1b3, 0x1b9, 0x1bb, 0x1c0, 0x1c8, 0x1cb, 0x1d2, 0x1d5, 
       0x1db, 0x1e2, 0x1e6, 0x1eb, 0x1f2, 0x1fc, 0x1ff, 0x206, 0x209, 0x20c, 
       0x211, 0x218, 0x21c, 0x221, 0x225, 0x22a, 0x231, 0x235, 0x23a, 0x23e, 
       0x243, 0x24a, 0x24e, 0x251, 0x257, 0x25a, 0x262, 0x269, 0x272, 0x279, 
       0x280, 0x286, 0x28c, 0x290, 0x292, 0x297, 0x29d, 0x2a0, 0x2a5, 0x2ad, 
       0x2b4, 0x2bb, 0x2bf, 0x2c5, 0x2cc, 0x2d2, 0x2d9, 0x2e1, 0x2e7, 0x2ee, 
       0x2f3, 0x2fa, 0x303, 0x30a, 0x311, 0x317, 0x31d, 0x321, 0x326, 0x32c, 
       0x331, 0x338, 0x33f, 0x343, 0x349, 0x350, 0x357, 0x35d, 0x363, 0x36a, 
       0x371, 0x378, 0x37c, 0x383, 0x389, 0x38f, 0x395, 0x39c, 0x3a0, 0x3a5, 
       0x3ac, 0x3b0, 0x3b5, 0x3b9, 0x3bf, 0x3c6, 0x3cd, 0x3d3, 0x3d9, 0x3dd, 
       0x3df, 0x3e4, 0x3ea, 0x3f0, 0x3f7, 0x3fb, 0x3fe, 0x404, 0x408, 0x40d, 
       0x414, 0x419, 0x41e, 0x425, 0x42c, 0x433, 0x437, 0x43c, 0x440, 0x445, 
       0x449, 0x450, 0x454, 0x459, 0x45f, 0x466, 0x46d, 0x471, 0x477, 0x47e, 
       0x485, 0x48b, 0x491, 0x495, 0x49a, 0x4a0, 0x4a6, 0x4aa, 0x4af, 0x4b6, 
       0x4bb, 0x4c0, 0x4c5, 0x4ca, 0x4ce, 0x4d3, 0x4da, 0x4df, 0x4e1, 0x4e6, 
       0x4e9, 0x4ee, 0x4f2, 0x4f7, 0x4fb, 0x4fe, 0x501, 0x506, 0x50a, 0x50d, 
       0x50f, 0x515, 0x51b, 0x521, 0x528, 0x52f, 0x536, 0x53a, 0x53f, 0x543, 
       0x546, 0x54c, 0x553, 0x55a, 0x55e, 0x563, 0x56a, 0x571, 0x575, 0x57a, 
       0x57f, 0x585, 0x58c, 0x593, 0x599, 0x59f, 0x5a3, 0x5a5, 0x5aa, 0x5b0, 
       0x5b6, 0x5bd, 0x5c1, 0x5c7, 0x5ce, 0x5d2, 0x5d8, 0x5df, 0x5e5, 0x5eb, 
       0x5f2, 0x5f9, 0x5fd, 0x602, 0x606, 0x609, 0x60f, 0x616, 0x61d, 0x621, 
       0x626, 0x62a, 0x630, 0x639, 0x63d, 0x642, 0x649, 0x64d, 0x652, 0x65b, 
       0x662, 0x668, 0x66e, 0x672, 0x678, 0x67b, 0x681, 0x685, 0x68a, 0x68e, 
       0x691, 0x697, 0x69b, 0x69f, 0x6a4, 0x6aa, 0x6b2, 0x6b9, 0x6bf, 0x6c6, 
       0x6ca, 0x6cd, 0x6d1, 0x6d6, 0x6dc, 0x6e0, 0x6e6, 0x6ed, 0x6f0, 0x6f6, 
       0x6fd, 0x706, 0x70b, 0x710, 0x717, 0x71c, 0x720, 0x726, 0x72a, 0x72f, 
       0x738, 0x73f, 0x745, 0x74a, 0x750, 0x755, 0x75a, 0x765, 0x768, 0x76b, 
       0x76f, 0x771, 0x778, 0x77f, 0x784, 0x78a, 0x791, 0x799, 0x79f, 0x7a6, 
       0x7ab, 0x7b3, 0x7b7, 0x7bd, 0x7c6, 0x7cb, 0x7d1, 0x7d5, 0x7da, 0x7e1, 
       0x7ee, 0x7f3, 0x7fc, 0x800, 0x805, 0x808, 0x810, 0x817, 0x81d, 0x824, 
       0x82b, 0x831, 0x839, 0x840, 0x848, 0x84f, 0x856, 0x85e, 0x867, 0x86c, 
       0x86e, 0x875, 0x87c, 0x883, 0x88e, 0x895, 0x89d, 0x8a3, 0x8ab, 0x8b2, 
       0x8ba, 0x8c1, 0x8c8, 0x8cf, 0x8d6, 0x8dc, 0x8e7, 0x8ea, 0x8f0, 0x8f8, 
       0x8ff, 0x905, 0x90c, 0x913, 0x919, 0x920, 0x928, 0x92e, 0x935, 0x93c, 
       0x942, 0x948, 0x94c, 0x951, 0x95a, 0x960, 0x963, 0x966, 0x96a, 0x96f, 
       0x973, 0x978, 0x981, 0x988, 0x98f, 0x995, 0x99b, 0x99f, 0x9a4, 0x9ad, 
       0x9b4, 0x9bb, 0x9c1, 0x9c7, 0x9cb, 0x9d0, 0x9d3, 0x9d8, 0x9dd, 0x9e4, 
       0x9eb, 0x9ee, 0x9f1, 0x9f6, 0xa09, 0xa0f, 0xa16, 0xa1f, 0xa26, 0xa2d, 
       0xa33, 0xa39, 0xa3d, 0xa42, 0xa45, 0xa4d, 0xa52, 0xa54, 0xa5d, 0xa5f, 
       0xa6a, 0xa71, 0xa7c, 0xa83, 0xa8c, 0xa90, 0xa95, 0xa9c, 0xa9f, 0xaa5, 
       0xaae, 0xab5, 0xabb, 0xac1, 0xac5, 0xacc, 0xad3, 0xad7, 0xad9, 0xadf, 
       0xae6, 0xaeb, 0xaf0, 0xaf7, 0xafe, 0xb02, 0xb07, 0xb0b, 0xb10, 0xb14, 
       0xb18, 0xb1e, 0xb25, 0xb2c, 0xb2f, 0xb34, 0xb38, 0xb41, 0xb48, 0xb4d, 
       0xb51, 0xb54, 0xb5a, 0xb61, 0xb68, 0xb6f, 0xb74, 0xb79, 0xb7d, 0xb82, 
       0xb89, 0xb8e, 0xb91, 0xb97, 0xb9d, 0xba4, 0xbab, 0xbb2, 0xbb5, 0xbbe, 
       0xbc2, 0xbc7, 0xbce, 0xbd5, 0xbda, 0xbe0, 0xbe9, 0xbf0, 0xbf6, 0xbfc, 
       0xc00, 0xc05, 0xc0c, 0xc11, 0xc17, 0xc1e, 0xc23, 0xc25, 0xc2a, 0xc30, 
       0xc39, 0xc42, 0xc49, 0xc4f, 0xc54, 0xc58, 0xc5d, 0xc61, 0xc67, 0xc6e, 
       0xc77, 0xc7b, 0xc81, 0xc8a, 0xc93, 0xc99, 0xc9f, 0xca2, 0xca8, 0xcad, 
       0xcc4, 0xcca, 0xcd1, 0xcd8, 0xcdd, 0xce4, 0xce6, 0xcea, 0xcec, 0xcf6, 
       0xcfb, 0xd01, 0xd08, 0xd0b, 0xd18, 0xd1e, 0xd25, 0xd29, 0xd39, 0xd3e, 
       0xd45, 0xd4a, 0xd52, 0xd57, 0xd5d, 0xd66, 0xd6d, 0xd75, 0xd7c, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KotlinParser::Initializer KotlinParser::_init;
