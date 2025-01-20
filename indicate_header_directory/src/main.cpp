#include <iostream>
#include <my_add.h>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " number1 number2" << std::endl;
        return 1;
    }

    int number1 = std::stoi(argv[1]);
    int number2 = std::stoi(argv[2]);

    std::cout << my_add(number1, number2) << std::endl;

    return 0;
}