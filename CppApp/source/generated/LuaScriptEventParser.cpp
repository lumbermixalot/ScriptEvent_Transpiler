
// Generated from ../LuaScriptEvent.g4 by ANTLR 4.13.1


#include "LuaScriptEventVisitor.h"

#include "LuaScriptEventParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LuaScriptEventParserStaticData final {
  LuaScriptEventParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LuaScriptEventParserStaticData(const LuaScriptEventParserStaticData&) = delete;
  LuaScriptEventParserStaticData(LuaScriptEventParserStaticData&&) = delete;
  LuaScriptEventParserStaticData& operator=(const LuaScriptEventParserStaticData&) = delete;
  LuaScriptEventParserStaticData& operator=(LuaScriptEventParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag luascripteventParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LuaScriptEventParserStaticData *luascripteventParserStaticData = nullptr;

void luascripteventParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (luascripteventParserStaticData != nullptr) {
    return;
  }
#else
  assert(luascripteventParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LuaScriptEventParserStaticData>(
    std::vector<std::string>{
      "module", "functionDecl", "parameters", "returnStatement", "parameter", 
      "funcname", "datatype", "classtype", "booltype", "numbertype", "stringtype"
    },
    std::vector<std::string>{
      "", "'function'", "'('", "')'", "'end'", "','", "'return'", "'='", 
      "'()'", "", "", "", "", "", "'true'", "'false'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "ID", "DOUBLEQS", "SINGLEQS", 
      "INT", "FLOAT", "BTRUE", "BFALSE", "WS", "COMMENT", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,18,75,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,4,0,24,8,0,11,0,12,0,25,1,0,1,0,1,1,
  	1,1,1,1,1,1,3,1,34,8,1,1,1,1,1,3,1,38,8,1,1,1,1,1,1,2,1,2,1,2,5,2,45,
  	8,2,10,2,12,2,48,9,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,
  	1,6,3,6,63,8,6,1,7,1,7,3,7,67,8,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,0,0,
  	11,0,2,4,6,8,10,12,14,16,18,20,0,3,1,0,14,15,1,0,12,13,1,0,10,11,71,0,
  	23,1,0,0,0,2,29,1,0,0,0,4,41,1,0,0,0,6,49,1,0,0,0,8,52,1,0,0,0,10,56,
  	1,0,0,0,12,62,1,0,0,0,14,64,1,0,0,0,16,68,1,0,0,0,18,70,1,0,0,0,20,72,
  	1,0,0,0,22,24,3,2,1,0,23,22,1,0,0,0,24,25,1,0,0,0,25,23,1,0,0,0,25,26,
  	1,0,0,0,26,27,1,0,0,0,27,28,5,0,0,1,28,1,1,0,0,0,29,30,5,1,0,0,30,31,
  	3,10,5,0,31,33,5,2,0,0,32,34,3,4,2,0,33,32,1,0,0,0,33,34,1,0,0,0,34,35,
  	1,0,0,0,35,37,5,3,0,0,36,38,3,6,3,0,37,36,1,0,0,0,37,38,1,0,0,0,38,39,
  	1,0,0,0,39,40,5,4,0,0,40,3,1,0,0,0,41,46,3,8,4,0,42,43,5,5,0,0,43,45,
  	3,8,4,0,44,42,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,5,
  	1,0,0,0,48,46,1,0,0,0,49,50,5,6,0,0,50,51,3,12,6,0,51,7,1,0,0,0,52,53,
  	5,9,0,0,53,54,5,7,0,0,54,55,3,12,6,0,55,9,1,0,0,0,56,57,5,9,0,0,57,11,
  	1,0,0,0,58,63,3,16,8,0,59,63,3,18,9,0,60,63,3,20,10,0,61,63,3,14,7,0,
  	62,58,1,0,0,0,62,59,1,0,0,0,62,60,1,0,0,0,62,61,1,0,0,0,63,13,1,0,0,0,
  	64,66,5,9,0,0,65,67,5,8,0,0,66,65,1,0,0,0,66,67,1,0,0,0,67,15,1,0,0,0,
  	68,69,7,0,0,0,69,17,1,0,0,0,70,71,7,1,0,0,71,19,1,0,0,0,72,73,7,2,0,0,
  	73,21,1,0,0,0,6,25,33,37,46,62,66
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  luascripteventParserStaticData = staticData.release();
}

}

LuaScriptEventParser::LuaScriptEventParser(TokenStream *input) : LuaScriptEventParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LuaScriptEventParser::LuaScriptEventParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LuaScriptEventParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *luascripteventParserStaticData->atn, luascripteventParserStaticData->decisionToDFA, luascripteventParserStaticData->sharedContextCache, options);
}

LuaScriptEventParser::~LuaScriptEventParser() {
  delete _interpreter;
}

const atn::ATN& LuaScriptEventParser::getATN() const {
  return *luascripteventParserStaticData->atn;
}

std::string LuaScriptEventParser::getGrammarFileName() const {
  return "LuaScriptEvent.g4";
}

const std::vector<std::string>& LuaScriptEventParser::getRuleNames() const {
  return luascripteventParserStaticData->ruleNames;
}

const dfa::Vocabulary& LuaScriptEventParser::getVocabulary() const {
  return luascripteventParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LuaScriptEventParser::getSerializedATN() const {
  return luascripteventParserStaticData->serializedATN;
}


//----------------- ModuleContext ------------------------------------------------------------------

LuaScriptEventParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::ModuleContext::EOF() {
  return getToken(LuaScriptEventParser::EOF, 0);
}

std::vector<LuaScriptEventParser::FunctionDeclContext *> LuaScriptEventParser::ModuleContext::functionDecl() {
  return getRuleContexts<LuaScriptEventParser::FunctionDeclContext>();
}

LuaScriptEventParser::FunctionDeclContext* LuaScriptEventParser::ModuleContext::functionDecl(size_t i) {
  return getRuleContext<LuaScriptEventParser::FunctionDeclContext>(i);
}


size_t LuaScriptEventParser::ModuleContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleModule;
}


std::any LuaScriptEventParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::ModuleContext* LuaScriptEventParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, LuaScriptEventParser::RuleModule);
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
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      functionDecl();
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LuaScriptEventParser::T__0);
    setState(27);
    match(LuaScriptEventParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

LuaScriptEventParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaScriptEventParser::FuncnameContext* LuaScriptEventParser::FunctionDeclContext::funcname() {
  return getRuleContext<LuaScriptEventParser::FuncnameContext>(0);
}

LuaScriptEventParser::ParametersContext* LuaScriptEventParser::FunctionDeclContext::parameters() {
  return getRuleContext<LuaScriptEventParser::ParametersContext>(0);
}

LuaScriptEventParser::ReturnStatementContext* LuaScriptEventParser::FunctionDeclContext::returnStatement() {
  return getRuleContext<LuaScriptEventParser::ReturnStatementContext>(0);
}


size_t LuaScriptEventParser::FunctionDeclContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleFunctionDecl;
}


std::any LuaScriptEventParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::FunctionDeclContext* LuaScriptEventParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, LuaScriptEventParser::RuleFunctionDecl);
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
    setState(29);
    match(LuaScriptEventParser::T__0);
    setState(30);
    funcname();
    setState(31);
    match(LuaScriptEventParser::T__1);
    setState(33);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaScriptEventParser::ID) {
      setState(32);
      parameters();
    }
    setState(35);
    match(LuaScriptEventParser::T__2);
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaScriptEventParser::T__5) {
      setState(36);
      returnStatement();
    }
    setState(39);
    match(LuaScriptEventParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

LuaScriptEventParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaScriptEventParser::ParameterContext *> LuaScriptEventParser::ParametersContext::parameter() {
  return getRuleContexts<LuaScriptEventParser::ParameterContext>();
}

LuaScriptEventParser::ParameterContext* LuaScriptEventParser::ParametersContext::parameter(size_t i) {
  return getRuleContext<LuaScriptEventParser::ParameterContext>(i);
}


size_t LuaScriptEventParser::ParametersContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleParameters;
}


std::any LuaScriptEventParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::ParametersContext* LuaScriptEventParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, LuaScriptEventParser::RuleParameters);
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
    setState(41);
    parameter();
    setState(46);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaScriptEventParser::T__4) {
      setState(42);
      match(LuaScriptEventParser::T__4);
      setState(43);
      parameter();
      setState(48);
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

//----------------- ReturnStatementContext ------------------------------------------------------------------

LuaScriptEventParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaScriptEventParser::DatatypeContext* LuaScriptEventParser::ReturnStatementContext::datatype() {
  return getRuleContext<LuaScriptEventParser::DatatypeContext>(0);
}


size_t LuaScriptEventParser::ReturnStatementContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleReturnStatement;
}


std::any LuaScriptEventParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::ReturnStatementContext* LuaScriptEventParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, LuaScriptEventParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(LuaScriptEventParser::T__5);
    setState(50);
    datatype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

LuaScriptEventParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::ParameterContext::ID() {
  return getToken(LuaScriptEventParser::ID, 0);
}

LuaScriptEventParser::DatatypeContext* LuaScriptEventParser::ParameterContext::datatype() {
  return getRuleContext<LuaScriptEventParser::DatatypeContext>(0);
}


size_t LuaScriptEventParser::ParameterContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleParameter;
}


std::any LuaScriptEventParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::ParameterContext* LuaScriptEventParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 8, LuaScriptEventParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(LuaScriptEventParser::ID);
    setState(53);
    match(LuaScriptEventParser::T__6);
    setState(54);
    datatype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

LuaScriptEventParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::FuncnameContext::ID() {
  return getToken(LuaScriptEventParser::ID, 0);
}


size_t LuaScriptEventParser::FuncnameContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleFuncname;
}


std::any LuaScriptEventParser::FuncnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitFuncname(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::FuncnameContext* LuaScriptEventParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 10, LuaScriptEventParser::RuleFuncname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(LuaScriptEventParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

LuaScriptEventParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaScriptEventParser::BooltypeContext* LuaScriptEventParser::DatatypeContext::booltype() {
  return getRuleContext<LuaScriptEventParser::BooltypeContext>(0);
}

LuaScriptEventParser::NumbertypeContext* LuaScriptEventParser::DatatypeContext::numbertype() {
  return getRuleContext<LuaScriptEventParser::NumbertypeContext>(0);
}

LuaScriptEventParser::StringtypeContext* LuaScriptEventParser::DatatypeContext::stringtype() {
  return getRuleContext<LuaScriptEventParser::StringtypeContext>(0);
}

LuaScriptEventParser::ClasstypeContext* LuaScriptEventParser::DatatypeContext::classtype() {
  return getRuleContext<LuaScriptEventParser::ClasstypeContext>(0);
}


size_t LuaScriptEventParser::DatatypeContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleDatatype;
}


std::any LuaScriptEventParser::DatatypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitDatatype(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::DatatypeContext* LuaScriptEventParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 12, LuaScriptEventParser::RuleDatatype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaScriptEventParser::BTRUE:
      case LuaScriptEventParser::BFALSE: {
        enterOuterAlt(_localctx, 1);
        setState(58);
        booltype();
        break;
      }

      case LuaScriptEventParser::INT:
      case LuaScriptEventParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(59);
        numbertype();
        break;
      }

      case LuaScriptEventParser::DOUBLEQS:
      case LuaScriptEventParser::SINGLEQS: {
        enterOuterAlt(_localctx, 3);
        setState(60);
        stringtype();
        break;
      }

      case LuaScriptEventParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(61);
        classtype();
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

//----------------- ClasstypeContext ------------------------------------------------------------------

LuaScriptEventParser::ClasstypeContext::ClasstypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::ClasstypeContext::ID() {
  return getToken(LuaScriptEventParser::ID, 0);
}


size_t LuaScriptEventParser::ClasstypeContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleClasstype;
}


std::any LuaScriptEventParser::ClasstypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitClasstype(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::ClasstypeContext* LuaScriptEventParser::classtype() {
  ClasstypeContext *_localctx = _tracker.createInstance<ClasstypeContext>(_ctx, getState());
  enterRule(_localctx, 14, LuaScriptEventParser::RuleClasstype);
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
    setState(64);
    match(LuaScriptEventParser::ID);
    setState(66);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaScriptEventParser::T__7) {
      setState(65);
      match(LuaScriptEventParser::T__7);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooltypeContext ------------------------------------------------------------------

LuaScriptEventParser::BooltypeContext::BooltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::BooltypeContext::BTRUE() {
  return getToken(LuaScriptEventParser::BTRUE, 0);
}

tree::TerminalNode* LuaScriptEventParser::BooltypeContext::BFALSE() {
  return getToken(LuaScriptEventParser::BFALSE, 0);
}


size_t LuaScriptEventParser::BooltypeContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleBooltype;
}


std::any LuaScriptEventParser::BooltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitBooltype(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::BooltypeContext* LuaScriptEventParser::booltype() {
  BooltypeContext *_localctx = _tracker.createInstance<BooltypeContext>(_ctx, getState());
  enterRule(_localctx, 16, LuaScriptEventParser::RuleBooltype);
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
    setState(68);
    _la = _input->LA(1);
    if (!(_la == LuaScriptEventParser::BTRUE

    || _la == LuaScriptEventParser::BFALSE)) {
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

//----------------- NumbertypeContext ------------------------------------------------------------------

LuaScriptEventParser::NumbertypeContext::NumbertypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::NumbertypeContext::INT() {
  return getToken(LuaScriptEventParser::INT, 0);
}

tree::TerminalNode* LuaScriptEventParser::NumbertypeContext::FLOAT() {
  return getToken(LuaScriptEventParser::FLOAT, 0);
}


size_t LuaScriptEventParser::NumbertypeContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleNumbertype;
}


std::any LuaScriptEventParser::NumbertypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitNumbertype(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::NumbertypeContext* LuaScriptEventParser::numbertype() {
  NumbertypeContext *_localctx = _tracker.createInstance<NumbertypeContext>(_ctx, getState());
  enterRule(_localctx, 18, LuaScriptEventParser::RuleNumbertype);
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
    setState(70);
    _la = _input->LA(1);
    if (!(_la == LuaScriptEventParser::INT

    || _la == LuaScriptEventParser::FLOAT)) {
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

//----------------- StringtypeContext ------------------------------------------------------------------

LuaScriptEventParser::StringtypeContext::StringtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaScriptEventParser::StringtypeContext::DOUBLEQS() {
  return getToken(LuaScriptEventParser::DOUBLEQS, 0);
}

tree::TerminalNode* LuaScriptEventParser::StringtypeContext::SINGLEQS() {
  return getToken(LuaScriptEventParser::SINGLEQS, 0);
}


size_t LuaScriptEventParser::StringtypeContext::getRuleIndex() const {
  return LuaScriptEventParser::RuleStringtype;
}


std::any LuaScriptEventParser::StringtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaScriptEventVisitor*>(visitor))
    return parserVisitor->visitStringtype(this);
  else
    return visitor->visitChildren(this);
}

LuaScriptEventParser::StringtypeContext* LuaScriptEventParser::stringtype() {
  StringtypeContext *_localctx = _tracker.createInstance<StringtypeContext>(_ctx, getState());
  enterRule(_localctx, 20, LuaScriptEventParser::RuleStringtype);
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
    setState(72);
    _la = _input->LA(1);
    if (!(_la == LuaScriptEventParser::DOUBLEQS

    || _la == LuaScriptEventParser::SINGLEQS)) {
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

void LuaScriptEventParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  luascripteventParserInitialize();
#else
  ::antlr4::internal::call_once(luascripteventParserOnceFlag, luascripteventParserInitialize);
#endif
}
