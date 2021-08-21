cmake_minimum_required(VERSION 3.19)
project(XOGame)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(XOGame
        main.cpp
        source.cpp
        source.h
        gameForOne.cpp
        ganeForTwo.cpp)
