#include <iostream>
#include <vector>

class ArrayPrinter {
public:
    // 静态函数用于输出整数数组
    static void printIntArray(std::vector<int> arr) {
        int size = arr.size();

        for (int i = 0; i < size; i++) {
            std::cout << arr[i];
            if (i < size - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    // 静态函数用于输出浮点数数组
    static void printFloatArray(const float arr[], int size) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i];
            if (i < size - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
};