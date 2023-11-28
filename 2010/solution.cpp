//
// Created by Gatsby on 2023/11/28.
//

#include "solution.h"
#include "print.h"

int main() {
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    ArrayPrinter::print_int_array(nums);
    solution::reverse_array(nums, 4);
    ArrayPrinter::print_int_array(nums);
}