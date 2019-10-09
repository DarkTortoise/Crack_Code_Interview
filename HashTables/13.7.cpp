#include <unordered_set>
#include <vector>
#include <unordered_map>

using namespace std;

pair<int, int> Problem_13_7(const vector<string> &arr, unordered_set<string> &queries) {
    unordered_map<string, int> covered{};
    int lastBegin = 0, lastEnd = 0;
    int begin = 0, end = -1;

    while (end != arr.size()) {
        while (covered.size() < queries.size()) {
            if (end == arr.size() - 1) {
                return make_pair(lastBegin, lastEnd);
            }
            string value = arr[++end];
            if (queries.find(value) != queries.end()) {
                if (covered.find(value) == covered.end()) {
                    covered.insert_or_assign(value, 1);
                } else {
                    covered.insert_or_assign(value, covered[value] + 1);
                }
            }
        }

        lastBegin = begin, lastEnd = end;

        string value = arr[begin];

        if (queries.find(value) != queries.end()) {
            covered.insert_or_assign(value, covered[value] - 1);
            if (covered[value] <= 0) {
                covered.erase(value);
            }
        }

        begin++;
    }

    return make_pair(lastBegin, lastEnd);
}

pair<int, int> Problem_13_7_Variant_1(const vector<string> &arr) {
    unordered_set<string> e{};

    for (auto &value: arr) {
        e.insert(value);
    }

    return Problem_13_7(arr, e);
}