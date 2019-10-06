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