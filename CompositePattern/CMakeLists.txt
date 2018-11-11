cmake_minimum_required(VERSION 3.9)
project(CompositePattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(CompositePattern main.cpp component.h composite.h leaf.h)