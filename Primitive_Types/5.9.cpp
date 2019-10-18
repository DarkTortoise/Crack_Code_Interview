namespace ns_5_9 {
    unsigned int n_digits(long n) {
        unsigned int digits = 0;
        while (n) {
            n /= 10;
            digits++;
        }
        return digits;
    }
}

bool Problem_5_9(long n) {
    unsigned int digits = ns_5_9::n_digits(n);
    unsigned int table[digits];

    if (n < 0) {
        return false;
    }

    while (n) {
        unsigned int digit = n % 10;
        table[digit]++;
        n /= 10;
    }

    unsigned int n_odds = 1;

    for (auto d: table) {
        if (d % 2 != 0)
            return false;
    }

    for (auto d: table) {
        if (n_odds == 0)
            return false;

        if (d % 2 != 0) {
            n_odds--;
        }
    }
}