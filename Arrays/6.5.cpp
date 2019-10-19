#include <vector>

using namespace std;

void Problem_6_5(vector<int> &arr) {
    auto p1 = arr.begin(), p2 = arr.begin() + 1;

    while (p2 != arr.end()) {
        if (*p1 != *p2) {
            *(p1 + 1) = *p2;
            if (p1 + 1 != p2)
                *p2 = 0;

            p1++, p2++;
        } else {
            *p2 = 0;
            p2++;
        }
    }
}