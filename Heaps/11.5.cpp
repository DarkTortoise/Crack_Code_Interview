#include <queue>
#include <vector>

using namespace std;

vector<double> Problem_11_5(const vector<int> &arr) {
    priority_queue<int, vector<int>, greater<>> minHeap;
    priority_queue<int> maxHeap;

    vector<double> result;

    for (auto val: arr) {
        if (minHeap.empty()) {
            minHeap.push(val);
        } else if (val >= minHeap.top()) {
            minHeap.push(val);
        } else if (val < minHeap.top()) {
            maxHeap.push(val);
        }

        if (minHeap.size() > maxHeap.size() + 1) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        } else if (maxHeap.size() > minHeap.size()) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

        if (minHeap.empty() and !maxHeap.empty()) {
            result.push_back(maxHeap.top());
        } else if (!minHeap.empty() and maxHeap.empty()) {
            result.push_back(minHeap.top());
        } else if (minHeap.size() == maxHeap.size()) {
            float m = (minHeap.top() + maxHeap.top()) / 2.0;
            result.push_back(m);
        } else {
            result.push_back(minHeap.top());
        }
    }

    return result;
}