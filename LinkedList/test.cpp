#include <catch2/catch.hpp>
#include <string>
#include <array>

#include "ListNode.h"
#include "MergeTwoLists.h"
#include "ReverseSubList.h"

using namespace std;

TEST_CASE("Linked list") {
    auto arr = array<int, 5>{1, 2, 3, 4, 5};
    auto r1 = ListNode<int>::CreateListFromArray(arr);
    auto r2 = ListNode<int>::CreateListFromArray(arr);

    REQUIRE((*r1).Equal(r1, r2));
}

TEST_CASE("Reverse a sub list") {
    auto arr = array<int, 5>{1, 2, 3, 4, 5};
    auto arr1 = array<int, 5>{5, 4, 3, 2, 1};

    auto r1 = ListNode<int>::CreateListFromArray(arr);
    auto r2 = ListNode<int>::CreateListFromArray(arr1);
    auto r3 = ReverseSinglyList(r1);

    REQUIRE((*r2).Equal(r2, r3));
}