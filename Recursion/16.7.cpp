#include <string>
#include <vector>

using namespace std;

bool IsPalindrome(const string &str) {
    size_t begin = 0, end = str.size() - 1;

    while (begin <= end) {
        if (str[begin] != str[end]) {
            return false;
        }
        begin++;
        end--;
    }

    return true;
}

void GetSubstr(const string &str, int offset, vector<string> &substrs, vector<string> &result) {
    if (offset == str.size()) {
        copy(substrs.begin(), substrs.end(), back_inserter(result));
        return;
    }

    for (size_t index = offset + 1; index < str.size(); index++) {
        string substr = str.substr(offset, index - offset);
        if (IsPalindrome(substr)) {
            substrs.emplace_back(substr);
            GetSubstr(str, index, substrs, result);
            substrs.pop_back();
        }
    }
}

vector<string> Problem_16_7(const string &str) {
    vector<string> result;
    vector<string> substr;
    GetSubstr(str, 0, substr, result);
    return result;
}