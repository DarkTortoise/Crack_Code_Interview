#include <cstring>

bool IsUnique(const char *str) {
    bool table[52] {false};

    for (size_t index = 0; index < strlen(str); index++) {
        int pos = str[index] - 'A';

        if (table[pos])
            return false;
        else {
            table[pos] = true;
        }
    }

    return true;
}