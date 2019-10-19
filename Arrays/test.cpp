#include <catch2/catch.hpp>
#include <list>

using namespace std;

extern void Problem_6_1(vector<int> &arr, int pivot);

TEST_CASE("6.1") {
    vector<int> a1{0, 1, 2, 0, 2, 1, 1};
    vector<int> r1{0, 0, 2, 2, 1, 1, 1};
    Problem_6_1(a1, 3);
    REQUIRE(a1 == r1);
}