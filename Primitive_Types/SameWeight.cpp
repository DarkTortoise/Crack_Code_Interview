long SameWeight(long x) {
    for (int i = 0; i < 64; i++) {
        if (((x >> i) & 1) != ((x >> (i + 1)) & 1)) {
            x ^= (1 << i) | (1 << (i + 1));
            return x;
        }
    }
}