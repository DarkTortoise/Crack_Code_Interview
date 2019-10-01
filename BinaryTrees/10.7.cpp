#include <vector>
#include <stack>

using namespace std;

vector<int> Problem_10_7(const vector<int> &t) {
    int node = 0;
    vector<int> result;
    stack<int> s;

    while (!s.empty() or (node < t.size() and t[node] != -1)) {
        if (node < t.size() and t[node] != -1) {
            s.push(node);
            node = node * 2 + 1;
        } else {
            node = s.top();
            s.pop();
            result.push_back(t[node]);
            node = node * 2 + 2;
        }
    }

    return result;
}