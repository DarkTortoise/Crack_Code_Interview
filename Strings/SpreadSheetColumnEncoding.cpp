#include <string>
#include <cmath>

using namespace std;

int SpreadSheetColumnEncoding(const string &column) {
    int mapping[26] = {};

    for (int index = 'A'; index <= 'Z'; index++) {
        mapping[index - 'A'] = index - 'A' + 1;
    }

    int result = 0;
    int pos = 0;

    for (auto index = column.rbegin(); index != column.rend(); index++) {
        result += mapping[*index - 'A'] * int(pow(26, pos++));
    }

    return result;
}