#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

vector<size_t> Problem_18_4(vector<size_t> &arr, int sum) {
    size_t begin = 0, end = arr.size() - 1;
    sort(arr.begin(), arr.end());

    for (size_t index = begin + 1; index < end && begin < end; index++) {
        size_t partial_sum = arr[begin] + arr[end];
        if (partial_sum < sum - arr[index]) {
            begin++;
            if (begin == index) {
                index++;
            }
        } else if (partial_sum > sum - arr[index]) {
            end--;
        } else {
            return vector<size_t>{arr[begin], arr[index], arr[end]};
        }
    }

    return vector<size_t>{};
}

vector<int> Problem_18_4_Variant(vector<int> &arr, int T) {
    sort(arr.begin(), arr.end());
    int minValue = numeric_limits<int>::max();
    size_t begin = 0, end = arr.size() - 1;
    vector<int> result;

    for (size_t index = 1; index < end && begin < end; index++) {
        int partial_sum = arr[begin] + arr[end];

        if (T - partial_sum - arr[index] > minValue) {
            begin++;
        } else if (T - partial_sum - arr[index] < minValue) {
            minValue = T - partial_sum - arr[index];
            result.clear();
            result.push_back(arr[begin]);
            result.push_back(arr[index]);
            result.push_back(arr[end]);
        } else if (T - partial_sum - arr[index] == 0) {
            result.clear();
            result.push_back(arr[begin]);
            result.push_back(arr[index]);
            result.push_back(arr[end]);
            return result;
        }

    }

    return result;
}