#ifndef BINARYTREE_MINIMALTREE_H
#define BINARYTREE_MINIMALTREE_H

#include <cstddef>
#include "BinaryTree.h"

template<class T>
Node<T> *MinimalTree(int arr[], int start, int end) {
    if (end < start) {
        return nullptr;
    }

    size_t mid = int((start + end) / 2);
    auto midNode = new Node<T>(arr[mid]);
    midNode->left = MinimalTree<T>(arr, start, mid - 1);
    midNode->right = MinimalTree<T>(arr, mid + 1, end);

    return midNode;
}

#endif //BINARYTREE_MINIMALTREE_H
