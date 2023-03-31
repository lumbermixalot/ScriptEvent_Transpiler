# Generated from LuaScriptEvent.g4 by ANTLR 4.12.0
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .LuaScriptEventParser import LuaScriptEventParser
else:
    from LuaScriptEventParser import LuaScriptEventParser

# This class defines a complete generic visitor for a parse tree produced by LuaScriptEventParser.

class LuaScriptEventVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by LuaScriptEventParser#module.
    def visitModule(self, ctx:LuaScriptEventParser.ModuleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#functionDecl.
    def visitFunctionDecl(self, ctx:LuaScriptEventParser.FunctionDeclContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#parameters.
    def visitParameters(self, ctx:LuaScriptEventParser.ParametersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#returnStatement.
    def visitReturnStatement(self, ctx:LuaScriptEventParser.ReturnStatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#parameter.
    def visitParameter(self, ctx:LuaScriptEventParser.ParameterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#funcname.
    def visitFuncname(self, ctx:LuaScriptEventParser.FuncnameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#datatype.
    def visitDatatype(self, ctx:LuaScriptEventParser.DatatypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#classtype.
    def visitClasstype(self, ctx:LuaScriptEventParser.ClasstypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#booltype.
    def visitBooltype(self, ctx:LuaScriptEventParser.BooltypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#numbertype.
    def visitNumbertype(self, ctx:LuaScriptEventParser.NumbertypeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LuaScriptEventParser#stringtype.
    def visitStringtype(self, ctx:LuaScriptEventParser.StringtypeContext):
        return self.visitChildren(ctx)



del LuaScriptEventParser