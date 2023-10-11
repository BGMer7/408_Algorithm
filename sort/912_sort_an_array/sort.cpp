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

/**
 * 冒泡排序的测试方法
 */
void test_bubble() {
    cout << "------------------bubble sort------------------" << endl;
    vector<int> nums = generate_random_vector(10, 20);
    ArrayPrinter::print_int_array(nums);
    BubbleSort::sort(nums);
    ArrayPrinter::print_int_array(nums);
    cout << "-----------------------------------------------" << endl;
}

/**
 * 选择排序的测试方法
 */
void test_select() {
    cout << "------------------select sort------------------" << endl;
    vector<int> nums = generate_random_vector(10, 20);
    ArrayPrinter::print_int_array(nums);
    SelectSort::sort(nums);
    ArrayPrinter::print_int_array(nums);
    cout << "-----------------------------------------------" << endl;
}

/**
 * 插入排序的测试方法
 */
void test_insert() {
    cout << "------------------insert sort------------------" << endl;
    vector<int> nums = generate_random_vector(10, 20);
    ArrayPrinter::print_int_array(nums);
    InsertSort::sort(nums);
    ArrayPrinter::print_int_array(nums);
    cout << "-----------------------------------------------" << endl;
}

void test_shell() {
    cout << "------------------shell sort------------------" << endl;
    vector<int> nums = generate_random_vector(6, 6);
    ArrayPrinter::print_int_array(nums);
    ShellSort::sort(nums);
    ArrayPrinter::print_int_array(nums);
    cout << "-----------------------------------------------" << endl;
}

void test_quick() {
    cout << "------------------insert sort------------------" << endl;
    vector<int> nums = generate_random_vector(10, 20);
    ArrayPrinter::print_int_array(nums);
    QuickSort::sort(nums);
    ArrayPrinter::print_int_array(nums);
    cout << "-----------------------------------------------" << endl;
}



int main() {
    test_quick();

}
