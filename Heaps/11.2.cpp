#include <queue>
#include <algorithm>

using namespace std;

extern vector<int> Problem_11_1(const vector<vector<int>> &arr);

vector<int> Problem_11_2(const vector<int> &arr) {
    vector<vector<int>> arrs;
    auto ptr = arr.begin();
    bool incr = true;

    for (auto iter = arr.begin(); iter != arr.end(); iter++) {
        if (next(iter, 1) != arr.end()) {
            if (*iter > *next(iter, 1) and incr) {
                vector<int> v(ptr, next(iter, 1));
                arrs.push_back(v);
                ptr = next(iter, 1);
                incr = false;
            } else if (*iter < *next(iter, 1) and !incr) {
                vector<int> v(ptr, next(iter, 1));
                reverse(v.begin(), v.end());
                arrs.push_back(v);
                ptr = next(iter, 1);
                incr = true;
            }
        }
    }

    vector<int> v(ptr, arr.end());
    if (!incr)
        reverse(v.begin(), v.end());
    arrs.push_back(v);

    return Problem_11_1(arrs);
}