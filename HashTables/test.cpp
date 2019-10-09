#include <catch2/catch.hpp>

#include <vector>
#include <unordered_set>

using namespace std;

extern bool Problem_13_1(const string &str);
extern bool Problem_13_2(const string &letter, const string &mag);
extern int Problem_13_6(const vector<string> &arr);
extern pair<size_t, size_t> Problem_13_7(const vector<string> &arr, unordered_set<string> &queries);

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
    pair<size_t, size_t> r1 = make_pair(8, 10);

    REQUIRE(Problem_13_7(a1, s1) == r1);
}