#include <catch2/catch.hpp>
#include "ArrayPartition.h"

TEST_CASE("Array Parition") {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result{10, 2, 8, 4, 6, 7, 5, 9, 3, 1};
    REQUIRE(ArrayPartition<int>(arr) == result);
}