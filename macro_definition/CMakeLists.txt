cmake_minimum_required(VERSION 3.12)

project(macro_definition)

add_definitions(-DDEBUG)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.c)

add_executable(macro_definition ${SRC})