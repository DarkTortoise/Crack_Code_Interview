#ifndef BINARYSEARCHTREES_15_9_H
#define BINARYSEARCHTREES_15_9_H

#include <memory>
#include <vector>
#include "BST.h"

using namespace std;

template<class T>
shared_ptr<BST<T>> Problem_15_9(const vector<T> &arr, int start, int end) {
    if (start > end)
        return nullptr;

    int mid = start + (end - start) / 2;
    shared_ptr<BST<T>> node = make_shared<BST<T>>(arr[mid]);
    node->left = Problem_15_9<T>(arr, start, mid - 1);
    node->right = Problem_15_9(arr, mid + 1, end);

    return node;
}

#endif //BINARYSEARCHTREES_15_9_H
