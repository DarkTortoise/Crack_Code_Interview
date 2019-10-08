#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern bool Problem_13_1(const string &str);
extern bool Problem_13_2(const string &letter, const string &mag);

TEST_CASE("test for palindrimic permutations") {
    REQUIRE(Problem_13_1("edified"));
}

TEST_CASE("IS AN ANONYMOUS LETTER CONSTRUCTIBLE") {
    REQUIRE(Problem_13_2("abcabcdef", "abcabcdefdef"));
}