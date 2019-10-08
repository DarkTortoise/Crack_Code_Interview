#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern bool Problem_13_1(const string &str);

TEST_CASE("test for palindrimic permutations") {
    REQUIRE(Problem_13_1("edified"));
}