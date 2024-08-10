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

#include "LuaFunctionData.h"

namespace Lumbermixalot
{
    std::string LuaFunctionData::ToString() const
    {
        std::stringstream  ss;
        ss << m_comments;
        ss << m_functionName << "(";
        auto numParams = m_params.size();
        for (auto i = 0; i < numParams; i++)
        {
            ss << m_params[i].m_name << "=" << m_params[i].m_value;
            if (i < numParams - 1)
            {
                ss << ", ";
            }
        }
        ss << ")\n";
        if (!m_returnType.empty())
        {
            ss << "return " << m_returnType << "\n";
        }
        ss << "end\n\n";
        return ss.str();
    }
} // namespace Lumbermixalot