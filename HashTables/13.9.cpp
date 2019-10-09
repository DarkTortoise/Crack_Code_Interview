#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <limits>

using namespace std;

size_t Problem_13_9(const vector<string> &arr) {
    unordered_map<string, size_t> m{};
    unordered_set<string> s{};
    size_t begin = 0;
    size_t maxLength = numeric_limits<size_t>::min();

    for (size_t index = 0; index < arr.size(); index++) {
        string value = arr[index];

        if (s.find(value) != s.end()) {
            if (index - begin + 1 > maxLength) {
                maxLength = index - begin;
            }
            begin = m[value] + 1;
        } else {
            s.insert(value);
            m.insert({value, index});
        }
    }

    return maxLength;
}