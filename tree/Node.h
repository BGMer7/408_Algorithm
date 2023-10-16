//
// Created by Gatsby on 2023/10/16.
//

#include "vector"

#ifndef INC_408_ALGORITHM_NODE_H
#define INC_408_ALGORITHM_NODE_H

class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

#endif //INC_408_ALGORITHM_NODE_H
