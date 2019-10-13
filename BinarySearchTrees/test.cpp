#include <catch2/catch.hpp>

#include <limits>
#include "BST.h"
#include "15.1.h"
#include "15.2.h"
#include "15.3.h"
#include "15.4.h"
#include "15.6.h"

template<class T>
shared_ptr<BST<T>> CreateTree_15_1() {
    auto A = make_shared<BST<int>>(19);
    auto B = make_shared<BST<int>>(7);
    auto I = make_shared<BST<int>>(43);
    auto C = make_shared<BST<int>>(3);
    auto F = make_shared<BST<int>>(11);
    auto J = make_shared<BST<int>>(23);
    auto O = make_shared<BST<int>>(47);
    auto D = make_shared<BST<int>>(2);
    auto E = make_shared<BST<int>>(5);
    auto G = make_shared<BST<int>>(17);
    auto K = make_shared<BST<int>>(37);
    auto P = make_shared<BST<int>>(53);
    auto H = make_shared<BST<int>>(13);
    auto L = make_shared<BST<int>>(29);
    auto N = make_shared<BST<int>>(41);
    auto M = make_shared<BST<int>>(31);

    A->left = B;
    A->right = I;
    B->left = C;
    B->right = F;
    C->left = D;
    C->right = E;
    F->right = G;
    G->left = H;
    I->left = J;
    I->right = O;
    J->right = K;
    K->left = L;
    K->right = N;
    L->right = M;
    O->right = P;

    return A;
}

TEST_CASE("15.1") {
    auto root = CreateTree_15_1<int>();
    REQUIRE(Problem_15_1(root, numeric_limits<int>::min(), numeric_limits<int>::max()));
}

TEST_CASE("15.2") {
    auto root = CreateTree_15_1<int>();
    REQUIRE(Problem_15_2(root, 23) == 29);
}

TEST_CASE("15.3") {
    auto root = CreateTree_15_1<int>();
    vector<int> result{53, 47, 43};
    vector<int> r1{};
    Problem_15_3(root, 3, r1);
    REQUIRE(r1 == result);
}

TEST_CASE("15.4") {
    auto root = CreateTree_15_1<int>();
    auto n1 = root->left->left;
    auto n2 = root->left->right->right;
    auto n3 = root->left;
    REQUIRE(Problem_15_4(root, n1, n2) == n3);
}

TEST_CASE("15.6") {
    const vector<int> a1{5, 10, 15};
    const vector<int> a2{3, 6, 9, 12, 15};
    const vector<int> a3{8, 16, 24};
    const vector<int> result{15, 15, 16};
    REQUIRE(Problem_15_6(a1, a2, a3) == result);
}