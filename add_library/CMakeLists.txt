cmake_minimum_required(VERSION 3.14)

project(add_library VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(add_library_config.h.in add_library_config.h)

add_subdirectory(math_functions)

add_executable(add_library add_library.cpp)

target_link_libraries(add_library PUBLIC math_functions)

target_include_directories(add_library PUBLIC 
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/math_functions")