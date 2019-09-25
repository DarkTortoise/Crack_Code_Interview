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