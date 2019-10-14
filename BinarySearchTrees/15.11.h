#ifndef BINARYSEARCHTREES_15_11_H
#define BINARYSEARCHTREES_15_11_H

#include <memory>
#include "BST.h"

using namespace std;

template<class T>
bool SearchTarget(const shared_ptr<BST<T>> from, const shared_ptr<BST<T>> to) {
    auto ptr = from;

    while (ptr) {
        if (to->value < ptr->value) {
            ptr = ptr->left;
        } else if (to->value > ptr->value) {
            ptr = ptr->right;
        } else if (ptr->value == to->value) {
            return true;
        }
    }

    return false;
}

template<class T>
bool Problem_15_11(const shared_ptr<BST<T>> n1, const shared_ptr<BST<T>> n2, const shared_ptr<BST<T>> m) {
    auto ptr1 = n1, ptr2 = n2;
    bool isPtr1 = false;

    while (ptr1 && ptr2) {
        if (m->value < ptr1->value) {
            ptr1 = ptr1->left;
        } else if (m->value > ptr1->value) {
            ptr1 = ptr1->right;
        } else if (m->value == ptr1->value) {
            isPtr1 = true;
            break;
        }

        if (m->value < ptr2->value) {
            ptr2 = ptr2->left;
        } else if (m->value > ptr2->value) {
            ptr2 = ptr2->right;
        } else if (m->value == ptr2->value) {
            break;
        }
    }

    if (isPtr1) {
        ptr1 = n1;
        ptr2 = n2;

        return SearchTarget(n1, m) && SearchTarget(m, n2);
    } else {
        ptr1 = n1;
        ptr2 = n2;

        return SearchTarget(n2, m) && SearchTarget(m, n1);
    }
}

#endif //BINARYSEARCHTREES_15_11_H
