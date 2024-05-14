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

class ClassGenerator():
    """This class generates a lua file that subclasses/implements a given
       ScriptEvent lua file. Use the generated file as an implementation
       example that you can copy/paste the pieces you need.
    """
    def __init__(self, ebus_name, address_type):
        self.ebusName = ebus_name
        self.addressType = address_type
        self.className = "{}_subclass".format(ebus_name)


    def Generate(self, output_filename, functions_list):
        with open(output_filename, 'wt') as file_obj:
            self._WriteInfoHeader(file_obj)
            self._WriteProperties(file_obj)
            self._WriteActivateDeactivate(file_obj)
            self._WriteFunctions(file_obj, functions_list)
            file_obj.write("return {0}\n".format(self.className))

    def _WriteInfoHeader(self, file_obj):
        file_obj.write(
        "-- This class template file was auto generated with ScriptEvent_Transpiler (Python).\n"
        "-- Source Available at https://github.com/lumbermixalot/ScriptEvent_Transpiler.git\n"
        )


    def _WriteProperties(self, file_obj):
        file_obj.write(
        "local {0} = {{\n"
        "    Properties = {{\n"
        "    }},\n"
        "}}\n\n".format(self.className))


    def _WriteActivateDeactivate(self, file_obj):
        file_obj.write("""
function {0}:OnActivate()

    require(\"Scripts.ScriptEvents.{1}\")
    self.{1}EventHandler = {1}.Connect(self""".format(self.className, self.ebusName))
        if self.addressType == "String":
            file_obj.write(", \"some_string_identifier\"")
        elif self.addressType == "EntityId":
            file_obj.write(", self.entityId")
        elif self.addressType == "Crc32":
            file_obj.write(", Crc32(123)")
        file_obj.write(")\n")
        file_obj.write("""
end

function {0}:OnDeactivate()

    if self.{1}EventHandler then
        self.{1}EventHandler:Disconnect()
    end

end

""".format(self.className, self.ebusName))


    def _WriteFunctions(self, file_obj, functions_list):
        file_obj.write(
            "-->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n"
            "-- {} Override START\n"
            "-->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n".format(self.ebusName)
        )
        for comment, funcName, params, retType in  functions_list:
            if len(comment) > 0:
                file_obj.write("{}\n".format(comment))
            self._WriteMethodAndParameters(file_obj, funcName, params, retType)
        file_obj.write(
            "--<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n"
            "-- {} Override END\n"
            "--<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n".format(self.ebusName)
        )

    def _WriteMethodAndParameters(self, file_obj, funcName, params, retType):
        self._WriteFunctionComments(file_obj, funcName, params, retType)

        file_obj.write("function {0}:{1}(".format(self.className, funcName))
        prependComma = False
        for name, value in params:
            if prependComma:
                file_obj.write(", {}".format(name))
            else:
                file_obj.write("{}".format(name))
            prependComma = True
        file_obj.write(")\n")

        if retType is not None:
            file_obj.write("    return {}\n".format(retType))
        file_obj.write("end\n\n") 


    def _WriteFunctionComments(self, file_obj, funcName, params, retType):
        if len(params) > 0:
            file_obj.write("-- {} typeid of input parameters:\n".format(funcName))
            for name, value in params:
                file_obj.write("-- @param {0} = typeid({1})\n".format(name, value))
        if retType is None:
            file_obj.write("-- Returns nil\n".format(funcName))
        else:
            file_obj.write("-- Returns typeid({})\n".format(funcName, retType))