//
// Created by Gatsby on 2023/9/28.
//

#include "../listnode.h"

class Leetcode206ReverseLinkedList {
public:
    static ListNode *reverseList(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode *rear = head;
        ListNode *front = head;
        front = head->next;

        while (front != nullptr) {
            // 先保留住front的下一个节点，防止front修改之后丢失
            ListNode *tmp = front->next;
            // 修改front的后继节点
            front->next = rear;
            // rear后移到下一个位置
            rear = front;
            // front后移到下一个位置
            front = tmp;
        }

        head->next = nullptr;
        return rear;
    }
};

int main() {
    auto *l1 = new ListNode;
    auto *l2 = new ListNode;
    auto *l3 = new ListNode;

    l1->val = 1;
    l2->val = 2;
    l3->val = 3;

    l1->next = l2;
    l2->next = l3;
    l3->next = nullptr;

    Leetcode206ReverseLinkedList::reverseList(l1);

    delete l1;
    delete l2;
    delete l3;
}