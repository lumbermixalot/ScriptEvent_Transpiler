# Generated from LuaScriptEvent.g4 by ANTLR 4.12.0
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,18,75,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,4,0,24,8,0,11,0,12,0,25,
        1,0,1,0,1,1,1,1,1,1,1,1,3,1,34,8,1,1,1,1,1,3,1,38,8,1,1,1,1,1,1,
        2,1,2,1,2,5,2,45,8,2,10,2,12,2,48,9,2,1,3,1,3,1,3,1,4,1,4,1,4,1,
        4,1,5,1,5,1,6,1,6,1,6,1,6,3,6,63,8,6,1,7,1,7,3,7,67,8,7,1,8,1,8,
        1,9,1,9,1,10,1,10,1,10,0,0,11,0,2,4,6,8,10,12,14,16,18,20,0,3,1,
        0,14,15,1,0,12,13,1,0,10,11,71,0,23,1,0,0,0,2,29,1,0,0,0,4,41,1,
        0,0,0,6,49,1,0,0,0,8,52,1,0,0,0,10,56,1,0,0,0,12,62,1,0,0,0,14,64,
        1,0,0,0,16,68,1,0,0,0,18,70,1,0,0,0,20,72,1,0,0,0,22,24,3,2,1,0,
        23,22,1,0,0,0,24,25,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,27,1,
        0,0,0,27,28,5,0,0,1,28,1,1,0,0,0,29,30,5,1,0,0,30,31,3,10,5,0,31,
        33,5,2,0,0,32,34,3,4,2,0,33,32,1,0,0,0,33,34,1,0,0,0,34,35,1,0,0,
        0,35,37,5,3,0,0,36,38,3,6,3,0,37,36,1,0,0,0,37,38,1,0,0,0,38,39,
        1,0,0,0,39,40,5,4,0,0,40,3,1,0,0,0,41,46,3,8,4,0,42,43,5,5,0,0,43,
        45,3,8,4,0,44,42,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,
        0,47,5,1,0,0,0,48,46,1,0,0,0,49,50,5,6,0,0,50,51,3,12,6,0,51,7,1,
        0,0,0,52,53,5,9,0,0,53,54,5,7,0,0,54,55,3,12,6,0,55,9,1,0,0,0,56,
        57,5,9,0,0,57,11,1,0,0,0,58,63,3,16,8,0,59,63,3,18,9,0,60,63,3,20,
        10,0,61,63,3,14,7,0,62,58,1,0,0,0,62,59,1,0,0,0,62,60,1,0,0,0,62,
        61,1,0,0,0,63,13,1,0,0,0,64,66,5,9,0,0,65,67,5,8,0,0,66,65,1,0,0,
        0,66,67,1,0,0,0,67,15,1,0,0,0,68,69,7,0,0,0,69,17,1,0,0,0,70,71,
        7,1,0,0,71,19,1,0,0,0,72,73,7,2,0,0,73,21,1,0,0,0,6,25,33,37,46,
        62,66
    ]

class LuaScriptEventParser ( Parser ):

    grammarFileName = "LuaScriptEvent.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'function'", "'('", "')'", "'end'", "','", 
                     "'return'", "'='", "'()'", "<INVALID>", "<INVALID>", 
                     "<INVALID>", "<INVALID>", "<INVALID>", "'true'", "'false'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "ID", "DOUBLEQS", "SINGLEQS", "INT", 
                      "FLOAT", "TRUE", "FALSE", "WS", "COMMENT", "LINE_COMMENT" ]

    RULE_module = 0
    RULE_functionDecl = 1
    RULE_parameters = 2
    RULE_returnStatement = 3
    RULE_parameter = 4
    RULE_funcname = 5
    RULE_datatype = 6
    RULE_classtype = 7
    RULE_booltype = 8
    RULE_numbertype = 9
    RULE_stringtype = 10

    ruleNames =  [ "module", "functionDecl", "parameters", "returnStatement", 
                   "parameter", "funcname", "datatype", "classtype", "booltype", 
                   "numbertype", "stringtype" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    T__7=8
    ID=9
    DOUBLEQS=10
    SINGLEQS=11
    INT=12
    FLOAT=13
    TRUE=14
    FALSE=15
    WS=16
    COMMENT=17
    LINE_COMMENT=18

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.12.0")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class ModuleContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EOF(self):
            return self.getToken(LuaScriptEventParser.EOF, 0)

        def functionDecl(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(LuaScriptEventParser.FunctionDeclContext)
            else:
                return self.getTypedRuleContext(LuaScriptEventParser.FunctionDeclContext,i)


        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_module

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitModule" ):
                return visitor.visitModule(self)
            else:
                return visitor.visitChildren(self)




    def module(self):

        localctx = LuaScriptEventParser.ModuleContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_module)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 23 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 22
                self.functionDecl()
                self.state = 25 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==1):
                    break

            self.state = 27
            self.match(LuaScriptEventParser.EOF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FunctionDeclContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def funcname(self):
            return self.getTypedRuleContext(LuaScriptEventParser.FuncnameContext,0)


        def parameters(self):
            return self.getTypedRuleContext(LuaScriptEventParser.ParametersContext,0)


        def returnStatement(self):
            return self.getTypedRuleContext(LuaScriptEventParser.ReturnStatementContext,0)


        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_functionDecl

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitFunctionDecl" ):
                return visitor.visitFunctionDecl(self)
            else:
                return visitor.visitChildren(self)




    def functionDecl(self):

        localctx = LuaScriptEventParser.FunctionDeclContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_functionDecl)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 29
            self.match(LuaScriptEventParser.T__0)
            self.state = 30
            self.funcname()
            self.state = 31
            self.match(LuaScriptEventParser.T__1)
            self.state = 33
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==9:
                self.state = 32
                self.parameters()


            self.state = 35
            self.match(LuaScriptEventParser.T__2)
            self.state = 37
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==6:
                self.state = 36
                self.returnStatement()


            self.state = 39
            self.match(LuaScriptEventParser.T__3)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ParametersContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def parameter(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(LuaScriptEventParser.ParameterContext)
            else:
                return self.getTypedRuleContext(LuaScriptEventParser.ParameterContext,i)


        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_parameters

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitParameters" ):
                return visitor.visitParameters(self)
            else:
                return visitor.visitChildren(self)




    def parameters(self):

        localctx = LuaScriptEventParser.ParametersContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_parameters)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 41
            self.parameter()
            self.state = 46
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==5:
                self.state = 42
                self.match(LuaScriptEventParser.T__4)
                self.state = 43
                self.parameter()
                self.state = 48
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ReturnStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def datatype(self):
            return self.getTypedRuleContext(LuaScriptEventParser.DatatypeContext,0)


        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_returnStatement

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitReturnStatement" ):
                return visitor.visitReturnStatement(self)
            else:
                return visitor.visitChildren(self)




    def returnStatement(self):

        localctx = LuaScriptEventParser.ReturnStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_returnStatement)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 49
            self.match(LuaScriptEventParser.T__5)
            self.state = 50
            self.datatype()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ParameterContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(LuaScriptEventParser.ID, 0)

        def datatype(self):
            return self.getTypedRuleContext(LuaScriptEventParser.DatatypeContext,0)


        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_parameter

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitParameter" ):
                return visitor.visitParameter(self)
            else:
                return visitor.visitChildren(self)




    def parameter(self):

        localctx = LuaScriptEventParser.ParameterContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_parameter)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 52
            self.match(LuaScriptEventParser.ID)
            self.state = 53
            self.match(LuaScriptEventParser.T__6)
            self.state = 54
            self.datatype()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class FuncnameContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(LuaScriptEventParser.ID, 0)

        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_funcname

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitFuncname" ):
                return visitor.visitFuncname(self)
            else:
                return visitor.visitChildren(self)




    def funcname(self):

        localctx = LuaScriptEventParser.FuncnameContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_funcname)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 56
            self.match(LuaScriptEventParser.ID)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class DatatypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def booltype(self):
            return self.getTypedRuleContext(LuaScriptEventParser.BooltypeContext,0)


        def numbertype(self):
            return self.getTypedRuleContext(LuaScriptEventParser.NumbertypeContext,0)


        def stringtype(self):
            return self.getTypedRuleContext(LuaScriptEventParser.StringtypeContext,0)


        def classtype(self):
            return self.getTypedRuleContext(LuaScriptEventParser.ClasstypeContext,0)


        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_datatype

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitDatatype" ):
                return visitor.visitDatatype(self)
            else:
                return visitor.visitChildren(self)




    def datatype(self):

        localctx = LuaScriptEventParser.DatatypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_datatype)
        try:
            self.state = 62
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [14, 15]:
                self.enterOuterAlt(localctx, 1)
                self.state = 58
                self.booltype()
                pass
            elif token in [12, 13]:
                self.enterOuterAlt(localctx, 2)
                self.state = 59
                self.numbertype()
                pass
            elif token in [10, 11]:
                self.enterOuterAlt(localctx, 3)
                self.state = 60
                self.stringtype()
                pass
            elif token in [9]:
                self.enterOuterAlt(localctx, 4)
                self.state = 61
                self.classtype()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ClasstypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ID(self):
            return self.getToken(LuaScriptEventParser.ID, 0)

        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_classtype

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitClasstype" ):
                return visitor.visitClasstype(self)
            else:
                return visitor.visitChildren(self)




    def classtype(self):

        localctx = LuaScriptEventParser.ClasstypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_classtype)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 64
            self.match(LuaScriptEventParser.ID)
            self.state = 66
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==8:
                self.state = 65
                self.match(LuaScriptEventParser.T__7)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BooltypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def TRUE(self):
            return self.getToken(LuaScriptEventParser.TRUE, 0)

        def FALSE(self):
            return self.getToken(LuaScriptEventParser.FALSE, 0)

        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_booltype

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitBooltype" ):
                return visitor.visitBooltype(self)
            else:
                return visitor.visitChildren(self)




    def booltype(self):

        localctx = LuaScriptEventParser.BooltypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_booltype)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 68
            _la = self._input.LA(1)
            if not(_la==14 or _la==15):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class NumbertypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def INT(self):
            return self.getToken(LuaScriptEventParser.INT, 0)

        def FLOAT(self):
            return self.getToken(LuaScriptEventParser.FLOAT, 0)

        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_numbertype

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitNumbertype" ):
                return visitor.visitNumbertype(self)
            else:
                return visitor.visitChildren(self)




    def numbertype(self):

        localctx = LuaScriptEventParser.NumbertypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_numbertype)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 70
            _la = self._input.LA(1)
            if not(_la==12 or _la==13):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class StringtypeContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def DOUBLEQS(self):
            return self.getToken(LuaScriptEventParser.DOUBLEQS, 0)

        def SINGLEQS(self):
            return self.getToken(LuaScriptEventParser.SINGLEQS, 0)

        def getRuleIndex(self):
            return LuaScriptEventParser.RULE_stringtype

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitStringtype" ):
                return visitor.visitStringtype(self)
            else:
                return visitor.visitChildren(self)




    def stringtype(self):

        localctx = LuaScriptEventParser.StringtypeContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_stringtype)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 72
            _la = self._input.LA(1)
            if not(_la==10 or _la==11):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





