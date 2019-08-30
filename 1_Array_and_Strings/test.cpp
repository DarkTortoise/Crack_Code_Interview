#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

extern bool isUnique(const char *str);
extern bool checkPermutation(const char *str1, const char *str2);

TEST_CASE("Check Permutation") {
    REQUIRE(!isUnique("hello"));
    REQUIRE(isUnique("abc"));
    REQUIRE(checkPermutation("hello", "hello"));
    REQUIRE(!checkPermutation("abc", "abd"));
}