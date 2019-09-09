#include <catch2/catch.hpp>

extern short Parity(uint64_t x);
extern long SwapBits(long x, int i, int j);
extern long SameWeight(long x);
extern long ReverseDigit(long x);
extern bool PalindromeDecimal(long x);

extern int UniformRandomNumber(int low, int high);

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

TEST_CASE("Palindrome Decimal") {
    REQUIRE(PalindromeDecimal(121));
    REQUIRE(PalindromeDecimal(1221));
    REQUIRE(!PalindromeDecimal(123));
}

TEST_CASE("Generate Random Number") {
    int n = UniformRandomNumber(1, 6);
    REQUIRE(n >= 1);
    REQUIRE(n <= 6);

    n = UniformRandomNumber(10, 20);
    REQUIRE(n >= 10);
    REQUIRE(n <= 20);
}