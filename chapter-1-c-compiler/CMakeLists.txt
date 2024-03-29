cmake_minimum_required(VERSION 3.21)
project(chapter_1_c_compiler C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(chapter_1_c_compiler
        test.c
        inc/func.c
        inc/func.h)
