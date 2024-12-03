#include "math_functions.h"

#include "mysqrt.h"

namespace math_functions {
double sqrt(double x) {
    return detail::mysqrt(x);
}
}  // namespace math_functions
