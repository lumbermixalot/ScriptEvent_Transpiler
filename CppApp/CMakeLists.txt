cmake_minimum_required(VERSION 3.20)

set(MY_APP_NAME "ScriptEvent_Transpiler")

project (${MY_APP_NAME})

include(FetchContent)

FetchContent_Declare(
  cli11
  GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
  GIT_TAG v2.4.2
  GIT_SHALLOW TRUE
  GIT_PROGRESS TRUE
)

# Antlr4 external dependency
FetchContent_Declare(
  antlr4
  GIT_REPOSITORY https://github.com/antlr/antlr4.git
  GIT_TAG 4.13.1
  SOURCE_SUBDIR runtime/Cpp
  CMAKE_ARGS "-DCMAKE_BUILD_TYPE=Release"
  GIT_SHALLOW TRUE
  GIT_PROGRESS TRUE
)

FetchContent_MakeAvailable(cli11 antlr4)

file(GLOB sevtlr_LocalSRC
  "${PROJECT_SOURCE_DIR}/source/*.cpp"
  "${PROJECT_SOURCE_DIR}/source/*.inl"
  "${PROJECT_SOURCE_DIR}/source/*.h"
)

file(GLOB sevtlr_GeneratedSrc
  "${PROJECT_SOURCE_DIR}/source/generated/*.cpp"
  "${PROJECT_SOURCE_DIR}/source/generated/*.h"
)

set( ANTLR4CPP_INCLUDE_DIRS
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src/dfa
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src/misc
  ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src/tree
)

add_executable(${MY_APP_NAME} ${sevtlr_LocalSRC} ${sevtlr_GeneratedSrc})

target_compile_features(${MY_APP_NAME} PRIVATE cxx_std_20)

target_include_directories(
  ${MY_APP_NAME}
  PRIVATE
  ${PROJECT_SOURCE_DIR}
  ${ANTLR4CPP_INCLUDE_DIRS}
  ${cli11_INCLUDE_DIRS}
)

source_group("${MY_APP_NAME}" FILES ${sevtlr_LocalSRC})
source_group("generated" FILES ${sevtler_GeneratedSrc})


if (MSVC)
  set_property(TARGET ${MY_APP_NAME} PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
  target_compile_options(${MY_APP_NAME}
    PRIVATE
    "/MP" # Build with multiple processes
    "/permissive-"
    "/Zc:__cplusplus"
    "/utf-8")
  target_compile_definitions(${MY_APP_NAME}
    PRIVATE
    _CRT_SECURE_NO_WARNINGS
    _SILENCE_CXX20_CODECVT_HEADER_DEPRECATION_WARNING
    ANTLR4CPP_STATIC)
elseif (UNIX AND NOT APPLE)
  target_link_libraries(${MY_APP_NAME} PRIVATE stdc++fs)
endif()

target_link_libraries(${MY_APP_NAME} PRIVATE CLI11::CLI11 antlr4_static)

if (MSVC)
  add_custom_command(TARGET ${MY_APP_NAME} POST_BUILD
      #COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_SOURCE_DIR}/../bin/$(Configuration)"
      COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_BINARY_DIR}/$(Configuration)/${MY_APP_NAME}.exe" "${PROJECT_SOURCE_DIR}/../${MY_APP_NAME}_$(Configuration).exe"
)
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set_target_properties(${MY_APP_NAME}
    PROPERTIES
    EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/"
    LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/"
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${MY_APP_NAME})
