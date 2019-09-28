#include <vector>
#include <cmath>

using namespace std;

int PostTravel(const vector<int> &tree, size_t node, int height) {
    if (node >= tree.size() or tree[node] == -1)
        return height - 1;

    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    auto leftDepth = PostTravel(tree, left, height + 1);
    auto rightDepth = PostTravel(tree, right, height + 1);
    auto diff = abs(long(leftDepth - rightDepth));

    if (leftDepth == -1 or rightDepth == -1)
        return -1;

    if (diff > 1)
        return -1;
    else {
        return max(leftDepth, rightDepth);
    }
}

bool Problem_10_1(const vector<int> &tree) {
    return PostTravel(tree, 0, 0) != -1;
}