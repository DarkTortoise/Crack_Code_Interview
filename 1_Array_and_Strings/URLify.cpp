#include <string>

using namespace std;

string URLify(const char *str, size_t size) {
    size_t n_spaces = 0, n_chars = 0;

    for (size_t index = 0; index < size; index++) {
        if (isspace(str[index]))
            n_spaces++;
        else
            n_chars++;
    }

    size_t length = n_chars + n_spaces;
    string urlStr(length, ' ');

    for (size_t index = 0, urlIndex = 0; index < size; index++) {
        if (isspace(str[index])) {
            urlStr[urlIndex++] = '%';
            urlStr[urlIndex++] = '2';
            urlStr[urlIndex++] = '0';
        } else {
            urlStr[urlIndex++] = str[index];
        }
    }

    return urlStr;
}