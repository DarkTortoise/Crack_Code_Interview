#include <vector>
#include <algorithm>

using namespace std;

void GetPerm(vector<int> &arr, size_t index, vector<vector<int>> &result) {
    if (index >= arr.size()) {
        result.push_back(arr);
        return;
    }

    for (size_t i = index; i < arr.size(); i++) {
        swap(*(arr.begin() + index), *(arr.begin() + i));
        GetPerm(arr, index + 1, result);
        swap(*(arr.begin() + index), *(arr.begin() + i));
    }
}

void Problem_16_3(const vector<int> &arr, vector<vector<int>> &result) {
    int index = 0;
    vector<int> perm(arr);
    GetPerm(perm, index, result);
}

void GetPermVariant(vector<int> &arr, size_t index, vector<vector<int>> &result) {
    if (index >= arr.size()) {
        result.push_back(arr);
        return;
    }

    for (size_t i = index; i < arr.size(); i++) {
        if (arr[*(arr.begin() + index)] != arr[*(arr.begin() + i)])
            continue;

        swap(*(arr.begin() + index), *(arr.begin() + i));
        GetPerm(arr, index + 1, result);
        swap(*(arr.begin() + index), *(arr.begin() + i));
    }
}

void Problem_16_3_Variant(const vector<int> &arr, vector<vector<int>> &result) {
    int index = 0;
    vector<int> perm(arr);
    GetPermVariant(perm, index, result);
}