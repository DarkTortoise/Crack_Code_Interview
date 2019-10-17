#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int Problem_18_2(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int total_time = 0;

    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        int wait_time = accumulate(arr.begin(), iter, 0, [](const int &a, const int &b) {
            return a + b;
        });
        total_time += wait_time;
    }

    return total_time;
}