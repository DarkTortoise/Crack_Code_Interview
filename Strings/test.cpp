#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern int StringToInteger(const string &str);
extern string BaseConversion(const string &n, int base1, int base2);
extern int SpreadSheetColumnEncoding(const string &column);

TEST_CASE("String to Integer") {
    REQUIRE(StringToInteger("10") == 10);
    REQUIRE(StringToInteger("-10") == -10);
}

TEST_CASE("Base Conversion") {
    REQUIRE(BaseConversion("615", 7, 13) == "1A7");
}

TEST_CASE("Computer Spread Sheet Column Encoding") {
    REQUIRE(SpreadSheetColumnEncoding("AA") == 27);
}