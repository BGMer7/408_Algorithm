//
// Created by Gatsby on 2023/10/9.
//

#include "sort.h"
#include "vector"
#include <random>

using namespace std;

/**
 * 随机生成数组的方法
 * @param minLength
 * @param maxLength
 * @return
 */
std::vector<int> generate_random_vector(int minLength, int maxLength) {
    int length = rand() % (maxLength - minLength + 1) + minLength;
    std::vector<int> randomVector;
    for (int i = 0; i < length; i++) {
        randomVector.push_back(rand() % 100);
    }
    return randomVector;
}

int main() {
    vector<int> nums1 = generate_random_vector(10, 20);
    ArrayPrinter::print_int_array(nums1);
    BubbleSort::sort(nums1);
    ArrayPrinter::print_int_array(nums1);

    vector<int> nums2 = generate_random_vector(10, 20);
    vector<int> nums3 = generate_random_vector(10, 20);
    vector<int> nums4 = generate_random_vector(10, 20);



}
