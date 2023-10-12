//
// Created by Gatsby on 2023/10/12.
//

#ifndef INC_408_ALGORITHM_CONTAINS_DUPLICATE_H
#define INC_408_ALGORITHM_CONTAINS_DUPLICATE_H

#include "vector"
#include "set"
#include "algorithm"


class contains_duplicate {
public:
    /**
     * 直接利用set去重，空间复杂度o(n)
     * @param nums
     * @return
     */
    static bool containsDuplicateSet(std::vector<int> &nums) {
        std::set<int> s;
        for (int num: nums) {
            s.insert(num);
        }

        return s.size() != nums.size();
    }

    /**
     * 时间复杂度o(nlog2n) 空间复杂度O(1)
     * @param nums
     * @return
     */
    static bool containsDuplicateSort(std::vector<int> &nums) {
        if (nums.size() <= 1) {
            return false;
        }

        std::sort(nums.begin(), nums.end());
        // quick_sort(nums);
        for (int i = 0; i < nums.size() - 2; ++i) {
            if (nums[i] == nums[i + 1]) return true;
        }

        return false;
    }

private:
    static int partition(std::vector<int> &nums, int left, int right) {
        int pivot = nums[left];

        while (left < right) {
            while (left < right && nums[right] >= pivot) right--;
            nums[left] = nums[right];

            while (left < right && nums[left] <= pivot) left++;
            nums[right] = nums[left];
        }

        nums[left] = pivot;
        return left;
    }

    static void recurPartition(std::vector<int> &nums, int left, int right) {
        if (left < right) {
            int mid = partition(nums, left, right);
            recurPartition(nums, left, mid - 1);
            recurPartition(nums, mid + 1, right);
        }
    }

    static void quick_sort(std::vector<int> &nums) {
        recurPartition(nums, 0, nums.size() - 1);
    }
};


#endif //INC_408_ALGORITHM_CONTAINS_DUPLICATE_H
