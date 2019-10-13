#ifndef BINARY_TREE_10_6_H
#define BINARY_TREE_10_6_H

#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
bool Problem_10_6(const shared_ptr<Node<T>> root, T value) {
    if (!root) {
        return false;
    }

    if (value - root->value == 0) {
        return true;
    }

    return Problem_10_6(root->left, value - root->value) || Problem_10_6(root->right, value - root->value);
}

#endif