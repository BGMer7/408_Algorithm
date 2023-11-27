//
// Created by Gatsby on 2023/11/27.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

#include <vector>

using namespace std;

/*
class solution {
public:
    static int find_the_smallest_positive_integer(vector<int> &nums) {
        quick_sort(nums);
        // 排序之后的思路很乱没有一个统一的标准确保一次遍历出来
        // int samllest_positive_integer = 1;
        // for (int i = nums.size() - 1; i >= 0; --i) {
        //     samllest_positive_integer
        // }
        // return 0;
    }

private:
    static int partition(vector<int> &nums, int left, int right) {
        int pivot = nums[left];

        while (left < right) {
            while (left < right && pivot <= nums[right]) {
                right--;
            }
            nums[left] = nums[right];
            while (left < right && pivot >= nums[right]) {
                left++;
            }
            nums[left] = nums[right];
        }
        nums[left] = pivot;

        return left;
    }

    static void recur_partition(vector<int> &nums, int left, int right) {
        if (left < right) {
            int index = partition(nums, left, right);
            partition(nums, left, index - 1);
            partition(nums, index + 1, right);
        }
    }

    static void quick_sort(vector<int> &nums) {
        recur_partition(nums, 0, nums.size() - 1);
    }
};
 */

#include <cmath>

class solution {
public:
    static int find_the_smallest_positive_integer(vector<int> &nums) {
        int max_num = INT_MIN;
        for (int num: nums) {
            max_num = max(num, max_num);
        }

        vector<int> map(max_num + 10); // 用来当作一个辅助数组，空间开大一点

        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]] = 1;
        }

        for (int i = 1; i < max_num + 10; ++i) {
            if (map[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};


#endif //INC_408_ALGORITHM_SOLUTION_H
