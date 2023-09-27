//
// Created by Gatsby on 2023/9/26.
//

#include "Solution.h"
#include "polynomial.h"

using namespace std;

class Solution {
public:
    static Polynomial add(Polynomial a, Polynomial b) {
        Polynomial cur = new Node;
        Polynomial head = cur;

        while (a != nullptr && b != nullptr) {
            if (a->ex == b->ex) {
                float co = a->co + b->co;

                if (co != 0.0) {
                    cur->next = a;
                    cur->next->co = co;
                    cur = cur->next;
                }

                a = a->next;
                b = b->next;
            } else if (a->ex > b->ex) {
                cur->next = b;
                b = b->next;
                cur = cur->next;
            } else if (a->next < b->next) {
                cur->next = a;
                a = a->next;
                cur = cur->next;
            }
        }

        if (a != nullptr) {
            cur->next = a;
        }

        if (b != nullptr) {
            cur->next = b;
        }

        return head->next;
    }
};

int main() {
    Node *a1 = new Node(2, 1);
    Node *a2 = new Node(2, 2);
    Node *a3 = new Node(3, 4);
    Node *a4 = new Node(2, 5);

    Node *b1 = new Node(-1, 1);
    Node *b2 = new Node(2, 2);
    Node *b3 = new Node(3, 5);
    Node *b4 = new Node(1, 6);

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;

    b1->next = b2;
    b2->next = b3;
    b3->next = b4;

    printPolynomial(a1);
    printPolynomial(b1);

    Polynomial res = Solution::add(a1, b1);

    printPolynomial(res);
}