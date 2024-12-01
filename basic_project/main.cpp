#include <cmath>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    const double input_value = std::atof(argv[1]);
    const double output_value = std::sqrt(input_value);

    std::cout << "The square roof of " << input_value << " is " << output_value << std::endl;

    return 0;
}