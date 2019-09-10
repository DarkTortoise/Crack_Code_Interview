#ifndef CRACK_CODE_INTERVIEW_DUTCHNATIONALFLAG_H
#define CRACK_CODE_INTERVIEW_DUTCHNATIONALFLAG_H

#include <array>

using namespace std;

template<class T>
array<T, 10> &DutchNationalFlag(array<T, 10> &arr, T pivot) {
    auto begin = arr.begin();
    auto middle = arr.begin();
    auto end = prev(arr.end(), 1);

    while (middle < end) {
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

#endif //CRACK_CODE_INTERVIEW_DUTCHNATIONALFLAG_H
