cmake_minimum_required(VERSION 3.9)
project(DecoratorPattern)

set(CMAKE_CXX_STANDARD 11)

include_directories(./inc)

add_executable(DecoratorPattern main.cpp inc/concrete_component.h inc/decorator.h inc/concrete_decorator.h)