#include <unordered_map>
#include <vector>
#include <limits>

using namespace std;

pair<size_t, size_t> Problem_13_8(const vector<string> &arr, const vector<string> &subarr) {
    size_t nextIndex = 0, lastBegin = 0, lastEnd = 0;
    size_t begin = 0, end = 0;
    size_t minDis = numeric_limits<int>::max();

    for (size_t index = 0; index < arr.size(); index++) {
        string value = arr[index];
        string nextValue = subarr[nextIndex];

        if (value == nextValue) {
            if (nextIndex % subarr.size() == 0) {
                begin = index;
            } else if (nextIndex % subarr.size() == subarr.size() - 1) {
                end = index;

                if (end - begin < minDis) {
                    minDis = end - begin + 1;
                    lastBegin = begin;
                    lastEnd = end;
                }
            }

            nextIndex = (nextIndex + 1) % subarr.size();
        }
    }

    return make_pair(lastBegin, lastEnd);
}