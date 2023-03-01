#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char,int> wordCounter(string &word){
    unordered_map<char, int> helper;
    for(int i = 0; i < word.size(); i++){
        helper[word[i]]++;
    }
    return helper;
}

bool searchAnagramN(string &word1, string &word2){
    unordered_map<char, int> mapWord2 = wordCounter(word2);
    int sizew2 = word2.size();
    for(int i = 0; i < word1.size(); i++){
        unordered_map<char, int> mapWord1;
        string substrW1 = word1.substr(i, sizew2);
        mapWord1 = wordCounter(substrW1);
        if(mapWord1 == mapWord2) return true;
    }
    return false;
}

bool searchAnagramE(string &word1, string &word2){
    unordered_map<char, int> helperW1;
    unordered_map<char, int> helperW2;
    for(int i = 0; i < word2.size(); i++){
        helperW1[word1[i]]++;
        helperW2[word2[i]]++;
    }
    if(helperW1 == helperW2) return true;
    for(int i = word2.size(); i < word1.size(); i++){
        if(helperW1 == helperW2) return true;
        helperW1[word1[i]]++;
        helperW1[word1[i - word2.size()]]--;
    }
    return false;
}
