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

int Variant2(const vector<int> &tree, size_t node, int height, int k, int &theNode) {
    if (node >= tree.size() or tree[node] == -1)
        return height - 1;

    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    auto leftDepth = PostTravel(tree, left, height + 1);
    auto rightDepth = PostTravel(tree, right, height + 1);
    auto diff = abs(long(leftDepth - rightDepth));

    if (leftDepth == -1) {
        theNode = left;
        return -1;
    } else if (rightDepth == -1) {
        theNode = right;
        return -1;
    } else if (diff > k) {
        theNode = node;
        return -1;
    } else {
        return max(leftDepth, rightDepth);
    }
}

bool Problem_10_1(const vector<int> &tree) {
    return PostTravel(tree, 0, 0) != -1;
}

int Problem_10_1_Variant_2(const vector<int> &tree, int k) {
    int node = -1;
    Variant2(tree, 0, 0, k, node);
    return node;
}