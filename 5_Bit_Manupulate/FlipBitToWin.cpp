#include <cstddef>
#include <algorithm>

using namespace std;

unsigned int FlipBitToWin(unsigned int number) {
    size_t flipIndex = 0;
    size_t currentIndex = 0;
    bool hasFlipped = false;
    size_t length = 0;
    size_t prevMaxLength = 0;

    while (number != 0) {
        unsigned int digit = number % 2;
        number /= 2;

        if (digit == 1)
            length++;
        else if (hasFlipped) {
            length = currentIndex - flipIndex;
            hasFlipped = false;
            flipIndex = currentIndex;
        } else {
            hasFlipped = true;
            flipIndex = currentIndex;
            length++;
        }

        currentIndex++;
        prevMaxLength = max(length, prevMaxLength);

    }

    return max(prevMaxLength, length);
}