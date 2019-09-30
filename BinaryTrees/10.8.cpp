#include <vector>
#include <stack>

using namespace std;

vector<int> Problem_10_8(const vector<int> &t) {
    vector<int> result;
    stack<int> s;
    int node = 0;
    s.push(node);

    while (!s.empty()) {
        node = s.top();
        s.pop();

        if (node < t.size() and t[node] != -1) {
            result.push_back(t[node]);
            s.push(node * 2 + 2);
            s.push(node * 2 + 1);
        }
    }

    return result;
}