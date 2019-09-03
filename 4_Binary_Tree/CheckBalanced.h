#ifndef BINARYTREE_CHECKBALANCED_H
#define BINARYTREE_CHECKBALANCED_H

#include "BinaryTree.h"
#include <cmath>

using namespace std;

template<class T>
unsigned int TreeHeight(Node<T> *root, unsigned int height) {
    if (root == nullptr)
        return height - 1;

    return max(TreeHeight(root->left, height + 1), TreeHeight(root->right, height + 1));
}

template<class T>
bool CheckBalanced(Node<T> *root) {
    return abs(TreeHeight(root->left, 0) - TreeHeight(root->right, 0) <= 1);
}

#endif //BINARYTREE_CHECKBALANCED_H
