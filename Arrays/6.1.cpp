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

void Problem_6_1_Variant(vector<int> &arr, int k1, int k2, int k3) {
    auto left = arr.begin(), right = arr.end() - 1, mid = arr.begin();

    while (mid != right) {
        if (*mid == k1) {
            swap(*left, *mid);

            if (mid == left)
                mid++;

            left++;
        } else if (*mid == k2) {
            mid++;
        } else {
            swap(*mid, *right);
            right--;
        }
    }
}