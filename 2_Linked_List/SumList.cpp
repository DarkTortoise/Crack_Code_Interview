#include <list>
#include <cmath>

using namespace std;

int SumList(list<int> &L1, list<int> &L2) {
    size_t len1 = L1.size();
    size_t len2 = L2.size();
    list<int> sum{};

    if (len1 < len2) {
        L1.insert(L1.begin(), len2 - len1, 0);
    } else if (len1 > len2) {
        L2.insert(L2.begin(), len1 - len2, 0);
    }

    unsigned int overflow = 0;

    auto index1 = L1.begin();
    auto index2 = L2.begin();

    while (index1 != L1.end() && index2 != L2.end()) {
        unsigned int result = *index1 + *index2 + overflow;
        overflow = int(result / 10);

        sum.push_back(result % 10);
        index1++;
        index2++;
    }

    if (overflow != 0) {
        sum.push_back(overflow);
    }

    int finalResult = 0;
    size_t pos = 0;

    for (auto &it: sum) {
        finalResult += it * int(pow(10, pos));
        pos++;
    }

    return finalResult;
}
