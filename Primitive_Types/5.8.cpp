#include <cmath>

namespace ns_5_8 {
    unsigned long n_digits(long n) {
        unsigned long bits = 0;
        while (n) {
            n /= 10;
            bits++;
        }

        return bits;
    }
}

long Problem_5_8(long n) {
    unsigned long bits = ns_5_8::n_digits(n);
    long result = 0;

    while (n) {
        long x = n % 10;
        result += x * pow(10, (bits - 1));
        bits--;
        n /= 10;
    }

    return result;
}