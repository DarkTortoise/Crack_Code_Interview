#include <vector>

using namespace std;

void GetSubset(vector<int> &subset, size_t ptr,
               int n, int k, vector<vector<int>> &result) {
    if (subset.size() == k) {
        result.push_back(subset);
        return;
    }

    for (size_t index = ptr; index < n && k - subset.size() <= n - index + 1; index++) {
        subset.emplace_back(index);
        GetSubset(subset, index + 1, n, k, result);
        subset.pop_back();
    }
}

vector<vector<int>> Problem_16_5(int n, int k) {
    vector<int> arr{};
    vector<vector<int>> result{};
    vector<int> subset{};
    GetSubset(subset, 0, n, k, result);
    return result;
}