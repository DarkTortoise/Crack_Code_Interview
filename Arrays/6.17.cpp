#include <vector>

using namespace std;

vector<int> Problem_6_17(const vector<vector<int>> &arr) {
    vector<int> result;

    size_t height = arr.size() - 1;
    size_t width = arr[0].size() - 1;

    int right_border = width, left_border = 0;
    int top_border = 0, bottom_border = height;

    while (right_border >= left_border && top_border <= bottom_border) {
        for (int index = left_border; index <= right_border; index++) {
            result.push_back(arr[top_border][index]);
        }

        top_border++;

        for (int index = top_border; index <= bottom_border; index++) {
            result.push_back(arr[index][right_border]);
        }

        right_border--;

        for (int index = right_border; index >= left_border; index--) {
            result.push_back(arr[bottom_border][index]);
        }

        bottom_border--;

        for (int index = bottom_border; index >= top_border; index--) {
            result.push_back(arr[index][left_border]);
        }

        left_border++;
    }

    return result;
}

vector<vector<int>> Problem_6_17_Variant_1(int d) {
    vector<vector<int>> result(d, vector<int>(d, 0));

    int right_border = d - 1, left_border = 0;
    int bottom_border = d - 1, top_border = 0;
    int n = 1;

    while (right_border >= left_border && bottom_border >= top_border) {
        for (int index = left_border; index <= right_border; index++) {
            result[top_border][index] = n++;
        }

        top_border++;

        for (int index = top_border; index <= bottom_border; index++) {
            result[index][right_border] = n++;
        }

        right_border--;

        for (int index = right_border; index >= left_border; index--) {
            result[bottom_border][index] = n++;
        }

        bottom_border--;

        for (int index = bottom_border; index >= top_border; index--) {
            result[index][left_border] = n++;
        }

        left_border++;
    }

    return result;
}