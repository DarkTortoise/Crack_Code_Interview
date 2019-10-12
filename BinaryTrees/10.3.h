#include <memory>
#include "BinaryTree.h"
#include <stack>

using namespace std;

template<class T>
shared_ptr<Node<T>> Problem_10_3(shared_ptr<Node<T>> root, shared_ptr<Node<T>> n1,
                                 shared_ptr<Node<T>> n2) {
    auto depth1 = GetDepth(root, n1, 0);
    auto depth2 = GetDepth(root, n2, 0);

    while (depth1 > depth2) {
        n1 = n1->parent;
        depth1--;
    }

    while (depth1 < depth2) {
        n2 = n2->parent;
        depth2--;
    }

    while (n1 != n2) {
        n1 = n1->parent;
        n2 = n2->parent;
    }

    return n1;
}

template<class T>
int GetDepth(const shared_ptr<Node<T>> root, const shared_ptr<Node<T>> node, int depth) {
    if (!root) {
        return -1;
    }

    if (root == node) {
        return depth;
    }

    auto leftDepth = GetDepth(root->left, node, depth + 1);
    auto rightDepth = GetDepth(root->right, node, depth + 1);

    if (leftDepth == -1 && rightDepth != -1) {
        return rightDepth;
    } else if (leftDepth != -1 && rightDepth == -1) {
        return leftDepth;
    }

    return -1;
}