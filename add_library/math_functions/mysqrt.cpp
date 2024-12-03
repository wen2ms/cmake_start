#include "mysqrt.h"

#include <iostream>

namespace math_functions {
namespace detail {
double mysqrt(double x) {
    if (x <= 0) {
        return 0;
    }

    double y_n = x;

    const int kIterations = 10;
    for (int i = 0; i < kIterations; i++) {
        double f_n = y_n * y_n - x;

        y_n = y_n - 0.5 * f_n / y_n;

        std::cout << "Computing sqrt of " << x << " to be " << y_n << std::endl;
    }

    return y_n;
}
}  // namespace detail
}  // namespace math_functions