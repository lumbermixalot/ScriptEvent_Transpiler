# ScriptEvent_Transpiler Python Version
If you are struggling to configure ANTLR4 as a python module
I highly recommed to build the C++ version or, better yet, use a precompiled
binary.

## Requirements
- Python3
- Antlr4.12 runtime for Python3:
  - pip install antlr4-tools
  - OR
  - python -m pip install antlr4-tools
  - For more details (in particular for Windows: https://github.com/antlr/antlr4/blob/master/doc/getting-started.md)

## How To Use
'git clone' this project
cd ScriptEvent_Transpiler/PythonApp

> python main.py -h  
    ... Displays Help

Now, let's transpile the sample interface file located in **Samples/demo_interface.lua**, the idea is to generate a ScriptEvent lua file.

### USAGE 1
> python main.py -e MyBroadcastBus -Samples\demo_interface.lua Samples  
  
One file is generated inside the **.Samples/** directory:    
  - MyBroadcastBus.lua   <-- This is the non-addressable Broadcast type of ScriptEvent lua file. Callers would do MyBroadcastBus.Broadcast.Function(...)

### USAGE 2
> python main.py -e MyBroadcastBus -t Samples\demo_interface.lua Samples  
  
Two Files are generated inside the **.Samples/** directory:   
  - MyBroadcastBus.lua   <-- This is the non-addressable Broadcast type of ScriptEvent lua file. Callers would do MyBroadcastBus.Broadcast.Function(...)
  - MyBroadcastBus_subclass.lua   <-- An example class file on how to listen or respond to events sent to the MyBroadcastBus Bus.
You should place MyBroadcastBus.lua nested somewhere in your GAME_PROJECT/Scripts/... folder.
  
### USAGE 2
> python main.py -e MyEventBus -a EntityId -t Samples\demo_interface.lua Samples  
  
Two Files are generated inside .Samples\
  - MyEventBus.lua   <-- This is the EntityId addressable Event type of ScriptEvent lua file. Callers would do MyEventBus.Event.Function(SomeEntityId, ...)
  - MyEventBus_subclass.lua   <-- An example class file on how to listen or respond to events sent to the MyEventBus Bus.
You should place MyEventBus.lua nested somewhere in your GAME_PROJECT/Scripts/... folder.






