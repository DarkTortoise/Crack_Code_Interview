#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
void PreOrder(const shared_ptr<Node<T>> root, int &sum) {
    if (!root)
        return;

    if (!root->left && !root->right) {
        sum += root->value + root->parent->value * 2;
    } else {
        if (root->parent)
            root->value += root->parent->value * 2;
        PreOrder(root->left, sum);
        PreOrder(root->right, sum);
    }
}

template<class T>
int Problem_10_5(const shared_ptr<Node<T>> root) {
    int sum = 0;
    PreOrder(root, sum);

    return sum;
}