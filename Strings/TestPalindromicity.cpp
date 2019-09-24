#include <string>

using namespace std;

bool TestPalindromicity(const string &str) {
    auto begin = str.cbegin();
    auto end = prev(str.cend(), 1);

    while (begin != end) {
        if (!isalnum(*begin)) {
            begin++;
            break;
        }

        if (!isalnum(*end)) {
            end--;
            break;
        }

        if (*begin != *end)
            return false;

        begin++;
        end--;
    }

    return true;
}