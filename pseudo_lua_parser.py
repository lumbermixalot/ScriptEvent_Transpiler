# -*- coding: utf-8 -*-

"""
Copyright (c) 2020 Galib F. Arrieta

Permission is hereby granted, free of charge, to any person obtaining a copy of 
this software and associated documentation files (the "Software"), to deal in 
the Software without restriction, including without limitation the rights to 
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
of the Software, and to permit persons to whom the Software is furnished to do 
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all 
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
SOFTWARE.
"""

from antlr4 import CommonTokenStream
from antlr4.ParserRuleContext import ParserRuleContext

from lexpar.LuaScriptEventParser import  LuaScriptEventParser
from lexpar.LuaScriptEventVisitor import LuaScriptEventVisitor

class PseudoLuaParser(LuaScriptEventVisitor):
    """A visitor class that is capable of parsing a 'pseudo-lua' file
    that declares a ScriptEvent interface.
    
    I wrote 'pseudo-lua' because the input file is an IDL-like file written
    in 90% lua, except that function parameters must have its typeid declared
    with '=' operator next to them.

    See attached "./Samples/testfile.lua" for an example of a 'pseudo-lua' file.
    """
    def __init__(self, token_stream:CommonTokenStream, debug=False):
        self.token_stream = token_stream
        self.functions = []
        self.debug = debug
        pass

    def GetFunctionsList(self):
        return self.functions


    def _GetCommentsBeforeContext(self, ctx:ParserRuleContext):
        startToken = ctx.start
        tokenIndex = startToken.tokenIndex
        tokenList = self.token_stream.getHiddenTokensToLeft(tokenIndex)
        if tokenList is not None:
            #print("[{}]: len=={}".format(tokenIndex, len(tokenList)))
            stringList = []
            for token in tokenList:
                text = token.text.rstrip("\r\n")
                #print("<{}>".format(text))
                lines = text.splitlines()
                if len(lines) > 1:
                    #This hack is necessary for matched multi-line comments --[[*]]
                    #antlr adds this sequence at the end of each line CR CR LF.
                    stringList.append("\n".join(lines))
                else:
                    stringList.append(text)
            comments = "\n".join(stringList)
            #print("Returning:\n<{}>".format(comments))
        else:
            comments = ""
        return comments


    # Visit a parse tree produced by LuaScriptEventParser#module.
    def visitModule(self, ctx:LuaScriptEventParser.ModuleContext):
        #Visit all function declarations
        i=0
        functionDecl = ctx.functionDecl(i)
        while functionDecl is not None:
            comments, funcName, params, retType = self.visit(functionDecl)
            if self.debug:
                args = []
                for name, value in params:
                    args.append("{}={}".format(name, value))
                print("{}({})".format(funcName, ",".join(args)))
                if retType is not None:
                    print("return {}".format(retType))
                print("end\n\n")
            i += 1
            functionDecl = ctx.functionDecl(i)
            self.functions.append((comments, funcName, params, retType))
        return len(self.functions)

    # Visit a parse tree produced by LuaScriptEventParser#functionDecl.
    def visitFunctionDecl(self, ctx:LuaScriptEventParser.FunctionDeclContext):
        comments = self._GetCommentsBeforeContext(ctx)
        funcName = self.visit(ctx.funcname())
        #Function arguments/parameters are optional.
        if ctx.parameters() is None:
            params = []
        else:
            params = self.visit(ctx.parameters())
        retType = None
        if ctx.returnStatement() is not None:
            retType = self.visit(ctx.returnStatement())
        return comments, funcName, params, retType


    # Visit a parse tree produced by LuaScriptEventParser#parameters.
    def visitParameters(self, ctx:LuaScriptEventParser.ParametersContext):
        retList = []
        i=0
        parameter = ctx.parameter(i)
        while parameter is not None:
            name, value = self.visit(parameter)
            retList.append( (name, value) )
            i += 1
            parameter = ctx.parameter(i)
        return retList


    # Visit a parse tree produced by LuaScriptEventParser#returnStatement.
    def visitReturnStatement(self, ctx:LuaScriptEventParser.ReturnStatementContext):
        return self.visit(ctx.datatype())

    # Visit a parse tree produced by LuaScriptEventParser#parameter.
    def visitParameter(self, ctx:LuaScriptEventParser.ParameterContext):
        name = ctx.ID().getText()
        value = self.visit(ctx.datatype())
        return name, value

    # Visit a parse tree produced by LuaScriptEventParser#datatype.
    def visitDatatype(self, ctx:LuaScriptEventParser.DatatypeContext):
        if ctx.booltype() is not None:
            return self.visit(ctx.booltype())
        if ctx.numbertype() is not None:
            return self.visit(ctx.numbertype())
        if ctx.stringtype() is not None:
            return self.visit(ctx.stringtype())
        if ctx.classtype() is not None:
            return self.visit(ctx.classtype())
        return ""

    # Visit a parse tree produced by LuaScriptEventParser#funcname.
    def visitFuncname(self, ctx:LuaScriptEventParser.FuncnameContext):
        return ctx.ID().getText()

    # Visit a parse tree produced by LuaScriptEventParser#classtype.
    def visitClasstype(self, ctx:LuaScriptEventParser.ClasstypeContext):
        return ctx.getText()

    # Visit a parse tree produced by LuaScriptEventParser#booltype.
    def visitBooltype(self, ctx:LuaScriptEventParser.BooltypeContext):
        if ctx.TRUE():
            return ctx.TRUE().getText()
        return ctx.FALSE().getText()

    # Visit a parse tree produced by LuaScriptEventParser#numbertype.
    def visitNumbertype(self, ctx:LuaScriptEventParser.NumbertypeContext):
        if ctx.INT():
            return ctx.INT().getText()
        return ctx.FLOAT().getText()


    # Visit a parse tree produced by LuaScriptEventParser#stringtype.
    def visitStringtype(self, ctx:LuaScriptEventParser.StringtypeContext):
        return ctx.getText()
