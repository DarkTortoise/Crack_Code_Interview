#ifndef STACKSQUEUES_8_2_H
#define STACKSQUEUES_8_2_H

#include <stack>
#include <string>

using namespace std;

template<typename T>
T RPN(const string &expr) {
    stack<T> ops;

    for (char index : expr) {
        if (isdigit(index)) {
            ops.push(index - '0');
        } else if (ispunct(index) and index != ',') {
            auto left = ops.top();
            ops.pop();
            auto right = ops.top();
            ops.pop();

            if (index == '+') {
                ops.push(left + right);
            } else if (index == '-') {
                ops.push(left - right);
            } else if (index == '*') {
                ops.push(left * right);
            } else if (index == '/') {
                ops.push(left / right);
            }
        }
    }

    return ops.top();
}

#endif //STACKSQUEUES_8_2_H
