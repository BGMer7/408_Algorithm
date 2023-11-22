//
// Created by Gatsby on 2023/11/22.
//

#ifndef INC_408_ALGORITHM_SOLUTION_H
#define INC_408_ALGORITHM_SOLUTION_H

#include<queue>
using namespace std;

typedef int elem;
typedef struct tree_node{
    elem weight;
    tree_node *left;
    tree_node *right;
}tree_node;


class solution {
public:
    int culWpl(tree_node* root) {
        // 创建一个队列用于bfs
        queue<tree_node*> queue;
        // 初始化wpl为0
        int wpl = 0;
        // 初始化树得当前深度为0
        int depth = 0;

        // 假设root不为空，直接进入
        queue.push(root);
        while (!queue.empty()) {
            // 层序遍历必须要先确定下来当前的一层的大小
            int size = queue.size();
            while (size--) {
                // 将队列的第一个节点取出
                tree_node* node = queue.front();
                int weight = node->weight;
                // 只有叶子节点要计算WPL 很关键
                if(node->right == nullptr && node->left == nullptr) {
                    // wpl加上这个节点的路径权重
                    wpl+=weight*weight;
                }
                // 如果左孩子非空，则放入队列等待下一层遍历
                if (node->left!= nullptr) {
                    queue.push(node->left);
                }
                // 如果右孩子非空，则放入队列等待下一层遍历
                if (node->right != nullptr) {
                    queue.push(node->right);
                }

                // 该节点已经计算完毕，节点出队
                queue.pop();
            }

            depth++;
        }

        return wpl;
    }

};


#endif //INC_408_ALGORITHM_SOLUTION_H
