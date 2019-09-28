#include <vector>
#include <cmath>

using namespace std;

void PostTravel(const vector<int> &tree, vector<int> &depth, size_t node, size_t height) {
    if (node >= tree.size())
        return;

    if (tree[node] == -1) {
        depth[node] = 0;
        return;
    }

    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    PostTravel(tree, depth, left, height + 1);
    PostTravel(tree, depth, right, height + 1);

    if (left >= tree.size() and right >= tree.size()) {
        depth[node] = height;
    } else if (depth[left] == -1 or depth[right] == -1) {
        depth[node] = -1;
    } else if (abs(long(depth[left] - depth[right])) > 1) {
        depth[node] = -1;
    } else {
        depth[node] = max(depth[left], depth[right]);
    }
}

bool Problem_10_1(const vector<int> &tree) {
    vector<int> depth(tree.size(), 0);
    PostTravel(tree, depth, 0, 0);

    return depth[0] != -1;
}