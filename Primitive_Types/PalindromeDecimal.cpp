#include <cmath>

bool PalindromeDecimal(long x) {
    if (x < 0)
        return false;

    long right = floor(log10(x));
    long left = 0;

    while (left < right) {
        long leftDigit = (x / long(pow(10, left))) % 10;
        long rightDigit = (x / long(pow(10, right))) % 10;

        if (leftDigit != rightDigit)
            return false;

        left++;
        right--;
    }

    return true;
}