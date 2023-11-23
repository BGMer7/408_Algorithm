//
// Created by Gatsby on 2023/11/23.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

// #include <vector>
// #include <math.h>
// #include <iostream>
//
// using namespace std;
//
// typedef struct Node {
//     int data;
//     Node *next;
// } Node;
//
// class solution {
// public:
//     Node *remove_duplicate(Node *head, int n) {
//         vector<int> nums(n + 1);
//         Node *cur = head;
//         nums.push_back(abs(head->data));
//         while (cur->next != nullptr) {
//             int data = cur->next->data;
//             data = abs(data);
//             if (nums[data] == 1) {
//                 cur->next = cur->next->next;
//             } else {
//                 nums[data] = 1;
//             }
//             cur = cur->next;
//         }
//
//         return head;
//     }
//
//     Node* create_linked_list(vector<int> nums) {
//         Node* head = new Node();
//         Node* tail = head;
//         for (int i = 0; i < nums.size(); i++) {
//             Node* node = new Node();
//             node->data = nums[i];
//             node->next = nullptr;
//             tail->next = node;
//             tail = tail->next;
//         }
//         return head;
//     }
//
//     int main() {
//         vector<int>nums{21, -15, -15, -15, -7, 15, 15};
//         Node* head = create_linked_list(nums);
//         Node* new_head = remove_duplicate(head, 32);
//
//         Node* curr = new_head->next;
//         while (curr) {
//             cout << "->" << curr->data;
//             curr = curr->next;
//         }
//
//     }
// };


#endif //INC_408_ALGORITHM_SOLUTION_H
