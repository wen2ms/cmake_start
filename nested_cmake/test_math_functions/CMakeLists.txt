cmake_minimum_required(VERSION 3.14)

project(test_math_functions)

include_directories(${HEADER_PATH})

aux_source_directory(./ SRC)

link_directories(${LIB_PATH})

link_libraries(${MATH_LIB})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})

add_executable(${TEST_MATH} ${SRC})