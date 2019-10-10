#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool Problem_13_13(const vector<int> &arr) {
    unordered_map<int, bool> m{};

    for (auto &value: arr) {
        int val = value;
        unordered_set<int> s{};

        if (m.find(val) == m.end()) {
            while (s.find(val) == s.end() and val != 1) {
                s.insert(val);
                if (val % 2 == 0) {
                    val /= 2;
                } else {
                    val = val * 3 + 1;
                }
            }

            if (val != 1) {
                return false;
            }
        }
    }

    return true;
}