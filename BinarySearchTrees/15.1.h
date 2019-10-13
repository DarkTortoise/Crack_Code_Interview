#ifndef BINARYSEARCHTREES_15_1_H
#define BINARYSEARCHTREES_15_1_H

#include <memory>
#include "BST.h"

template<class T>
bool Problem_15_1(const shared_ptr<BST<T>> root, int lower, int upper) {
    if (!root)
        return true;

    return root->value <= upper && root->value >= lower &&
           Problem_15_1(root->left, lower, root->value) &&
           Problem_15_1(root->right, root->value, upper);
}

#endif //BINARYSEARCHTREES_15_1_H
