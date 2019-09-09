#include <catch2/catch.hpp>

extern short Parity(uint64_t x);
extern long SwapBits(long x, int i, int j);
extern long SameWeight(long x);
extern long ReverseDigit(long x);

TEST_CASE("Computer parity for a large number") {
    REQUIRE(Parity(64) == 1);
}

TEST_CASE("Swap Bits") {
    REQUIRE(SwapBits(20, 2, 0) == 17);
}

TEST_CASE("Find a cloest interger with the same weight") {
    REQUIRE(SameWeight(10) == 9);
    REQUIRE(SameWeight(1) == 2);
    REQUIRE(SameWeight(7) == 11);
}

TEST_CASE("Reverse Digits") {
    REQUIRE(ReverseDigit(417) == 714);
    REQUIRE(ReverseDigit(-417) == -714);
}