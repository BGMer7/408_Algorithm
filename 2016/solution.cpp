//
// Created by Gatsby on 2023/11/24.
//

#include "solution.h"
#include "print.h"

int main() {
    vector<int> nums{57, 32, 56, 22, 334, 634, 77};
    vector<vector<int>> res = solution::find_split_solution(nums);
    for (const vector<int> &v: res) {
        ArrayPrinter::print_int_array(v);
    }
}
