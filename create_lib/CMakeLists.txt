cmake_minimum_required(VERSION 3.14)

project(create_lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

set(LIBRARY_OUTPUT_PATH lib)

# add_library(math_functions STATIC ${SRC})
add_library(math_functions SHARED ${SRC})