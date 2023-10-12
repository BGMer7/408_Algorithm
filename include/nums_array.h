//
// Created by Gatsby on 2023/10/12.
//

#ifndef INC_408_ALGORITHM_NUMS_ARRAY_H
#define INC_408_ALGORITHM_NUMS_ARRAY_H

#include <vector>
#include <random>

using namespace std;

class ArrayCreator {
public :
    static vector<int> create_vector() {
        return generate_random_vector(10, 20);
    }

private :
    /**
     * 随机生成数组的方法
     * @param minLength
     * @param maxLength
     * @return
     */
    static std::vector<int> generate_random_vector(int minLength, int maxLength) {
        int length = rand() % (maxLength - minLength + 1) + minLength;
        std::vector<int> randomVector;
        for (int i = 0; i < length; i++) {
            randomVector.push_back(rand() % 100);
        }
        return randomVector;
    }

};

#endif //INC_408_ALGORITHM_NUMS_ARRAY_H
