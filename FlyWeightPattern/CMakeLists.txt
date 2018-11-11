cmake_minimum_required(VERSION 3.12)
project(FlyWeightPattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(FlyWeightPattern main.cpp flyweight.h concrete_flyweight.h flyweight_factory.h)