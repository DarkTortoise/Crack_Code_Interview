#include <list>
#include <set>

using namespace std;

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
