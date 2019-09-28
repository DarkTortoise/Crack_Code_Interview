#include <catch2/catch.hpp>

#include "8.1.h"
#include "8.2.h"

TEST_CASE("Implement a stack with max api") {
    Stack<int> s;
    s.Push(1);
    s.Push(1);

    REQUIRE(s.Max() == 1);
}

TEST_CASE("evaluate rpn expression") {
    REQUIRE(RPN<int>("3,4,+,2,*,1,+") == 15);
}