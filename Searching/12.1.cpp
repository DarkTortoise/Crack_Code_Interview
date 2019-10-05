#include <vector>

using namespace std;

size_t Problem_12_1(const vector<int> &arr, int k) {
    for (size_t index = 0; index < arr.size(); index++) {
        if (arr[index] == k) {
            return index;
        }
    }
}