#include <string>
#include <functional>

using namespace std;

size_t FirstSubstring(const string &s, const string &t) {
    hash<string> hashFn;
    for (size_t index = 0; index < s.size(); index++) {
        size_t hash1 = hashFn(s.substr(index, t.size()));
        size_t hash2 = hashFn(t);

        if (hash1 == hash2) {
            return index;
        }
    }

    return -1;
}