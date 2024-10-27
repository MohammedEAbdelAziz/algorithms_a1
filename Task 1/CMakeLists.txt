cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Task1)

set(SOURCES ./src/DnC.cpp ./src/dynamic.cpp ./src/recursion.cpp ./src/app.cpp main.cpp)

# Add the executable
add_executable(Task1 ${SOURCES})

# Include directories
