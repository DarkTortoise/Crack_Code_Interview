#include <catch2/catch.hpp>

#include <vector>
#include "BinaryTree.h"
#include "10.1.h"
#include "10.2.h"

using namespace std;

extern size_t Problem_10_3(const vector<int> &t, size_t n1, size_t n2);
extern int Problem_10_5(const vector<int> &t);
extern vector<int> Problem_10_7(const vector<int> &t);
extern vector<int> Problem_10_8(const vector<int> &t);
extern bool Problem_10_6(const vector<int> &t, int sum);
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

TEST_CASE("TEST BINART TREE") {
    auto n1 = make_shared<Node<int>>(1);
    auto n2 = make_shared<Node<int>>(2);
    auto n3 = make_shared<Node<int>>(3);
    auto n4 = make_shared<Node<int>>(4);
    auto n5 = make_shared<Node<int>>(5);
    auto n6 = make_shared<Node<int>>(6);

    n2->left = n4;
    n2->right = n5;
    n3->right = n6;
    n1->left = n2;
    n2->right = n3;

    REQUIRE(PrintTree(n1) == PrintTree(n1));
}


TEST_CASE("10.1") {
    auto root = CreateTree_10_1<int>();
    REQUIRE(!Problem_10_1<int>(root));
}

TEST_CASE("10.2") {
    auto root = CreateTree_10_2<int>();
    REQUIRE(Problem_10_2(root));
}

TEST_CASE("compute the lowest common ancestor in a binary tree") {
    const vector<int> t{0, 1, 2, 3, 4};

    REQUIRE(Problem_10_3(t, 3, 4) == 1);
    REQUIRE(Problem_10_3(t, 4, 2) == 0);
}

TEST_CASE("sum the root-to-leaf in a binary tree") {
    const vector<int> t1{1, 0, 0, 1, 0, -1, -1, -1, -1, 1, -1};
    REQUIRE(Problem_10_5(t1) == 16);
}

TEST_CASE("implement an inorder traversal without recursion") {
    const vector<int> t1{1, 2, 3, 4, 5};
    const vector<int> r{4, 2, 5, 1, 3};
    REQUIRE(Problem_10_7(t1) == r);
}

TEST_CASE("implement an preorder traversal without recursion") {
    const vector<int> t1{1, 2, 3, 4, 5};
    const vector<int> r{1, 2, 4, 5, 3};
    REQUIRE(Problem_10_8(t1) == r);
}

TEST_CASE("compute the kth node in an inorder traversal") {
    const vector<int> t1{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_9_O_N(t1, 3) == 4);
}

TEST_CASE("compute the successor") {
    const vector<int> t1{1, 2, 3, 4, 5};
    REQUIRE(Problem_10_10(t1, 4) == 0);
    REQUIRE(Problem_10_10(t1, 3) == 1);
    REQUIRE(Problem_10_10(t1, 1) == 4);
}

TEST_CASE("Form a linked list from the leaves of a binary tree") {
    const vector<int> t1{1, 2, 3, 4, 5};
    const vector<int> r{2, 3, 4};
    REQUIRE(Problem_10_14(t1) == r);
}