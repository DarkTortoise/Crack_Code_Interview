#include <string>
#include <stack>

using namespace std;

string ReverseAllWords(const string &str) {
    string word;
    stack<string> words{};

    for (auto c: str) {
        if (c != ' ') {
            word.push_back(c);
        } else {
            words.push(word);
            word = "";
        }
    }

    words.push(word);

    string result;
    while (!words.empty()) {
        const string w = words.top();
        result.append(w);
        words.pop();

        if (!words.empty()) {
            result += ' ';
        }
    }

    return result;
}