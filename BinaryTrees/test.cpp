#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern bool Problem_10_1(const vector<int> &tree);
extern int Problem_10_1_Variant_2(const vector<int> &tree, int k);
extern size_t Problem_10_3(const vector<int> &t, size_t n1, size_t n2);
extern int Problem_10_5(const vector<int> &t);
extern bool Problem_10_6(const vector<int> &t, int sum);
extern string Problem_10_6_Variant(const vector<int> &t, int sum);

TEST_CASE("test if a tree is height balanced") {
    const vector<int> tree{1, 2, 3, 4, -1, 5, -1, 6, -1};
    REQUIRE(!Problem_10_1(tree));

    const vector<int> t2{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_1(t2));

    REQUIRE(Problem_10_1_Variant_2(tree, 1) == 1);
}

TEST_CASE("compute the lowest common ancestor in a binary tree") {
    const vector<int> t{0, 1, 2, 3, 4};

    REQUIRE(Problem_10_3(t, 3, 4) == 1);
    REQUIRE(Problem_10_3(t, 4, 2) == 0);
}

TEST_CASE("sum the root-to-leaf in a binary tree") {
    const vector<int> t1{1, 0, 0, 1, 0, -1, -1, -1, -1, 1, -1};
    REQUIRE(Problem_10_5(t1) == 16);
}

TEST_CASE("find a root to leaf path with the specified sum") {
    const vector<int> t1{1, 2, 3, 4, 7, 8, 5, 6};

    REQUIRE(Problem_10_6(t1, 10));
    REQUIRE(!Problem_10_6(t1, 5));
    REQUIRE(Problem_10_6_Variant(t1, 10) == "145");
}