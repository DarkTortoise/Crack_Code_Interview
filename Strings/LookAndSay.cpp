#include <string>
#include <vector>

using namespace std;

string LookAndSay(int n) {
    string result = "1";

    for (int index = 0; index < n; index++) {
        string s;
        for (size_t j = 0; j < result.size(); j++) {
            int count = 1;
            while (j + 1 < result.size() and result[j] == result[j + 1]) {
                count++;
                j++;
            }

            s += to_string(count) + result[j];
        }

        result = s;
    }

    return result;
}