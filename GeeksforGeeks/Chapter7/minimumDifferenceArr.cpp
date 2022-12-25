#include <iostream>
#include <algorithm>
using namespace std;

/*Time Complexity O(N^2)*/
int minimumDifferenceArrN(int* arr, int sizeA){
    if(sizeA == 1){
        return INT_MAX;
    }
    int res = INT_MAX, subs = 0;
    for(int i = 0; i < sizeA; i++){
        for(int j = 0; j< sizeA; j++){
            if(i != j){
                res = min(res, abs(arr[i] - arr[j]));
            }
        }
    }
    return res;
}

/*Time Complexity O(N*log(N))*/
int minimumDifferenceArrS(int* arr, int sizeA){
    if(sizeA == 1){
        return INT_MAX;
    }
    sort(arr, arr + sizeA);
    int res = INT_MAX;
    for(int i = 1; i< sizeA; i++){
        res = min(res, abs(arr[i] - arr[i - 1]));
    }
    return res;
}
