//
// Created by Gatsby on 2023/9/26.
//

#include <cstdio>

#ifndef INC_408_ALGORITHM_POLYNOMIAL_H
#define INC_408_ALGORITHM_POLYNOMIAL_H

#endif //INC_408_ALGORITHM_POLYNOMIAL_H

typedef struct Node {
    /**
     * 系数
     */
    float co;

    /**
     * 次数
     */
    int ex;

    /**
     * 下一项
     */
    struct Node *next;

    Node() {}

    Node(float co, int ex) {
        this->co = co;
        this->ex = ex;
        this->next = nullptr;
    }
} *Polynomial;

// 打印多项式
static void printPolynomial(Polynomial poly) {
    while (poly != nullptr) {
        printf("%.1fx^%d ", poly->co, poly->ex);
        poly = poly->next;
        if (poly != nullptr) {
            printf("+ ");
        }
    }
    printf("\n");
}
