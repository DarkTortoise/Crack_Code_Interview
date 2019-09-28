#ifndef STACKSQUEUES_9_8_H
#define STACKSQUEUES_9_8_H

#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
class Queue {
    vector<T> arr;
    size_t head, tail;
    size_t nElements;
public:
    explicit Queue(size_t initSize);
    void Push(T value);
    T Pop();
};

template<typename T>
Queue<T>::Queue(size_t initSize): arr(initSize), head(0), tail(0), nElements(0) {

}

template<typename T>
void Queue<T>::Push(T value) {
    if (nElements == arr.size()) {
        rotate(arr.begin(), arr.begin() + head, arr.end());
        arr.resize(arr.size() * 2);
    } else {
        arr[tail] = value;
        tail = (tail + 1) % arr.size();
        nElements++;
    }
}

template<typename T>
T Queue<T>::Pop() {
    if (nElements) {
        auto e = arr[head];
        head = (head + 1) % arr.size();
        nElements--;
        return e;
    }
}

#endif //STACKSQUEUES_9_8_H
