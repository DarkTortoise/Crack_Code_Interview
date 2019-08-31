#include <cstddef>
#include <cstring>

bool oneReplace(const char *str1, const char *str2) {
    size_t nDiffs = 0;

    for (size_t index = 0; index < strlen(str1); index++) {
        if (str1[index] != str2[index])
            nDiffs++;
    }

    return nDiffs == 1;
}

bool oneEdit(const char *str1, const char *str2) {
    bool diff = false;

    for (size_t index1 = 0, index2 = 0; index1 < strlen(str1);) {
        if (str1[index1] != str2[index2]) {
            if (diff)
                return false;

            index1++;
            diff = true;
        }

        index1++;
        index2 = index2 >= strlen(str2) - 1 ? strlen(str2) - 1 : index2 + 1;
    }

    return diff;
}

bool OneAway(const char *str1, const char *str2) {
    if (strlen(str1) == strlen(str2))
        return oneReplace(str1, str2);
    else if (strlen(str1) == strlen(str2) + 1)
        return oneEdit(str1, str2);
    else if (strlen(str1) + 1 == strlen(str2))
        return oneEdit(str2, str1);
    else
        return false;
}
