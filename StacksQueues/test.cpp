#include <catch2/catch.hpp>

#include "8.1.h"

TEST_CASE("Implement a stack with max api") {
    Stack<int> s;
    s.Push(1);
    s.Push(1);

    REQUIRE(s.Max() == 1);
}