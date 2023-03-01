#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int countDistinctElementsN(vector<int> &arr){
    int res = 0;
    if(arr.size() == 0) return res;
    unordered_set<int> helper;
    for(int i = 0; i < arr.size(); i++){
        helper.insert(arr[i]);
    }
    return helper.size();
}

int countDistinctElementsE(vector<int> &arr){
    if(arr.size() == 0) return 0;
    unordered_set<int> helper(arr.begin(), arr.end());
    return helper.size();
}
