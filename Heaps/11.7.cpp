#include <queue>
#include <vector>
#include <functional>
#include <ctime>
#include <chrono>

using namespace std;

typedef struct Stack {
    int value;
    size_t time;
} Stack;

vector<int> Problem_11_7(const vector<int> &arr) {
    auto startTime = chrono::system_clock::now();
    priority_queue<Stack, vector<Stack>, function<bool(Stack, Stack)>> q(
            [](const Stack &s1, const Stack &s2) {
                return s1.time > s2.time;
            });

    for (auto value: arr) {
        auto endTime = chrono::system_clock::now();
        size_t ns = chrono::duration_cast<chrono::nanoseconds>(endTime - startTime).count();
        Stack s{value, ns};
        q.push(s);
    }

    vector<int> result;

    while (!q.empty()) {
        result.push_back(q.top().value);
        q.pop();
    }

    return result;
}