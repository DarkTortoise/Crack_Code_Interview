#include <vector>

using namespace std;

int Problem_10_10(const vector<int> &t, int node) {
    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    if (right < t.size()) {
        node = right;
        while ((node * 2 + 1) < t.size()) {
            node = node * 2 + 1;
        }

        return node;
    }

    int parent = (node - 1) / 2;
    if (parent * 2 + 1 == node) {
        return parent;
    } else {
        while (parent >= 0 and (parent * 2 + 1) != node) {
            node = parent;
            parent = (node - 1) / 2;
        }

        return parent;
    }
}