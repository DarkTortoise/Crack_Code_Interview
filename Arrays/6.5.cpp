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

size_t Problem_6_5_Varaint_1(vector<int> &arr, int key) {
    auto p1 = arr.begin(), p2 = arr.begin();
    size_t count = 0;

    while (p2 != arr.end()) {
        if (*p2 != key) {
            p1 = p2;
            p2++;
            count++;
        } else {
            p2++;
        }
    }

    return count;
}