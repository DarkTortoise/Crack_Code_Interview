#ifndef LINKEDLIST_REMOVEKTHLASTELEMENT_H
#define LINKEDLIST_REMOVEKTHLASTELEMENT_H

#include "ListNode.h"

template<class T>
ListNodePtr<T> RemoveKthLastElement(ListNodePtr<T> r, int k) {
    auto ptr1 = r;
    ListNodePtr<T> ptr2 = nullptr;

    for (int index = 0; index < k; index++) {
        ptr2 = ptr2->next;
    }

    while (ptr2 != nullptr) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return ptr1;
}

#endif //LINKEDLIST_REMOVEKTHLASTELEMENT_H
