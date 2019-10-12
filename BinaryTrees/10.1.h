#include <vector>
#include <cstdlib>
#include <memory>

#include "BinaryTree.h"

using namespace std;

template<class T>
long PostTravel(const shared_ptr<Node<T>> root, long depth) {
    if (!root) {
        return depth - 1;
    }

    long leftDepth = PostTravel(root->left, depth + 1);
    long rightDepth = PostTravel(root->right, depth + 1);

    if (leftDepth == -1 or rightDepth == -1) {
        return -1;
    }

    if (abs(leftDepth - rightDepth) > 1) {
        return -1;
    }

    return max(leftDepth, rightDepth);
}

template<class T>
bool Problem_10_1(const shared_ptr<Node<T>> root) {
    return PostTravel(root, 0) != -1;
}