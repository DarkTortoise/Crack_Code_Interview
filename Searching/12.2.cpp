#include <vector>

using namespace std;

int Problem_12_2(const vector<int> &arr) {
    int begin = 0, end = arr.size(), mid = begin + (end - begin) / 2;
    int diff = arr[mid] - mid;

    while (begin <= end) {
        if (diff == 0) {
            return mid;
        } else if (diff > 0) {
            end = mid - 1;
        } else if (diff < 0) {
            begin = mid + 1;
        }

        mid = begin + (end - begin) / 2;
    }

    return -1;
}

int Find(const vector<int> &arr, int begin, int end) {
    int mid = begin + (end - begin) / 2;
    int diff = arr[mid] - mid;

    if (begin >= end and diff != 0) {
        return -1;
    } else if (begin >= end and diff == 0) {
        return mid;
    }

    int left = Find(arr, begin, mid - 1);
    int right = Find(arr, mid + 1, end);

    if (left != -1)
        return left;
    else if (right != -1)
        return right;

    return -1;
}

int Problem_12_2_Variant_1(const vector<int> &arr) {
    int begin = 0, end = arr.size();

    return Find(arr, begin, end);
}