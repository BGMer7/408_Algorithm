//
// Created by Gatsby on 2023/11/27.
//

#include "solution.h"
#include "iostream"

int main() {
    vector<int> nums{-5, 3, 2, 3};
    int res = solution::find_the_smallest_positive_integer(nums);
    cout << res << endl;
}