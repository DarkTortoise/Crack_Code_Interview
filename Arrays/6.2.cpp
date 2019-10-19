#include <vector>
#include <algorithm>
#include <string>

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

string Problem_6_2_Varaint(const string &a, const string &b) {
    string result;
    int carry = 0;

    auto p1 = a.rbegin(), p2 = b.rbegin();
    while (p1 != a.rend() && p2 != b.rend()) {
        int value = (*p1 - '0') + (*p2 - '0') + carry;
        carry = value / 10;
        result.push_back(value % 10 + '0');
        p1++, p2++;
    }

    if (p1 == a.rend()) {
        while (p2 != b.rend()) {
            int value = (*p2 + '0') + carry;
            carry = value / 10;
            result.push_back(value % 10 + '0');
            p2++;
        }
    } else if (p2 == b.rend()) {
        while (p1 != a.rend()) {
            int value = (*p1 - '0') + carry;
            carry = value / 10;
            result.push_back(value % 10 + '0');
            p1++;
        }
    }

    if (carry != 0) {
        result.push_back(carry + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}