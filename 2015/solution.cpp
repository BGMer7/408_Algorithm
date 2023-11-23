//
// Created by Gatsby on 2023/11/23.
//

#include "solution.h"

#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;

class solution {
public:
    /*
    static Node *remove_duplicate(Node *head, int n) {
        vector<int> nums(n + 1);
        Node *cur = head;
        nums.push_back(abs(head->data));
        while (cur->next != nullptr) {
            int data = cur->next->data;
            data = abs(data);
            if (nums[data] == 1) {
                cur->next = cur->next->next;
            } else {
                nums[data] = 1;
            }
            cur = cur->next;
        }

        return head;
    }
    错误答案，因为有可能存在多个连续的同样的数字
     */

    /*
     正确解法还是要两个节点，
    static Node *remove_duplicate(Node *head, int n) {
        vector<int> nums(n + 1);
        Node *prev = head;
        Node *curr = head->next;

        while (curr != nullptr) {
            int data = abs(curr->data);
            if (nums[data] == 1) {
                prev->next = curr->next;
                Node *temp = curr;
                // prev此时不需要移动
                curr = curr->next;
                delete temp;
            } else {
                nums[data] = 1;
                // 关键的一个条件判断，prev是先不动的，只有确定没问题了才移动prev
                prev = prev->next;
                curr = curr->next;
            }

        }

        return head;
    }
     */

    // 则上述代码的修改方法也已经很明了，再确保正确之前，cur不应该移动
    // 其实一个指针也是足够的
    static Node *remove_duplicate(Node *head, int n) {
        vector<int> nums(n + 1);
        Node *cur = head;
        nums.push_back(abs(head->data));
        while (cur->next != nullptr) {
            int data = cur->next->data;
            data = abs(data);
            if (nums[data] == 1) {
                cur->next = cur->next->next;
            } else {
                nums[data] = 1;
                cur = cur->next;
            }

        }

        return head;
    }

    static Node *create_linked_list(const vector<int> &nums) {
        Node *head = new Node();
        Node *tail = head;
        for (int num: nums) {
            Node *node = new Node();
            node->data = num;
            node->next = nullptr;
            tail->next = node;
            tail = tail->next;
        }
        return head;
    }
};

int main() {
    vector<int> nums{21, -15, -15, -15, -7, 15, 15};
    Node *head = solution::create_linked_list(nums);
    Node *curr = head->next;

    cout << head->data;
    while (curr) {
        cout << "->" << curr->data;
        curr = curr->next;
    }

    cout << "-----" << endl;

    Node *new_head = solution::remove_duplicate(head, 32);
    curr = head->next;

    cout << new_head->data;
    while (curr) {
        cout << "->" << curr->data;
        curr = curr->next;
    }

}