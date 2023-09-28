//
// Created by Gatsby on 2023/9/28.
//

#include "../listnode.h"

class Leetcode237DeleteNodeInALinkedList {
public:
    static void deleteNode(ListNode* node) {
        ListNode* next = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete next;
    }
};