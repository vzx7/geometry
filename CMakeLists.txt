cmake_minimum_required(VERSION 3.21)
project(geometry)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/headers)

add_executable(geometry
        src/headers/Function.h
        src/main.cpp)
