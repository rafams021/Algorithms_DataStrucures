#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool subArr0SumN(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        int curr_sum = 0;
        for(int j = i; j < arr.size(); j++){
            curr_sum += arr[j];
            if(curr_sum == 0) return true;
        }
    }
    return false;
}

bool subArr0SumE(vector<int> &arr){
    unordered_set<int> helper;
    int add = 0;
    for(int i = 0; i < arr.size(); i++){
        add += arr[i];
        if(helper.find(add) != helper.end()) return true;
        if(add == 0) return true;
        helper.insert(add);
    }
    return false;
}
