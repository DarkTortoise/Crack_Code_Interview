#include <unordered_map>

using namespace std;

bool Problem_13_1(const string &str) {
    unordered_map<char, int> m{};
    bool single = false;

    for (auto val: str) {
        if (m.find(val) == m.end()) {
            m.insert({val, 1});
        } else {
            m.insert_or_assign(val, m[val] + 1);
        }
    }

    for (auto &val: m) {
        if (val.second % 2 != 0) {
            if (!single and str.size() % 2 != 0) {
                single = true;
            } else if (single) {
                return false;
            }
        }
    }

    return true;
}