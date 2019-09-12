#pragma once

#include <cstddef>
#include <array>

using namespace std;

template<size_t SIZE>
bool AdvanceThroughArray(array<int, SIZE> &arr) {
    size_t maxPos = 0;

    for (size_t index = 0; index < SIZE; index++) {
        size_t curPos = index + arr[index];
        if (curPos >= maxPos)
            maxPos = curPos;
    }

    return maxPos >= SIZE;
}

template<size_t SIZE>
size_t MinStepsToLastPos(array<int, SIZE> &arr) {
    size_t maxPos = 0;
    size_t steps = 0;

    for (size_t index = 0; index < SIZE; index++) {
        size_t curPos = index + arr[index];
        if (curPos > maxPos) {
            maxPos = curPos;
            steps++;
        }
    }

    return maxPos >= SIZE ? steps - 1 : 0;
}