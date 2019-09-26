#ifndef LINKEDLIST_HASCYCLICITY_H
#define LINKEDLIST_HASCYCLICITY_H

#include "ListNode.h"

template<class T>
bool HasCyclicity(shared_ptr<ListNode<T>> r) {
    shared_ptr<ListNode<T>> p1 = r, p2 = r;

    while (p1 != p2) {
        if (p1 == nullptr or p2 == nullptr)
            return false;

        p1 = p1->next;

        if (p2->next != nullptr)
            p2 = p2->next->next;
    }

    return true;
}

#endif //LINKEDLIST_HASCYCLICITY_H
