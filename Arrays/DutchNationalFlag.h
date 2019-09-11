#pragma once

#include <array>

using namespace std;

template<class T>
array<T, 10> &DutchNationalFlag(array<T, 10> &arr, T pivot) {
    auto begin = arr.begin();
    auto middle = arr.begin();
    auto end = prev(arr.end(), 1);

    while (middle <= end) {
        if (*middle < pivot) {
            swap(*begin, *middle);
            begin++;
            middle++;
        } else if (*middle == pivot) {
            middle++;
        } else {
            swap(*middle, *end);
            end--;
        }
    }

    return arr;
}

template<class T>
array<T, 10> &DutchNationalFlagVariant1(array<T, 10> &arr, T key1, T key2, T key3) {
    auto begin = arr.begin();
    auto middle = arr.begin();
    auto end = prev(arr.end(), 1);

    while (middle <= end) {
        if (*middle == key1) {
            swap(*begin, *middle);
            begin++;
            middle++;
        } else if (*middle == key2) {
            middle++;
        } else {
            swap(*middle, *end);
            end--;
        }
    }

    return arr;
}