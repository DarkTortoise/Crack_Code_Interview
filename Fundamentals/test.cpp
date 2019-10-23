#include <catch2/catch.hpp>
#include <string>

using namespace std;

extern void selection_sort(vector<int> &arr);
extern void bubble_sort(vector<int> &arr);
extern void insertion_sort(vector<int> &arr);
extern void quick_sort(vector<int> &arr, int left, int right);

TEST_CASE("Selection sort") {
    vector<int> a1{5, 4, 3, 2, 1};
    vector<int> r1{1, 2, 3, 4, 5};
    selection_sort(a1);
    REQUIRE(a1 == r1);
}

TEST_CASE("Bubble sort") {
    vector<int> a1{5, 4, 3, 2, 1};
    vector<int> r1{1, 2, 3, 4, 5};
    bubble_sort(a1);
    REQUIRE(a1 == r1);
}

TEST_CASE("Insertion sort") {
    vector<int> a1{5, 4, 3, 2, 1};
    vector<int> r1{1, 2, 3, 4, 5};
    insertion_sort(a1);
    REQUIRE(a1 == r1);
}

TEST_CASE("Quick sort") {
    vector<int> a1{5, 4, 3, 2, 1};
    vector<int> r1{1, 2, 3, 4, 5};
    quick_sort(a1, 0, a1.size() - 1);
    REQUIRE(a1 == r1);
}