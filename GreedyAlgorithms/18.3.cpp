#include <vector>
#include <algorithm>

using namespace std;

vector<int> Problem_18_3(vector<pair<int, int>> &intervals) {
    sort(intervals.begin(), intervals.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.second < b.second;
    });

    vector<int> result;

    int rightValue = -1;
    for (auto &interval : intervals) {
        if (rightValue < interval.first || rightValue > interval.second) {
            rightValue = interval.second;
            result.push_back(rightValue);
        }
    }

    return result;
}