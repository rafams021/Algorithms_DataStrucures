#include <iostream>
#include <string>
using namespace std;

int overPatternSearchN(string &word1, string &word2){
    int res = 0, sizeW2 = word2.size();
    string helper;
    for(int i = 0; i <= word1.size() - sizeW2; i++){
        helper = word1.substr(i, sizeW2);
        cout << helper << endl;
        if(helper == word2) res++;
    }
    return res;
}
