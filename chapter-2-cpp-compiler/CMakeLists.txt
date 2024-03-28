cmake_minimum_required(VERSION 3.21)
project(chapter_2_cpp_compiler)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chapter_2_cpp_compiler
        func.cpp
        func.h
        main.cpp)
