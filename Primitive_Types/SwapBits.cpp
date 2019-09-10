#include <cstdint>

unsigned long SwapBits(unsigned long x, int i, int j) {
    if (((x >> i) & 1) != ((x >> j) & 1)) {
        long mask = (1 << i) | (1 << j);
        return x ^ mask;
    }
}