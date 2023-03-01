#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "test.h"
using namespace std;

/* Naive Solution */
int intersectionOf2ArrN(vector<int> &arr1, vector<int> &arr2){
    if(arr1.size() == 0 || arr2.size() == 0) return -1;
    unordered_map<int, int> helper;
    unordered_set<int> setArr;
    for(int i = 0; i < arr1.size(); i++){
        helper[arr1[i]]++;
    }
    for(int i = 0; i < arr2.size(); i++){
        setArr.insert(arr2[i]);
    }
    int res = 0;
    for(auto it : setArr){
        if(helper.find(it) != helper.end()){
            res++;
        }
    }
    return res;
}

/* Efficient Solution */
int intersectionOf2ArrE(vector<int> &arr1, vector<int> &arr2){
    if(arr1.size() == 0 || arr2.size() == 0) return -1;
    unordered_set<int> setArr;
    for(int i = 0; i < arr1.size(); i++){
        setArr.insert(arr1[i]);
    }
    int res = 0;
    for(int i = 0; i < arr2.size(); i++){
        if(setArr.find(arr2[i]) != setArr.end()){
            res++;
            setArr.erase(arr2[i]);
        }
    }
    return res;
}
