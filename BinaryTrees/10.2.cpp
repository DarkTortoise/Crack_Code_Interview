#include <vector>

using namespace std;

bool IsSymmetric(const vector<int> &t, size_t n1, size_t n2) {
    if (n1 >= t.size() and n2 >= t.size())
        return true;
    else if (t[n1] == -1 and t[n2] == -1)
        return true;
    else if ((n1 < t.size() and n2 < t.size()) and (t[n1] != -1 and t[n2] != -1)) {
        return t[n1] == t[n2]
               and IsSymmetric(t, n1 * 2 + 1, n2 * 2 + 2)
               and IsSymmetric(t, n1 * 2 + 2, n2 * 2 + 1);
    }
}

bool Problem_10_2(const vector<int> &t) {
    return IsSymmetric(t, 1, 2);
}