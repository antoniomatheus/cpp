cmake_minimum_required(VERSION 3.17)
project(cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -fconcepts)

add_executable(narrow_cast casting/narrow_cast.cpp)
add_executable(simple_unique_pointer pointers/simple_unique_pointer.cpp)
add_executable(mean polymorphism/compile/mean.cpp)
add_executable(mode polymorphism/compile/mode.cpp)
add_executable(logger polymorphism/runtime/logger.cpp)
add_executable(simple_strings simple_strings.cpp)
add_executable(simple_timer simple_timer.cpp)
add_executable(value_types value_types.cpp)
add_executable(test test.cpp)
add_executable(free_store free_store.cpp)

