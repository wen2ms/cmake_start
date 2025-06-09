cmake_minimum_required(VERSION 3.14)

project(string_operation)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp )

message("======================")

message(${SRC})

message("======================")

list(REMOVE_ITEM SRC ${PROJECT_SOURCE_DIR}/src/main.cpp)

message(${SRC})

message("======================")

add_library(math_functions SHARED ${SRC})

set(tmp hello world)

set(foo ${tmp} ${SRC})

message(${tmp})

message(${foo})

list(APPEND tmp "xxxx" ++++)

message(${tmp})