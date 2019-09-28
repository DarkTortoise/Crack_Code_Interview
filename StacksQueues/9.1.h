#ifndef STACKSQUEUES_9_1_H
#define STACKSQUEUES_9_1_H

#include <stack>
#include <limits>

using namespace std;

template<typename T>
class Stack {
    stack<T> s;
    stack<pair<T, int>> max;
    T currentMax;

public:
    Stack();
    void Push(T value);
    void Pop();
    T Top();
    T Max();
};

template<typename T>
Stack<T>::Stack() {
    currentMax = numeric_limits<int>::min();
}

template<typename T>
void Stack<T>::Push(T value) {
    if (value >= currentMax) {
        if (!max.empty()) {
            auto count = max.top().second;
            max.pop();
            max.push(make_pair(value, count + 1));
        } else {
            max.push(make_pair(value, 1));
        }
    }

    s.push(value);
}

template<typename T>
void Stack<T>::Pop() {
    if (s.empty()) {
        return;
    }

    auto topValue = s.top();
    if (!max.empty() and topValue >= max.top().first) {
        auto count = max.top().first;

        if (count > 1) {
            max.pop();
            max.push(topValue, count - 1);
        } else {
            max.pop();
        }
    } else
        return;
}

template<typename T>
T Stack<T>::Top() {
    return s.top();
}

template<typename T>
T Stack<T>::Max() {
    return !max.empty() ? max.top().first : -1;
}

#endif //STACKSQUEUES_9_1_H
