#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void printSet(unordered_set<int> &arrSet){
    for(auto it : arrSet){
        cout << it << " ";
    }
    cout << endl;
}
