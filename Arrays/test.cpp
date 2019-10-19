#include <catch2/catch.hpp>
#include <list>

using namespace std;

extern void Problem_6_1(vector<int> &arr, int pivot);
extern void Problem_6_1_Variant(vector<int> &arr, int k1, int k2, int k3);

TEST_CASE("6.1") {
    vector<int> a1{0, 1, 2, 0, 2, 1, 1};
    vector<int> r1{0, 0, 2, 2, 1, 1, 1};
    Problem_6_1(a1, 3);
    REQUIRE(a1 == r1);

    vector<int> a2{0, 1, 2, 0, 2, 1, 1};
    vector<int> r2{0, 0, 1, 1, 1, 2, 2};
    Problem_6_1_Variant(a2, 0, 1, 2);
    REQUIRE(a2 == r2);
}