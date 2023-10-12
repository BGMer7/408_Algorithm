//
// Created by Gatsby on 2023/10/12.
//

#ifndef INC_408_ALGORITHM_REMOVE_DUPLICATES_FROM_LIST_H
#define INC_408_ALGORITHM_REMOVE_DUPLICATES_FROM_LIST_H

#include "../listnode.h"

class RemoveDuplicatesFromList {
public:
    static ListNode *deleteDuplicates(ListNode *head) {
        ListNode *root = head;
        while (head != nullptr && head->next != nullptr) {
            while (head->next != nullptr && head->val == head->next->val) {
                head->next = head->next->next;
            }
            head = head->next;
        }

        return root;
    }
};

#endif //INC_408_ALGORITHM_REMOVE_DUPLICATES_FROM_LIST_H
