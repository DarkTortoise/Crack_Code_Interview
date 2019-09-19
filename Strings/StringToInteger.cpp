#include <string>
#include <cmath>

using namespace std;

int StringToInteger(const string &str) {
    int pos = 0;
    int result = 0;
    int negative = 1;

    for (auto index = str.rbegin(); index != str.rend(); index++) {
        if (*index == '-') {
            negative = -1;
            break;
        }
        result += (*index - '0') * int(pow(10, pos++));
    }

    return result * negative;
}