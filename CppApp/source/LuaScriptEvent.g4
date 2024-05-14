/*
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
*/
grammar LuaScriptEvent;

module : functionDecl+ EOF ;
    
functionDecl
    : 'function' funcname '(' parameters? ')' returnStatement? 'end'
    ;

parameters
    : parameter (',' parameter)*
    ; 

returnStatement : 'return' datatype ;

parameter
    : ID '=' datatype ;

funcname : ID ;


//dev\Gems\ScriptEvents\Code\Include\ScriptEvents\ScriptEventTypes.h
datatype
    : booltype
    | numbertype
    | stringtype
    | classtype
    ; 

classtype : ID ('()')? ;

booltype : (BTRUE | BFALSE) ;

numbertype : (INT | FLOAT) ;

stringtype
    : DOUBLEQS
    | SINGLEQS
    ;

//LEXER

ID : LETTER (LETTER|DIGIT)* ;
fragment
LETTER : [a-zA-Z_] ;

DOUBLEQS : '"' (~'"')* '"' ;
SINGLEQS : '\'' (~'\'')* '\'' ;

INT : DIGIT+ ;

FLOAT // Simplified float declaration
    : DIGIT+ '.' DIGIT* //match 1.   39.   3.14159
    |        '.' DIGIT+ //match .1    .13149
    ;

fragment
DIGIT : [0-9] ; //match single digit

BTRUE : 'true' ;
BFALSE : 'false' ;

WS : [ \t\r\n]+ -> skip ;

//Warning: although you can place comments anywhere in your "idl" lua file,
//only comments before each function declaration will be preserved.

fragment
NESTED_STR
    : '=' NESTED_STR '='
    | '[' .*? ']'
    ;

COMMENT
    : '--[' NESTED_STR ']' -> channel(HIDDEN)
    ;
    
LINE_COMMENT
    : '--'
    (                                               // --
    | '[' '='*                                      // --[==
    | '[' '='* ~('='|'['|'\r'|'\n') ~('\r'|'\n')*   // --[==AA
    | ~('['|'\r'|'\n') ~('\r'|'\n')*                // --AAA
    ) ('\r\n'|'\r'|'\n'|EOF)
    -> channel(HIDDEN)
    ;