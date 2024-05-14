
// Generated from ../LuaScriptEvent.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LuaScriptEventParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, ID = 9, DOUBLEQS = 10, SINGLEQS = 11, INT = 12, FLOAT = 13, 
    BTRUE = 14, BFALSE = 15, WS = 16, COMMENT = 17, LINE_COMMENT = 18
  };

  enum {
    RuleModule = 0, RuleFunctionDecl = 1, RuleParameters = 2, RuleReturnStatement = 3, 
    RuleParameter = 4, RuleFuncname = 5, RuleDatatype = 6, RuleClasstype = 7, 
    RuleBooltype = 8, RuleNumbertype = 9, RuleStringtype = 10
  };

  explicit LuaScriptEventParser(antlr4::TokenStream *input);

  LuaScriptEventParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LuaScriptEventParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ModuleContext;
  class FunctionDeclContext;
  class ParametersContext;
  class ReturnStatementContext;
  class ParameterContext;
  class FuncnameContext;
  class DatatypeContext;
  class ClasstypeContext;
  class BooltypeContext;
  class NumbertypeContext;
  class StringtypeContext; 

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<FunctionDeclContext *> functionDecl();
    FunctionDeclContext* functionDecl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class  FunctionDeclContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncnameContext *funcname();
    ParametersContext *parameters();
    ReturnStatementContext *returnStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclContext* functionDecl();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DatatypeContext *datatype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    DatatypeContext *datatype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  FuncnameContext : public antlr4::ParserRuleContext {
  public:
    FuncnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncnameContext* funcname();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooltypeContext *booltype();
    NumbertypeContext *numbertype();
    StringtypeContext *stringtype();
    ClasstypeContext *classtype();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatatypeContext* datatype();

  class  ClasstypeContext : public antlr4::ParserRuleContext {
  public:
    ClasstypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClasstypeContext* classtype();

  class  BooltypeContext : public antlr4::ParserRuleContext {
  public:
    BooltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BTRUE();
    antlr4::tree::TerminalNode *BFALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooltypeContext* booltype();

  class  NumbertypeContext : public antlr4::ParserRuleContext {
  public:
    NumbertypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumbertypeContext* numbertype();

  class  StringtypeContext : public antlr4::ParserRuleContext {
  public:
    StringtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLEQS();
    antlr4::tree::TerminalNode *SINGLEQS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringtypeContext* stringtype();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

