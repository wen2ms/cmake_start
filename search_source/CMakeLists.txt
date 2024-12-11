cmake_minimum_required(VERSION 3.14)

project(search_source)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EXECUTABLE_OUTPUT_PATH /Users/wenmaosheng/Codes/cmake_start/bin)

aux_source_directory("${PROJECT_SOURCE_DIR}" SOURCE)
# file(GLOB SOURCE "${PROJECT_SOURCE_DIR}/*.cpp")

add_executable(search_source ${SOURCE})