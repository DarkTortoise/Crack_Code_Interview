#include <cmath>
#include <ctime>
#include <cstdlib>

int ZeroOneRandom() {
    srand(time(nullptr));
    int result = rand() % 100 + 1;

    if (result % 2 == 0)
        return 0;
    else
        return 1;
}

int UniformRandomNumber(int low, int high) {
    int n = high - low + 1;
    int nDigits = int(ceil(log2(n))) + 1;
    int result = 0;

    do {
        result = 0;
        for (int index = 0; index < nDigits; index++) {
            int coin = ZeroOneRandom();
            result += int(pow(2, index)) * coin;
        }
    } while (result > n);

    return result + low;
}