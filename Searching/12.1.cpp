#include <vector>

using namespace std;

size_t Problem_12_1(const vector<int> &arr, int k) {
    for (size_t index = 0; index < arr.size(); index++) {
        if (arr[index] == k) {
            return index;
        }
    }
}

size_t Problem_12_1_Binary_Search(const vector<int> &arr, int k) {
    size_t begin = 0, end = arr.size() - 1, mid = (begin + end) / 2;
    size_t result = -1;

    while (begin <= end) {
        if (k < arr[mid]) {
            end = mid - 1;
        } else if (k > arr[mid]) {
            begin = mid + 1;
        } else if (k == arr[mid]) {
            result = mid;
            end = mid - 1;
        }

        mid = (begin + end) / 2;
    }

    return result;
}