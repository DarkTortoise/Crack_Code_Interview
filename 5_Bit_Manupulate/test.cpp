#include <catch2/catch.hpp>

extern uint32_t Insertion(int n, int m, int j, int i);

extern unsigned int FlipBitToWin(unsigned int number);

TEST_CASE("Insertion") {
    REQUIRE(Insertion(1024, 19, 6, 2) == 1100);
}

TEST_CASE("Flip Bit to Win") {
    REQUIRE(FlipBitToWin(1775) == 8);
}