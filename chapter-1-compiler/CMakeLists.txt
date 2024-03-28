cmake_minimum_required(VERSION 3.21)
project(chapter_1_compiler C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(chapter_1_compiler
        main.c
        mathh.c
        mathh.h)
