#include <catch2/catch.hpp>
#include <string>

#include "ListNode.h"
#include "MergeTwoLists.h"
#include "RemoveDuplicates.h"
#include "CyclicRightShift.h"

using namespace std;

TEST_CASE("Linked list") {
    auto r1 = ListNode<int>::CreateListFromArray({1, 2, 3, 4, 5});
    auto r2 = ListNode<int>::CreateListFromArray({1, 2, 3, 4, 5});

    REQUIRE(r1 == r2);
}

TEST_CASE("Merge two lists") {
    auto r1 = ListNode<int>::CreateListFromArray({2, 5, 7});
    auto r2 = ListNode<int>::CreateListFromArray({3, 11});
    auto r3 = ListNode<int>::CreateListFromArray({2, 3, 5, 7, 11});

    auto r = MergeTwoLists(r1, r2);

    REQUIRE(r == r3);
}

TEST_CASE("Remove duplicates") {
    auto r1 = ListNode<int>::CreateListFromArray({1, 1, 2, 2, 3});
    auto r2 = ListNode<int>::CreateListFromArray({1, 2, 3});
    auto r3 = RemoveDuplicates(r1);

    REQUIRE(r3 == r2);

//    auto arr3 = array<int, 10>{1, 1, 1, 1, 2, 2, 2, 2, 3, 3};
//    auto arr4 = array<int, 2>{3, 3};
//
//    auto r4 = ListNode<int>::CreateListFromArray(arr3);
//    auto r5 = ListNode<int>::CreateListFromArray(arr4);
//    auto r6 = RemoveK(r4, 3);
//
//    REQUIRE(r6 == r5);
}

TEST_CASE("Cyclic right shift") {
    auto r1 = ListNode<int>::CreateListFromArray({1, 2, 3, 4, 5});
    auto r2 = ListNode<int>::CreateListFromArray({3, 4, 5, 1, 2});
    auto r3 = CyclicRightShift(r1, 3);

    REQUIRE(r3 == r2);
}