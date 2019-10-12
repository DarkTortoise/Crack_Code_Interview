#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
bool IsSymmetry(const shared_ptr<Node<T>> t1, const shared_ptr<Node<T>> t2) {
    if (t1 == nullptr and t2 == nullptr) {
        return true;
    } else {
        return t1->value == t2->value and IsSymmetry<int>(t1->left, t2->right)
               and IsSymmetry<int>(t1->right, t2->left);
    }
}

template<class T>
bool Problem_10_2(const shared_ptr<Node<T>> root) {
    return IsSymmetry(root->left, root->right);
}