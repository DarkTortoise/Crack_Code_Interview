#include <vector>
#include <string>

using namespace std;

string Problem_18_5(const vector<string> &arr) {
    int count = 0;
    string candidate = arr[0];

    for (size_t index = 0; index < arr.size(); index++) {
        if (arr[index] == candidate) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            candidate = arr[index + 1];
        }
    }

    return candidate;
}