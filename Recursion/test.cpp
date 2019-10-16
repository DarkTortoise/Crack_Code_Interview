#include <catch2/catch.hpp>
#include <vector>

using namespace std;

extern void Problem_16_3(const vector<int> &arr, vector<vector<int>> &result);

TEST_CASE("16.3") {
    const vector<int> a1{2, 3, 5, 7};
    vector<vector<int>> result{};
    Problem_16_3(a1, result);
    REQUIRE(result.size() == 24);
}