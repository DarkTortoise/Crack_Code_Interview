#ifndef BINARYSEARCHTREES_15_3_H
#define BINARYSEARCHTREES_15_3_H

#include <memory>
#include <vector>
#include "BST.h"

template<class T>
void Problem_15_3(const shared_ptr<BST<T>> root, int k, vector<T> &result) {
    if (!root)
        return;

    Problem_15_3(root->right, k, result);
    if (result.size() < k) {
        result.push_back(root->value);
        Problem_15_3(root->left, k, result);
    }
}

#endif //BINARYSEARCHTREES_15_3_H
