#include <vector>
#include <string>

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

size_t Problem_12_1_Variant_1(const vector<int> &arr, int k) {
    size_t begin = 0, end = arr.size(), mid = begin + (end - begin) / 2;
    size_t result = -1;

    while (begin <= end) {
        if (arr[mid] > k) {
            result = mid;
            end = mid - 1;
        } else if (arr[mid] <= k) {
            begin = mid + 1;
        }

        mid = begin + (end - begin) / 2;
    }

    return result;
}

size_t Problem_12_1_Variant_2(const vector<int> &arr) {
    size_t begin = 0, end = arr.size() - 1, mid = begin + (end - begin) / 2;

    while (begin <= end) {
        if (arr[mid] <= arr[mid - 1] and arr[mid] <= arr[mid + 1]) {
            return mid;
        } else if (arr[mid] > arr[mid + 1]) {
            begin = mid + 1;
        } else if (arr[mid] < arr[mid + 1]) {
            end = mid - 1;
        }

        mid = begin + (end - begin) / 2;
    }

    return mid;
}


int FindFirst(const vector<int> &arr, int begin, int end, int k) {
    int mid = begin + (end - begin) / 2;
    int result = -1;

    while (begin <= end) {
        if (k < arr[mid]) {
            end = mid - 1;
        } else if (k > arr[mid]) {
            begin = mid + 1;
        } else {
            result = mid;
            end = mid - 1;
        }

        mid = begin + (end - begin) / 2;
    }

    return result;
}

int FindLast(const vector<int> &arr, int begin, int end, int k) {
    int mid = begin + (end - begin) / 2;
    int result = -1;

    while (begin <= end) {
        if (k < arr[mid]) {
            end = mid - 1;
        } else if (k > arr[mid]) {
            begin = mid + 1;
        } else {
            result = mid;
            begin = mid + 1;
        }

        mid = begin + (end - begin) / 2;
    }

    return result;
}

pair<int, int> Problem_12_1_Variant_3(const vector<int> &arr, int k) {
    int begin = 0, end = arr.size(), mid = begin + (end - begin) / 2;

    while (begin <= end) {
        if (k < arr[mid]) {
            end = mid - 1;
        } else if (k > arr[mid]) {
            begin = mid + 1;
        } else {
            int leftIndex = FindFirst(arr, begin, mid - 1, k);
            int rightIndex = FindLast(arr, mid + 1, end, k);

            return make_pair(leftIndex == -1 ? mid : leftIndex, rightIndex == -1 ? mid : rightIndex);
        }

        mid = begin + (end - begin) / 2;
    }

    return make_pair(-1, -1);
}

bool Problem_12_1_Variant_4(const vector<string> &arr, const string &p) {
    int begin = 0, end = arr.size(), mid = begin + (end - begin) / 2;
    size_t length = p.size();

    while (begin <= end) {
        if (p < arr[mid].substr(0, length)) {
            end = mid - 1;
        } else if (p > arr[mid].substr(0, length)) {
            begin = mid + 1;
        } else {
            return true;
        }
    }

    return false;
}