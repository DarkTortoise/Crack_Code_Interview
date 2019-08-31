#include <string>
#include <cstring>

using namespace std;

string stringCompression(const char *str) {
    bool diff = false;
    size_t n_diff = 1;
    size_t diff_pos = 0;
    string result;

    for (size_t index = 0; index < strlen(str);) {
        if (!diff) {
            result += str[index];
            diff = true;
            diff_pos++;
        }

        if (str[index] != str[diff_pos]) {
            diff = false;
            result += to_string(n_diff);
            index = diff_pos;
            n_diff = 1;
        } else if (str[index] == str[diff_pos]) {
            n_diff++;
            diff_pos++;
        }
    }

    bool noDiff = false;
    for (size_t index = 1; index < result.size(); index += 2) {
        noDiff = result[index] == '1';
    }

    return noDiff ? string(str) : result;
}

string stringCompressionV2(const string &str) {
    size_t n_diff = 0;
    string result;
    auto diff_pos = begin(str);

    for (auto it = begin(str); it != end(str);) {
        if (*it != *diff_pos) {
            result += *it;
            result += to_string(n_diff);
            it = diff_pos;
            n_diff = 0;
        } else {
            n_diff++;
            diff_pos++;
        }
    }

    bool noDiff = false;
    for (size_t index = 1; index < result.size(); index += 2) {
        noDiff = result[index] == '1';
    }

    return noDiff ? str : result;
}
