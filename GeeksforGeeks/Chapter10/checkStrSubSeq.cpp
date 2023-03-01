#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkStrSubSeqN(string &word1, string &word2){
    int i = 0, j = 0;
    while(i < word1.size() - 1){
        if(word1[i] == word2[j]) j++;
        i++;
    }
    return j == word2.size() - 1;
}
