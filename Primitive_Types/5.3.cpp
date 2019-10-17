#include <bitset>
#include <cstdint>
#include <algorithm>
#include <unordered_map>

using namespace std;

uint16_t reverse_number(unsigned long n) {
    string nstr = bitset<8>(n).to_string();
    reverse(nstr.begin(), nstr.end());
    auto rn = bitset<8>(nstr).to_ulong();

    return rn;
}

unsigned long long Problem_5_3(uint64_t n) {
    unordered_map<uint8_t, uint8_t> m;
    unsigned long long result = 0;

    for (size_t index = 0; index < 8; index++) {
        uint8_t x = (n >> (index * 8)) & 0XFF;
        if (m.find(x) == m.end()) {
            m.insert({x, reverse_number(x)});
        }

        auto y = m[x];
        result |= (unsigned long long) (m[x]) << ((7 - index) * 8);
        n >>= 8;
    }

    return result;
}