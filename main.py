# -*- coding: utf-8 -*-

"""
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
"""

import sys
import argparse
import os

from antlr4 import FileStream, CommonTokenStream

from lexpar.LuaScriptEventLexer import LuaScriptEventLexer
from lexpar.LuaScriptEventParser import LuaScriptEventParser

from pseudo_lua_parser import PseudoLuaParser
from script_event_generator import ScriptEventGenerator
from class_generator import ClassGenerator

def Transpile(input_filepath, output_path, ebus_name, address_type, generate_template, disable_script_event_generation):
    input_stream = FileStream(input_filepath)
    lexer = LuaScriptEventLexer(input_stream)
    token_stream = CommonTokenStream(lexer)
    parser = LuaScriptEventParser(token_stream)
    tree = parser.module()
    pseudoLuaParser = PseudoLuaParser(token_stream)
    pseudoLuaParser.visit(tree)
    functionsList = pseudoLuaParser.GetFunctionsList()

    if not disable_script_event_generation:
        output_filename = os.path.join(output_path, "{}.lua".format(ebus_name))
        seGenerator = ScriptEventGenerator(ebus_name, address_type)
        seGenerator.Generate(output_filename, functionsList)
    if generate_template:
        output_filename = os.path.join(output_path, "{}_subclass.lua".format(ebus_name))
        classGenerator = ClassGenerator(ebus_name, address_type)
        classGenerator.Generate(output_filename, functionsList)


optparser = argparse.ArgumentParser(description='Transpiles a pseudo-lua file into a Lumberyard ScriptEvent lua file or a lua implementation template of such ScriptEvent.')
optparser.add_argument("-e", "--ebus_name", required=True,
    help="The name of the EBus interface for the ScriptEvent file.")
optparser.add_argument("-a", "--address_type", default="None", choices=["None", "String", "EntityId", "Crc32"],
    help="If 'None', this will be a Broadcast type of EBus, for all other options it will be an Event type of EBus.")
optparser.add_argument("-t", "--generate_template", action='store_true',
    help="If this flag is present, a sample copy/pastable class implementation template is generated.")
optparser.add_argument("-d", "--disable_script_event_generation", action='store_true',
    help="If this flag is present, the ScriptEvent lua file won't be generated.")
optparser.add_argument("input_file", help="The input file to transpile")
optparser.add_argument("output_path", default=".", help="The output directory where the <ebus_name>.lua file will be generated.")

class Options():
    pass

options = Options()
args = optparser.parse_args(namespace=options)

if (not options.generate_template) and options.disable_script_event_generation:
    print("Because a sample file won't be generated and the ScriptEvent file won't be generated either, there's nothing to do")
    sys.exit(-1)

if not os.path.isdir(options.output_path):
    print("path=<{}> doesn't exist or it is not a directory".format(options.output_path))
    sys.exit(-1)

Transpile(options.input_file, options.output_path,
    options.ebus_name, options.address_type,
    options.generate_template, options.disable_script_event_generation)
