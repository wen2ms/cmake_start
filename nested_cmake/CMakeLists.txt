cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)

project(nested_cmake)

set(LIB_PATH ${PROJECT_SOURCE_DIR}/lib)

set(EXEC_PATH ${PROJECT_SOURCE_DIR}/bin)

set(HEADER_PATH ${PROJECT_SOURCE_DIR}/include)

set(MATH_LIB math_functions)

set(SORT_LIB sort)

set(TEST_SORT test_sort)

set(TEST_MATH test_math)

add_subdirectory(math_functions)

add_subdirectory(sort)

add_subdirectory(test_math_functions)

add_subdirectory(test_sort)