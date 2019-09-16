#pragma once

#include <random>

using namespace std;

template<class T>
vector<int> SampleOfflineData(vector<T> &arr, int k) {
    for (int index = 0; index < arr.size(); index++) {
        auto randGen = uniform_int_distribution<>(index, arr.size() - 1);
        random_device rd;
        mt19937 gen(rd());
        int randIndex = randGen(gen);
        swap(arr[index], arr[randIndex]);
    }

    return vector<T>(begin(arr), next(begin(arr), k));
}