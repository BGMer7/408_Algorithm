#include <algorithm>
#include <vector>
#include "../../include/print.h"

using namespace std;

class Leetcode88MergeTwoSortedArrays {
private:
public:
    // 最偷懒的方法，直接将nums2的数值全部赋值到nums1中，然后对nums1进行排序
    static void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        for (int i = m, j = 0; i < nums1.size(); ++i, ++j) {
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());
    }

    // 双指针从后往前遍历
    static void merge_with_two_pointers(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        if (n == 0) {
            return;
        }

        if (m == 0) {
            nums1 = nums2;
            return;
        }

        // nums1的最后一个存储空间
        int ptr = m + n - 1;
        // nums1的最后一个有效元素
        int ptr1 = m - 1;
        // nums2的最后一个元素
        int ptr2 = n - 1;

        while (ptr1 >= 0 && ptr2 >= 0) {
            if (nums1[ptr1] <= nums2[ptr2]) {
                nums1[ptr--] = nums2[ptr2--];
            } else {
                nums1[ptr--] = nums1[ptr1--];
            }
        }

        // 如果nums2还剩下没有合并的，需要全部移除到nums1中
        // nums1则不需要考虑这个问题，因为本身就是剩下的，还在原位
        while (ptr2 >= 0) {
            nums1[ptr--] = nums2[ptr2--];
        }
    }
};

int main() {
    vector<int> nums1 = {4, 5, 6, 0, 0, 0};
    vector<int> nums2 = {1, 2, 3};
    Leetcode88MergeTwoSortedArrays::merge_with_two_pointers(nums1, 3, nums2, 3);

    ArrayPrinter ap;

    ArrayPrinter::printIntArray(nums1);
}