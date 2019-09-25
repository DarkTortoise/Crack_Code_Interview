#pragma once

#include <memory>
#include "ListNode.h"

using namespace std;

template<class T>
shared_ptr<ListNode<T>> MergeTwoLists(shared_ptr<ListNode<T>> r1, shared_ptr<ListNode<T>> r2) {
    shared_ptr<ListNode<T>> root = nullptr;
    shared_ptr<ListNode<T>> ptr = root;

    while (r1 != nullptr and r2 != nullptr) {
        if (r1->value < r2->value) {
            if (root == nullptr) {
                root = r1;
                ptr = root;
            } else {
                ptr->next = r1;
                ptr = ptr->next;
            }

            r1 = r1->next;
        } else {
            if (root == nullptr) {
                root = r2;
                ptr = root;
            } else {
                ptr->next = r2;
                ptr = ptr->next;
            }

            r2 = r2->next;
        }
    }

    if (r1 != nullptr) {
        ptr->next = r1;
    }

    if (r2 != nullptr)
        ptr->next = r2;

    return root;
}

