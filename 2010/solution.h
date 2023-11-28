//
// Created by Gatsby on 2023/11/28.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

#include <vector>

using namespace std;

class solution {
public:
    static void reverse_array(vector<int> &nums, int p) {
        const int n = nums.size() - 1;
        reverse(nums, 0, n);
        reverse(nums, 0, n - 1 - p);
        reverse(nums, n - p, n);
    }

private:
    static void reverse(vector<int> &nums, int left, int right) {
        while (left < right) {
            swap(nums, left, right);
            left++;
            right--;
        }
    }

    static void swap(vector<int> &nums, int left, int right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
    }

};


#endif //INC_408_ALGORITHM_SOLUTION_H
