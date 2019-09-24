#include <string>
#include <vector>

using namespace std;

const string nMap[]{
        "", "",
        "ABC", "DEF", "GHI", "JKL", "MNO",
        "PQRS", "TUV", "WXYZ"
};

void PhoneNumberMnemonicsHelper(const string &digits, int digit, string &partial, vector<string> &mnemonics) {
    if (digit == digits.size()) {
        mnemonics.push_back(partial);
    } else {
        for (auto c: nMap[digits[digit] - '0']) {
            partial[digit] = c;
            PhoneNumberMnemonicsHelper(digits, digit + 1, partial, mnemonics);
        }
    }
}

vector<string> PhoneNumberMnemonics(const string &digits) {
    string partialMnemoic(digits.size(), ' ');
    vector<string> mnemonics{};

    PhoneNumberMnemonicsHelper(digits, 0, partialMnemoic, mnemonics);

    return mnemonics;
}