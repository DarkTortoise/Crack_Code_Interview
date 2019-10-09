#include <unordered_set>
#include <vector>
#include <limits>

using namespace std;

size_t Problem_13_10(const vector<int> &arr) {
    size_t maxSize = numeric_limits<size_t>::min();
    unordered_set<int> s(arr.begin(), arr.end());

    for (int index : arr) {
        size_t length = 0;

        if (s.find(index) == s.end()) {
            continue;
        } else {
            length = 1;

            int value = index - 1;

            while (s.find(value) != s.end()) {
                s.erase(value);
                value--;
                length++;
            }

            value = index + 1;

            while (s.find(value) != s.end()) {
                s.erase(value);
                value++;
                length++;
            }
        }

        if (length > maxSize) {
            maxSize = length;
        }
    }

    return maxSize;

}