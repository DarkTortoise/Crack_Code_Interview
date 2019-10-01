#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern vector<int> Problem_11_1(const vector<int> &v1, const vector<int> &v2, const vector<int> &v3);
extern vector<int> Problem_11_1(const vector<vector<int>> &arr);

TEST_CASE("merge sorted file") {
    const vector<vector<int>> v4{{3, 5, 7},
                                 {0, 1, 6},
                                 {0, 6, 28}};
    const vector<int> r1{0, 0, 1, 3, 5, 6, 6, 7, 28};
    REQUIRE(Problem_11_1(v4) == r1);
}