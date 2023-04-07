cmake_minimum_required(VERSION 3.25)
project(mortarComputer)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

set(SOURCE_FILES main.cpp)
add_executable(mortarComputer main.cpp Headers/m252functions.h Headers/informationDisplay.h Headers/weatherFunctions.h)
