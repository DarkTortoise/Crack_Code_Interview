#include <vector>
#include <queue>

using namespace std;

vector<int> Problem_10_14(const vector<int> &t) {
    queue<int> q;
    int node = 0;
    q.push(node);
    vector<int> result;

    while (!q.empty()) {
        node = q.front();
        q.pop();

        auto left = node * 2 + 1;
        auto right = node * 2 + 2;

        if ((left >= t.size() or t[left] == -1) and (right >= t.size() or t[right] == -1)) {
            result.push_back(node);
        }

        if (left < t.size() and t[left] != -1) {
            q.push(left);
        }

        if (right < t.size() and t[right] != -1) {
            q.push(right);
        }
    }

    return result;
}