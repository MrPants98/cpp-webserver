cmake_minimum_required(VERSION 4.1)
project(cpp_web_server)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_web_server src/main.cpp
        src/logger.cpp
        src/logger.h
        src/ansi.h
        src/ansi.h)
