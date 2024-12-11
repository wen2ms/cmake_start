#ifndef MY_MATH_HPP
#define MY_MATH_HPP

namespace my_math {
template <class T>
T my_add(T a, T b);
}

namespace my_math {
template <class T>
T my_add(T a, T b) {
    return a + b + 1024;
}
}

#endif  // MY_MATH_HPP