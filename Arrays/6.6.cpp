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

size_t Problem_6_6_Variant(const vector<int> &arr) {
    auto p1 = arr.begin(), p2 = arr.begin() + 1;
    size_t max_length = 1;

    while (p2 != arr.end()) {
        if (*p1 == *p2) {
            p2++;
        } else {
            if (distance(p1, p2) > max_length) {
                max_length = distance(p1, p2);
                p1 = p2, p2++;
            } else
                p1++, p2++;
        }
    }

    return max_length;
}