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


#include <iostream>
#include <filesystem>

#include <CLI/CLI.hpp>

// From ANTLR
#include <CommonTokenStream.h>
#include <ANTLRFileStream.h>

#include "generated/LuaScriptEventLexer.h"
#include "generated/LuaScriptEventParser.h"

#include "PseudoLuaParser.h"
#include "ScriptEventGenerator.h"
#include "ClassGenerator.h"

// versioning
#define VERSION_MAJOR "1"
#define VERSION_MINOR "1"
#define VERSION_REVISION "1" // Added missing call to Bus::Register() function.

static int Transpile(bool printFunctions, const std::string& inputFilePath, const std::string& outputPath,
    const std::string& ebusName, const std::string& addressType,
    bool generateTemplate, bool disableScriptEventGeneration);

int main(int argc, const char * argv[])
{
    CLI::App cli{ "ScriptEvent_Transpiler", "Transpiles a pseudo-lua file into a Lumberyard ScriptEvent lua file or a lua implementation template of such ScriptEvent." };

    bool printVersion = false;
    cli.add_flag("-v,--version", printVersion, "Prints version information");

    bool printFunctions = false;
    cli.add_flag("-p,--print_functions", printFunctions, "For debugging purposes. Prints all parsed functions to stdout.");

    std::string ebusName;
    cli.add_option("-e,--ebus_name", ebusName, "The name of the EBus interface for the ScriptEvent file.")->required(true);

    std::string addressType("None");
    cli.add_option("-a,--address_type", addressType, "Options: 'None'(default), 'String', 'EntityId', 'Crc32'. If 'None', this will be a Broadcast type of EBus, for all other options it will be an Event type of EBus.")->capture_default_str();

    bool generateTemplate = false;
    cli.add_flag("-t,--generate_template", generateTemplate, "If this flag is present, a sample copy/pastable class implementation template is generated.");

    bool disableScriptEventGeneration = false;
    cli.add_flag("-d,--disable_script_event_generation", disableScriptEventGeneration, "If this flag is present, the ScriptEvent lua file won't be generated.");

    std::string inputFilePath;
    cli.add_option("input_file", inputFilePath, "The input file to transpile.")->required(true);

    std::string outputPath=".";
    cli.add_option("output_path", outputPath, "The output directory where the <ebus_name>.lua file will be generated.")->capture_default_str();

    CLI11_PARSE(cli, argc, argv);

    if (printVersion)
    {
        // Major.Minor.Revision
        auto versionString = std::format("{} {}.{}.{}", argv[0], VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION);
        std::cout << versionString << std::endl;
        return 0;
    }

    if (!generateTemplate && disableScriptEventGeneration)
    {
        std::cout << "Nothing to do\n";
        return 0;
    }

    if (!std::filesystem::is_directory(outputPath))
    {
        std::cerr << "path='" << outputPath << "' doesn't exist or it is not a directory\n";
        return -1;
    }

    return Transpile(printFunctions, inputFilePath, outputPath, ebusName, addressType, generateTemplate, disableScriptEventGeneration);
}

static int Transpile(bool printFunctions, const std::string& inputFilePath, const std::string& outputPath,
    const std::string& ebusName, const std::string& addressType,
    bool generateTemplate, bool disableScriptEventGeneration)
{
    antlr4::ANTLRFileStream inputStream;
    inputStream.loadFromFile(inputFilePath);
    LuaScriptEventLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokenStream(&lexer);
    LuaScriptEventParser parser(&tokenStream);
    auto moduleContextPtr = parser.module();
    Lumbermixalot::PseudoLuaParser pseudoLuaParser(tokenStream);
    pseudoLuaParser.visit(moduleContextPtr);
    const auto &functionsList = pseudoLuaParser.GetFunctionsList();

    if (printFunctions)
    {
        for (const auto& func : functionsList)
        {
            std::cout << func.ToString() << "\n";
        }
    }

    if (disableScriptEventGeneration)
    {
        return 0;
    }

    {
        std::filesystem::path outputFilepath(outputPath);
        std::string filename = std::format("{}.lua", ebusName);
        outputFilepath /= filename;
        Lumbermixalot::ScriptEventGenerator seGenerator(ebusName, addressType);
        const auto outputFilepathStr = outputFilepath.string();
        seGenerator.Generate(outputFilepathStr, functionsList);
        std::cout << "Generated ScriptEvent Lua file '" << outputFilepathStr << "'\n";
    }

    if (generateTemplate)
    {
        std::filesystem::path outputFilepath(outputPath);
        std::string filename = std::format("{}_subclass.lua", ebusName);
        outputFilepath /= filename;
        Lumbermixalot::ClassGenerator classGenerator(ebusName, addressType);
        const auto outputFilepathStr = outputFilepath.string();
        classGenerator.Generate(outputFilepathStr, functionsList);
        std::cout << "Generated Class Example Template Lua file '" << outputFilepathStr << "'\n";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file