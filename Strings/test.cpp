#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern int Problem_7_1(const string &str);

TEST_CASE("7.1") {
    const string s1 = "-123";
    REQUIRE(Problem_7_1(s1) == -123);
}