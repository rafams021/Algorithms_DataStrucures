#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool checkForRotationN(string &word1, string &word2){
    if(word1.size() != word2.size()) return false;
    if(word1 == word2) return true;
    string helper = "";
    for(int i = 0; i < word1.size(); i++){
        helper = word1.substr(1, word1.size() - 1);
        helper += word1[0];
        if(helper == word2) return true;
        word1 = helper;
        helper = "";
    }
    return false;

}

bool checkForRotationBetter(string &word1, string &word2){
    if(word1.size() != word2.size()) return false;
    return ((word1 + word1).find(word2) != string::npos);
}
