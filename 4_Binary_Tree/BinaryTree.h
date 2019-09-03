#ifndef LINKEDLIST_BINARYTREE_H
#define LINKEDLIST_BINARYTREE_H

#include <vector>

using namespace std;

template<class T>
struct Node {
public:
    Node *left;
    Node *right;
    T value;

    explicit Node(T value) : value(value) {
        left = nullptr;
        right = nullptr;
    }

    void Preorder(Node<T> *ptr, vector<T> &orders) {
        if (ptr == nullptr)
            return;

        orders.push_back(ptr->value);
        Preorder(ptr->left, orders);
        Preorder(ptr->right, orders);
    }

    void Release(Node<T> *root) {
        if (root == nullptr)
            return;

        auto leftNode = root->left;
        auto rightNode = root->right;

        delete root;
        Release(leftNode);
        Release(rightNode);
    }
};

#endif //LINKEDLIST_BINARYTREE_H
