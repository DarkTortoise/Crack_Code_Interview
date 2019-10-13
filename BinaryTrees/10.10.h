#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
shared_ptr<Node<T>> Problem_10_10(const shared_ptr<Node<T>> root, const shared_ptr<Node<T>> node) {
    if (node->parent->left == node) {
        if (node->right) {
            auto ptr = node->right;
            while (ptr) {
                ptr = ptr->left;
            }
            return ptr;
        } else {
            return node->parent;
        }
    } else if (node->parent->right == node) {
        if (node->right) {
            auto ptr = node->right;
            while (ptr) {
                ptr = ptr->left;
            }

            return ptr;
        } else {
            auto ptr = node->parent;
            while (ptr->parent->left == ptr) {
                if (ptr == root)
                    return nullptr;
                ptr = ptr->parent;
            }

            return ptr->parent;
        }
    }
}