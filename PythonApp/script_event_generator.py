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

class ScriptEventGenerator():
    """This class generates a ScriptEvent lua file.
    """
    def __init__(self, ebus_name, address_type):
        self.ebusName = ebus_name
        self.addressType = address_type
        self.localBusName = ebus_name[0].lower() + ebus_name[1:]


    def Generate(self, output_filename, functions_list):
        with open(output_filename, 'wt') as file_obj:
            self._WriteInfoHeader(file_obj)
            file_obj.write("local {0} = ScriptEvent(\"{1}\"".format(self.localBusName, self.ebusName))
            if self.addressType == "String":
                file_obj.write(", typeid(\"\")")
            elif self.addressType == "EntityId":
                file_obj.write(", typeid(EntityId())")
            elif self.addressType == "Crc32":
                file_obj.write(", typeid(Crc32())")
            file_obj.write(")\n\n")
            
            for comment, funcName, params, retType in  functions_list:
                if len(comment) > 0:
                    file_obj.write("{}\n".format(comment))
                self._WriteMethodAndParameters(file_obj, funcName, params, retType)

            file_obj.write("{0}:Register()".format(self.localBusName))


    def _WriteInfoHeader(self, file_obj):
        file_obj.write(
        "-- This ScriptEvent file was auto generated with ScriptEvent_Transpiler (Python).\n"
        "-- Source Available at https://github.com/lumbermixalot/ScriptEvent_Transpiler.git\n")
        

    def _WriteMethodAndParameters(self, file_obj, funcName, params, retType):
        file_obj.write("local method{0} = {1}:AddMethod(\"{0}\"".format(funcName, self.localBusName))
        if retType is not None:
            file_obj.write(", typeid({})".format(retType))
        file_obj.write(")\n")

        for name, value in params:
            file_obj.write("method{0}:AddParameter(\"{1}\", typeid({2}))\n".format(funcName, name, value))

        file_obj.write("\n")