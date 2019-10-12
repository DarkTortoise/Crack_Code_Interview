#ifndef BINARYTREES_BINARYTREE_H
#define BINARYTREES_BINARYTREE_H

#include <vector>
#include <queue>

using namespace std;

template<class T>
struct Node {
public:
    T value;
    shared_ptr<Node<T>> left, right, parent;

    explicit Node(T value) : value(value) {
        left = nullptr;
        right = nullptr;
    }

    shared_ptr<Node<T>> &GetLeft() const {
        return this->left;
    }

    const shared_ptr<Node<T>> &GetRight() const {
        return right;
    }

    void SetLeft(const shared_ptr<Node<T>> node, const shared_ptr<Node<T>> par) {
        this->left = node;
        node->parent = par;
    }

    void SetRight(const shared_ptr<Node<T>> node, const shared_ptr<Node<T>> par) {
        this->right = node;
        node->parent = par;
    }
};

#endif //BINARYTREES_BINARYTREE_H
