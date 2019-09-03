#include <catch2/catch.hpp>
#include "MinimalTree.h"
#include "CheckBalanced.h"
#include "ValidateBST.h"

TEST_CASE("Minimal Tree") {
    int arr[] = {1, 2, 3};

    Node<int> *root = MinimalTree<int>(arr, 0, 2);
    vector<int> orders{};
    root->Preorder(root, orders);
    REQUIRE(orders == vector<int>{2, 1, 3});
    root->Release(root);
}

TEST_CASE("Check Balanced") {
    auto *root = new Node<int>(2);
    root->left = new Node<int>(1);
    root->left->left = new Node<int>(100);
    root->right = new Node<int>(3);

    REQUIRE(TreeHeight(root, 0) == 2);
    REQUIRE(CheckBalanced(root));

    root->Release(root);
}

TEST_CASE("Validate BST") {
    auto *root = new Node<int>(2);
    root->left = new Node<int>(1);
    root->left->left = new Node<int>(100);
    root->right = new Node<int>(3);

    REQUIRE(!ValidateBST(root));
    root->Release(root);

    root = new Node<int>(2);
    root->left = new Node<int>(1);
    root->right = new Node<int>(3);

    REQUIRE(ValidateBST(root));
    root->Release(root);
}