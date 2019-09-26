#ifndef LINKEDLIST_CYCLICRIGHTSHIFT_H
#define LINKEDLIST_CYCLICRIGHTSHIFT_H

#include "ListNode.h"

template<class T>
ListNodePtr<T> CyclicRightShift(ListNodePtr<T> r, int k) {
    ListNodePtr<T> kth = r, tail = r, ptr = r;

    int count = 0;

    while (ptr) {
        if (count == k) {
            kth = ptr->next;
        }

        auto prev = ptr;
        ptr = ptr->next;
        prev->next = nullptr;
        count++;
    }

}

#endif //LINKEDLIST_CYCLICRIGHTSHIFT_H
