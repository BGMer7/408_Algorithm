#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * 直接将两个数组合并为一个数组，并对新的数组排序，选出中位数
 * 这个写法更加通用，更加符合 leetcode第四题：两个正序数组的中位数的解法
 * 实际的真题中不需要考虑合并后的数组是奇数还是偶数的问题，因为两个数组的长度相同，会更简单一些
 */
class SolutionMergeAndSort {
public:
    static double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        // 直接将nums2插入到nums1的数组尾部
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // 直接对nums1采用stl的快速排序
        sort(nums1.begin(), nums1.end());

        // 单数组求中位数
        return calculateMedian(nums1);
    }

private:
    static double calculateMedian(vector<int> &nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        if (nums.size() % 2 == 0) {
            double mid = 0.5 * nums.size();
            double sum = nums[ceil(mid)] + nums[floor(mid - 1)];
            return sum / 2;
        } else {
            return nums[nums.size() / 2];
        }
    }
};

/**
 * 对合并排序解法的一种优化
 * 因为两个数组本身就是有序的，所以这个条件可以利用起来，做一次遍历，用两个指针保留中位数（中位数的两个数）
 * 但是由于leetcode中的题目并没有控制两个数组的长度相同，所以实际实现起来还挺麻烦的，考场上没有把握能顺利写出
 */
class SolutionMergeAndSortByTwoPtrs {
public:
    static double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int total = nums1.size() + nums2.size();
        int i = 0; // nums1的指针
        int j = 0; // nums2的指针
        double mid;

        if (total % 2 == 1) {
            int step = 0;
            int stepmid = (total / 2) + 1;
            while (step++ < stepmid) {
                if (nums1[i] < nums2[j]) {
                    mid = nums1[i];
                    i++;
                } else {
                    mid = nums2[j];
                    j++;
                }
            }
            return mid;
        }

        // TODO 偶数项的情况
    }
};

int main() {
    vector<int> nums1 = {0, 0, 0, 0, 0};
    vector<int> nums2 = {-1, 0, 0, 0, 0, 0, 1};

    cout << SolutionMergeAndSort::findMedianSortedArrays(nums1, nums2) << endl;

    double d = 1.5;
    cout << d << endl;
}