#include <memory>
#include <stack>
#include <vector>
#include "BinaryTree.h"

using namespace std;

template<class T>
vector<T> Problem_10_7(const shared_ptr<Node<T>> root) {
    stack<shared_ptr<Node<T>>> s{};
    vector<T> result{};
    shared_ptr<Node<T>> ptr = root;

    while (!s.empty() || ptr) {
        if (ptr) {
            s.push(ptr);
            ptr = ptr->left;
        } else {
            ptr = s.top();
            s.pop();
            result.push_back(ptr->value);
            ptr = ptr->right;
        }
    }

    return result;
}