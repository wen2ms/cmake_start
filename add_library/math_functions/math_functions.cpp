#include "math_functions.h"

#include <cmath>

#ifdef USE_MYMATH
#include "mysqrt.h"
#endif

namespace math_functions {
double sqrt(double x) {
#ifdef USE_MYMATH
    return detail::mysqrt(x);
#else
    return std::sqrt(x);
#endif
}
}  // namespace math_functions
