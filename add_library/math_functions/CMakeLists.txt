add_library(math_functions math_functions.cpp)

option(USE_MYMATH "Use add_library provided math implementaion" ON)

if (USE_MYMATH)
    target_compile_definitions(math_functions PRIVATE "USE_MYMATH")

    add_library(sqrt_library STATIC
                mysqrt.cpp)

    target_link_libraries(math_functions PRIVATE sqrt_library)
endif()


