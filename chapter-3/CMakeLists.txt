cmake_minimum_required(VERSION 3.21)
project(chapter_3)

set(CMAKE_CXX_STANDARD 17)


include_directories(.)

add_executable(chapter-3
        func.cpp
        func.h
        main.cpp)

