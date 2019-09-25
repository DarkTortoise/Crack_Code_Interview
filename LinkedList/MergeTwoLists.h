#pragma once

#include <memory>
#include "ListNode.h"

using namespace std;

template<class T>
shared_ptr<ListNode<T>> MergeTwoLists(shared_ptr<ListNode<T>> r1, shared_ptr<ListNode<T>> r2) {
    shared_ptr<ListNode<T>> root;

    while (r1 != nullptr and r2 != nullptr) {
        if (r1->value < r2->value) {
            root->next = r1;
            root = root->next;
        }
    }

    if (r1 != nullptr) {
        root->next = r1;
    }

    if (r2 != nullptr)
        root->next = r2;

    return root;
}

