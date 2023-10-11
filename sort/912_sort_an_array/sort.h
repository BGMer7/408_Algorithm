//
// Created by Gatsby on 2023/10/9.
//

#include "vector"
#include "print.h"
#include "iostream"

#ifndef INC_408_ALGORITHM_SORT_H
#define INC_408_ALGORITHM_SORT_H

void swap(std::vector<int> &nums, int position1, int position2) {
    int temp = nums[position1];
    nums[position1] = nums[position2];
    nums[position2] = temp;
}

/**
 * 快速排序
 * 不稳定
 * 空间复杂度O(1)
 * 时间复杂度O(nlog2n)
 */
class QuickSort {
private:
    static int partition(std::vector<int> &nums, int left, int right) {
        int i = rand() % (right - left + 1) + left;
        swap(nums, left, i);

        int pivot = nums[left];

        while (left < right) {
            while (left < right && nums[right] >= pivot) {
                right--;
            }
            nums[left] = nums[right];
            while (left < right && nums[left] <= pivot) {
                left++;
            }
            nums[right] = nums[left];
        }

        nums[left] = pivot;
        return left;
    }

    static void recursionPartition(std::vector<int> &nums, int left, int right) // 一定要使用&nums作为引用，否则nums不会改变
    {
        if (left < right) {
            int index = partition(nums, left, right);
            recursionPartition(nums, left, index - 1);
            recursionPartition(nums, index + 1, right);
        }
    }

public :
    static void sort(std::vector<int> &nums) {
        recursionPartition(nums, 0, nums.size() - 1);
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
};

/**
 * 依次给每个位置选择当前位置及以后最小的元素（交换当前元素与之后最小元素的位置）。
 * 非稳定排序：不稳定举例： 排序前：5, 5*, 1, 7 排序后：1, 5*, 5, 7
 * 空间复杂度O(1)
 * 时间复杂度O(n2)
 */
class SelectSort {
public:
    static void sort(std::vector<int> &nums) {
        int minIndex = -1;
        unsigned int n = nums.size();

        // i是已经排序的区域
        for (int i = 0; i < n - 1; ++i) {
            minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            swap(nums, i, minIndex);
        }
    }
};

/**
 * 稳定排序
 * 空间复杂度O(1)
 * 时间复杂度O(n2)
 */
class InsertSort {
public:
    static void sort(std::vector<int> &nums) {
        unsigned int n = nums.size();

        for (int i = 0; i < n - 1; ++i) {
            int curr = nums[i + 1];

            // 从i开始向前遍历，凡是比curr大，就往后挪一位，直到找到不大于的位置
            int j = i;
            while (j >= 0 && nums[j] > curr) {
                nums[j + 1] = nums[j];
                j--;
            }

            //将curr插入腾出来的位置中
            nums[j + 1] = curr;
        }
    }
};


/**
 * 希尔排序
 * 稳定
 * 空间复杂度O(1)
 * 时间复杂度O(nlog2n)
 */
class ShellSort {
public:
    static void sort(std::vector<int> &nums) {
        int n = nums.size();
        int gap = n;

        while (gap > 1) {
            gap /= 2;
            for (int i = gap; i < n; ++i) {
                int curr = nums[i];
                int j = i - gap;
                while (j >= 0 && nums[j] > curr) {
                    nums[j + gap] = nums[j];
                    j -= gap;
                }
                nums[j + gap] = curr;
                ArrayPrinter::print_int_array(nums);
            }
        }
    }
};


#endif //INC_408_ALGORITHM_SORT_H
