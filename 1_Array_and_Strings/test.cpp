#include <catch2/catch.hpp>

extern bool isUnique(const char *str);
extern bool checkPermutation(const char *str1, const char *str2);

TEST_CASE("Is Unique") {
    REQUIRE(!isUnique("hello"));
    REQUIRE(isUnique("abc"));
}

TEST_CASE("Check Permutation") {
    REQUIRE(checkPermutation("hello", "hello"));
    REQUIRE(!checkPermutation("abc", "abd"));
}