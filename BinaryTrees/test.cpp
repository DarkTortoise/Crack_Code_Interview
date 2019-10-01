#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern bool Problem_10_1(const vector<int> &tree);
extern int Problem_10_1_Variant_2(const vector<int> &tree, int k);
extern size_t Problem_10_3(const vector<int> &t, size_t n1, size_t n2);
extern int Problem_10_5(const vector<int> &t);
extern bool Problem_10_2(const vector<int> &t);
extern vector<int> Problem_10_7(const vector<int> &t);
extern vector<int> Problem_10_8(const vector<int> &t);
extern bool Problem_10_6(const vector<int> &t, int sum);
extern string Problem_10_6_Variant(const vector<int> &t, int sum);
extern int Problem_10_9_O_N(const vector<int> &t, int kth);
extern int Problem_10_10(const vector<int> &t, int node);
extern vector<int> Problem_10_14(const vector<int> &t);

TEST_CASE("test if a tree is height balanced") {
    const vector<int> tree{1, 2, 3, 4, -1, 5, -1, 6, -1};
    REQUIRE(!Problem_10_1(tree));

    const vector<int> t2{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_1(t2));

    REQUIRE(Problem_10_1_Variant_2(tree, 1) == 1);
}

TEST_CASE("test if a tree is a symmetric tree") {
    const vector<int> t{314, 6, 6, -1, 2, 2, -1, -1, -1, -1, 3, 3, -1, -1, -1};
    REQUIRE(Problem_10_2(t));

    const vector<int> t2{314, 6, 6, -1, 561, 2, -1, -1, -1, -1, 3, 1, -1, -1, -1};
    REQUIRE(!Problem_10_2(t2));
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

TEST_CASE("implement an inorder traversal without recursion") {
    const vector<int> t1{1, 2, 3, 4, 5};
    const vector<int> r{4, 2, 5, 1, 3};
    REQUIRE(Problem_10_7(t1) == r);
}

TEST_CASE("implement an preorder traversal without recursion") {
    const vector<int> t1{1, 2, 3, 4, 5};
    const vector<int> r{1, 2, 4, 5, 3};
    REQUIRE(Problem_10_8(t1) == r);
}

TEST_CASE("compute the kth node in an inorder traversal") {
    const vector<int> t1{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_9_O_N(t1, 3) == 4);
}

TEST_CASE("compute the successor") {
    const vector<int> t1{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_10(t1, 4) == 0);
    REQUIRE(Problem_10_10(t1, 3) == 1);
    REQUIRE(Problem_10_10(t1, 1) == 4);
}

TEST_CASE("Form a linked list from the leaves of a binary tree") {
    const vector<int> t1{1, 2, 3, 4, 5};
    const vector<int> r{2, 3, 4};
    REQUIRE(Problem_10_14(t1) == r);
}