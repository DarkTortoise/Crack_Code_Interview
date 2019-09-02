#include <catch2/catch.hpp>

#include <list>

using namespace std;

extern list<int> &RemoveDups(list<int> &L);
extern list<int> &RemoveDupsV2(list<int> &L);
extern int KthElementToLast(const list<int> &L, unsigned int k);
extern void DeleteMiddleNode(list<int> &L, list<int>::iterator it);
extern list<int> Partition(const list<int> &L, int value);
extern int SumList(list<int> &L1, list<int> &L2);

TEST_CASE("Remove Dups") {
    list<int> L1{1, 1, 4, 4, 5};
    list<int> L2{1, 4, 5};

    REQUIRE(RemoveDups(L1) == L2);
    REQUIRE(RemoveDupsV2(L1) == L2);
}

TEST_CASE("Kth Element to Last") {
    list<int> L1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    REQUIRE(KthElementToLast(L1, 3) == 8);
    REQUIRE(KthElementToLast(L1, 5) == 6);
}

TEST_CASE("Delete Middle Node") {
    list<int> L1{1, 2, 3, 4, 5};
    list<int> L2{1, 2, 4, 5};

    DeleteMiddleNode(L1, next(L1.begin(), 2));

    REQUIRE(L1 == L2);
}

TEST_CASE("Partition") {
    list<int> L1{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    list<int> L2 = Partition(L1, 5);
    list<int> L3{4, 3, 2, 1, 5, 10, 9, 8, 7, 6};

    REQUIRE(L2 == L3);
}

TEST_CASE("Sum List") {
    list<int> L1{7, 1, 6};
    list<int> L2{5, 9, 2};
    REQUIRE(SumList(L1, L2) == 912);
}