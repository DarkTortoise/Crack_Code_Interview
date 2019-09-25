#include <string>

using namespace std;

string RunLengthEncoding(const string &str) {
    size_t count = 1;
    string result;

    for (auto index = begin(str); index != end(str); index++) {
        if (index != begin(str)) {
            if (*index == *prev(index, 1)) {
                count++;
            } else {
                result += to_string(count) + *prev(index, 1);
                count = 1;
            }
        }
    }

    result += to_string(count) + *prev(end(str), 1);

    return result;
}