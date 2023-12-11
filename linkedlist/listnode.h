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

class List {
public:
    /***
     * 将数组转换为链表存储
     * @param vals 链表的数值
     * @param size 链表的长度
     * @return
     */
    static ListNode *createLinkedList(const int vals[], int size) {
        ListNode *root = new ListNode();
        ListNode *head = root;

        for (int i = 0; i < size - 1; ++i) {
            int val = vals[i];
            root->val = val;
            root->next = nullptr;

            ListNode *next = new ListNode;
            next->val = vals[i + 1];
            next->next = nullptr;

            root->next = next;
            root = root->next;
        }

        root->next = nullptr;

        return head;
    }

    /***
     * 整个链表new出来的空间需要销毁
     * @param head
     * @return
     */
    static bool destroyLinkedList(ListNode *head) {
        while (head != nullptr) {
            ListNode *next = head->next;
            delete head;
            head = next;
        }

        return true;
    }

    /**
     * 逆置链表
     * @param node
     * @return
     */
    static ListNode *reverse(ListNode *node) {
        if (node == nullptr || node->next == nullptr) {
            return node;
        }

        ListNode *rear = node;
        ListNode *front = node;
        front = rear->next;

        while (front->next == nullptr) {
            ListNode *tmp = front->next;
            front->next = rear;
            rear = front;
            front = tmp;
        }

        node->next = nullptr;
        return rear;
    }
};



