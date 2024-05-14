
// Generated from ../LuaScriptEvent.g4 by ANTLR 4.13.1


#include "LuaScriptEventLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LuaScriptEventLexerStaticData final {
  LuaScriptEventLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LuaScriptEventLexerStaticData(const LuaScriptEventLexerStaticData&) = delete;
  LuaScriptEventLexerStaticData(LuaScriptEventLexerStaticData&&) = delete;
  LuaScriptEventLexerStaticData& operator=(const LuaScriptEventLexerStaticData&) = delete;
  LuaScriptEventLexerStaticData& operator=(LuaScriptEventLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag luascripteventlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LuaScriptEventLexerStaticData *luascripteventlexerLexerStaticData = nullptr;

void luascripteventlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (luascripteventlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(luascripteventlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LuaScriptEventLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "ID", 
      "LETTER", "DOUBLEQS", "SINGLEQS", "INT", "FLOAT", "DIGIT", "BTRUE", 
      "BFALSE", "WS", "NESTED_STR", "COMMENT", "LINE_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,18,211,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,5,8,78,
  	8,8,10,8,12,8,81,9,8,1,9,1,9,1,10,1,10,5,10,87,8,10,10,10,12,10,90,9,
  	10,1,10,1,10,1,11,1,11,5,11,96,8,11,10,11,12,11,99,9,11,1,11,1,11,1,12,
  	4,12,104,8,12,11,12,12,12,105,1,13,4,13,109,8,13,11,13,12,13,110,1,13,
  	1,13,5,13,115,8,13,10,13,12,13,118,9,13,1,13,1,13,4,13,122,8,13,11,13,
  	12,13,123,3,13,126,8,13,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,17,4,17,142,8,17,11,17,12,17,143,1,17,1,17,1,18,
  	1,18,1,18,1,18,1,18,1,18,5,18,154,8,18,10,18,12,18,157,9,18,1,18,3,18,
  	160,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,5,20,177,8,20,10,20,12,20,180,9,20,1,20,1,20,5,20,184,
  	8,20,10,20,12,20,187,9,20,1,20,1,20,5,20,191,8,20,10,20,12,20,194,9,20,
  	1,20,1,20,5,20,198,8,20,10,20,12,20,201,9,20,3,20,203,8,20,1,20,1,20,
  	1,20,3,20,208,8,20,1,20,1,20,1,155,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,
  	15,8,17,9,19,0,21,10,23,11,25,12,27,13,29,0,31,14,33,15,35,16,37,0,39,
  	17,41,18,1,0,9,3,0,65,90,95,95,97,122,1,0,34,34,1,0,39,39,1,0,48,57,3,
  	0,9,10,13,13,32,32,4,0,10,10,13,13,61,61,91,91,2,0,10,10,13,13,3,0,10,
  	10,13,13,91,91,2,1,10,10,13,13,227,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,31,1,0,
  	0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,
  	3,52,1,0,0,0,5,54,1,0,0,0,7,56,1,0,0,0,9,60,1,0,0,0,11,62,1,0,0,0,13,
  	69,1,0,0,0,15,71,1,0,0,0,17,74,1,0,0,0,19,82,1,0,0,0,21,84,1,0,0,0,23,
  	93,1,0,0,0,25,103,1,0,0,0,27,125,1,0,0,0,29,127,1,0,0,0,31,129,1,0,0,
  	0,33,134,1,0,0,0,35,141,1,0,0,0,37,159,1,0,0,0,39,161,1,0,0,0,41,170,
  	1,0,0,0,43,44,5,102,0,0,44,45,5,117,0,0,45,46,5,110,0,0,46,47,5,99,0,
  	0,47,48,5,116,0,0,48,49,5,105,0,0,49,50,5,111,0,0,50,51,5,110,0,0,51,
  	2,1,0,0,0,52,53,5,40,0,0,53,4,1,0,0,0,54,55,5,41,0,0,55,6,1,0,0,0,56,
  	57,5,101,0,0,57,58,5,110,0,0,58,59,5,100,0,0,59,8,1,0,0,0,60,61,5,44,
  	0,0,61,10,1,0,0,0,62,63,5,114,0,0,63,64,5,101,0,0,64,65,5,116,0,0,65,
  	66,5,117,0,0,66,67,5,114,0,0,67,68,5,110,0,0,68,12,1,0,0,0,69,70,5,61,
  	0,0,70,14,1,0,0,0,71,72,5,40,0,0,72,73,5,41,0,0,73,16,1,0,0,0,74,79,3,
  	19,9,0,75,78,3,19,9,0,76,78,3,29,14,0,77,75,1,0,0,0,77,76,1,0,0,0,78,
  	81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,18,1,0,0,0,81,79,1,0,0,0,82,
  	83,7,0,0,0,83,20,1,0,0,0,84,88,5,34,0,0,85,87,8,1,0,0,86,85,1,0,0,0,87,
  	90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,
  	92,5,34,0,0,92,22,1,0,0,0,93,97,5,39,0,0,94,96,8,2,0,0,95,94,1,0,0,0,
  	96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,100,1,0,0,0,99,97,1,0,0,
  	0,100,101,5,39,0,0,101,24,1,0,0,0,102,104,3,29,14,0,103,102,1,0,0,0,104,
  	105,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,26,1,0,0,0,107,109,3,
  	29,14,0,108,107,1,0,0,0,109,110,1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,
  	0,111,112,1,0,0,0,112,116,5,46,0,0,113,115,3,29,14,0,114,113,1,0,0,0,
  	115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,126,1,0,0,0,118,116,
  	1,0,0,0,119,121,5,46,0,0,120,122,3,29,14,0,121,120,1,0,0,0,122,123,1,
  	0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,108,1,0,0,0,
  	125,119,1,0,0,0,126,28,1,0,0,0,127,128,7,3,0,0,128,30,1,0,0,0,129,130,
  	5,116,0,0,130,131,5,114,0,0,131,132,5,117,0,0,132,133,5,101,0,0,133,32,
  	1,0,0,0,134,135,5,102,0,0,135,136,5,97,0,0,136,137,5,108,0,0,137,138,
  	5,115,0,0,138,139,5,101,0,0,139,34,1,0,0,0,140,142,7,4,0,0,141,140,1,
  	0,0,0,142,143,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,145,1,0,0,0,
  	145,146,6,17,0,0,146,36,1,0,0,0,147,148,5,61,0,0,148,149,3,37,18,0,149,
  	150,5,61,0,0,150,160,1,0,0,0,151,155,5,91,0,0,152,154,9,0,0,0,153,152,
  	1,0,0,0,154,157,1,0,0,0,155,156,1,0,0,0,155,153,1,0,0,0,156,158,1,0,0,
  	0,157,155,1,0,0,0,158,160,5,93,0,0,159,147,1,0,0,0,159,151,1,0,0,0,160,
  	38,1,0,0,0,161,162,5,45,0,0,162,163,5,45,0,0,163,164,5,91,0,0,164,165,
  	1,0,0,0,165,166,3,37,18,0,166,167,5,93,0,0,167,168,1,0,0,0,168,169,6,
  	19,1,0,169,40,1,0,0,0,170,171,5,45,0,0,171,172,5,45,0,0,172,202,1,0,0,
  	0,173,203,1,0,0,0,174,178,5,91,0,0,175,177,5,61,0,0,176,175,1,0,0,0,177,
  	180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,203,1,0,0,0,180,178,1,
  	0,0,0,181,185,5,91,0,0,182,184,5,61,0,0,183,182,1,0,0,0,184,187,1,0,0,
  	0,185,183,1,0,0,0,185,186,1,0,0,0,186,188,1,0,0,0,187,185,1,0,0,0,188,
  	192,8,5,0,0,189,191,8,6,0,0,190,189,1,0,0,0,191,194,1,0,0,0,192,190,1,
  	0,0,0,192,193,1,0,0,0,193,203,1,0,0,0,194,192,1,0,0,0,195,199,8,7,0,0,
  	196,198,8,6,0,0,197,196,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,199,200,
  	1,0,0,0,200,203,1,0,0,0,201,199,1,0,0,0,202,173,1,0,0,0,202,174,1,0,0,
  	0,202,181,1,0,0,0,202,195,1,0,0,0,203,207,1,0,0,0,204,205,5,13,0,0,205,
  	208,5,10,0,0,206,208,7,8,0,0,207,204,1,0,0,0,207,206,1,0,0,0,208,209,
  	1,0,0,0,209,210,6,20,1,0,210,42,1,0,0,0,19,0,77,79,88,97,105,110,116,
  	123,125,143,155,159,178,185,192,199,202,207,2,6,0,0,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  luascripteventlexerLexerStaticData = staticData.release();
}

}

LuaScriptEventLexer::LuaScriptEventLexer(CharStream *input) : Lexer(input) {
  LuaScriptEventLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *luascripteventlexerLexerStaticData->atn, luascripteventlexerLexerStaticData->decisionToDFA, luascripteventlexerLexerStaticData->sharedContextCache);
}

LuaScriptEventLexer::~LuaScriptEventLexer() {
  delete _interpreter;
}

std::string LuaScriptEventLexer::getGrammarFileName() const {
  return "LuaScriptEvent.g4";
}

const std::vector<std::string>& LuaScriptEventLexer::getRuleNames() const {
  return luascripteventlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LuaScriptEventLexer::getChannelNames() const {
  return luascripteventlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LuaScriptEventLexer::getModeNames() const {
  return luascripteventlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LuaScriptEventLexer::getVocabulary() const {
  return luascripteventlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LuaScriptEventLexer::getSerializedATN() const {
  return luascripteventlexerLexerStaticData->serializedATN;
}

const atn::ATN& LuaScriptEventLexer::getATN() const {
  return *luascripteventlexerLexerStaticData->atn;
}




void LuaScriptEventLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  luascripteventlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(luascripteventlexerLexerOnceFlag, luascripteventlexerLexerInitialize);
#endif
}
