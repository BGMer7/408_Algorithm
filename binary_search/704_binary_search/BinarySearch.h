//
// Created by Gatsby on 2023/10/9.
//
#include "vector"

#ifndef INC_408_ALGORITHM_BINARY_SEARCH_H
#define INC_408_ALGORITHM_BINARY_SEARCH_H


class BinarySearch {
public:
    int search(std::vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return -1;
    }

};


#endif //INC_408_ALGORITHM_BINARY_SEARCH_H
