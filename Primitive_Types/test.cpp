#include <catch2/catch.hpp>

extern int Problem_5_1(uint64_t large_number);

TEST_CASE("5.1") {
    uint64_t n = 2604228621193453608;
    REQUIRE(Problem_5_1(n) == 0);
}