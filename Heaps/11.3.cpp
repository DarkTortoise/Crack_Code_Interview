#include <queue>
#include <vector>

using namespace std;

vector<int> Problem_11_3(const vector<int> &arr, int k) {
    priority_queue<int, vector<int>, greater<>> q;
    vector<int> result;

    for (auto iter = begin(arr); iter != next(begin(arr), k); iter++) {
        q.push(*iter);
    }

    for (auto iter = next(begin(arr), k); iter != end(arr); iter++) {
        result.push_back(q.top());
        q.pop();
        q.push(*iter);
    }

    while (!q.empty()) {
        result.push_back(q.top());
        q.pop();
    }

    return result;
}