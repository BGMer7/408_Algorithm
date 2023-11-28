//
// Created by Gatsby on 2023/11/28.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

typedef struct list_node {
    int data;
    list_node *next;
} node;

class solution {
public:
    static int find_last_k(node *head, const int k) {
        node *fast = head;
        node *slow = head;

        int n = k;
        while (n--) {
            fast = fast->next;
        }

        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        return slow->data;
    }

};


#endif //INC_408_ALGORITHM_SOLUTION_H
