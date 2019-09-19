#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern int StringToInteger(const string &str);

TEST_CASE("String to Integer") {
    REQUIRE(StringToInteger("10") == 10);
    REQUIRE(StringToInteger("-10") == -10);
}
