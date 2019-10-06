#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int Problem_12_8(vector<int> &arr, int k) {
    auto left = begin(arr), right = end(arr);

    while (distance(left, right) >= 0) {
        auto ptr = stable_partition(left, right, [left](auto &e) {
            return e >= *left;
        });

        int d = distance(left, ptr);

        if (d == k) {
            return *ptr;
        } else if (d < k) {
            left = next(ptr, 1);
        } else {
            right = prev(ptr, 1);
        }
    }
}

int Problem_12_8_Variant_1(vector<int> &arr) {
    auto first = begin(arr), last = end(arr), pivot = begin(arr);

    while (distance(first, last) >= 0) {
        auto ptr = stable_partition(first, last, [pivot](auto &e) {
            return e <= *pivot;
        });

        auto leftSize = distance(first, ptr);
        auto rightSize = distance(ptr, last);

        if (leftSize == rightSize) {
            return *ptr;
        } else if (leftSize == rightSize + 1) {
            return *prev(ptr, 1);
        } else if (leftSize + 1 == rightSize) {
            return *ptr;
        } else if (leftSize > rightSize) {
            pivot--;
        } else if (leftSize < rightSize) {
            pivot++;
        }
    }
}