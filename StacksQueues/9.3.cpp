#include <string>
#include <stack>

using namespace std;

bool IsWellFormed(const string &expr) {
    stack<char> s;

    for (char c: expr) {
        if (c == ')') {
            if (s.empty() and s.top() != '(')
                return false;
            else
                s.pop();
        } else if (c == ']') {
            if (s.empty() and s.top() != '[')
                return false;
            else
                s.pop();
        } else if (c == '}') {
            if (s.empty() and s.top() != '{')
                return false;
            else
                s.pop();
        } else {
            s.push(c);
        }
    }

    return s.empty();
}