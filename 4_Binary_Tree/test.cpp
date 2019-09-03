#include <catch2/catch.hpp>
#include "MinimalTree.h"

TEST_CASE("Minimal Tree") {
    int arr[] = {1, 2, 3};

    Node<int> *root = MinimalTree<int>(arr, 0, 2);
    vector<int> orders{};
    root->Preorder(root, orders);
    REQUIRE(orders == vector<int>{2, 1, 3});
}