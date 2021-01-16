cmake_minimum_required(VERSION 3.10)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT ON)

# with this cmake will enable testing in this project
enable_testing()

add_subdirectory(googletest)

set(Headers
  Example.hpp
)

set(Sources
  Example.cpp
)

# linking the library statically
add_library(${This} STATIC ${Sources} ${Headers})

# directory where the tests will be
add_subdirectory(test)