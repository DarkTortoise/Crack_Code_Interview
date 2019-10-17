#include <unordered_map>

using namespace std;

int parity(uint16_t number) {
    uint8_t result = 0;
    while (number != 0) {
        result ^= 1;
        number &= (number - 1);
    }

    return result;
}

int Problem_5_1(uint64_t large_number) {
    uint16_t mask = 0xFFFF;
    unordered_map<uint64_t, uint32_t> m;
    int8_t result = -1;

    while (large_number != 0) {
        uint16_t n = large_number & mask;
        if (m.find(n) == m.end()) {
            m.insert({n, parity(n)});
        }

        if (result == -1)
            result = m[n];
        result ^= m[n];
        large_number >>= 16;
    }

    return result;
}