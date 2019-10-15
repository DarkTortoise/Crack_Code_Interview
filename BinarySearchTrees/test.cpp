#include <catch2/catch.hpp>

#include <limits>
#include "BST.h"
#include "15.1.h"
#include "15.2.h"
#include "15.3.h"
#include "15.4.h"
#include "15.6.h"
#include "15.9.h"
#include "15.11.h"
#include "15.12.h"

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

template<class T>
shared_ptr<BST<T>> CreateTree_15_9() {
    auto n1 = make_shared<BST<T>>(11);
    auto n2 = make_shared<BST<T>>(3);
    auto n3 = make_shared<BST<T>>(17);
    auto n4 = make_shared<BST<T>>(2);
    auto n5 = make_shared<BST<T>>(5);
    auto n6 = make_shared<BST<T>>(13);
    auto n7 = make_shared<BST<T>>(19);
    auto n8 = make_shared<BST<T>>(7);
    auto n9 = make_shared<BST<T>>(23);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n5->right = n8;
    n3->left = n6;
    n3->right = n7;
    n7->right = n9;

    return n1;
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

TEST_CASE("15.9") {
    const vector<int> a1{2, 3, 5, 7, 11, 13, 17, 19, 23};
    auto root = Problem_15_9(a1, 0, a1.size());
    REQUIRE(root != nullptr);
}

TEST_CASE("15.11") {
    auto root = CreateTree_15_1<int>();
    auto n2 = root->right->left;
    auto m = root->right;
    REQUIRE(Problem_15_11(root, n2, m));

    root = CreateTree_15_1<int>();
    auto n3 = root->right;
    auto n4 = root->right->right;
    auto m2 = root->right->left;
    REQUIRE(!Problem_15_11(n3, n4, m2));
}

TEST_CASE("15.19") {
    auto root = CreateTree_15_1<int>();
    vector<int> result{};
    Problem_15_12(root, 16, 31, result);
    REQUIRE(result == vector<int>{19, 17, 23, 29, 31});
}