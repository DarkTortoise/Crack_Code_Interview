#include <catch2/catch.hpp>
#include <vector>

using namespace std;

extern int Problem_18_1(vector<int> &tasks);

TEST_CASE("18.1") {
    vector<int> a1{5, 2, 1, 6, 4, 4};
    REQUIRE(Problem_18_1(a1) == 8);
}