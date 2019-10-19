#include <vector>
#include <algorithm>

using namespace std;

bool Problem_6_4(const vector<int> &arr) {
    size_t far = 0;
    for (size_t index = 0; index < arr.size() && index <= far; index++) {
        far = max(far, arr[index] + index);
        if (far >= arr.size()) {
            return true;
        }
    }

    return false;
}

size_t Problem_6_4_Variant(const vector<int> &arr) {
    size_t count = 0, far = 0;
    for (size_t index = 0; index < arr.size() && index <= far; index++) {
        if (arr[index] + index > far) {
            far = arr[index] + index;
            count++;
        }

        if (far >= arr.size() - 1) {
            break;
        }
    }

    return count;
}