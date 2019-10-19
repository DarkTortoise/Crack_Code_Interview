#include <vector>
#include <limits>

using namespace std;

size_t Problem_6_6(const vector<size_t> &arr) {
    size_t min_price = numeric_limits<size_t>::max();
    size_t max_profit = numeric_limits<size_t>::min();

    for (unsigned long index : arr) {
        min_price = min(min_price, index);
        max_profit = max(max_profit, index - min_price);
    }

    return max_profit;
}