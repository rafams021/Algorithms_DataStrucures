#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindromeN(string &word){
    string rev_word = word;
    reverse(rev_word.begin(), rev_word.end());
    return rev_word == word;
}

bool isPalindromeE(string &word){
    int first = 0, last = word.size() - 1;
    while(first < last){
        if(word[first] != word[last]) return false;
        first++;
        last--;
    }
    return true;
}
