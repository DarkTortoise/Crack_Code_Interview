#include <vector>

using namespace std;

void Inorder(const vector<int> &t, int node, vector<int> &orders) {
    if (node >= t.size()) {
        return;
    }

    Inorder(t, node * 2 + 1, orders);
    orders.push_back(node);
    Inorder(t, node * 2 + 2, orders);
}

int Problem_10_9_O_N(const vector<int> &t, int kth) {
    vector<int> orders;
    Inorder(t, 0, orders);
    return orders[kth - 1];
}