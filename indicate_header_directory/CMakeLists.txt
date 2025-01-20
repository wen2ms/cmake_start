cmake_minimum_required(VERSION 3.14)

project(indicate_header_directory)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories("${PROJECT_SOURCE_DIR}/include")

aux_source_directory("${PROJECT_SOURCE_DIR}/src" SOURCE)

add_executable(indicate_header_directory ${SOURCE})

# target_include_directories(indicate_header_directory PUBLIC "${PROJECT_SOURCE_DIR}/include")

set(EXECUTABLE_OUTPUT_PATH /Users/wenmaosheng/Codes/cmake_start/bin)