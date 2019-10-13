#ifndef BINARYSEARCHTREES_BST_H
#define BINARYSEARCHTREES_BST_H

#include <memory>

using namespace std;

template<class T>
struct BST {
    T value;
    shared_ptr<BST<T>> left, right;

    explicit BST(T value) : value(value) {
        left = nullptr;
        right = nullptr;
    }
};

#endif //BINARYSEARCHTREES_BST_H
