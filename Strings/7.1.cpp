#include <string>
#include <cmath>

using namespace std;

int Problem_7_1(const string &str) {
    int pos = 0, result = 0, is_pos = 1;

    for (auto iter = str.rbegin(); iter != str.rend(); iter++) {
        if (*iter == '-') {
            is_pos = -1;
            break;
        }

        int n = *iter - '0';
        result += n * (int) pow(10, pos++);
    }

    return result * is_pos;
}