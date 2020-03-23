#include <iostream>
#include <stdexcept>
#include "PhoneticFinder.hpp"
#include<bits/stdc++.h> 
using namespace std;

// bool equal(char a,char b){
//     switch (a)
//     case v: if(b)
// }

string phonetic::find(string text,string word)
{

     transform(text.begin(), text.end(), text.begin(), ::tolower);
     transform(word.begin(), word.end(), word.begin(), ::tolower);

    //  if(text.length()<word.length())
      //throw "word length too long";

    // int i=0,j=0;

// while(i<text.length()){
    
// }
return "b";
}

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

TEST_CASE("not a valid word"){
     string text = "abba";
    CHECK_THROWS_WITH(find(text,""), "word isn't valid");
     CHECK_THROWS_WITH(find(text,"  "), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab1ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab%ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab_ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"aba^"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab-ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab!ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab(ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab&ba"), "word isn't valid");
    CHECK_THROWS_WITH(find(text,"ab.ba"), "word isn't valid");
     CHECK_THROWS_WITH(find(text,"ab=ba"), "word isn't valid");
      CHECK_THROWS_WITH(find(text,"ab_ba"), "word isn't valid");
       CHECK_THROWS_WITH(find(text,"ab$ba"), "word isn't valid");
        CHECK_THROWS_WITH(find(text,"ab@ba"), "word isn't valid");
        CHECK_THROWS_WITH(find(text,"ab[ba"), "word isn't valid");
         CHECK_THROWS_WITH(find(text,"ab*ba"), "word isn't valid");
         CHECK_THROWS_WITH(find(text,"ab/ba"), "word isn't valid");
          CHECK_THROWS_WITH(find(text,"ab~ba"), "word isn't valid");
            CHECK_THROWS_WITH(find(text,"ab;ba"), "word isn't valid");
}

TEST_CASE("word is almost a text substring but missing one letter or more"){
    string text="the times they are a changin";
     CHECK_THROWS_WITH(find(text,"tims"), "Word isn't a part of the text");
     CHECK_THROWS_WITH(find(text,"hey"), "Word isn't a part of the text");
     CHECK_THROWS_WITH(find(text,"chanin"), "Word isn't a part of the text");
     CHECK_THROWS_WITH(find(text, "he"), "Word isn't a part of the text");
}

TEST_CASE("word is a text substring but with one letter or more added"){
    string text="Dont think twice its alright";
      CHECK_THROWS_WITH(find(text, "dontt"), "Word isn't a part of the text");
      CHECK_THROWS_WITH(find(text,"tthink"), "Word isn't a part of the text");
      CHECK_THROWS_WITH(find(text,"twwice"), "Word isn't a part of the text");
      CHECK_THROWS_WITH(find(text,"allright"), "Word isn't a part of the text");
      CHECK_THROWS_WITH(find(text,"dontthink"), "Word isn't a part of the text");
      CHECK_THROWS_WITH(find(text,"itsalright"), "Word isn't a part of the text");
    {
