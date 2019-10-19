#include <vector>

using namespace std;

void Problem_6_1(vector<int> &arr, int pivot) {
    auto left = arr.begin(), right = arr.end() - 1, mid = arr.begin();
    int pivot_value = arr[pivot];

    while (mid != right) {
        if (*mid < pivot_value) {
            swap(*left, *mid);
            left++;
        } else if (*mid == pivot_value) {
            mid++;
        } else {
            swap(*mid, *right);
            right--;
        }
    }
}