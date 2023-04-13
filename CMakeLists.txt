cmake_minimum_required(VERSION 3.25)
project(mortarComputer)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp, "Classes and Headers/m252functions.h," "Classes and Headers/informationDisplay.h," "Classes and Headers/weatherFunctions.h")
add_executable(mortarComputer main.cpp "Classes and Headers/artilleryFunctions.h" "Classes and Headers/informationIO.h" "Classes and Headers/weatherFunctions.h")
