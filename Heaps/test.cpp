#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern vector<int> Problem_11_1(const vector<int> &v1, const vector<int> &v2, const vector<int> &v3);

TEST_CASE("merge sorted file") {
    const vector<int> v1{3, 5, 7};
    const vector<int> v2{0, 1, 6};
    const vector<int> v3{0, 6, 28};
    const vector<int> r{0, 0, 1, 3, 5, 6, 6, 7, 28};

    REQUIRE(Problem_11_1(v1, v2, v3) == r);
}