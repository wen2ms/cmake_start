#include <iostream>

#include "my_math.hpp"

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Usage: " << " number1 number 2" << std::endl;
        return 1;
    }

    int number1 = std::stoi(argv[1]);
    int number2 = std::stoi(argv[2]);

    std::cout << "add: result is " << my_math::my_add(number1, number2) << std::endl; 

    return 0;
}