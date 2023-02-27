cmake_minimum_required(VERSION 3.23)
project(GradeCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(GradeCalculator gradecalculator.cpp gradeFunctions.cpp student.cpp)
