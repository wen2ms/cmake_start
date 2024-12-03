#include <cmath>
#include <iostream>
#include <string>

#include "math_functions.h"
#include "add_library_config.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << argv[0] << " Version " << ADD_LIBRARY_VERSION_MAJOR << '.' << ADD_LIBRARY_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    const double kInputValue = std::stod(argv[1]);

    const double kOutputValue = math_functions::sqrt(kInputValue);

    std::cout << "------------------" << std::endl;
    std::cout << "The square root of " << kInputValue << " is " << kOutputValue << std::endl;

    return 0;
}