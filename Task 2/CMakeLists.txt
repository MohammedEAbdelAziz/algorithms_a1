cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Task2)

set(SOURCES ./src/binary.cpp ./src/recursive_binary.cpp ./src/seq.cpp ./src/recursive_seq.cpp ./src/app.cpp main.cpp)

# Add the executable
add_executable(Task2 ${SOURCES})

# Include directories
