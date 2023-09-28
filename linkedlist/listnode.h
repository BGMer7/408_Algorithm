//
// Created by Gatsby on 2023/9/27.
//

#ifndef INC_408_ALGORITHM_LISTNODE_H
#define INC_408_ALGORITHM_LISTNODE_H

#endif //INC_408_ALGORITHM_LISTNODE_H


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
