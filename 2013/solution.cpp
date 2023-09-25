//
// Created by Gatsby on 2023/9/25.
//

#include "vector"
#include "iostream"
#include "unordered_map"

using namespace std;

class SolutionCount {
public:
    static int findMajor(vector<int> nums) {
        unordered_map<int, int> numsCount;

        for (int num: nums) {
            if (numsCount.find(num) != numsCount.end()) {
                numsCount[num]++;
            } else {
                numsCount[num] = 1;
            }
        }

        for (auto pair: numsCount) {
            if (pair.second > nums.size() / 2) {
                return pair.first;
            }
        }

        return -1;
    }

    /**
     * 同样是计数的方法，但是实际上由于题目中给出的条件是数值不会超过数组的大小，
     * 那么可以用一个数组来充当map的作用，
     * 写起来更加简单，也更容易懂，不涉及std中的数据结构
     * @param nums
     * @return
     */
    static int findMajorWithArray(vector<int> nums) {
        const int size = nums.size();
        vector<int> count(size + 1, 0);

        for (int i = 0; i < size; ++i) {
            count[nums[i]]++;
        }

        int maxCount = INT_MIN;
        int major = -1;
        for (int i = 0; i <= size; ++i) {
            if (count[i] > maxCount) {
                maxCount = count[i];
                major = i;
            }
        }

        return maxCount > size / 2 ? major : -1;
    }
};


int main() {
    vector<int> nums1 = {2, 2, 1, 1, 1, 2, 2};
    int res1 = SolutionCount::findMajor(nums1);

    vector<int> nums2 = {3, 2, 3};
    int res2 = SolutionCount::findMajorWithArray(nums2);

    cout << res1 << " " << res2 << endl;
}