#include <iostream>
using namespace std;

extern bool is_unique(const char *str);

int main() {
    bool result = is_unique("hello");
    if (result)
        cout << "is unique: true" << endl;

    return 0;
}
