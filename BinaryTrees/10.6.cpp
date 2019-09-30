#include <vector>

using namespace std;

bool Inorder(const vector<int> &t, int node, int sum) {
    if (node >= t.size()) {
        return false;
    }

    auto value = sum - t[node];
    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    if (value == 0 and left >= t.size() and right >= t.size())
        return true;

    return Inorder(t, left, value) or Inorder(t, right, value);
}

bool Problem_10_6(const vector<int> &t, int sum) {
    return Inorder(t, 0, sum);
}