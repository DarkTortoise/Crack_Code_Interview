#include <vector>
#include <unordered_set>
#include <random>

using namespace std;

vector<size_t> Problem_6_13_S1(size_t n) {
    unordered_set<size_t> m;
    vector<size_t> result;
    random_device rd;
    default_random_engine gen(rd());
    uniform_int_distribution<> dis(0, n);

    while (result.size() <= n) {
        size_t number = dis(gen);
        if (m.find(number) == m.end()) {
            m.insert(number);
            result.push_back(number);
        }
    }

    return result;
}

vector<size_t> Problem_6_13_S2(size_t n) {
    vector<size_t> result;

    for (size_t index = 0; index < n; index++) {
        result.push_back(index);
    }

    random_device rd;
    default_random_engine gen(rd());

    for (size_t index = 0; index < n; index++) {
        uniform_int_distribution<> dis(index, n);
        auto r_index = dis(gen);
        swap(result[index], result[r_index]);
    }

    return result;
}