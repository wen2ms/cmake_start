cmake_minimum_required(VERSION 3.14)

project(link_static_lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

link_libraries(math_functions)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/static_lib)

add_executable(link_static_lib ${SRC})