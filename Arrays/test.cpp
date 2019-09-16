#include <catch2/catch.hpp>
#include <list>
#include "ArrayPartition.h"
#include "DutchNationalFlag.h"
#include "AdvanceThroughArray.h"
#include "DeleteDuplicates.h"
#include "BuySellStockOnce.h"
#include "ApplyPermutation.h"
#include "NextPermutation.h"

using namespace std;

extern long IntegerIncrement(list<int> n);

TEST_CASE("Array Parition") {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result{10, 2, 8, 4, 6, 7, 5, 9, 3, 1};
    REQUIRE(ArrayPartition<int>(arr) == result);
}

TEST_CASE("Dutch National Flag Problem") {
    array<int, 10> a1{1, 2, 2, 5, 6, 7, 7, 9, 1, 4};
    array<int, 10> result{1, 2, 2, 5, 4, 1, 6, 9, 7, 7};

    REQUIRE(DutchNationalFlag(a1, 6) == result);

    array<int, 10> a2{1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    array<int, 10> r1{1, 1, 1, 1, 2, 2, 2, 3, 3, 3};
    REQUIRE(DutchNationalFlagVariant1(a2, 1, 2, 3) == r1);
}

TEST_CASE("Increment Arbitrary Precision Integer") {
    REQUIRE(IntegerIncrement(list<int>{1, 2, 9}) == 130);
    REQUIRE(IntegerIncrement(list<int>{9, 9, 9}) == 1000);
}

TEST_CASE("Advance Through a Array") {
    const size_t size = 7;
    array<int, size> arr{2, 4, 1, 1, 0, 2, 3};
    REQUIRE(AdvanceThroughArray<size>(arr));
    REQUIRE(MinStepsToLastPos(arr) == 3);
}

TEST_CASE("Delete Duplicates from Array") {
    vector<int> arr{2, 3, 5, 5, 7, 11, 11, 11, 13};
    REQUIRE(DeleteDuplicatesVersion1(arr) == 6);

    arr = vector<int>{2, 3, 5, 5, 7, 11, 11, 11, 13};
    REQUIRE(DeleteDuplicatesVersion2(arr) == 6);

    arr = vector<int>{2, 3, 5, 5, 7, 11, 11, 11, 13};
    REQUIRE(DeleteDuplicatesVariant1(arr, 11) == 6);

    arr = vector<int>{2, 3, 5, 5, 7, 11, 11, 11, 13};
    REQUIRE(DeleteDuplicatesVariant1(arr, 5) == 7);
}

TEST_CASE("Buy and Sell Stock Once") {
    vector<int> prices{310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    REQUIRE(BuySellStockOnce(prices) == 30);

    vector<int> arr{1, 1, 2, 2, 2, 2, 3, 4, 5};
    REQUIRE(BuySellStockOnceVariant(arr) == 4);
}

TEST_CASE("Apply Permutation") {
    vector<int> arr{'a', 'b', 'c', 'd'};
    vector<int> perm{2, 0, 1, 3};
    vector<int> result{'b', 'c', 'a', 'd'};

    REQUIRE(ApplyPermutation(perm, arr) == result);
}

TEST_CASE("Computer the next permutation") {
    vector<int> arr{6, 2, 1, 5, 4, 3, 0};
    vector<int> result{6, 2, 3, 0, 1, 4, 5};

    REQUIRE(NextPermutation(arr) == result);
}