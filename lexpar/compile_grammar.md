Assuming you have installed Antlr4.8, and you setup your antlr4.bat in the PATH.
You can generate the python lexer, parser and visitor classes with this command:

antlr4 -no-listener -visitor -Dlanguage=Python3 LuaScriptEvent.g4