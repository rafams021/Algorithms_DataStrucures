#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median2SortedArr(int* arr1, int* arr2, int sizeA1, int sizeA2){
    vector<int> helper;
    helper.insert(helper.begin(), arr1, arr1 + sizeA1);
    helper.insert(helper.end(), arr2, arr2 + sizeA2);
    sort(helper.begin(), helper.end());
    if(helper.size() % 2 == 1){
        return helper[helper.size() / 2];
    }
    else{
        int mid = helper.size() / 2;
        int sum = helper[mid] + helper[mid - 1];
        return sum / 2.0;
    }
}

double median2SortedArrMath(int* arr1, int* arr2, int sizeA1, int sizeA2){
    int sizeF = sizeA1 + sizeA2;
    if(sizeF % 2 == 1){
        vector<int> helper;
        helper.insert(helper.begin(), arr1, arr1 + sizeA1);
        helper.insert(helper.end(), arr2, arr2 + sizeA2);
        sort(helper.begin(), helper.end());
        return helper[sizeF / 2];
    }
    else{
        int add = 0;
        for(int i = 0; i < sizeA1; i++){
            add += arr1[i] + arr2[i];
        }
        return (add * 1.0) / (sizeF * 1.0);
    }
}
