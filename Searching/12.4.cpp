#include <vector>

using namespace std;

int Problem_12_4(int n) {
    int begin = 0, end = n, mid = begin + (end - begin) / 2;

    while (begin <= end) {
        if (mid * mid <= n) {
            begin = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = begin + (end - begin) / 2;
    }

    return begin - 1;
}