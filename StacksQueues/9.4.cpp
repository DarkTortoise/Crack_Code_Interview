#include <vector>
#include <string>

using namespace std;

string NormalizePathname(const string &path) {
    vector<string> p;

    size_t nextToken = 0;

    for (size_t index = 0; index < path.size(); index++) {
        if (index == 0 and path[index] == '/') {
            p.emplace_back("/");
            nextToken = 1;
        }

        if (index != 0 and path[index] == '/') {
            string token = path.substr(nextToken, index - nextToken);

            if (token == "..") {
                if (!p.empty() and p.back() != "/'") {
                    p.pop_back();
                }
            } else if (token.empty() or token != ".")
                p.push_back(token);

            nextToken = min(index + 1, path.size() - 1);
        }
    }

    string result;

    for (string &str: p) {
        if (str != "/")
            result += str + "/";
        else
            result += str;
    }

    return result;
}