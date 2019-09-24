#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern int StringToInteger(const string &str);
extern string BaseConversion(const string &n, int base1, int base2);
extern int SpreadSheetColumnEncoding(const string &column);
extern bool TestPalindromicity(const string &str);
extern string ReverseAllWords(const string &str);
extern vector<string> PhoneNumberMnemonics(const string &digits);
extern string LookAndSay(int n);

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

TEST_CASE("Test Palindromicity") {
    REQUIRE(TestPalindromicity("abccba"));
    REQUIRE(!TestPalindromicity("abcdef"));
}

TEST_CASE("Reverse All Words in a Sentence") {
    REQUIRE(ReverseAllWords("Apple Origin Banana") == "Banana Origin Apple");
}

TEST_CASE("Computer all mnemonics for a phone number") {
    REQUIRE(PhoneNumberMnemonics("2276696").size() == 3888);
}

TEST_CASE("Look and say problem") {
    REQUIRE(LookAndSay(3) == "1211");
    REQUIRE(LookAndSay(2) == "21");
    REQUIRE(LookAndSay(4) == "111221");
}