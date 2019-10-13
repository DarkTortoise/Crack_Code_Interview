#ifndef BINARY_TREE_10_5_H
#define BINARY_TREE_10_5_H

#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
void Problem_10_5(const shared_ptr<Node<T>> root, T &sum) {
    if (!root)
        return;

    if (!root->left && !root->right) {
        sum += root->value + root->parent->value * 2;
    } else {
        if (root->parent)
            root->value += root->parent->value * 2;
        Problem_10_5(root->left, sum);
        Problem_10_5(root->right, sum);
    }
}

#endif