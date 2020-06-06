# Generated from LuaScriptEvent.g4 by ANTLR 4.8
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO


def serializedATN():
    with StringIO() as buf:
        buf.write("\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\24")
        buf.write("M\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b")
        buf.write("\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4\f\t\f\3\2\6\2\32\n\2")
        buf.write("\r\2\16\2\33\3\2\3\2\3\3\3\3\3\3\3\3\5\3$\n\3\3\3\3\3")
        buf.write("\5\3(\n\3\3\3\3\3\3\4\3\4\3\4\7\4/\n\4\f\4\16\4\62\13")
        buf.write("\4\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\3\b\3\b\3\b\3\b")
        buf.write("\5\bA\n\b\3\t\3\t\5\tE\n\t\3\n\3\n\3\13\3\13\3\f\3\f\3")
        buf.write("\f\2\2\r\2\4\6\b\n\f\16\20\22\24\26\2\5\3\2\20\21\3\2")
        buf.write("\16\17\3\2\f\r\2I\2\31\3\2\2\2\4\37\3\2\2\2\6+\3\2\2\2")
        buf.write("\b\63\3\2\2\2\n\66\3\2\2\2\f:\3\2\2\2\16@\3\2\2\2\20B")
        buf.write("\3\2\2\2\22F\3\2\2\2\24H\3\2\2\2\26J\3\2\2\2\30\32\5\4")
        buf.write("\3\2\31\30\3\2\2\2\32\33\3\2\2\2\33\31\3\2\2\2\33\34\3")
        buf.write("\2\2\2\34\35\3\2\2\2\35\36\7\2\2\3\36\3\3\2\2\2\37 \7")
        buf.write("\3\2\2 !\5\f\7\2!#\7\4\2\2\"$\5\6\4\2#\"\3\2\2\2#$\3\2")
        buf.write("\2\2$%\3\2\2\2%\'\7\5\2\2&(\5\b\5\2\'&\3\2\2\2\'(\3\2")
        buf.write("\2\2()\3\2\2\2)*\7\6\2\2*\5\3\2\2\2+\60\5\n\6\2,-\7\7")
        buf.write("\2\2-/\5\n\6\2.,\3\2\2\2/\62\3\2\2\2\60.\3\2\2\2\60\61")
        buf.write("\3\2\2\2\61\7\3\2\2\2\62\60\3\2\2\2\63\64\7\b\2\2\64\65")
        buf.write("\5\16\b\2\65\t\3\2\2\2\66\67\7\13\2\2\678\7\t\2\289\5")
        buf.write("\16\b\29\13\3\2\2\2:;\7\13\2\2;\r\3\2\2\2<A\5\22\n\2=")
        buf.write("A\5\24\13\2>A\5\26\f\2?A\5\20\t\2@<\3\2\2\2@=\3\2\2\2")
        buf.write("@>\3\2\2\2@?\3\2\2\2A\17\3\2\2\2BD\7\13\2\2CE\7\n\2\2")
        buf.write("DC\3\2\2\2DE\3\2\2\2E\21\3\2\2\2FG\t\2\2\2G\23\3\2\2\2")
        buf.write("HI\t\3\2\2I\25\3\2\2\2JK\t\4\2\2K\27\3\2\2\2\b\33#\'\60")
        buf.write("@D")
        return buf.getvalue()


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
        self.checkVersion("4.8")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class ModuleContext(ParserRuleContext):

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
                if not (_la==LuaScriptEventParser.T__0):
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
            if _la==LuaScriptEventParser.ID:
                self.state = 32
                self.parameters()


            self.state = 35
            self.match(LuaScriptEventParser.T__2)
            self.state = 37
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==LuaScriptEventParser.T__5:
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
            while _la==LuaScriptEventParser.T__4:
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
            if token in [LuaScriptEventParser.TRUE, LuaScriptEventParser.FALSE]:
                self.enterOuterAlt(localctx, 1)
                self.state = 58
                self.booltype()
                pass
            elif token in [LuaScriptEventParser.INT, LuaScriptEventParser.FLOAT]:
                self.enterOuterAlt(localctx, 2)
                self.state = 59
                self.numbertype()
                pass
            elif token in [LuaScriptEventParser.DOUBLEQS, LuaScriptEventParser.SINGLEQS]:
                self.enterOuterAlt(localctx, 3)
                self.state = 60
                self.stringtype()
                pass
            elif token in [LuaScriptEventParser.ID]:
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
            if _la==LuaScriptEventParser.T__7:
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
            if not(_la==LuaScriptEventParser.TRUE or _la==LuaScriptEventParser.FALSE):
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
            if not(_la==LuaScriptEventParser.INT or _la==LuaScriptEventParser.FLOAT):
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
            if not(_la==LuaScriptEventParser.DOUBLEQS or _la==LuaScriptEventParser.SINGLEQS):
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





