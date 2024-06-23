cmake_minimum_required(VERSION 3.27)
project(class)

set(CMAKE_CXX_STANDARD 17)

add_executable(class main.cpp
        Circle.cpp
        Circle.h
        menu.cpp
        menu.h)
