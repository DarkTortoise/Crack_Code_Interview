#include <vector>
#include <string>

using namespace std;

bool Inorder(const vector<int> &t, int node, int sum) {
    if (node >= t.size()) {
        return false;
    }

    auto value = sum - t[node];
    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    if (value == 0 and left >= t.size() and right >= t.size())
        return true;

    return Inorder(t, left, value) or Inorder(t, right, value);
}

string Variant(const vector<int> &t, int node, int sum) {
    if (node >= t.size()) {
        return "";
    }

    auto value = sum - t[node];
    auto left = node * 2 + 1;
    auto right = node * 2 + 2;

    if (value == 0 and left >= t.size() and right >= t.size()) {
        string path;

        while ((node - 1) / 2 > 0) {
            path.insert(0, to_string(t[node]));
            node = (node - 1) / 2;
        }
        return path;
    }

    string leftResult = Variant(t, left, value);
    string rightResult = Variant(t, right, value);
    string result;

    if (!leftResult.empty())
        result += leftResult;

    if (!rightResult.empty()) {

    }
}

bool Problem_10_6(const vector<int> &t, int sum) {
    return Inorder(t, 0, sum);
}

string Problem_10_6_Variant(const vector<int> &t, int sum) {
    return Variant(t, 0, sum);
}