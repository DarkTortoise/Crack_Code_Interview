#pragma once

#include <memory>

using namespace std;

template<class T>
class ListNode {
    typedef shared_ptr<ListNode<T>> ListNodePtr;
public:
    T value;
    shared_ptr<ListNode<T>> next;

    explicit ListNode(T value);

    static ListNodePtr CreateListFromArray(const initializer_list<T> &arr);

    template<class A>
    friend bool operator==(const ListNodePtr &r1, const ListNodePtr &r2);
};

template<class T>
using ListNodePtr = shared_ptr<ListNode<T>>;

template<class A>
bool operator==(const ListNodePtr<A> &r1, const ListNodePtr<A> &r2) {
    auto ptr1 = r1;
    auto ptr2 = r2;

    while (ptr1 != nullptr and ptr2 != nullptr) {
        if (ptr1->value != ptr2->value)
            return false;

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if (ptr1 == nullptr and ptr2 != nullptr)
        return false;

    return !(ptr1 != nullptr and ptr2 != nullptr);
}

template<class T>
ListNode<T>::ListNode(T value) {
    this->value = value;
    next = nullptr;
}

template<class T>
shared_ptr<ListNode<T>> ListNode<T>::CreateListFromArray(const initializer_list<T> &arr) {
    ListNodePtr root = nullptr;
    ListNodePtr ptr = root;

    for (auto &a: arr) {
        auto node = make_shared<ListNode>(a);
        node->next = nullptr;
        if (ptr == nullptr) {
            root = node;
            ptr = root;
        } else {
            ptr->next = node;
            ptr = node;
        }
    }

    return root;
}