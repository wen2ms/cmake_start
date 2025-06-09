cmake_minimum_required(VERSION 3.14)

project(math_functions)

aux_source_directory(./ SRC)

include_directories(${HEADER_PATH})

set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${MATH_LIB} STATIC ${SRC})