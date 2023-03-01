#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;

int longSubStringN(string &word){
    if(word.size() == 0) return 0;
    unordered_set<char> helper;
    int maxi = INT_MIN, j = 0;
    for(int i = 0; i < word.size(); i++){
        if(helper.find(word[i]) == helper.end()){
            helper.insert(word[i]);
            int sizeSet = helper.size();
            maxi = max(maxi, sizeSet);
        }
        else{
            helper.clear();
            j++;
            i = j;
        }
    }
    return maxi;
}
