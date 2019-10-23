#include <vector>

using namespace std;

void Problem_6_18(vector<vector<int>> &arr) {
    size_t height = arr.size() - 1, width = height;
    int left_border = 0, right_border = width;
    int top_border = 0, bottom_border = height;

    while (left_border <= right_border && top_border <= bottom_border) {
        for (int index = 0; index < right_border - left_border; index++) {
            swap(arr[top_border][left_border + index], arr[top_border + index][right_border]);
            swap(arr[top_border][left_border + index], arr[bottom_border][right_border - index]);
            swap(arr[top_border][left_border + index], arr[bottom_border - index][left_border]);
        }

        left_border++, right_border--, top_border++, bottom_border--;
    }
}