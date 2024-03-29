#include <catch2/catch.hpp>
#include <list>

using namespace std;

extern void Problem_6_1(vector<int> &arr, int pivot);
extern void Problem_6_1_Variant_1(vector<int> &arr, int k1, int k2, int k3);
extern void Problem_6_1_Variant_2(vector<int> &arr, int k1, int k2, int k3, int k4);
extern void Problem_6_1_Variant_3(vector<bool> &arr);
extern void Problem_6_1_Variant_4(vector<bool> &arr);
extern vector<int> Problem_6_2(const vector<int> &arr);
extern string Problem_6_2_Varaint(const string &a, const string &b);
extern bool Problem_6_4(const vector<int> &arr);
extern size_t Problem_6_4_Variant(const vector<int> &arr);
extern void Problem_6_5(vector<int> &arr);
extern size_t Problem_6_5_Varaint_1(vector<int> &arr, int key);
extern void Problem_6_5_Variant_2(vector<int> &arr, int m);
extern size_t Problem_6_6(const vector<size_t> &arr);
extern size_t Problem_6_6_Variant(const vector<int> &arr);
extern size_t Problem_6_7(const vector<size_t> &arr);
extern vector<int> Problem_6_11(vector<int> &arr, size_t k);
extern bool Problem_6_16(const vector<vector<int>> &arr);
extern vector<int> Problem_6_17(const vector<vector<int>> &arr);
extern vector<vector<int>> Problem_6_17_Variant_1(int d);
extern int Problem_6_17_Variant_2(const vector<vector<int>> &arr);
extern void Problem_6_18(vector<vector<int>> &arr);

TEST_CASE("6.1") {
    vector<int> a1{0, 1, 2, 0, 2, 1, 1};
    vector<int> r1{0, 0, 2, 2, 1, 1, 1};
    Problem_6_1(a1, 3);
    REQUIRE(a1 == r1);

    vector<int> a2{0, 1, 2, 0, 2, 1, 1};
    vector<int> r2{0, 0, 1, 1, 1, 2, 2};
    Problem_6_1_Variant_1(a2, 0, 1, 2);
    REQUIRE(a2 == r2);

    vector<int> a3{2, 2, 3, 3, 1, 1, 1, 4, 4};
    vector<int> r3{1, 1, 1, 2, 2, 3, 3, 4, 4};
    Problem_6_1_Variant_2(a3, 1, 2, 3, 4);
    REQUIRE(a3 == r3);

    vector<bool> a4{true, false, false, true};
    vector<bool> r4{false, false, true, true};
    Problem_6_1_Variant_3(a4);
    REQUIRE(a4 == r4);

    vector<bool> a5{true, false, true, false, false, true};
    vector<bool> r5{false, false, false, true, true, true};
    Problem_6_1_Variant_4(a5);
    REQUIRE(a5 == r5);
}

TEST_CASE("6.2") {
    const vector<int> a1{9, 9, 9};
    const vector<int> r1{1, 0, 0, 0};
    REQUIRE(Problem_6_2(a1) == r1);

    const string a = "999";
    const string b = "999";
    REQUIRE(Problem_6_2_Varaint(a, b) == "1998");
}

TEST_CASE("6.4") {
    const vector<int> a1{3, 2, 0, 0, 2, 0, 1};
    REQUIRE(!Problem_6_4(a1));

    const vector<int> a2{3, 3, 1, 0, 2, 0, 1};
    REQUIRE(Problem_6_4_Variant(a2) == 3);
}

TEST_CASE("6.5") {
    vector<int> a1{2, 3, 5, 5, 7, 11, 11, 11, 13};
    vector<int> r1{2, 3, 5, 7, 11, 13, 0, 0, 0};
    Problem_6_5(a1);
    REQUIRE(a1 == r1);

    vector<int> a2{2, 3, 5, 5, 7, 11, 11, 11, 13};
    REQUIRE(Problem_6_5_Varaint_1(a2, 5) == 7);

    vector<int> a3{2, 3, 5, 5, 7, 11, 11, 11, 13};
    vector<int> r3{2, 3, 5, 5, 7, 11, 11, 13, 13};
    Problem_6_5_Variant_2(a3, 3);
    REQUIRE(a3 == r3);
}

TEST_CASE("6.6") {
    const vector<size_t> a1{310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    REQUIRE(Problem_6_6(a1) == 30);

    const vector<int> a2{1, 1, 1, 2, 2, 2, 2, 2, 3, 3};
    REQUIRE(Problem_6_6_Variant(a2) == 5);
}

TEST_CASE("6.7") {
    const vector<size_t> a1{12, 11, 13, 9, 12, 8, 14, 13, 15};
    REQUIRE(Problem_6_7(a1) == 10);
}

TEST_CASE("6.11") {
    vector<int> a1{3, 7, 5, 11};
    REQUIRE(Problem_6_11(a1, 3).size() == 3);
}

TEST_CASE("6.16") {
    const vector<vector<int>> a1{
            {5, 3, 4, 6, 7, 8, 9, 1, 2},
            {6, 7, 2, 1, 9, 5, 3, 4, 8},
            {1, 9, 8, 3, 4, 2, 5, 6, 7},
            {8, 5, 9, 7, 6, 1, 4, 2, 3},
            {4, 2, 6, 8, 5, 3, 7, 9, 1},
            {7, 1, 3, 9, 2, 4, 8, 5, 6},
            {9, 6, 1, 5, 3, 7, 2, 8, 4},
            {2, 8, 7, 4, 1, 9, 6, 3, 5},
            {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    REQUIRE(Problem_6_16(a1));
}

TEST_CASE("6.17") {
    const vector<vector<int>> a1{
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9,  10, 11, 12},
            {13, 14, 15, 16}
    };

    vector<int> result{1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10};
    REQUIRE(Problem_6_17(a1) == result);

    const vector<vector<int>> a2{
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    vector<int> r2{1, 2, 3, 6, 9, 8, 7, 4, 5};
    REQUIRE(Problem_6_17(a2) == r2);

    vector<vector<int>> r3{
            {1, 2, 3},
            {8, 9, 4},
            {7, 6, 5}
    };
    REQUIRE(Problem_6_17_Variant_1(3) == r3);
    REQUIRE(Problem_6_17_Variant_2(a1) == 10);
    REQUIRE(Problem_6_17_Variant_2(a2) == 5);
}

TEST_CASE("6.18") {
    vector<vector<int>> a1{
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9,  10, 11, 12},
            {13, 14, 15, 16}
    };
    vector<vector<int>> r1 = {
            {13, 9,  5, 1},
            {14, 10, 6, 2},
            {15, 11, 7, 3},
            {16, 12, 8, 4}
    };
    Problem_6_18(a1);
    REQUIRE(a1 == r1);
}