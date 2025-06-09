cmake_minimum_required(VERSION 3.14)

project(test_sort)

include_directories(${HEADER_PATH})

aux_source_directory(./ SRC)

link_directories(${LIB_PATH})

link_libraries(${SORT_LIB})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})

add_executable(${TEST_SORT} ${SRC})