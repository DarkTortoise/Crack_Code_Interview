#include <catch2/catch.hpp>

#include <vector>
#include <unordered_set>

using namespace std;

extern bool Problem_13_1(const string &str);
extern bool Problem_13_2(const string &letter, const string &mag);
extern int Problem_13_6(const vector<string> &arr);
extern pair<int, int> Problem_13_7(const vector<string> &arr, unordered_set<string> &queries);
extern pair<int, int> Problem_13_7_Variant_1(const vector<string> &arr);
extern pair<size_t, size_t> Problem_13_8(const vector<string> &arr, const vector<string> &subarr);
extern size_t Problem_13_9(const vector<string> &arr);
extern size_t Problem_13_10(const vector<int> &arr);
extern bool Problem_13_12(const string &str, const vector<string> &arr);

TEST_CASE("test for palindrimic permutations") {
    REQUIRE(Problem_13_1("edified"));
}

TEST_CASE("IS AN ANONYMOUS LETTER CONSTRUCTIBLE") {
    REQUIRE(Problem_13_2("abcabcdef", "abcabcdefdef"));
}

TEST_CASE("FIND THE NEAREST REPEATED ENTRIES IN AN ARRAY") {
    const vector<string> a1{"All", "work", "and", "no", "play", "makes",
                            "for", "no", "work", "no", "fun", "and", "no", "result"};
    REQUIRE(Problem_13_6(a1) == 2);
}

TEST_CASE("FIND THE SMALLEST SUBARRAY COVERING ALL VALUES") {
    const vector<string> a1{"apple", "banana", "apple", "apple", "dog", "cat", "apple",
                            "dog", "banana", "apple", "cat", "dog"};
    unordered_set<string> s1{"banana", "cat"};
    unordered_set<string> s2{"cat", "dog"};
    pair<int, int> r1 = make_pair(8, 10);
    pair<int, int> r2 = make_pair(10, 11);
    pair<int, int> r3 = make_pair(8, 11);

    REQUIRE(Problem_13_7(a1, s1) == r1);
    REQUIRE(Problem_13_7(a1, s2) == r2);
    REQUIRE(Problem_13_7_Variant_1(a1) == r3);
}

TEST_CASE("FIND SMALLEST SUBARRAY SEQUENTIALIY COVERING ALL VALUES") {
    const vector<string> a1{"apple", "banana", "cat", "apple"};
    const vector<string> a2{"banana", "apple"};
    const pair<size_t, size_t> r1 = make_pair(1, 3);
    REQUIRE(Problem_13_8(a1, a2) == r1);
}

TEST_CASE("find the longest subarray with distinct entries") {
    const vector<string> a1{"f", "s", "f", "e", "t", "w", "e", "n", "w", "e"};
    REQUIRE(Problem_13_9(a1) == 5);
}

TEST_CASE("FIND THE LENGTH OF A LONGEST CONTAINED INTERVAL") {
    const vector<int> a1{3, -2, 7, 9, 8, 1, 2, 0, -1, 5, 8};
    const vector<int> a2{10, 5, 3, 11, 6, 100, 4};
    REQUIRE(Problem_13_10(a1) == 6);
    REQUIRE(Problem_13_10(a2) == 4);
}

TEST_CASE("COMPUTE ALL STRING DECOMPOSITION") {
    const string str = "amanaplanacanal";
    const vector<string> a1{"can", "apl", "ana"};
    REQUIRE(Problem_13_12(str, a1));
}