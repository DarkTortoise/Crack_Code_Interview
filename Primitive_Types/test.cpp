#include <catch2/catch.hpp>

extern int Problem_5_1(uint64_t large_number);
extern uint64_t Problem_5_2(uint64_t n, uint8_t i, uint8_t j);
extern unsigned long long Problem_5_3(uint64_t n);
extern unsigned long Problem_5_4(unsigned long n);
extern long Problem_5_8(long n);
extern bool Problem_5_9(long n);

TEST_CASE("5.1") {
    uint64_t n = 2604228621193453608;
    REQUIRE(Problem_5_1(n) == 0);
}

TEST_CASE("5.2") {
    uint64_t n = 9223372036854775809;
    REQUIRE(Problem_5_2(n, 63, 1) == 3);
}

TEST_CASE("5.3") {
    uint64_t n = 3;
    REQUIRE(Problem_5_3(n) == 13835058055282163712UL);
}

TEST_CASE("5.4") {
    unsigned long n = 6;
    REQUIRE(Problem_5_4(n) == 5);
}

TEST_CASE("5.8") {
    long n = -1132;
    REQUIRE(Problem_5_8(n) == -2311);
}

TEST_CASE("5.9") {
    int n = 2147447412;
    REQUIRE(Problem_5_9(n));
}