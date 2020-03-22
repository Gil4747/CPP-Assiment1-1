#include "doctest.h"
#include "PhoneticFinder.hpp"

using namespace phonetic;

#include <string>

using namespace std;

TEST_CASE("text length < word length"){
    string text = "aba ba";
    CHECK_THROWS_WITH(find(text,"aba baba"), "word length too long");
    CHECK_THROWS_WITH(find(text,"abababa"), "word length too long");
    CHECK_THROWS_WITH(find(text,"a ba   a"), "word length too long");
    CHECK_THROWS_WITH(find(text,"a bababa"), "word length too long");
    
}

TEST_CASE(""){
     string text = "aba ba";
    CHECK(find(text,"aba baba"))
}
