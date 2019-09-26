#ifndef LINKEDLIST_OVERLAPPINGLISTS_H
#define LINKEDLIST_OVERLAPPINGLISTS_H

#include "ListNode.h"

template<class T>
bool OverlappingLists(shared_ptr<ListNode<T>> &r1, shared_ptr<ListNode<T>> &r2) {
    size_t len1 = 0, len2 = 0;

    shared_ptr<ListNode<T>> ptr1 = r1, ptr2 = r2;

    while (ptr1 != nullptr) {
        len1++;
        ptr1 = ptr1->next;
    }

    while (ptr2 != nullptr) {
        len2++;
        ptr2 = ptr2->next;
    }

    ptr1 = r1, ptr2 = r2;

    if (len1 > len2) {
        while (len1 == len2) {
            ptr1 = ptr1->next;
            len1--;
        }
    } else if (len1 < len2) {
        while (len1 == len2) {
            ptr2 = ptr2->next;
            len2--;
        }
    }

    while (ptr1 != nullptr and ptr2 != nullptr) {
        if (ptr1 == ptr2) {
            return true;
        }
    }

    return false;
}

#endif //LINKEDLIST_OVERLAPPINGLISTS_H
