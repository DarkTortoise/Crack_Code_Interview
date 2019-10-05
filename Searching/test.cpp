#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern size_t Problem_12_1(const vector<int> &arr, int k);
extern size_t Problem_12_1_Binary_Search(const vector<int> &arr, int k);
extern size_t Problem_12_1_Variant_1(const vector<int> &arr, int k);
extern size_t Problem_12_1_Variant_2(const vector<int> &arr);

TEST_CASE("SEARCH A SORTED ARRAY FOR FIRST OCCURRENCE OF K") {
    const vector<int> a1{-14, -10, 2, 108, 108, 243, 285, 285, 285, 401};
    REQUIRE(Problem_12_1(a1, 108) == 3);
    REQUIRE(Problem_12_1_Binary_Search(a1, 108) == 3);
    REQUIRE(Problem_12_1_Binary_Search(a1, 108) == 3);
    REQUIRE(Problem_12_1_Variant_1(a1, 285) == 9);

    const vector<int> a2{5, 4, 3, 2, 1, 2};
    const vector<int> a3{5, 4, 3, 2, 1, 1, 2, 3, 4, 5};
    REQUIRE(Problem_12_1_Variant_2(a2) == 4);
    REQUIRE(Problem_12_1_Variant_2(a3) == 4);
}