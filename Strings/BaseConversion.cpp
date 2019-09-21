#include <string>
#include <cmath>

using namespace std;

string BaseConversion(const string &n, int base1, int base2) {
    int negative = 1;
    int pos = 0;
    int nBase1 = 0;

    for (auto index = n.rbegin(); index != n.rend(); index++) {
        if (*index == '-') {
            negative = -1;
            break;
        }

        if (*index == 'A') {
            nBase1 += 10 * int(pow(base1, pos));
        } else if (*index == 'B') {
            nBase1 += 11 * int(pow(base1, pos));
        } else if (*index == 'C') {
            nBase1 += 12 * int(pow(base1, pos));
        } else if (*index == 'D') {
            nBase1 += 13 * int(pow(base1, pos));
        } else if (*index == 'E') {
            nBase1 += 14 * int(pow(base1, pos));
        } else if (*index == 'F') {
            nBase1 += 15 * int(pow(base1, pos));
        } else {
            nBase1 += (*index - '0') * int(pow(base1, pos));
        }

        pos++;
    }

    nBase1 *= negative;

    pos = 0;
    string nBase2;

    while (nBase1) {
        int digit = nBase1 % base2;
        nBase1 /= base2;

        if (digit == 10) {
            nBase2.insert(0, "A");
        } else if (digit == 11) {
            nBase2.insert(0, "B");
        } else if (digit == 12) {
            nBase2.insert(0, "C");
        } else if (digit == 13) {
            nBase2.insert(0, "D");
        } else if (digit == 14) {
            nBase2.insert(0, "E");
        } else if (digit == 15) {
            nBase2.insert(0, "F");
        } else
            nBase2.insert(0, to_string(digit));
        pos++;
    }

    return nBase2;
}