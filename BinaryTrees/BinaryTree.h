#ifndef BINARYTREES_BINARYTREE_H
#define BINARYTREES_BINARYTREE_H

#include <vector>
#include <queue>

using namespace std;

template<class T>
struct Node {
public:
    T value;
    shared_ptr<Node<T>> left, right;

    explicit Node(T value) : value(value) {
        left = nullptr;
        right = nullptr;
    }
};

template<class T>
vector<T> PrintTree(const shared_ptr<Node<T>> root) {
    vector<T> vec{};
    queue<shared_ptr<Node<int>>> q{};

    q.push(root);

    while (!q.empty()) {
        auto node = q.front();
        vec.push_back(node->value);
        q.pop();

        if (node->left)
            q.push(node->left);

        if (node->right)
            q.push(node->right);
    }

    return vec;
}

#endif //BINARYTREES_BINARYTREE_H
