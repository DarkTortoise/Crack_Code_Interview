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

    template<size_t SIZE>
    static ListNodePtr CreateListFromArray(array<T, SIZE> &arr);

    bool Equal(ListNodePtr &r1, ListNodePtr &r2);
};

template<class T>
ListNode<T>::ListNode(T value) {
    this->value = value;
    next = nullptr;
}

template<class T>
template<size_t SIZE>
shared_ptr<ListNode<T>> ListNode<T>::CreateListFromArray(array<T, SIZE> &arr) {
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

template<class T>
bool ListNode<T>::Equal(ListNode::ListNodePtr &r1, ListNode::ListNodePtr &r2) {
    while (r1 != nullptr and r2 != nullptr) {
        if (r1->value != r2->value) {
            return false;
        }

        r1 = r1->next;
        r2 = r2->next;
    }

    if (r1 == nullptr and r2 != nullptr)
        return false;

    return !(r1 != nullptr and r2 == nullptr);

}
