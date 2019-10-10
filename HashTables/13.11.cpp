#include <unordered_map>
#include <vector>

using namespace std;

bool Problem_13_12(const string &str, const vector<string> &arr) {
    size_t length = arr[0].size();
    unordered_map<string, int> m{};
    size_t nMatched = 0;

    for (auto &value: arr) {
        if (m.find(value) == m.end()) {
            m.insert({value, 1});
        } else {
            m.insert_or_assign(value, m[value] + 1);
        }
    }

    for (size_t index = 0; index < str.size(); index++) {
        string word = str.substr(index, length);
        if (m.find(word) != m.end()) {
            if (m[word] <= 0) {
                nMatched = 0;
            }

            m.insert_or_assign(word, m[word] - 1);
            nMatched++;
            index += length - 1;
        }
    }

    return nMatched == arr.size() - 1;
}