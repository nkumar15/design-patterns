cmake_minimum_required(VERSION 3.3)
project(DesignPatterns)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Patterns/src/main.cpp)
add_executable(DesignPatterns ${SOURCE_FILES})