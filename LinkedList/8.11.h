#ifndef LINKEDLIST_8_11_H
#define LINKEDLIST_8_11_H

#include "ListNode.h"

template<typename T>
bool IsPalindrome(ListNodePtr<T> &r) {
    ListNodePtr<T> slow = r, fast = r;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNodePtr<T> prev = slow, next = slow->next;

    while (slow) {
        slow->next = prev;
        prev = slow;
        slow = next;

        if (next)
            next = next->next;
    }

    ListNodePtr<T> head = r, tail = prev;

    while (head != prev) {
        if (head->value != prev->value)
            return false;
        head = head->next;
        prev = prev->next;
    }

    return true;
}

#endif //LINKEDLIST_8_11_H
