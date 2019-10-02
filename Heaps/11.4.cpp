#include <vector>
#include <queue>

using namespace std;

vector<int> Problem_11_4(const vector<int> &arr, int k) {
    priority_queue<int> q;
    vector<int> result;

    for (int index = 0; index < k; index++) {
        q.push(arr[index]);
    }

    for (auto iter = begin(arr); iter != end(arr); iter++) {
        if (*iter < q.top()) {
            q.pop();
            q.push(*iter);
        }
    }

    while (!q.empty()) {
        result.push_back(q.top());
        q.pop();
    }

    return result;
}