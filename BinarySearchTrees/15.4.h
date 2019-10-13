#ifndef BINARYSEARCHTREES_15_4_H
#define BINARYSEARCHTREES_15_4_H

#include <memory>
#include "BST.h"

using namespace std;

template<class T>
shared_ptr<BST<T>> Problem_15_4(const shared_ptr<BST<T>> root, const shared_ptr<BST<T>> n1,
                                const shared_ptr<BST<T>> n2) {
    auto ptr = root;
    while (ptr) {
        if (ptr->value == n1->value || ptr->value == n2->value) {
            return ptr;
        } else if (ptr->value > n1->value && ptr->value < n2->value) {
            return ptr;
        } else if (ptr->value > n1->value && ptr->value > n2->value) {
            ptr = ptr->left;
        } else if (ptr->value < n1->value && ptr->value < n2->value) {
            ptr = ptr->right;
        }
    }
}

#endif //BINARYSEARCHTREES_15_4_H
