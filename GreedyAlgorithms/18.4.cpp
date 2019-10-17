#include <vector>
#include <algorithm>

using namespace std;

vector<size_t> Problem_18_4(vector<size_t> &arr, int sum) {
    size_t begin = 0, end = arr.size() - 1;
    sort(arr.begin(), arr.end());

    for (size_t index = 0; index < end && begin < end; index++) {
        int partial_sum = arr[begin] + arr[end];
        if (partial_sum < sum - arr[index]) {
            begin++;
        } else if (partial_sum > sum - arr[index]) {
            end--;
        } else {
            return vector<size_t>{arr[begin], arr[index], arr[end]};
        }
    }

    return vector<size_t>{};
}