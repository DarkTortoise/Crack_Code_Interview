#include <vector>
#include <random>
#include <algorithm>

using namespace std;

vector<int> Problem_6_11(vector<int> &arr, size_t k) {
    random_device rd;
    default_random_engine gen(rd());

    for (size_t index = 0; index < k; index++) {
        uniform_int_distribution<> dis(index, k);
        size_t r_index = dis(gen);
        swap(*(arr.begin() + index), *(arr.begin() + r_index));
    }

    vector<int> result;
    copy(arr.begin(), arr.begin() + k, back_inserter(result));

    return result;
}