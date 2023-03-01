#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int leftMostRepCharN(string &word1){
    unordered_map<char, int> helper;
    for(int i = 0; i < word1.size(); i++){
        helper[word1[i]]++;
    }
    for(int i = 0; i < word1.size(); i++){
        if(helper.at(word1[i]) > 1) return i;
    }
    return 0;
}
