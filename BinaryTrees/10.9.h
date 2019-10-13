#include <vector>
#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
void Problem_10_9(const shared_ptr<Node<T>> root, int k, shared_ptr<Node<T>> &ptr) {
    if (root->left->extra == k - 1) {
        ptr = root;
    } else if (k - 1 > root->left->extra) {
        Problem_10_9(root->right, k - root->left->extra + 1, ptr);
    } else {
        Problem_10_9(root->left, k, ptr);
    }
}