#include <list>

using namespace std;

void DeleteMiddleNode(list<int> &L, list<int>::iterator it) {
    *it = *(next(it));
    L.erase(next(it));
}
