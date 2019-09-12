#pragma once

#include <vector>
#include <limits>

using namespace std;

template<class T>
T BuySellStockOnce(vector<T> &arr) {
    T minPrice = numeric_limits<T>::max();
    T maxProfit = numeric_limits<T>::min();

    for (auto &price: arr) {
        minPrice = min(price, minPrice);
        T todayPrice = price - minPrice;
        maxProfit = max(todayPrice, maxProfit);
    }

    return maxProfit;
}

template<class T>
T BuySellStockOnceVariant(vector<T> &arr) {
    T maxLen = numeric_limits<T>::min();
    T curLen = 1;

    for (size_t index = 1; index < arr.size(); index++) {
        if (arr[index] == arr[index - 1]) {
            curLen++;
            maxLen = max(curLen, maxLen);
        } else {
            curLen = 1;
        }
    }

    return maxLen;
}