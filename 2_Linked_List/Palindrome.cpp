#include <list>

using namespace std;

bool Palindrome(const list<int> &L) {
    auto begin = L.begin();
    auto end = prev(L.end());

    while (begin != end) {
        if (*begin != *end) {
            return false;
        }

        begin++;
        end--;
    }

    return true;
}
