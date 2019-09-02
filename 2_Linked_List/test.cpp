#include <catch2/catch.hpp>

#include <list>

using namespace std;

extern list<int> &RemoveDups(list<int> &L);

TEST_CASE("Remove Dups") {
    list<int> L1{1, 1, 4, 4, 5};
    list<int> L2{1, 4, 5};

    REQUIRE(RemoveDups(L1) == L2);
}