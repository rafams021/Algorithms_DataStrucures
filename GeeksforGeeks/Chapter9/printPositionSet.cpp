#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void printPositionSet(unordered_set<int> &arrSet, const int val){
    int index = 0;
    for(auto it : arrSet){
        if(it == val){
            cout << index << endl;
            return;
        }
        index++;
    }
    cout << "Not found";
}
