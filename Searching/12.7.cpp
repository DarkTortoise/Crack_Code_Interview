#include <vector>
#include <limits>

using namespace std;

pair<int, int> Problem_12_7(const vector<int> &arr) {
    int min = numeric_limits<int>::max();
    int max = numeric_limits<int>::min();

    for (auto &val: arr) {
        if (val < min) {
            min = val;
        }

        if (val > max) {
            max = val;
        }
    }

    return make_pair(min, max);
}