#include "LinkedList.h"

template<class T>
Node<T> *Intersection(LinkedList<T> &L1, LinkedList<T> &L2) {
    Node<T> *ptr1 = L1.head;
    Node<T> *ptr2 = L2.head;

    if (L1.tail != L2.tail)
        return nullptr;

    while (ptr1 != ptr2 || ptr1 != L1.tail || ptr2 != L2.tail) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return ptr1;
}