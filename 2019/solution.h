//
// Created by Gatsby on 2023/10/20.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

typedef struct node {
    int data;
    struct node *next;
} NODE;

class solution {

public:
    static node *find_mid(node *head) {
        node *fast = head;
        node *slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    static node *reverse_list(node *head) {
        node *rear = head;
        node *front = head;
        front = front->next;

        while (front != nullptr) {
            node *tmp = front->next;
            front->next = rear;
            rear = front;
            front = tmp;
        }

        head->next = nullptr;
        return rear;
    }


    /**
     * 借鉴自leetcode，虽然逻辑很简单，但是限时还真不一定写得全
     * leetcode的官方题解采用递归
     * @param l1
     * @param l2
     */
    static void mergeList(node *l1, node *l2) {
        node *temp1;
        node *temp2;

        while (l1 != nullptr && l2 != nullptr) {
            temp1 = l1->next;
            temp2 = l2->next;

            l1->next = l2;
            l1 = temp1;

            l2->next = l1;
            l2 = temp2;
        }
    }

    static void reorder(node *head) {
        node *mid = find_mid(head);
        node *head1 = reverse_list(mid);

        mergeList(head, head1);
    }

};


#endif //INC_408_ALGORITHM_SOLUTION_H
