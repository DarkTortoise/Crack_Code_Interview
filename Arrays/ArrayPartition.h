#include <vector>

using namespace std;

template<class T>
vector<T> &ArrayPartition(vector<T> &arr) {
    auto begin = arr.begin();
    auto end = --arr.end();

    while (begin != end) {
        if (*begin % 2 == 0) {
            begin++;
        } else {
            swap(*begin, *end);
            end--;
        }
    }

    return arr;
}