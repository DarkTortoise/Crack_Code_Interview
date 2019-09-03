#ifndef BINARYTREE_VALIDATEBST_H
#define BINARYTREE_VALIDATEBST_H

#include "BinaryTree.h"

template<class T>
bool ValidateBST(Node<T> *root) {
    if (root->left != nullptr and root->value < root->left->value)
        return false;

    if (root->right != nullptr and root->value > root->right->value)
        return false;

    if (root->left == nullptr and root->right != nullptr)
        return ValidateBST(root->right);
    else if (root->right == nullptr and root->left != nullptr)
        return ValidateBST(root->left);
    else if (root->left == nullptr and root->right == nullptr)
        return true;
    else
        return ValidateBST(root->left) and ValidateBST(root->right);
}

#endif //BINARYTREE_VALIDATEBST_H
