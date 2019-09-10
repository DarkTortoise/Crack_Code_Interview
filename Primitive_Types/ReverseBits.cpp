#include <cstdint>

unsigned long ReverseBits(unsigned long x) {
    uint16_t mask = 0xFFFF;
    return ((x & mask) << 48) |
           (((x >> 16) & mask) << 32) |
           (((x >> 32) & mask) << 16) |
           ((x >> 48) & mask);
}