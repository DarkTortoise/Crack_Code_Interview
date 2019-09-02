#ifndef LINKEDLIST_LOOPDETECTION_H
#define LINKEDLIST_LOOPDETECTION_H

#include "LinkedList.h"

template<class T>
bool LoopDetection(LinkedList<T> &L) {
    auto index1 = L.head, index2 = L.head;

    while (index1 == L.tail || index2 == L.tail) {
        if (index1 != index2) {
            index1 = index1->next;
            index2 = index2->next->next;
        } else {
            return true;
        }
    }
}

#endif //LINKEDLIST_LOOPDETECTION_H
