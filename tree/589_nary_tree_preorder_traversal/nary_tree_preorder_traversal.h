//
// Created by Gatsby on 2023/10/16.
//
#include "vector"
#include "../Node.h"
#include "deque"

using namespace std;

#ifndef INC_408_ALGORITHM_NARY_TREE_PREORDER_TRAVERSAL_H
#define INC_408_ALGORITHM_NARY_TREE_PREORDER_TRAVERSAL_H


class nary_tree_preorder_traversal {
public:
    /**
     * leetcode官方递归题解
     * @param root
     * @return
     */
    std::vector<int> preorder(Node *root) {
        vector<int> res;
        helper(root, res);
        return res;
    }

    void helper(const Node *root, vector<int> &res) {
        if (root == nullptr) {
            return;
        }
        res.emplace_back(root->val);
        for (Node* const &ch: root->children) {
            helper(ch, res);
        }
    }

    /**
     * 题外话：层序遍历
     * @param root
     * @return
     */
    std::vector<int> levelorder(Node *root) {
        vector<int> res;
        if (root == nullptr) {
            return res;
        }

        deque<Node *> q;

        q.push_back(root);

        while (!q.empty()) {
            Node *node = q.front();
            vector<Node *> children = node->children;

            if (!children.empty()) {
                for (Node *child: children) {
                    q.push_back(child);
                }
            }
            res.push_back(node->val);
            q.pop_front();

        }

        return res;
    }
};


#endif //INC_408_ALGORITHM_NARY_TREE_PREORDER_TRAVERSAL_H
