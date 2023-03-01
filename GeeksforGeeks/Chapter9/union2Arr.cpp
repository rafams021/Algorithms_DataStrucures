#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int union2Arr(vector<int> &arr1, vector<int> &arr2){
    if(arr1.size() == 0 && arr2.size() == 0) return 0;
    unordered_set<int> helper;
    for(int i = 0; i < arr1.size(); i++){
        helper.insert(arr1[i]);
    }
    for(int i = 0; i < arr2.size(); i++){
        helper.insert(arr2[i]);
    }
    return helper.size();
}
