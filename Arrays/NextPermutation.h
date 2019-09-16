#pragma once

#include <vector>
#include <algorithm>

using namespace std;

template<class T>
vector<T> &NextPermutation(vector<T> &arr) {
    auto nptr = prev(end(arr), 1);

    while (nptr != begin(arr) and *nptr < *(prev(nptr, 1))) {
        nptr--;
    }

    nptr--;

    auto n = next(nptr, 1);
    auto minPtr = n;

    while (n != end(arr)) {
        if (*n < *minPtr and *n > *nptr)
            minPtr = n;
        n++;
    }

    swap(*minPtr, *nptr);
    reverse(next(nptr, 1), end(arr));

    return arr;
}