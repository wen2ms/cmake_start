cmake_minimum_required(VERSION 3.14)

project(basic_project VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(basic_project_config.h.in basic_project_config.h)

add_executable(basic_project main.cpp)

target_include_directories(basic_project PUBLIC "${PROJECT_BINARY_DIR}")