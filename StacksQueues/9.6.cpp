#include <vector>

using namespace std;

vector<int> Problem_9_6_O_N(const vector<int> &arr) {
    int mHeight = 0;
    vector<int> result;

    for (auto index = arr.crbegin(); index != arr.crend(); index++) {
        if (*index > mHeight) {
            if (*index > mHeight) {
                result.push_back(*index);
                mHeight = *index;
            }
        }
    }

    return result;
}

vector<int> Problem_9_6_O_1(const vector<int> &arr) {
    vector<int> s;

    for (auto index = arr.crbegin(); index != arr.crend(); index++) {
        if (s.empty()) {
            s.push_back(*index);
        } else if (*index > s.back()) {
            s.push_back(*index);
        }
    }

    return s;
}