#include <fstream>

#include "ScriptEventGenerator.h"

namespace Lumbermixalot
{

    static void WriteInfoHeader(std::ostream& outputStream)
    {
        outputStream << "-- This ScriptEvent file was auto generated with ScriptEvent_Transpiler (C++).\n";
        outputStream << "-- Source Available at https://github.com/lumbermixalot/ScriptEvent_Transpiler.git\n";
    }

    ScriptEventGenerator::ScriptEventGenerator(const std::string& ebusName, const std::string& addressType) :
        m_ebusName(ebusName), m_addressType(addressType), m_localBusName(ebusName)
    {
        m_localBusName[0] = tolower(m_localBusName[0]);
    }

    void ScriptEventGenerator::Generate(const std::string& outputFilepath, const std::vector<LuaFunctionData>& functionsList)
    {
        std::ofstream ofs;
        ofs.open(outputFilepath);

        WriteInfoHeader(ofs);

        ofs << "local " << m_localBusName << " = ScriptEvent(\"" << m_ebusName << "\"";
        if (m_addressType == "String")
        {
            ofs << ", typeid(\"\")";
        }
        else if (m_addressType == "EntityId")
        {
            ofs << ", typeid(EntityId())";
        }
        else if (m_addressType == "Crc32")
        {
            ofs << ", typeid(Crc32())";
        }
        ofs << ")\n\n";

        for (const auto& luaFunctionData : functionsList)
        {
            ofs << luaFunctionData.m_comments;
            ofs << "local method" << luaFunctionData.m_functionName << " = " << m_localBusName << ":AddMethod(\"" << luaFunctionData.m_functionName << "\"";
            if (!luaFunctionData.m_returnType.empty())
            {
                ofs << ", typeid(" << luaFunctionData.m_returnType << ")";
            }
            ofs << ")\n";

            for (const auto& param : luaFunctionData.m_params)
            {
                ofs << "method" << luaFunctionData.m_functionName << ":AddParameter(\"" << param.m_name << "\", typeid(" << param.m_value << "))\n";
            }

            ofs << "\n";
        }

        ofs << m_localBusName << ":Register()\n";

        ofs.close();
    }

} // namespace Lumbermixalot