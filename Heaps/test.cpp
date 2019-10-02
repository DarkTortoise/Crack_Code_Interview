#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern vector<int> Problem_11_1(const vector<vector<int>> &arr);
extern vector<int> Problem_11_2(const vector<int> &arr);
extern vector<int> Problem_11_3(const vector<int> &arr, int k);
extern vector<int> Problem_11_4(const vector<int> &arr, int k);
extern vector<double> Problem_11_5(const vector<int> &arr);
extern vector<int> Problem_11_7(const vector<int> &arr);

TEST_CASE("merge sorted file") {
    const vector<vector<int>> v4{{3, 5, 7},
                                 {0, 1, 6},
                                 {0, 6, 28}};
    const vector<int> r1{0, 0, 1, 3, 5, 6, 6, 7, 28};

    const vector<vector<int>> v5{{7, 21, 78},
                                 {1, 6,  20},
                                 {5, 28, 64}};
    const vector<int> r2{1, 5, 6, 7, 20, 21, 28, 64, 78};
    REQUIRE(Problem_11_1(v4) == r1);
    REQUIRE(Problem_11_1(v5) == r2);
}

TEST_CASE("sort an increasing-decreasing array") {
    const vector<int> t1{57, 131, 493, 294, 221, 339, 418, 452, 442, 190};
    const vector<int> r1{57, 131, 190, 221, 294, 339, 418, 442, 452, 493};
    REQUIRE(Problem_11_2(t1) == r1);
}

TEST_CASE("sort an almost-sorted array") {
    const vector<int> t1{3, -1, 2, 6, 4, 5, 8};
}

TEST_CASE("compute k cloest starts") {
    const vector<int> stars{5, 2, 3, 1, 4};
    const vector<int> r{2,
                        2,
                        1};
    REQUIRE(Problem_11_4(stars, 3) == r);
}

TEST_CASE("compute the median of online data") {
    const vector<int> a1{1, 0, 3, 5, 2, 0, 1};
    const vector<double> r1{1, 0.5, 1, 2, 2, 1.5, 1};
    REQUIRE(Problem_11_5(a1) == r1);
}

TEST_CASE("implement a stack API using a heap") {
    const vector<int> a1{1, 2, 3, 4, 5};
    REQUIRE(Problem_11_7(a1) == a1);
}