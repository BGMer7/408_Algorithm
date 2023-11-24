//
// Created by Gatsby on 2023/11/24.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H


#include <vector>
#include <algorithm>

using namespace std;

class solution {
public:
    static vector<vector<int>> find_split_solution(vector<int> nums) {
        quick_sort(nums);
        vector<int> vector1;
        vector<int> vector2;

        int index = nums.size() / 2;
        for (int i = 0; i < index; ++i) {
            vector1.push_back(nums[i]);
        }
        for (int i = index; i < nums.size(); ++i) {
            vector2.push_back(nums[i]);
        }

        vector<vector<int>> res;
        res.push_back(vector1);
        res.push_back(vector2);
        return res;
    }

private:
    static void quick_sort(vector<int> &nums) {
        recur(nums, 0, nums.size() - 1);
    }

    static void swap(vector<int> &nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }

    static int partition(vector<int> &nums, int left, int right) {
        int i = rand() % (right - left + 1) + left;
        swap(nums, i, left);

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

    static void recur(vector<int> &nums, int left, int right) {
        if (left < right) {
            int index = partition(nums, left, right);
            recur(nums, left, index - 1);
            recur(nums, index + 1, right);
        }
    }

};


#endif //INC_408_ALGORITHM_SOLUTION_H
