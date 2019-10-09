#include <unordered_set>
#include <vector>

using namespace std;

pair<size_t, size_t> Problem_13_7(const vector<string> &arr, unordered_set<string> &queries) {
    unordered_set<string> covered{};
    size_t lastBegin = 0, lastEnd = 0;
    size_t begin = 0, end = 0;

    while (end < arr.size()) {
        while (covered.size() < queries.size()) {
            if (end >= arr.size()) {
                return make_pair(lastBegin, lastEnd);
            }
            string value = arr[end];
            if (queries.find(value) != queries.end()) {
                covered.insert(value);
            }
            end++;
        }

        lastBegin = begin, lastEnd = end - 1;

        string value = arr[begin];
        covered.erase(value);
        begin++;
    }

    return make_pair(lastBegin, lastEnd);
}