#include <vector>
#include <stack>
#include <memory>
#include "BinaryTree.h"

using namespace std;

template<class T>
vector<T> Problem_10_8(const shared_ptr<Node<T>> root) {
    stack<shared_ptr<Node<T>>> s{};
    vector<T> result{};
    shared_ptr<Node<T>> ptr = root;

    s.push(ptr);

    while (!s.empty()) {
        ptr = s.top();
        s.pop();

        if (ptr) {
            result.push_back(ptr->value);
            s.push(ptr->right);
            s.push(ptr->left);
        }
    }

    return result;
}