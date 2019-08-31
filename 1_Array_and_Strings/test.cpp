#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern bool isUnique(const char *str);
extern bool checkPermutation(const char *str1, const char *str2);
extern string URLify(const char *str, size_t size);
extern bool parPermutation(const char *str);
extern bool oneAway(const char *str1, const char *str2);
extern string stringCompression(const char *str);
extern string stringCompressionV2(const string &str);
extern bool StringRotation(const string &str1, const string &str2);

TEST_CASE("Is Unique") {
    REQUIRE(!isUnique("hello"));
    REQUIRE(isUnique("abc"));
}

TEST_CASE("Check Permutation") {
    REQUIRE(checkPermutation("hello", "hello"));
    REQUIRE(!checkPermutation("abc", "abd"));
}

TEST_CASE("URLIFY") {
    REQUIRE(URLify("Hello World", 11) == "Hello%20World");
    REQUIRE(URLify("Hello World ", 12) == "Hello%20World%20");
}

TEST_CASE("Parlindrome Permutation") {
    REQUIRE(!parPermutation("tact coa"));
    REQUIRE(parPermutation("abccba"));
}

TEST_CASE("One Away") {
    REQUIRE(oneAway("abc", "afc"));
    REQUIRE(oneAway("abcd", "abc"));
    REQUIRE(oneAway("abc", "abcd"));

    REQUIRE(!oneAway("abc", "acb"));
    REQUIRE(!oneAway("abc", "abcde"));
    REQUIRE(!oneAway("abcde", "abc"));
}

TEST_CASE("String Compression") {
    REQUIRE(stringCompression("aaabbbccc") == "a3b3c3");
    REQUIRE(stringCompression("abbbcc") == "a1b3c2");
    REQUIRE(stringCompression("abc") == "abc");

    REQUIRE(stringCompressionV2("aaabbbccc") == "a3b3c3");
    REQUIRE(stringCompressionV2("abbbcc") == "a1b3c2");
    REQUIRE(stringCompressionV2("abc") == "abc");
}

TEST_CASE("String Rotation") {
    REQUIRE(StringRotation("abcdef", "defabc"));
    REQUIRE(!StringRotation("abcdef", "efabcdr"));
}