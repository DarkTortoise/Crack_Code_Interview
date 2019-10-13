#include <catch2/catch.hpp>

#include <vector>
#include "BinaryTree.h"
#include "10.1.h"
#include "10.2.h"
#include "10.3.h"
#include "10.5.h"
#include "10.6.h"
#include "10.7.h"
#include "10.8.h"
#include "10.9.h"
#include "10.10.h"

using namespace std;

extern string Problem_10_6_Variant(const vector<int> &t, int sum);
extern int Problem_10_9_O_N(const vector<int> &t, int kth);
extern int Problem_10_10(const vector<int> &t, int node);
extern vector<int> Problem_10_14(const vector<int> &t);

template<class T>
shared_ptr<Node<T>> CreateTree_10_1() {
    auto A = make_shared<Node<int>>(314);
    auto B = make_shared<Node<int>>(6);
    auto I = make_shared<Node<int>>(6);
    auto C = make_shared<Node<int>>(271);
    auto F = make_shared<Node<int>>(561);
    auto J = make_shared<Node<int>>(2);
    auto O = make_shared<Node<int>>(271);
    auto D = make_shared<Node<int>>(28);
    auto E = make_shared<Node<int>>(0);
    auto G = make_shared<Node<int>>(3);
    auto K = make_shared<Node<int>>(1);
    auto P = make_shared<Node<int>>(28);
    auto H = make_shared<Node<int>>(17);
    auto L = make_shared<Node<int>>(401);
    auto N = make_shared<Node<int>>(257);
    auto M = make_shared<Node<int>>(641);

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
shared_ptr<Node<T>> CreateTree_10_2() {
    auto A = make_shared<Node<T>>(314);
    auto B = make_shared<Node<T>>(6);
    auto E = make_shared<Node<T>>(6);
    auto C = make_shared<Node<T>>(2);
    auto F = make_shared<Node<T>>(2);
    auto D = make_shared<Node<T>>(3);
    auto G = make_shared<Node<T>>(3);

    return A;
}

template<class T>
vector<shared_ptr<Node<T>>> CreateTree_10_3() {
    auto A = make_shared<Node<int>>(314);
    auto B = make_shared<Node<int>>(6);
    auto I = make_shared<Node<int>>(6);
    auto C = make_shared<Node<int>>(271);
    auto F = make_shared<Node<int>>(561);
    auto J = make_shared<Node<int>>(2);
    auto O = make_shared<Node<int>>(271);
    auto D = make_shared<Node<int>>(28);
    auto E = make_shared<Node<int>>(0);
    auto G = make_shared<Node<int>>(3);
    auto K = make_shared<Node<int>>(1);
    auto P = make_shared<Node<int>>(28);
    auto H = make_shared<Node<int>>(17);
    auto L = make_shared<Node<int>>(401);
    auto N = make_shared<Node<int>>(257);
    auto M = make_shared<Node<int>>(641);

    A->SetLeft(B, A);
    A->SetRight(I, A);
    B->SetLeft(C, B);
    B->SetRight(F, B);
    C->SetLeft(D, C);
    C->SetRight(E, C);
    F->SetRight(G, F);
    G->SetLeft(H, G);
    I->SetLeft(J, I);
    I->SetRight(O, I);
    J->SetRight(K, J);
    K->SetLeft(L, K);
    K->SetRight(N, K);
    L->SetRight(M, L);
    O->SetRight(P, O);

    return vector<shared_ptr<Node<T>>>{A, D, H, B};
}

template<class T>
shared_ptr<Node<T>> CreateTree_10_5() {
    auto A = make_shared<Node<int>>(1);
    auto B = make_shared<Node<int>>(0);
    auto I = make_shared<Node<int>>(1);
    auto C = make_shared<Node<int>>(0);
    auto F = make_shared<Node<int>>(1);
    auto J = make_shared<Node<int>>(0);
    auto O = make_shared<Node<int>>(0);
    auto D = make_shared<Node<int>>(0);
    auto E = make_shared<Node<int>>(1);
    auto G = make_shared<Node<int>>(1);
    auto K = make_shared<Node<int>>(0);
    auto P = make_shared<Node<int>>(0);
    auto H = make_shared<Node<int>>(0);
    auto L = make_shared<Node<int>>(1);
    auto N = make_shared<Node<int>>(0);
    auto M = make_shared<Node<int>>(1);

    A->SetLeft(B, A);
    A->SetRight(I, A);
    B->SetLeft(C, B);
    B->SetRight(F, B);
    C->SetLeft(D, C);
    C->SetRight(E, C);
    F->SetRight(G, F);
    G->SetLeft(H, G);
    I->SetLeft(J, I);
    I->SetRight(O, I);
    J->SetRight(K, J);
    K->SetLeft(L, K);
    K->SetRight(N, K);
    L->SetRight(M, L);
    O->SetRight(P, O);

    return A;
}

template<class T>
shared_ptr<Node<T>> CreateTree_10_9() {
    auto A = make_shared<Node<T>>(314);
    auto B = make_shared<Node<T>>(6);
    auto E = make_shared<Node<T>>(6);
    auto C = make_shared<Node<T>>(2);
    auto F = make_shared<Node<T>>(2);
    auto D = make_shared<Node<T>>(3);
    auto G = make_shared<Node<T>>(3);

    A->SetLeft(B, A);
    A->SetRight(E, A);
    B->SetRight(C, B);
    C->SetRight(D, C);
    E->SetLeft(F, E);
    F->SetLeft(G, F);

    A->extra = 6;
    B->extra = 2;
    C->extra = 1;
    D->extra = 0;
    E->extra = 2;
    F->extra = 1;
    G->extra = 0;

    return A;
}

template<class T>
vector<shared_ptr<Node<T>>> CreateTree_10_10() {
    auto A = make_shared<Node<int>>(314);
    auto B = make_shared<Node<int>>(6);
    auto I = make_shared<Node<int>>(6);
    auto C = make_shared<Node<int>>(271);
    auto F = make_shared<Node<int>>(561);
    auto J = make_shared<Node<int>>(2);
    auto O = make_shared<Node<int>>(271);
    auto D = make_shared<Node<int>>(28);
    auto E = make_shared<Node<int>>(0);
    auto G = make_shared<Node<int>>(3);
    auto K = make_shared<Node<int>>(1);
    auto P = make_shared<Node<int>>(28);
    auto H = make_shared<Node<int>>(17);
    auto L = make_shared<Node<int>>(401);
    auto N = make_shared<Node<int>>(257);
    auto M = make_shared<Node<int>>(641);

    A->SetLeft(B, A);
    A->SetRight(I, A);
    B->SetLeft(C, B);
    B->SetRight(F, B);
    C->SetLeft(D, C);
    C->SetRight(E, C);
    F->SetRight(G, F);
    G->SetLeft(H, G);
    I->SetLeft(J, I);
    I->SetRight(O, I);
    J->SetRight(K, J);
    K->SetLeft(L, K);
    K->SetRight(N, K);
    L->SetRight(M, L);
    O->SetRight(P, O);

    return vector<shared_ptr<Node<T>>>{A, N, J};
}

template<class T>
void InOrder(const shared_ptr<Node<T>> root, vector<T> &result) {
    if (!root) {
        return;
    }

    InOrder(root->left, result);
    result.push_back(root->value);
    InOrder(root->right, result);
}

template<class T>
void PreOrder(const shared_ptr<Node<T>> root, vector<T> &result) {
    if (!root)
        return;

    result.push_back(root->value);
    PreOrder(root->left, result);
    PreOrder(root->right, result);
}

TEST_CASE("10.1") {
    auto root = CreateTree_10_1<int>();
    REQUIRE(!Problem_10_1<int>(root));
}

TEST_CASE("10.2") {
    auto root = CreateTree_10_2<int>();
    REQUIRE(Problem_10_2(root));
}

TEST_CASE("10.3") {
    auto nodes = CreateTree_10_3<int>();
    auto root = nodes[0];
    auto n1 = nodes[1];
    auto n2 = nodes[2];
    auto n3 = nodes[3];
    auto n4 = Problem_10_3(root, n1, n2);

    REQUIRE(n4 == n3);
}

TEST_CASE("10.5") {
    auto root = CreateTree_10_5<int>();
    int sum = 0;
    Problem_10_5(root, sum);
    REQUIRE(sum == 126);
}

TEST_CASE("10.6") {
    auto root = CreateTree_10_1<int>();
    REQUIRE(Problem_10_6(root, 591));
}

TEST_CASE("10.7") {
    auto root = CreateTree_10_1<int>();
    vector<int> result{};
    InOrder(root, result);
    REQUIRE(Problem_10_7(root) == result);
}

TEST_CASE("10.8") {
    vector<int> result{};
    auto root = CreateTree_10_1<int>();
    PreOrder(root, result);
    REQUIRE(Problem_10_8(root) == result);
}

TEST_CASE("10.9") {
    auto root = CreateTree_10_9<int>();
    auto node = shared_ptr<Node<int>>();
    Problem_10_9(root, 3, node);
    REQUIRE(node == root);
}

TEST_CASE("10.10") {
    auto nodes = CreateTree_10_10<int>();
    auto root = nodes[0];
    auto node = nodes[1];
    auto parent = nodes[2];

    REQUIRE(Problem_10_10(root, node) == parent);
}