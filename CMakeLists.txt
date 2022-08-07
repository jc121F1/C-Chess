cmake_minimum_required(VERSION 3.10)

set(PROJECT_SOURCE "./source")

include_directories("${PROJECT_SOURCE}")

# project name
project(ChessEngine VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED)

# Executable
add_executable(ChessEngine source/main.cpp)