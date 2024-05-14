
// Generated from ../LuaScriptEvent.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LuaScriptEventVisitor.h"


/**
 * This class provides an empty implementation of LuaScriptEventVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LuaScriptEventBaseVisitor : public LuaScriptEventVisitor {
public:

  virtual std::any visitModule(LuaScriptEventParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(LuaScriptEventParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameters(LuaScriptEventParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(LuaScriptEventParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(LuaScriptEventParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncname(LuaScriptEventParser::FuncnameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatatype(LuaScriptEventParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClasstype(LuaScriptEventParser::ClasstypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooltype(LuaScriptEventParser::BooltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumbertype(LuaScriptEventParser::NumbertypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringtype(LuaScriptEventParser::StringtypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

