#include <stack>
#include <cmath>

using namespace std;

long ReverseDigit(long x) {
    long result = 0;
    stack<long> digits;

    while (x) {
        long digit = x % 10;
        x /= 10;
        digits.push(digit);
    }

    long pos = 0;

    while (!digits.empty()) {
        result += long(pow(10, pos)) * digits.top();
        digits.pop();
        pos++;
    }

    return result;
}