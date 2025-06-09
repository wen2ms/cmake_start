#include "sort.h"

#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {7, 6, 5, 4, 3, 2};

    insertion_sort(nums);

    for (int num : nums) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    nums = {7, 6, 5, 4, 3, 2};

    selection_sort(nums);

    for (int num : nums) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;

    return 0;
}