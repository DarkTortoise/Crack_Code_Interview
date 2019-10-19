#include <vector>
#include <limits>

using namespace std;

size_t Problem_6_7(const vector<size_t> &arr) {
    vector<size_t> max_profits;
    size_t min_price = numeric_limits<size_t>::max();
    size_t max_profit = 0, max_price = 0;

    for (auto price: arr) {
        min_price = min(min_price, price);
        max_profits.push_back(price - min_price);
    }

    for (auto index = arr.size() - 1; index > 0; index--) {
        max_price = max(max_price, arr[index]);
        max_profit = max(max_profit, max_price - arr[index] + max_profits[index - 1]);
    }

    return max_profit;
}