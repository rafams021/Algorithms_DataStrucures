#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int lexicographicRank(string &word){
    string copyW = word;
    sort(copyW.begin(), copyW.end());
    unordered_map<string, int> lexiWords;
    int position = 1;
    do{
        string helperW = "";
        for(auto element : copyW){
            helperW += element;
        }
        lexiWords.insert({helperW, position});
        position++;
    }while(next_permutation(copyW.begin(), copyW.end()));
    return lexiWords.at(word);
}
