//
// Created by Gatsby on 2023/9/28.
//

#include "../listnode.h"
#include "iostream"

class Leetcode837MiddleOfTheLinkedList {
public:
    static ListNode *middleNode(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }
};

void test1();

void test2();

int main() {
    test1();

    test2();
}

void test1() {
    int vals[5]{1, 2, 3, 4, 5};
    ListNode *head = List::createLinkedList(vals, 5);

    ListNode *middle = Leetcode837MiddleOfTheLinkedList::middleNode(head);

    std::cout << middle->val << std::endl;
    // 3

    List::destroyLinkedList(head);
}

void test2() {
    int vals[6]{1, 2, 3, 4, 5, 6};
    ListNode *head = List::createLinkedList(vals, 6);

    ListNode *middle = Leetcode837MiddleOfTheLinkedList::middleNode(head);

    std::cout << middle->val << std::endl;
    // 4

    List::destroyLinkedList(head);
}