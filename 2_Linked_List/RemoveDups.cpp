#include <list>
#include <set>

using namespace std;

// Space complexity: O(N)
list<int> &RemoveDups(list<int> &L) {
    set<int> keys{};

    for (auto index = begin(L); index != end(L);) {
        if (keys.find(*index) == end(keys)) {
            keys.insert(*index);
            index++;
        } else {
            index = L.erase(index);
        }
    }

    return L;
}

// Space complexity: O(1)
list<int> &RemoveDupsV2(list<int> &L) {
    auto index = begin(L);
    auto ptr = begin(L);

    while (index != end(L) && ptr != end(L)) {
        if (index != ptr && *index == *ptr) {
            ptr = L.erase(ptr);
        } else {
            index = ptr;
            ptr++;
        }
    }

    return L;
}
