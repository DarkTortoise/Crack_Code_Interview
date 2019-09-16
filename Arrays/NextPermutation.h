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

template<class T>
vector<T> KthPermutation(vector<T> &arr, int k) {
    for (int index = 0; index < k; index++) {
        arr = NextPermutation(arr);
    }

    return arr;
}

template<class T>
vector<T> PrevPermutation(vector<T> &arr) {
    auto ptr = prev(end(arr), 1);
    while (ptr != begin(arr) and *ptr > *prev(ptr, 1)) {
        ptr--;
    }

    ptr--;

    auto maxPtr = next(ptr, 1);
    auto n = next(ptr, 1);

    while (n != end(arr)) {
        if (*n >= *maxPtr and *n < *ptr) {
            maxPtr = n;
        }
        n++;
    }

    swap(*maxPtr, *ptr);
    reverse(next(ptr, 1), end(arr));

    return arr;
}