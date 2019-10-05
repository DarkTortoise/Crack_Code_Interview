#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern size_t Problem_12_1(const vector<int> &arr, int k);
extern size_t Problem_12_1_Binary_Search(const vector<int> &arr, int k);
extern size_t Problem_12_1_Variant_1(const vector<int> &arr, int k);
extern size_t Problem_12_1_Variant_2(const vector<int> &arr);
extern pair<int, int> Problem_12_1_Variant_3(const vector<int> &arr, int k);
extern bool Problem_12_1_Variant_4(const vector<string> &arr, const string &p);
extern int Problem_12_2(const vector<int> &arr);
extern int Problem_12_2_Variant_1(const vector<int> &arr);
extern int Problem_12_3(const vector<int> &arr);
extern int Problem_12_3_Variant_1(const vector<int> &arr);

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

    const vector<int> a4{1, 2, 2, 4, 4, 4, 7, 11, 11, 13};
    REQUIRE(Problem_12_1_Variant_3(a4, 11) == make_pair(7, 8));

    const vector<string> a5{"abae", "abbe", "abce", "abde", "abee"};
    REQUIRE(Problem_12_1_Variant_4(a5, "abc"));
}

TEST_CASE("SEARCH A SORTED ARRAY FOR ENTRY EQAUL TO ITS INDEX") {
    const vector<int> a1{-2, 0, 2, 3, 6, 7, 9};
    REQUIRE(Problem_12_2(a1) == 3);

    const vector<int> a3{-2, 0, 2, 2, 2, 2, 2};
    REQUIRE(Problem_12_2_Variant_1(a3) == 2);
}

TEST_CASE("SEARCH A CYCLICALLY SORTED ARRAY") {
    const vector<int> a1{378, 478, 550, 631, 103, 203, 220, 234, 279, 368};
    REQUIRE(Problem_12_3(a1) == 4);

    const vector<int> a2{1, 2, 3, 4, 2, 1};
    const vector<int> a3{1, 2, 3, 2, 1};
    REQUIRE(Problem_12_3_Variant_1(a2) == 3);
    REQUIRE(Problem_12_3_Variant_1(a3) == 2);
}