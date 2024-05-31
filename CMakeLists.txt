cmake_minimum_required(VERSION 3.24)
project(CompSciPath)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompSciPath CompSciPathWay.cpp User.cpp User.h Options.h Options.cpp)
