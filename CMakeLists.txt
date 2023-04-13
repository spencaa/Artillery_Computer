cmake_minimum_required(VERSION 3.25)
project(mortarComputer)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp, Headers/m252functions.h, Headers/informationDisplay.h, Headers/weatherFunctions.h)
add_executable(mortarComputer main.cpp Headers/m252functions.h Headers/informationDisplay.h Headers/weatherFunctions.h)
