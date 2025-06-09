cmake_minimum_required(VERSION 3.14)

project(sort)

aux_source_directory(./ SRC)

include_directories(${HEADER_PATH})

set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${SORT_LIB} STATIC ${SRC})