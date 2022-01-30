cmake_minimum_required(VERSION 3.21)
project(testapp)

set(CMAKE_CXX_STANDARD 14)

add_executable(testapp main.cpp my_class.h my_class.cpp)
