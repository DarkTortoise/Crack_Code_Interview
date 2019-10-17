#include <catch2/catch.hpp>
#include <vector>

using namespace std;

extern int Problem_18_1(vector<int> &tasks);
extern int Problem_18_2(vector<int> &arr);
extern vector<int> Problem_18_3(vector<pair<int, int>> &intervals);
extern vector<size_t> Problem_18_4(vector<size_t> &arr, int sum);

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
    vector<size_t> result{5, 5, 11};
    REQUIRE(Problem_18_4(a1, 21) == result);
}