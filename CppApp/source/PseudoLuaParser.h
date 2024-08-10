/////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2020 Galib F. Arrieta
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of 
// this software and associated documentation files (the "Software"), to deal in 
// the Software without restriction, including without limitation the rights to 
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
// of the Software, and to permit persons to whom the Software is furnished to do 
// so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all 
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
// SOFTWARE.
////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <vector>

#include "generated/LuaScriptEventVisitor.h"

#include "LuaFunctionData.h"

namespace Lumbermixalot
{
    //! A visitor class that is capable of parsing a 'pseudo-lua' file
    //! that declares a ScriptEvent interface.
    //! 
    //! I wrote 'pseudo-lua' because the input file is an IDL-like file written
    //! in 90% lua, except that function parameters must have its typeid declared
    //! with '=' operator next to them.
    //! 
    //! See attached "./Samples/testfile.lua" for an example of a 'pseudo-lua' file.
    class PseudoLuaParser final
        : public LuaScriptEventVisitor
    {
    public:
        PseudoLuaParser() = delete;
        PseudoLuaParser(antlr4::CommonTokenStream& commonTokenStream, bool verbose=false);

        const std::vector<LuaFunctionData>& GetFunctionsList() const { return m_luaFunctions; }

        /////////////////////////////////////////////////////////////////////
        // LuaScriptEventVisitor Overrides START
        std::any visitModule(LuaScriptEventParser::ModuleContext *context) override;
        std::any visitFunctionDecl(LuaScriptEventParser::FunctionDeclContext *context) override;
        std::any visitParameters(LuaScriptEventParser::ParametersContext *context) override;
        std::any visitReturnStatement(LuaScriptEventParser::ReturnStatementContext *context) override;
        std::any visitParameter(LuaScriptEventParser::ParameterContext *context) override;
        std::any visitFuncname(LuaScriptEventParser::FuncnameContext *context) override;
        std::any visitDatatype(LuaScriptEventParser::DatatypeContext *context) override;
        std::any visitClasstype(LuaScriptEventParser::ClasstypeContext *context) override;
        std::any visitBooltype(LuaScriptEventParser::BooltypeContext *context) override;
        std::any visitNumbertype(LuaScriptEventParser::NumbertypeContext *context) override;
        std::any visitStringtype(LuaScriptEventParser::StringtypeContext *context) override;
        // LuaScriptEventVisitor Overrides END
        /////////////////////////////////////////////////////////////////////

    private:
        antlr4::CommonTokenStream& m_tokenStream;
        bool m_verbose = false;
        std::vector<LuaFunctionData> m_luaFunctions;

        std::string GetCommentsBeforeContext(LuaScriptEventParser::FunctionDeclContext* context);
    };
} // namespace Lumbermixalot