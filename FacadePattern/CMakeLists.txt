cmake_minimum_required(VERSION 3.9)
project(FacadePattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(FacadePattern main.cpp sub_system.h facade.h)