#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool pairGivenSumArrN(vector<int> &arr, int value){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            int add = arr[i] + arr[j];
            if(add == value){
                return true;
            }
        }
    }
    return false;
}

bool pairGivenSumArrE(vector<int> &arr, int value){
    unordered_set<int> helper;
    for(int i = 0; i < arr.size(); i++){
        if(helper.find(value - arr[i]) != helper.end()){
            return true;
        }
        helper.insert(arr[i]);
    }
    return false;
}
