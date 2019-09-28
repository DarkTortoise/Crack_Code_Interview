#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern bool Problem_10_1(const vector<int> &tree);

TEST_CASE("test if a tree is height balanced") {
    const vector<int> tree{1, 2, 3, 4, -1, 5, -1, 6, -1};
    REQUIRE(!Problem_10_1(tree));

    const vector<int> t2{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_1(t2));
}