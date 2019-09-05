#include <cstdint>

uint32_t Insertion(int n, int m, int j, int i) {
    uint32_t allOnes = ~0;

    uint32_t left = allOnes << (j + 1);
    uint32_t right = ((1 << i) - 1);

    uint32_t mask = left | right;

    uint32_t n_cleared = n & mask;
    uint32_t m_shifted = m << i;

    return n_cleared | m_shifted;
}