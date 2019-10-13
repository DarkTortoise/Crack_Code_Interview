#ifndef BINARYSEARCHTREES_15_2_H
#define BINARYSEARCHTREES_15_2_H

#include <memory>
#include "BST.h"

using namespace std;

template<class T>
T Problem_15_2(const shared_ptr<BST<T>> root, T value) {
    /*
     * Find the node
     * */
    auto ptr = root;
    while (ptr->value != value) {
        if (value > ptr->value) {
            ptr = ptr->right;
        } else if (value < ptr->value) {
            ptr = ptr->left;
        }
    }

    if (ptr->right)
        ptr = ptr->right;

    while (ptr->left) {
        ptr = ptr->left;
    }

    return ptr->value;
}

#endif //BINARYSEARCHTREES_15_2_H
