#include <unordered_map>
#include <vector>
#include <limits>

using namespace std;

int Problem_13_6(const vector<string> &arr) {
    unordered_map<string, size_t> pos{};
    int minDis = numeric_limits<int>::max();

    for (size_t index = 0; index < arr.size(); index++) {
        string value = arr[index];
        if (pos.find(value) == pos.end()) {
            pos.insert({value, index});
        } else if (index - pos[value] < minDis) {
            minDis = index - pos[value];
        }

        pos.insert_or_assign(value, index);
    }

    return minDis;
}