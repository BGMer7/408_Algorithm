//
// Created by Gatsby on 2023/9/28.
//

#ifndef INC_408_ALGORITHM_LINKED_LIST_CYCLE_H
#define INC_408_ALGORITHM_LINKED_LIST_CYCLE_H

#include "../listnode.h"

class Leetcode141LinkedListCycle {
public:
    static bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        ListNode *fast = head->next;
        ListNode *slow = head;

        while (fast != slow) {
            if (fast == nullptr || fast->next == nullptr) {
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        }

        return true;
    }
};

#endif //INC_408_ALGORITHM_LINKED_LIST_CYCLE_H
