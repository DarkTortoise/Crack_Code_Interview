#include <cstddef>
#include <cstring>

bool CheckPermutation(const char *str1, const char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    if (len1 != len2)
        return false;

    bool table[52]{false};

    for (size_t index = 0; index < len1; index++) {
        table[str1[index] - 'A'] = true;
    }

    for (size_t index = 0; index < len2; index++) {
        table[str2[index] - 'A'] = false;
    }

    for (bool index : table) {
        if (index)
            return false;
    }

    return true;
}