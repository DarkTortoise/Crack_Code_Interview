#include <vector>

using namespace std;

size_t Problem_10_3(const vector<int> &t, size_t n1, size_t n2) {
    size_t p1 = (n1 - 1) / 2;
    size_t p2 = (n2 - 1) / 2;

    while (p1 != p2) {
        if (p1 != 0)
            p1 = (p1 - 1) / 2;

        if (p2 != 0)
            p2 = (p2 - 1) / 2;
    }

    return p1;
}