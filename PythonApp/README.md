# ScriptEvent_Transpiler
A tool that simplifies the creation of ScriptEvent lua files for O3DE Game Projects.

## Motivation
In O3DE you can use Script Events to create EBuses in Lua. With those EBuses you can send/receive events across lua & ScriptCanvas scripts. Script Events replace the old Gameplay Notification Bus.

THE PROBLEM: It is tedious to declare Script Events in a LUA file. You have to declare each function, parameter, and return type line by line.  
THE SOLUTION: It would be nice if We could write a simple lua file that declares an interface that We'd like to be the API for any given Script Event. And with the magic of a transpiler We could generate the boiler plate ScriptEvent definition file.

### SIMILAR SITUATIONS:
For the sake of analogy, here is a list of similar scenarios where people use a transpiler/compiler that takes an input "interface" file and generates a more complicated class file.
- Interface file: *.proto ---> Google Protocol Buffer Compiler --> A class file in JAVA, or CPP, or Python, etc
- Interface file: *.aidl ---> AIDL Compiler --> A class file in JAVA, CPP, etc.
- Interface file: *.idl ---> Microsoft MIDL Compiler ---> A COM interface file.

I hope you get the idea by now...


## Requirements
- Python3
- Antlr4.12 runtime for Python3:
  - pip install antlr4-tools
  - OR
  - python -m pip install antlr4-tools
  - For more details (in particular for Windows: https://github.com/antlr/antlr4/blob/master/doc/getting-started.md)

  
  
## How To Use
'git clone' this project
cd ScriptEvent_Transpiler/

ScriptEvent_Transpiler> python main.py -h  
    ... Displays Help

Now, let's transpile the sample interface file located in **Samples/demo_interface.lua**, the idea is to generate a ScriptEvent lua file.

### USAGE 1
ScriptEvent_Transpiler> python main.py -e MyBroadcastBus -Samples\demo_interface.lua Samples  
  
One file is generated inside the **.Samples/** directory:    
  - MyBroadcastBus.lua   <-- This is the non-addressable Broadcast type of ScriptEvent lua file. Callers would do MyBroadcastBus.Broadcast.Function(...)

### USAGE 2
ScriptEvent_Transpiler> python main.py -e MyBroadcastBus -t Samples\demo_interface.lua Samples  
  
Two Files are generated inside the **.Samples/** directory:   
  - MyBroadcastBus.lua   <-- This is the non-addressable Broadcast type of ScriptEvent lua file. Callers would do MyBroadcastBus.Broadcast.Function(...)
  - MyBroadcastBus_subclass.lua   <-- An example class file on how to listen or respond to events sent to the MyBroadcastBus Bus.
You should place MyBroadcastBus.lua nested somewhere in your GAME_PROJECT/Scripts/... folder.
  
### USAGE 2
ScriptEvent_Transpiler> python main.py -e MyEventBus -a EntityId -t Samples\demo_interface.lua Samples  
  
Two Files are generated inside .Samples\
  - MyEventBus.lua   <-- This is the EntityId addressable Event type of ScriptEvent lua file. Callers would do MyEventBus.Event.Function(SomeEntityId, ...)
  - MyEventBus_subclass.lua   <-- An example class file on how to listen or respond to events sent to the MyEventBus Bus.
You should place MyEventBus.lua nested somewhere in your GAME_PROJECT/Scripts/... folder.






