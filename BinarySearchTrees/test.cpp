#include <catch2/catch.hpp>

#include <limits>
#include "BST.h"
#include "15.1.h"
#include "15.2.h"
#include "15.3.h"

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