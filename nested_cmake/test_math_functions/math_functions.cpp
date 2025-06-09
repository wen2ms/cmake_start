#include "math_functions.h"

#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    std::cout << a << " + " << b << " = " << add(10, 20) << std::endl;

    std::cout << a << " - " << b << " = " << subtract(10, 20) << std::endl;

    std::cout << a << " * " << b << " = " << multiply(10, 20) << std::endl;

    std::cout << a << " / " << b << " = " << divide(10, 20) << std::endl;

    return 0;
}