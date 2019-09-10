int CountBits(int x) {
    int bits = 0;

    while (x) {
        x &= (x - 1);
        bits++;
    }

    return bits;
}