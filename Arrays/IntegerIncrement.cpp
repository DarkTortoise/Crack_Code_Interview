#include <list>
#include <cmath>

using namespace std;

long IntegerIncrement(list<int> n) {
    auto ptr = n.end();
    int overflow = 0;
    long result = 0;
    int pos = 0;

    while (ptr != n.begin()) {
        int digit = 0;

        if (ptr == n.end()) {
            digit = (*(--ptr) + overflow + 1);
        } else {
            digit = (*(--ptr) + overflow);
        }

        result += (digit % 10) * int(pow(10, pos++));
        overflow = digit / 10;
    }

    if (overflow != 0)
        result += overflow * int(pow(10, pos));

    return result;
}