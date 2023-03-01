#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool checkanagramN(string &word1, string &word2){
    if(word1.size() != word2.size()) return false;
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    return word1 == word2;
}

bool checkanagramE(string &word1, string &word2){
    if(word1.size() != word2.size()) return false;
    unordered_map<char, int> countW1;
    unordered_map<char, int> countW2;
    for(int i = 0; i < word1.size(); i++){
        countW1[word1[i]]++;
        countW2[word2[i]]++;
    }
    return countW1 == countW2;
}
