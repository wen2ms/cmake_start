#include "sort.h"

void selection_sort(std::vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1; ++i) {
        int min_pos = i;

        for (int j = i + 1; j < n; ++j) {
            if (nums[j] < nums[min_pos]) {
                min_pos = j;
            }
        }

        if (min_pos != i) {
            std::swap(nums[min_pos], nums[i]);
        }
    }
}
