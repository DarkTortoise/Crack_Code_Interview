#include <catch2/catch.hpp>
#include <string>

#include "ListNode.h"
#include "MergeTwoLists.h"

using namespace std;

TEST_CASE("Linked list") {
    auto arr = array<int, 5>{1, 2, 3, 4, 5};
    auto r1 = ListNode<int>::CreateListFromArray(arr);
    auto r2 = ListNode<int>::CreateListFromArray(arr);

    REQUIRE((*r1).Equal(r1, r2));
}

TEST_CASE("Merge two lists") {
    auto arr1 = array<int, 3>{2, 5, 7};
    auto arr2 = array<int, 2>{3, 11};
    auto arr3 = array<int, 5>{2, 3, 5, 7, 11};

    auto r1 = ListNode<int>::CreateListFromArray(arr1);
    auto r2 = ListNode<int>::CreateListFromArray(arr2);
    auto r3 = ListNode<int>::CreateListFromArray(arr3);

    auto r = MergeTwoLists(r1, r2);

    REQUIRE((*r).Equal(r, r3));
}