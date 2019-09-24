#include <cstdint>

short ParityBasic(long x) {
    long result = 0;

    while (x) {
        result ^= 1;
        x &= (x - 1);
    }

    return result;
}

short ParityCache(long x) {
    short cache[65536]{0};
    short wordSize = 16;

    return cache[(x >> (3 * wordSize))] ^
           cache[(x >> (2 * wordSize)) & 0xFFFF] ^
           cache[(x >> wordSize) & 0xFFFF] ^
           cache[(x & 0xFFFF)];
}

short Parity(uint64_t x) {
    x ^= x >> 32;
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;

    return x & 0x1;
}