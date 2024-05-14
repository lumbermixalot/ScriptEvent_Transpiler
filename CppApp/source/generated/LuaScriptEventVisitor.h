
// Generated from ../LuaScriptEvent.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LuaScriptEventParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LuaScriptEventParser.
 */
class  LuaScriptEventVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LuaScriptEventParser.
   */
    virtual std::any visitModule(LuaScriptEventParser::ModuleContext *context) = 0;

    virtual std::any visitFunctionDecl(LuaScriptEventParser::FunctionDeclContext *context) = 0;

    virtual std::any visitParameters(LuaScriptEventParser::ParametersContext *context) = 0;

    virtual std::any visitReturnStatement(LuaScriptEventParser::ReturnStatementContext *context) = 0;

    virtual std::any visitParameter(LuaScriptEventParser::ParameterContext *context) = 0;

    virtual std::any visitFuncname(LuaScriptEventParser::FuncnameContext *context) = 0;

    virtual std::any visitDatatype(LuaScriptEventParser::DatatypeContext *context) = 0;

    virtual std::any visitClasstype(LuaScriptEventParser::ClasstypeContext *context) = 0;

    virtual std::any visitBooltype(LuaScriptEventParser::BooltypeContext *context) = 0;

    virtual std::any visitNumbertype(LuaScriptEventParser::NumbertypeContext *context) = 0;

    virtual std::any visitStringtype(LuaScriptEventParser::StringtypeContext *context) = 0;


};

