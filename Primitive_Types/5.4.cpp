#include <cstddef>

namespace ns_5_4 {
    unsigned long n_bits(unsigned long n) {
        int count = 0;
        while (n) {
            n >>= 1;
            count++;
        }

        return count;
    }
}

unsigned long Problem_5_4(unsigned long n) {
    unsigned long bits = ns_5_4::n_bits(n);
    for (size_t index = 0; index < bits; index++) {
        if (((n >> index) & 1) != ((n >> (index + 1)) & 1)) {
            n ^= (1UL << index) | (1UL << (index + 1));
            return n;
        }
    }
}