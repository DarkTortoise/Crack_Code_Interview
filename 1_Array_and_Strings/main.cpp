#include <iostream>
using namespace std;

extern bool is_unique(const char *str);
extern bool checkPermutation(const char *str1, const char *str2);

int main() {
    bool result = checkPermutation("hello", "olleh");

    if (result)
        cout << "check permutation: true" << endl;
    return 0;
}
