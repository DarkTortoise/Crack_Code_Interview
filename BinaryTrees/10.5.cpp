#include <vector>
#include <cmath>

using namespace std;

pair<int, int> PostTravel(const vector<int> &t, int node) {
    if (node >= t.size())
        return make_pair(-1, -1);

    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    if (left >= t.size() and right >= t.size()) {
        int sum = t[node] * int(pow(2, 0));
        return make_pair(sum, 1);
    } else if (left < t.size() and right < t.size()) {
        auto leftResult = PostTravel(t, left);
        auto rightResult = PostTravel(t, right);
        int sum = t[node] * 2 * int(pow(2, leftResult.second));

        return make_pair(sum + leftResult.first + rightResult.first, leftResult.second + 1);
    } else if (left < t.size() and right >= t.size()) {
        auto leftResult = PostTravel(t, left);
        int sum = t[node] * int(pow(2, leftResult.second));

        return make_pair(sum + leftResult.first, leftResult.second + 1);
    } else {
        auto rightResult = PostTravel(t, right);
        int sum = t[node] * int(pow(2, rightResult.second));

        return make_pair(sum + rightResult.first, rightResult.second + 1);
    }
}

int Problem_10_5(const vector<int> &t) {
    return PostTravel(t, 0).first;
}