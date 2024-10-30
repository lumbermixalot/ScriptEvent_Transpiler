# Creating the VS2022 solution.
1. The solution is generated with CMAKE.
2. After cloning this repository: `cd CppApp`.
3. Execute `.\configure_win.bat` which will invoke CMAKE to create the VS2022 solution.
4. The solution will be available as `.\build\ScriptEvent_Transpiler.sln`.
5. In VS2022 compile for Debug or Release.
6. For convenience, the build steps will automatically create: `ScriptEvent_Transpiler_Release.exe` or `ScriptEvent_Transpiler_Debug.exe` under the root GIT folder of the `ScriptEvent_Transpiler` repository.

# Regenerate the Lua ANTLR grammar (Optional)
1. Install JDK17
2. (Windows) The generated source files can be recreated by running `.\regenerate_antlr.bat` script under `source` folder, it will regenerate the files under `source/generated`.
