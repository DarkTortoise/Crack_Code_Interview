#pragma once

#include <vector>
#include <map>

using namespace std;

template<class T>
size_t DeleteDuplicatesVersion1(vector<T> &arr) {
    vector<T> result{};
    map<T, size_t> table{};

    for (auto &it: arr) {
        if (table.find(it) == table.end()) {
            table[it] = 1;
            result.push_back(it);
        }
    }

    return result.size();
}

template<class T>
size_t DeleteDuplicatesVersion2(vector<T> &arr) {
    size_t pos = 1;

    for (size_t index = 0; index < arr.size() and pos < arr.size(); index++) {
        if (arr[pos - 1] != arr[index]) {
            arr[pos++] = arr[index];
        }
    }

    return pos;
}

template<class T>
size_t DeleteDuplicatesVariant1(vector<T> &arr, T key) {
    size_t pos = 0;

    for (size_t index = 0; index < arr.size(); index++) {
        if (arr[index] != key) {
            arr[pos++] = arr[index];
        }
    }

    return pos;
}