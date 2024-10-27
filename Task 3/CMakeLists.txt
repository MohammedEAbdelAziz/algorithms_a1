cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Task3)

set(SOURCES ./src/heap.cpp ./src/heapsort.cpp ./src/priortyqueue.cpp main.cpp)

# Add the executable
add_executable(Task3 ${SOURCES})

# Include directories
