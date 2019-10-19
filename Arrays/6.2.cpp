#include <vector>
#include <algorithm>

using namespace std;

vector<int> Problem_6_2(const vector<int> &arr) {
    vector<int> result;
    int carry = 1;

    for (auto iter = arr.rbegin(); iter != arr.rend(); iter++) {
        auto value = *iter + carry;
        carry = value / 10;
        result.push_back(value % 10);
    }

    if (carry != 0) {
        result.push_back(carry);
    }

    reverse(result.begin(), result.end());
    return result;
}