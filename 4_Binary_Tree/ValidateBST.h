#ifndef BINARYTREE_VALIDATEBST_H
#define BINARYTREE_VALIDATEBST_H

#include "BinaryTree.h"

template<class T>
bool ValidateBST(Node<T> *root, int min, int max) {
    if (root->value < min or root->value > max)
        return false;

    if (root->left != nullptr and root->left->value > root->value)
        return false;

    if (root->right != nullptr and root->right->value < root->value)
        return false;

    if (root->left == nullptr and root->right != nullptr)
        return ValidateBST(root, root->value, max);
    else if (root->right == nullptr and root->left != nullptr)
        return ValidateBST(root, min, root->value);
    else if (root->left == nullptr and root->right == nullptr)
        return true;
    else
        return ValidateBST(root->left, min, root->value) and ValidateBST(root->right, root->value, max);
}

#endif //BINARYTREE_VALIDATEBST_H
