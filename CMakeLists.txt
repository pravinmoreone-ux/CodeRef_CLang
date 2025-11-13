cmake_minimum_required(VERSION 4.0)
project(CodeRef_CLang)

set(CMAKE_CXX_STANDARD 20)

add_executable(CodeRef_CLang main.cpp
        cmake-build-debug/c_variable.cpp
        cmake-build-debug/c_variable.h
        cvariable.cpp
        function_in_c.h
        function_in_c.cpp
        function_in_c.cpp
)
