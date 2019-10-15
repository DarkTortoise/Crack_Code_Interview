#ifndef BINARYSEARCHTREES_15_12_H
#define BINARYSEARCHTREES_15_12_H

#include <memory>
#include <vector>
#include "BST.h"

template<class T>
void Problem_15_12(const shared_ptr<BST<T>> root, int start, int end, vector<T> &result) {
    if (!root)
        return;

    if (root->value >= start && root->value <= end) {
        result.push_back(root->value);
        Problem_15_12(root->left, start, root->value, result);
        Problem_15_12(root->right, root->value, end, result);
    } else if (root->value < start) {
        Problem_15_12(root->right, start, end, result);
    } else if (root->value > end) {
        Problem_15_12(root->left, start, end, result);
    }
}


#endif //BINARYSEARCHTREES_15_12_H
