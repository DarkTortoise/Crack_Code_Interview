#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern bool isUnique(const char *str);
extern bool checkPermutation(const char *str1, const char *str2);
extern string URLify(const char *str, size_t size);

TEST_CASE("Is Unique") {
    REQUIRE(!isUnique("hello"));
    REQUIRE(isUnique("abc"));
}

TEST_CASE("Check Permutation") {
    REQUIRE(checkPermutation("hello", "hello"));
    REQUIRE(!checkPermutation("abc", "abd"));
}

TEST_CASE("URLIFY") {
    REQUIRE(URLify("Hello World", 13) == "Hello%20World");
}