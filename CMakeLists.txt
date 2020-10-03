cmake_minimum_required(VERSION 3.9)

project(test_modules)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19.25)
        message(FATAL_ERROR "MSVC 19.25 is minimum required")
    endif()
else()
    message(FATAL_ERROR "Unsupported Compiler")
endif()

add_executable(${PROJECT_NAME} main.cpp)

include(cmake/CXX20Modules.cmake)
add_module(${PROJECT_NAME} math)
add_module(${PROJECT_NAME} foo)

target_compile_options(${PROJECT_NAME} PRIVATE "/std:c++latest")
target_compile_options(${PROJECT_NAME} PRIVATE "/experimental:module")