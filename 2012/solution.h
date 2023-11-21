//
// Created by Gatsby on 2023/11/21.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

typedef struct node {
    int data;
    struct node *next;
} node, *linklist;

/**
 * 获取链表长度
 * @param linklist
 * @return
 */
int getLength(linklist linklist) {
    int length = 0;
    while (linklist != nullptr) {
        length++;
        linklist = linklist->next;
    }

    return length;
}

/**
 * 找到两个链表的最后一个相同的节点
 * @param l1
 * @param l2
 * @return
 */
linklist findTheLast(linklist l1, linklist l2) {
    int len1 = getLength(l1);
    int len2 = getLength(l2);

    if (len1 > len2) {
        int diff = len1 - len2;
        while (diff--) {
            l1 = l1->next;
        }
    } else {
        int diff = len2 - len1;
        while (diff--) {
            l2 = l2->next;
        }
    }

    while (l1->next != nullptr) {
        if (l1->data == l2->data) {
            return l1;
        } else {
            l1 = l1->next;
            l2 = l2->next;
        }
    }

    return nullptr;
}

class solution {

};


#endif //INC_408_ALGORITHM_SOLUTION_H
