#include <iostream>
#include <string>
#include <vector>
using namespace std;

void revWordsStrN(string &word1){
    string resStr;
    vector<string> helper;
    for(int i = 0; i < word1.size(); i++){
        if(word1[i] == ' '){
            helper.push_back(resStr);
            resStr = "";
        }
        else{
            resStr += word1[i];
        }
    }
    helper.push_back(resStr);
    resStr = "";
    for(int i = helper.size() - 1; i > 0; i--){
        resStr += helper[i] + " ";
    }
    resStr += helper[0];
    cout << resStr;
}
