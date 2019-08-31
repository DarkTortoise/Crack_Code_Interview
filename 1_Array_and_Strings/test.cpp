#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern bool IsUnique(const char *str);
extern bool CheckPermutation(const char *str1, const char *str2);
extern string URLify(const char *str, size_t size);
extern bool ParPermutation(const char *str);
extern bool OneAway(const char *str1, const char *str2);
extern string StringCompression(const char *str);
extern string stringCompressionV2(const string &str);
extern bool StringRotation(const string &str1, const string &str2);

TEST_CASE("Is Unique") {
    REQUIRE(!IsUnique("hello"));
    REQUIRE(IsUnique("abc"));
}

TEST_CASE("Check Permutation") {
    REQUIRE(CheckPermutation("hello", "hello"));
    REQUIRE(!CheckPermutation("abc", "abd"));
}

TEST_CASE("URLIFY") {
    REQUIRE(URLify("Hello World", 11) == "Hello%20World");
    REQUIRE(URLify("Hello World ", 12) == "Hello%20World%20");
}

TEST_CASE("Parlindrome Permutation") {
    REQUIRE(!ParPermutation("tact coa"));
    REQUIRE(ParPermutation("abccba"));
}

TEST_CASE("One Away") {
    REQUIRE(OneAway("abc", "afc"));
    REQUIRE(OneAway("abcd", "abc"));
    REQUIRE(OneAway("abc", "abcd"));

    REQUIRE(!OneAway("abc", "acb"));
    REQUIRE(!OneAway("abc", "abcde"));
    REQUIRE(!OneAway("abcde", "abc"));
}

TEST_CASE("String Compression") {
    REQUIRE(StringCompression("aaabbbccc") == "a3b3c3");
    REQUIRE(StringCompression("abbbcc") == "a1b3c2");
    REQUIRE(StringCompression("abc") == "abc");

    REQUIRE(stringCompressionV2("aaabbbccc") == "a3b3c3");
    REQUIRE(stringCompressionV2("abbbcc") == "a1b3c2");
    REQUIRE(stringCompressionV2("abc") == "abc");
}

TEST_CASE("String Rotation") {
    REQUIRE(StringRotation("abcdef", "defabc"));
    REQUIRE(!StringRotation("abcdef", "efabcdr"));
}