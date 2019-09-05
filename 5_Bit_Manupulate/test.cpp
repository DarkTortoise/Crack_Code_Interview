#include <catch2/catch.hpp>

extern uint32_t Insertion(int n, int m, int j, int i);

TEST_CASE("Insertion") {
    REQUIRE(Insertion(1024, 19, 6, 2) == 1100);
}