#pragma once

#include "ListNode.h"

template<class T>
shared_ptr<ListNode<T>> ReverseSubList(shared_ptr<ListNode<T>> r, int start, int end) {
    shared_ptr<ListNode<T>> ptr = r;

    int index = 0;

    while (index != start - 1) {
        ptr = ptr->next;
        index++;
    }

    ptr = ptr->next;

    shared_ptr<ListNode<T>> prev = ptr, next = ptr->next;

    while (ptr != nullptr) {
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }

    return r;
}

template<class T>
shared_ptr<ListNode<T>> ReverseSinglyList(shared_ptr<ListNode<T>> root) {
    shared_ptr<ListNode<T>> prev = nullptr, ptr = root, next = ptr->next;

    while (ptr != nullptr) {
        ptr->next = prev;
        prev = ptr;
        ptr = next;
        if (next != nullptr)
            next = next->next;
    }

    return prev;
}