#include <vector>

using namespace std;

int Problem_12_2(const vector<int> &arr) {
    int begin = 0, end = arr.size(), mid = begin + (end - begin) / 2;

    while (begin <= end) {
        if (arr[mid] < mid) {
            end = mid = 1;
        } else if (arr[mid] > mid) {
            begin = mid + 1;
        } else {
            return mid;
        }

        mid = begin + (end - begin) / 2;
    }

    return -1;
}