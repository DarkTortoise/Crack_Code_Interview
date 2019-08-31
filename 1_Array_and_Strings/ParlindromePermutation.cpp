#include <cstddef>
#include <cstring>

bool ParPermutation(const char *str) {
    size_t length = strlen(str);
    int table[52]{0};

    for (size_t index = 0; index < length; index++) {
        size_t pos = str[index] - 'A';
        table[pos]++;
    }

    bool onlyOneCount = false;

    for (int count : table) {
        if (count % 2 != 0) {
            if (length % 2 == 0)
                return false;
            else {
                if (onlyOneCount)
                    return false;
                else
                    onlyOneCount = true;
            }
        }
    }

    return true;
}
