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

string IntToShortestRoman(int n) {
    map<char, int> romanToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    string result;

    while (n) {
        if (n / romanToInt['M'] >= 1) {
            result.push_back('M');
            n %= romanToInt['M'];
        } else if (n / romanToInt['D'] >= 1) {
            result.push_back('D');
            n %= romanToInt['D'];
        } else if (n / romanToInt['C'] >= 1) {
            result.push_back('C');
            n %= romanToInt['C'];
        } else if (n / romanToInt['L'] >= 1) {
            result.push_back('L');
            n %= romanToInt['L'];
        } else if (n / romanToInt['X'] >= 1) {
            result.push_back('X');
            n %= romanToInt['X'];
        } else if (n / romanToInt['V'] >= 1) {
            if (n == 6) {
                result.append("VI");
                break;
            } else if (n == 7) {
                result.append("VII");
                break;
            } else if (n == 8) {
                result.append("IIX");
                break;
            } else if (n == 9) {
                result.append("IX");
                break;
            }
        } else if (n == 4) {
            result.append("IV");
            break;
        } else if (n == 3) {
            result.append("IIV");
            break;
        } else if (n == 1) {
            result.push_back('I');
            break;
        } else if (n == 2) {
            result.append("II");
            break;
        }
    }

    return result;
}