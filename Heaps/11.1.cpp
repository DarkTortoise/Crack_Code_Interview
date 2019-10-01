#include <vector>
#include <queue>
#include <stack>

using namespace std;

vector<int> Problem_11_1(const vector<int> &v1, const vector<int> &v2, const vector<int> &v3) {
    auto iter1 = begin(v1);
    auto iter2 = begin(v2);
    auto iter3 = begin(v3);
    priority_queue<int, vector<int>, greater<>> q;
    vector<int> result;
    stack<int> s;

    q.push(*iter1);
    q.push(*iter2);
    q.push(*iter3);

    iter1++, iter2++, iter3++;
    int index = 0;

    while (!q.empty()) {
        if (iter1 == end(v1) and iter2 == end(v2) and iter3 == end(v3)) {
            while (!q.empty()) {
                result.push_back(q.top());
                q.pop();
            }

            break;
        }

        result.push_back(q.top());
        q.pop();

        if (index == 0) {
            q.push(*iter1);
            iter1++;
            index++;
        } else if (index == 1) {
            q.push(*iter2);
            iter2++;
            index++;
        } else if (index == 2) {
            q.push(*iter3);
            iter3++;
            index = 0;
        }
    }

    return result;
}