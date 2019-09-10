#include <catch2/catch.hpp>
#include "ArrayPartition.h"
#include "DutchNationalFlag.h"

TEST_CASE("Array Parition") {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result{10, 2, 8, 4, 6, 7, 5, 9, 3, 1};
    REQUIRE(ArrayPartition<int>(arr) == result);
}

TEST_CASE("Dutch National Flag Problem") {
    array<int, 10> a1{1, 2, 2, 5, 6, 7, 7, 9, 1, 4};
    array<int, 10> result{1, 2, 2, 5, 4, 1, 6, 9, 7, 7};

    REQUIRE(DutchNationalFlag(a1, 6) == result);
}