#include <list>

using namespace std;

int KthElementToLast(const list<int> &L, unsigned int k) {
    auto index = begin(L);
    auto kth = begin(L);
    advance(kth, k);

    for (; kth != end(L);) {
        index++;
        kth++;
    }

    return *index;
}
