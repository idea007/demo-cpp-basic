/**
 * 目录结构 
 * 
├── hello.cpp
├── include
│   └── log.h
└── src
    └── log.cpp
*/
// hello.cpp 文件
#include<iostream>
#include "include/log.h"

int main(){
    std::cout << "Hello World!" << std::endl;
    log("This is a log message.");
}