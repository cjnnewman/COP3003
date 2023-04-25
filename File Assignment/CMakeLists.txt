cmake_minimum_required(VERSION 3.23)
project(File_Assignment)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(File_Assignment
        BookFile.cpp
        BookFile.hpp main.cpp)
