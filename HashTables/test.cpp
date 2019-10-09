#include <catch2/catch.hpp>

#include <vector>

using namespace std;

extern bool Problem_13_1(const string &str);
extern bool Problem_13_2(const string &letter, const string &mag);
extern int Problem_13_6(const vector<string> &arr);

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