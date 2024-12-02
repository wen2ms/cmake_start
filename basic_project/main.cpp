#include <cmath>
#include <iostream>
#include <string>

#include "basic_project_config.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << argv[0] << " VERSION " << basic_project_VERSION_MAJOR << '.' << basic_project_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    const double input_value = std::stod(argv[1]);
    const double output_value = std::sqrt(input_value);

    std::cout << "The square roof of " << input_value << " is " << output_value << std::endl;

    return 0;
}