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

#include <sstream>

#include "PseudoLuaParser.h"

namespace Lumbermixalot
{
    PseudoLuaParser::PseudoLuaParser(antlr4::CommonTokenStream& commonTokenStream, bool verbose)
        : m_tokenStream(commonTokenStream), m_verbose(verbose)
    {

    }

    /////////////////////////////////////////////////////////////////////
    // LuaScriptEventVisitors START
    std::any PseudoLuaParser::visitModule(LuaScriptEventParser::ModuleContext *context)
    {
        // Visit all function declarations
        size_t i = 0;
        auto functionDeclCtx = context->functionDecl(i);
        while(functionDeclCtx != nullptr)
        {
            auto luaFunctionDataAny = visit(functionDeclCtx);
            try
            {
                auto luaFunctionData = std::any_cast<LuaFunctionData&&>(std::move(luaFunctionDataAny));
                if (m_verbose)
                {
                    std::cout << luaFunctionData.ToString() << "\n";
                }
                i += 1;
                m_luaFunctions.emplace_back(luaFunctionData);
                functionDeclCtx = context->functionDecl(i);
            }
            catch (const std::bad_any_cast& e)
            {
                std::cerr << "Bad news, got invalid cast to LuaFunctionData!\n";
                return m_luaFunctions.size();
            }
        }
        return m_luaFunctions.size();
    }

    std::any PseudoLuaParser::visitFunctionDecl(LuaScriptEventParser::FunctionDeclContext *context)
    {
        auto comments = GetCommentsBeforeContext(context);

        std::string functionName;
        auto functionNameAny = visit(context->funcname());
        try
        {
            auto functionNameTmp = std::any_cast<std::string&&>(std::move(functionNameAny));
            std::swap(functionName, functionNameTmp);
        }
        catch (const std::bad_any_cast& e)
        {
            std::cerr << "Bad news, got invalid cast to string for function name!\n";
        }

        //Function arguments/parameters are optional.
        std::vector<LuaFunctionData::Param> params;
        if (context->parameters())
        {
            auto paramsAny = visit(context->parameters());
            try
            {
                auto paramsTmp = std::any_cast<std::vector<LuaFunctionData::Param>&&>(std::move(paramsAny));
                std::swap(params, paramsTmp);
            }
            catch (const std::bad_any_cast& e)
            {
                std::cerr << "Bad news, got invalid cast to vector of <LuaFunctionData::Param>!\n";
            }
        }
        std::string returnType;
        if (context->returnStatement())
        {
            auto returnTypeAny = visit(context->returnStatement());
            try
            {
                auto returnTypeTmp = std::any_cast<std::string&&>(std::move(returnTypeAny));
                std::swap(returnType, returnTypeTmp);
            }
            catch (const std::bad_any_cast& e)
            {
                std::cerr << "Bad news, got invalid cast to string for return type\n";
            }
        }
        std::any retValue = LuaFunctionData{ comments, functionName, params, returnType };
        return retValue;
    }

    std::any PseudoLuaParser::visitParameters(LuaScriptEventParser::ParametersContext *context)
    {
        std::vector<LuaFunctionData::Param> retList;
        size_t i = 0;
        auto paramCtx = context->parameter(i);
        while (paramCtx != nullptr)
        {
            auto paramAny = visit(paramCtx);
            try
            {
                auto param = std::any_cast<LuaFunctionData::Param&&>(std::move(paramAny));
                retList.emplace_back(param);
            }
            catch (const std::bad_any_cast& e)
            {
                std::cerr << "Bad news, got invalid cast to LuaFunctionData::Param type\n";
            }
            i += 1;
            paramCtx = context->parameter(i);
        }
        return retList;
    }

    std::any PseudoLuaParser::visitReturnStatement(LuaScriptEventParser::ReturnStatementContext* context)
    {
        return visit(context->datatype());
    }
    
    std::any PseudoLuaParser::visitParameter(LuaScriptEventParser::ParameterContext *context)
    {
        //auto name = context->getText();// ctx.ID().getText()
        auto name = context->ID()->getText();
        auto valueAny = visit(context->datatype());
        std::string value;
        try
        {
            auto valueTmp = std::any_cast<std::string&&>(std::move(valueAny));
            std::swap(value, valueTmp);
        }
        catch (const std::bad_any_cast& e)
        {
            std::cerr << "Bad news, got invalid cast to std::string for value type\n";
        }

        return LuaFunctionData::Param{ name, value };
    }
    
    std::any PseudoLuaParser::visitFuncname(LuaScriptEventParser::FuncnameContext *context)
    {
        std::any retValue = context->getText();//   ID().getText()
        return retValue;
    }

    std::any PseudoLuaParser::visitDatatype(LuaScriptEventParser::DatatypeContext *context)
    {
        if (context->booltype())
        {
            return visit(context->booltype());
        }

        if (context->numbertype())
        {
            return visit(context->numbertype());
        }

        if (context->stringtype())
        {
            return visit(context->stringtype());
        }

        if (context->classtype())
        {
            return visit(context->classtype());
        }

        return std::string("");
    }

    std::any PseudoLuaParser::visitClasstype(LuaScriptEventParser::ClasstypeContext* context)
    {
        return context->getText();
    }

    std::any PseudoLuaParser::visitBooltype(LuaScriptEventParser::BooltypeContext* context)
    {
        if (context->BTRUE())
        {
            return context->BTRUE()->getText();
        }
        return context->BFALSE()->getText();
    }

    std::any PseudoLuaParser::visitNumbertype(LuaScriptEventParser::NumbertypeContext* context)
    {
        if (context->INT())
        {
            return context->INT()->getText();
        }
        return context->FLOAT()->getText();
    }

    std::any PseudoLuaParser::visitStringtype(LuaScriptEventParser::StringtypeContext* context)
    {
        return context->getText();
    }

    // LuaScriptEventVisitors END
    /////////////////////////////////////////////////////////////////////

    static std::string rstrip(const std::string& str)
    {
        std::string result = str;
        result.erase(result.find_last_not_of("\r\n") + 1);
        return result;
    }

    std::string PseudoLuaParser::GetCommentsBeforeContext(LuaScriptEventParser::FunctionDeclContext* context)
    {
        std::stringstream ss;
        auto startToken = context->start;
        auto tokenIndex = startToken->getTokenIndex();
        auto tokenList = m_tokenStream.getHiddenTokensToLeft(tokenIndex);
        for (auto tokenPtr : tokenList)
        {
            auto text = rstrip(tokenPtr->getText());
            ss << text << "\n";
        }
        return ss.str();
    }
} // namespace Lumbermixalot