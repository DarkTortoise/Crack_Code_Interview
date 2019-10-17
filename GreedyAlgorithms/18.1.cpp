#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int Problem_18_1(vector<int> &tasks) {
    sort(tasks.begin(), tasks.end());
    size_t begin = 0, end = tasks.size() - 1;
    int maxHours = numeric_limits<int>::min();

    while (begin < end) {
        int hours = tasks[end] + tasks[begin];
        if (hours > maxHours) {
            maxHours = hours;
        }
        begin++, end--;
    }

    return maxHours;
}