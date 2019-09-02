#include <list>

using namespace std;

list<int> Partition(const list<int> &L, int value) {
    list<int> L1{};
    list<int> L2{};

    for (auto &it: L) {
        if (it < value) {
            L1.push_back(it);
        } else if (it > value) {
            L2.push_back(it);
        }
    }

    L1.push_back(value);

    L1.merge(L2);

    return list<int>(move(L1));
}
