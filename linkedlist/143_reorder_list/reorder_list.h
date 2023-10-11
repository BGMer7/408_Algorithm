//
// Created by Gatsby on 2023/10/11.
//

#ifndef INC_408_ALGORITHM_REORDER_LIST_H
#define INC_408_ALGORITHM_REORDER_LIST_H


#include "../listnode.h"
#include "vector"

using namespace std;

class reorder_list {
public:
    void reorderList(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return;
        }
        vector<ListNode *> v;

        ListNode *curr = head;
        while (curr != nullptr) {
            v.push_back(curr);
            curr = curr->next;
        }

        int left = 0;
        int right = v.size() - 1;

        while (left < right) {
            v[left++]->next = v[right];
            if (left == right) break;
            v[right]->next = v[left];
            right--;
        }

        v[left]->next = nullptr;


    }
};


#endif //INC_408_ALGORITHM_REORDER_LIST_H
