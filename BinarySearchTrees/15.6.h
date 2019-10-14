#ifndef BINARYSEARCHTREES_15_6_H
#define BINARYSEARCHTREES_15_6_H

#include <memory>
#include <set>
#include <vector>
#include <limits>

using namespace std;

template<class T>
vector<T> Problem_15_6(const vector<T> &v1, const vector<T> &v2, const vector<T> &v3) {
    auto ptr1 = v1.begin(), ptr2 = v2.begin(), ptr3 = v3.begin();
    T minInterval = numeric_limits<T>::max();
    auto minPtr1 = v1.begin(), minPtr2 = v2.begin(), minPtr3 = v3.begin();

    while (ptr1 != v1.end() && ptr2 != v2.end() && ptr3 != v3.end()) {
        auto minPtr = min({ptr1, ptr2, ptr3},
                          [](auto &leftValue,
                             auto &rightValue) {
                              return *leftValue < *rightValue;
                          });

        auto maxPtr = max({ptr1, ptr2, ptr3},
                          [](auto &leftValue,
                             auto &rightValue) {
                              return *leftValue < *rightValue;
                          });

        if (*maxPtr - *minPtr < minInterval) {
            minPtr1 = ptr1;
            minPtr2 = ptr2;
            minPtr3 = ptr3;
        }

        if (minPtr == ptr1) {
            ptr1++;
        } else if (minPtr == ptr2) {
            ptr2++;
        } else {
            ptr3++;
        }
    }

    return vector<T>{*minPtr1, *minPtr2, *minPtr3};
}

#endif //BINARYSEARCHTREES_15_6_H
