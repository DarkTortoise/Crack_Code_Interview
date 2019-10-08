#include <unordered_map>

using namespace std;

bool Problem_13_2(const string &letter, const string &mag) {
    unordered_map<char, int> m{};

    for (auto c: mag) {
        if (m.find(c) == m.end()) {
            m.insert({c, 1});
        } else {
            m.insert_or_assign(c, m[c] + 1);
        }
    }

    for (auto &c: letter) {
        if (m.find(c) != m.end()) {
            m.insert_or_assign(c, m[c] - 1);
        }
    }

    for (auto &val: m) {
        if (val.second < 0)
            return false;
    }

    return true;
}