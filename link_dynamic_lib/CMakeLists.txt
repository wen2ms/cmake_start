cmake_minimum_required(VERSION 3.14)

project(link_dynamic_lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

message("message_1")

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/dynamic_lib)

add_executable(link_dynamic_lib ${SRC})

message(STATUS "message_2")

target_link_libraries(link_dynamic_lib math_functions)

# message(FATAL_ERROR "message_3")

message(STATUS ${CMAKE_CURRENT_SOURCE_DIR})