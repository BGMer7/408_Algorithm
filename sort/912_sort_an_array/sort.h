//
// Created by Gatsby on 2023/10/9.
//

#include "vector"
#include "print.h"
#include "iostream"

#ifndef INC_408_ALGORITHM_SORT_H
#define INC_408_ALGORITHM_SORT_H

/**
 * quick sort
 */
class QuickSort {
private:
    int partition(std::vector<int> &nums, int left, int right) {
        int pivot = nums[right];
        // todo
        return -1;
    }

public :
    void quick_sort(std::vector<int> &nums) {

    }
};

/**
 * 稳定排序
 * 空间复杂度O(1)
 * 时间复杂度O(n2)
 */
class BubbleSort {
public:
    static void sort(std::vector<int> &nums) {
        unsigned int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            bool swapped = false;
            // j的取值范围是关键，但408考试中里就算有些边界没有考虑到也无伤大雅
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums, j, j + 1);
                    swapped = true;
                }
                ArrayPrinter::print_int_array(nums);
            }

            if (!swapped)
                break;
        }
    }

private:
    static void swap(std::vector<int> &nums, int position1, int position2) {
        int temp = nums[position1];
        nums[position1] = nums[position2];
        nums[position2] = temp;
    }
};

#endif //INC_408_ALGORITHM_SORT_H
