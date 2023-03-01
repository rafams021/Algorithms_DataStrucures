#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printMapKeysValues(unordered_map<int, int> &arrMap){
    for(auto it : arrMap){
        cout << it.first << " " << it.second << endl;
    }
}
