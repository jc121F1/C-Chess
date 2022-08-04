cmake_minimum_required(VERSION 3.10)

set(PROJECT_SOURCE "./source")

include_directories("${PROJECT_SOURCE}")

# project name
project(ChessEngine)



# Executable
add_executable(ChessEngine source/main.cpp)