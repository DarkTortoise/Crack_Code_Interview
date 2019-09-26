#ifndef LINKEDLIST_REMOVEDUPLICATES_H
#define LINKEDLIST_REMOVEDUPLICATES_H

#include "ListNode.h"

template<class T>
ListNodePtr<T> RemoveDuplicates(ListNodePtr<T> r) {
    ListNodePtr<T> ptr1 = r, ptr2 = r->next;

    if (!ptr2)
        return r;

    while (ptr2) {
        if (ptr1->value == ptr2->value) {
            ptr2 = ptr2->next;
        } else {
            ptr1->next = ptr2;
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
    }

    return r;
}

template<class T>
ListNodePtr<T> RemoveK(ListNodePtr<T> r, int m) {
    ListNodePtr<T> ptr1 = r, ptr2 = r->next;

    if (!ptr2)
        return r;

    int count = 1;

    while (ptr2) {
        if (ptr1->value == ptr2->value) {
            count++;
            ptr2 = ptr2->next;
        } else {
            if (count >= m) {
                ptr1->next = ptr2;
            }

            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
    }

    return r;
}

#endif //LINKEDLIST_REMOVEDUPLICATES_H
