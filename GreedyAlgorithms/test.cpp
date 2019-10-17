#include <catch2/catch.hpp>
#include <vector>

using namespace std;

extern int Problem_18_1(vector<int> &tasks);
extern int Problem_18_2(vector<int> &arr);
extern vector<int> Problem_18_3(vector<pair<int, int>> &intervals);
extern vector<size_t> Problem_18_4(vector<size_t> &arr, int sum);
extern vector<int> Problem_18_4_Variant(vector<int> &arr, int T);
extern string Problem_18_5(const vector<string> &arr);

TEST_CASE("18.1") {
    vector<int> a1{5, 2, 1, 6, 4, 4};
    REQUIRE(Problem_18_1(a1) == 8);
}

TEST_CASE("18.2") {
    vector<int> a1{2, 5, 1, 3};
    REQUIRE(Problem_18_2(a1) == 10);
}

TEST_CASE("18.3") {
    vector<pair<int, int>> a1{make_pair(1, 2), make_pair(2, 3), make_pair(3, 4),
                              make_pair(2, 3), make_pair(3, 4), make_pair(4, 5)};
    vector<int> result{2, 4};
    REQUIRE(Problem_18_3(a1) == result);
}

TEST_CASE("18.4") {
    vector<size_t> a1{11, 2, 5, 7, 3};
    vector<size_t> result{3, 7, 11};
    REQUIRE(Problem_18_4(a1, 21) == result);

    vector<size_t> a2{5, 2, 3, 4, 3};
    vector<size_t> r2{2, 3, 4};
    vector<int> a3{5, 2, 3, 4, 3};
    vector<int> r3{2, 4, 5};
    REQUIRE(Problem_18_4(a2, 9) == r2);
    REQUIRE(Problem_18_4_Variant(a3, 12) == r3);
}

TEST_CASE("18.5") {
    const vector<string> a1{"b", "a", "c", "a", "a", "b", "a", "a", "c", "a"};
    REQUIRE(Problem_18_5(a1) == "a");
}