#include <vector>
#include <algorithm>

using namespace std;

void GetSubset(vector<int> &arr, size_t ptr, vector<int> &subset, vector<vector<int>> &result) {
    if (ptr >= arr.size()) {
        result.push_back(subset);
        return;
    }

    if (find(subset.begin(), subset.end(), *(arr.begin() + ptr)) == subset.end()) {
        subset.push_back(*(arr.begin() + ptr));
        GetSubset(arr, ptr + 1, subset, result);
        subset.pop_back();
        GetSubset(arr, ptr + 1, subset, result);
    } else {
        GetSubset(arr, ptr + 1, subset, result);
    }
}

vector<vector<int>> Problem_16_4(vector<int> &arr) {
    vector<vector<int>> result{};
    vector<int> subset{};
    GetSubset(arr, 0, subset, result);
    return result;
}