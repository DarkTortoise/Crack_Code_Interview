#include <string>
#include <vector>

using namespace std;

vector<string> ValidateIPAddress(const string &ip) {
    vector<string> result{};

    for (size_t i = 0; i < ip.size(); i++) {
        string ip1, ip2, ip3, ip4;
        ip1 = ip.substr(0, i + 1);
        if (stoi(ip1) >= 0 and stoi(ip1) <= 255) {
            for (size_t j = i + 1; j < ip.size(); j++) {
                ip2 = ip.substr(i, j - i);
                if (stoi(ip2) >= 0 and stoi(ip2) <= 255) {
                    for (size_t k = j + 1; k < ip.size(); k++) {
                        ip3 = ip.substr(j, k - j);
                        ip4 = ip.substr(k);

                        if (stoi(ip3) >= 0 and stoi(ip3) <= 255 and stoi(ip4) >= 0 and stoi(ip4) <= 255) {
                            string ipaddr = ip1 + '.' + ip2 + '.' + ip3 + '.' + ip4;
                            result.push_back(ipaddr);
                        }
                    }
                }
            }
        }
    }

    return result;
}