#include <catch2/catch.hpp>

#include "9.1.h"
#include "9.2.h"

extern bool IsWellFormed(const string &expr);

TEST_CASE("Implement a stack with max api") {
    Stack<int> s;
    s.Push(1);
    s.Push(1);

    REQUIRE(s.Max() == 1);
}

TEST_CASE("evaluate rpn expression") {
    REQUIRE(RPN<int>("3,4,+,2,*,1,+") == 15);
}

TEST_CASE("test a string is well formed") {
    REQUIRE(IsWellFormed("[{()}]"));
    REQUIRE(!IsWellFormed("[{()}"));
}