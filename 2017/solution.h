//
// Created by Gatsby on 2023/11/24.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

#include <iostream>

using namespace std;

typedef struct node {
    string data;              // 存储操作数或操作符
    struct node *left, *right;
} BTree;

class solution {
public:
    static void print_express(BTree *root) {
        mid_traversal(root);
    }

private:
    static void mid_traversal(BTree *root) {
        cout << "(";
        if (root->left) {
            mid_traversal(root->left);
        }
        cout << root->data;
        if (root->right) {
            mid_traversal(root->right);
        }
        cout << ")";
    }

};


#endif //INC_408_ALGORITHM_SOLUTION_H
