#include <cstdint>

uint64_t Problem_5_2(uint64_t n, uint8_t i, uint8_t j) {
    if (((n >> i) & 1) != ((n >> j) & 1)) {
        uint64_t mask = (1L << i) | (1L << j);
        return n ^ mask;
    }

    return n;
}