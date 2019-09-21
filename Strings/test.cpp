#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern int StringToInteger(const string &str);

extern string BaseConversion(const string n, int base1, int base2);

TEST_CASE("String to Integer") {
    REQUIRE(StringToInteger("10") == 10);
    REQUIRE(StringToInteger("-10") == -10);
}

TEST_CASE("Base Conversion") {
    REQUIRE(BaseConversion("615", 7, 13) == "1A7");
}