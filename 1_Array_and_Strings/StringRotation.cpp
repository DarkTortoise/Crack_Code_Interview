#include <string>
#include <algorithm>

using namespace std;

bool StringRotation(const string &str1, const string &str2) {
    string xyxy = str1 + str1;

    return search(begin(xyxy), end(xyxy), begin(str2), end(str2)) != end(xyxy);
}