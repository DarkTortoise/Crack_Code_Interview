#include <vector>
#include <queue>

using namespace std;

vector<int> Problem_11_1(const vector<vector<int>> &arr) {
    vector<vector<int>::const_iterator> iters;
    priority_queue<int, vector<int>, greater<int>> q;
    vector<int> result;
    priority_queue<int, vector<int>, greater<int>> s;

    for (auto &v: arr) {
        iters.push_back(v.cbegin());
    }

    for (auto &iter: iters) {
        q.push(*iter);
        iter++;
    }

    while (!q.empty()) {
        for (size_t index = 0; index < iters.size(); index++) {
            auto &iter = iters[index];
            if (iter != arr[index].cend()) {
                s.push(*iter++);
            }
        }

        if (s.empty()) {
            while (!q.empty()) {
                result.push_back(q.top());
                q.pop();
            }
        }

        while (!s.empty()) {
            result.push_back(q.top());
            q.pop();

            q.push(s.top());
            s.pop();
        }
    }

    return result;
}