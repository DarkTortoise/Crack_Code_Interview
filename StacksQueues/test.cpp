#include <catch2/catch.hpp>

#include "9.1.h"
#include "9.2.h"

extern bool IsWellFormed(const string &expr);
extern string NormalizePathname(const string &path);
extern vector<int> Problem_9_6_O_N(const vector<int> &arr);
extern vector<int> Problem_9_6_O_1(const vector<int> &arr);

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

TEST_CASE("normalize pathnames") {
    REQUIRE(NormalizePathname("/usr/../") == "/");
    REQUIRE(NormalizePathname("/usr/.././lib/") == "/lib/");
}

TEST_CASE("compute buliding with a sunset view") {
    vector<int> arr{1, 2, 3, 1, 1};
    REQUIRE(Problem_9_6_O_N(arr) == vector<int>{1, 3});
    REQUIRE(Problem_9_6_O_1(arr) == vector<int>{1, 3});
}