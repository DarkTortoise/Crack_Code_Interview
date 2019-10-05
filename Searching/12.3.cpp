#include <vector>

using namespace std;

int Problem_12_3(const vector<int> &arr) {
    size_t begin = 0, end = arr.size() - 1, mid = begin + (end - begin) / 2;

    while (begin < end) {
        if (arr[mid] > arr[end]) {
            begin = mid + 1;
        } else if (arr[mid] < arr[end]) {
            end = mid;
        }

        mid = begin + (end - begin) / 2;
    }

    return mid;
}

int Problem_12_3_Variant_1(const vector<int> &arr) {
    size_t begin = 0, end = arr.size(), mid = begin + (end - begin) / 2;

    while (begin < end) {
        if (arr[mid] < arr[mid + 1]) {
            begin = mid + 1;
        } else if (arr[mid] > arr[mid + 1]) {
            end = mid;
        } else if (arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]) {
            return mid;
        }

        mid = begin + (end - begin) / 2;
    }

    return mid;
}