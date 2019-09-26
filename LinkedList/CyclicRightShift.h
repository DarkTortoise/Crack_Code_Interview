#ifndef LINKEDLIST_CYCLICRIGHTSHIFT_H
#define LINKEDLIST_CYCLICRIGHTSHIFT_H

#include "ListNode.h"

template<class T>
ListNodePtr<T> CyclicRightShift(ListNodePtr<T> r, int k) {
    ListNodePtr<T> kth = r, tail = r, ptr = r;

    int count = 0;
    int length = 0;

    while (ptr) {
        length++;
        ptr = ptr->next;
    }

    k = length - k - 1;
    ptr = r;

    while (ptr) {
        if (!ptr->next) {
            ptr->next = r;
            break;
        }

        if (count == k) {
            kth = ptr->next;
            auto prev = ptr;
            ptr = ptr->next;
            prev->next = nullptr;
        } else {
            ptr = ptr->next;
        }
        count++;
    }

    return kth;
}

#endif //LINKEDLIST_CYCLICRIGHTSHIFT_H
