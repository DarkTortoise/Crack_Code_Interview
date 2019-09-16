#pragma once

#include <vector>

using namespace std;

template<class T>
vector<T> &ApplyPermutation(vector<T> &perm, vector<T> &arr) {
    for (int index = 0; index < arr.size(); index++) {
        int next = index;

        while (perm[next] > 0) {
            swap(arr[index], arr[perm[next]]);
            int temp = perm[next];
            perm[next] -= perm.size();
            next = temp;
        }
    }

    return arr;
}