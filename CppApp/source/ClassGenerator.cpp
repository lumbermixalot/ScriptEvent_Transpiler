#include <format>
#include <fstream>

#include "ClassGenerator.h"

namespace Lumbermixalot
{

    static void WriteInfoHeader(std::ostream& os)
    {
        os << "-- This ScriptEvent file was auto generated with ScriptEvent_Transpiler (C++).\n";
        os << "-- Source Available at https://github.com/lumbermixalot/ScriptEvent_Transpiler.git\n";
    }

    static void WriteProperties(std::ostream& os, const std::string& className)
    {
        os << "local " << className << " = {\n";
        os << "    Properties = {\n";
        os << "    },\n";
        os << "}\n\n";
    }

    static void WriteActivateDeactivate(std::ostream& os, const std::string& ebusName, const std::string& className, const std::string& addressType)
    {
        os << "\nfunction " << className << ":OnActivate()\n";
        os << "    require(\"Scripts.ScriptEvents." << ebusName << "\")\n";
        os << "    self." << ebusName << "EventHandler = " << ebusName << ".Connect(self";

        if (addressType == "String")
        {
            os << ", \"some_string_identifier\"";
        }
        else if (addressType == "EntityId")
        {
            os << ", self.entityId";
        }
        else if (addressType == "Crc32")
        {
            os << ", Crc32(123)";
        }
        os << ")\nend\n\n";

        os << "function" << className << ":OnDeactivate()\n";
        os << "    if self." << ebusName << "EventHandler then\n";
        os << "        self." << ebusName << "EventHandler:Disconnect()\n";
        os << "    end\n";
        os << "end\n\n";
    }

    static void WriteFunctionComments(std::ostream& os, const std::string& funcName, const std::vector<LuaFunctionData::Param>& params, const std::string& retType)
    {
        if (!params.empty())
        {
            os << "-- " << funcName << " typeid of input parameters:\n";
            for (const auto& param : params)
            {
                os << "-- @param " << param.m_name << " = typeid(" << param.m_value << ")\n";
            }
        }
        if (retType.empty())
        {
            os << "-- Returns nil\n";
        }
        else
        {
            os << "-- Returns typeid(" << retType << ")\n";
        }
    }

    static void WriteMethodAndParameters(std::ostream& os, const std::string& className, const std::string& funcName, const std::vector<LuaFunctionData::Param>& params, const std::string& retType)
    {
        WriteFunctionComments(os, funcName, params, retType);
        os << "function " << className << ":" << funcName << "(";
        bool prependComma = false;
        for (const auto& param : params)
        {
            if (prependComma)
            {
                os << ", " << param.m_name;
            }
            else
            {
                os << param.m_name;
            }
            prependComma = true;
        }
        os << ")\n";

        if (!retType.empty())
        {
            os << "    return " << retType << "\n";
        }
            
        os << "end\n\n";
    }


    static void WriteFunctions(std::ostream& os, const std::string& ebusName, const std::string& className, const std::vector<LuaFunctionData>& functionsList)
    {
        os << "-->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        os << "-- " << ebusName << " Override START\n";
        os << "-->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
        
        for (const auto & funcData : functionsList)
        {
            os << funcData.m_comments;
            WriteMethodAndParameters(os, className, funcData.m_functionName, funcData.m_params, funcData.m_returnType);
        }

        os << "--<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
        os << "-- " << ebusName << " Override END\n";
        os << "--<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    }


    ClassGenerator::ClassGenerator(const std::string& ebusName, const std::string& addressType) :
        m_ebusName(ebusName), m_addressType(addressType)
    {
        m_className = std::format("{}_subclass", ebusName);
    }

    void ClassGenerator::Generate(const std::string& outputFilepath, const std::vector<LuaFunctionData>& functionsList)
    {
        std::ofstream ofs;
        ofs.open(outputFilepath);

        WriteInfoHeader(ofs);
        WriteProperties(ofs, m_className);
        WriteActivateDeactivate(ofs, m_ebusName, m_className, m_addressType);
        WriteFunctions(ofs, m_ebusName, m_className, functionsList);
        ofs << "return " << m_className << "\n";

        ofs.close();
    }

} // namespace Lumbermixalot