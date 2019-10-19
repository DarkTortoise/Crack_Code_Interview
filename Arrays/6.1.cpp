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

void Problem_6_1_Variant_1(vector<int> &arr, int k1, int k2, int k3) {
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

void Problem_6_1_Variant_2(vector<int> &arr, int k1, int k2, int k3, int k4) {
    auto left = arr.begin(), right = arr.end() - 1, m1 = arr.begin(), m2 = arr.end() - 1;

    while (m1 != m2) {
        if (*m1 == k1) {
            swap(*left, *m1);
            if (left == m1)
                m1++;
            left++;
        } else if (*m1 == k2) {
            m1++;
        } else if (*m1 == k3) {
            swap(*m1, *m2);
            m2--;
        } else {
            swap(*m1, *right);
            if (m2 == right)
                m2--;
            right--;
        }
    }

    if (*m1 == k1) {
        swap(*m1, *left);
    } else if (*m1 == k3) {
        swap(*m1, *m2);
    } else if (*m1 == k4) {
        swap(*m1, *right);
    }
}