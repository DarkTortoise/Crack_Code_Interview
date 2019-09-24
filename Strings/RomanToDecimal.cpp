#include <string>
#include <map>

using namespace std;

int RomanToDecimal(const string &roman) {
    map<char, int> romanToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    int result = 0;
    int prev = 0;

    for (auto index = roman.crbegin(); index != roman.crend(); index++) {
        if (romanToInt[*index] < prev) {
            result -= romanToInt[*index];
        } else {
            result += romanToInt[*index];
        }

        prev = romanToInt[*index];
    }

    return result;
}

bool IsValidRoman(const string &roman) {
    map<char, int> romanToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };
    char prev = 'I';

    for (auto index = roman.crbegin(); index != roman.crend(); index++) {
        if (romanToInt[*index] < romanToInt[prev]) {
            if ((prev == 'V' or prev == 'X') and (*index != 'I'))
                return false;
            else if ((prev == 'L' or prev == 'C') and (*index != 'X'))
                return false;
            else if ((prev == 'D' or prev == 'M') and (*index != 'C'))
                return false;
        }

        prev = *index;
    }

    return true;
}