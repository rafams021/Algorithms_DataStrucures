#include <iostream>
#include <algorithm>
#include "test.h"

using namespace std;

bool compareInterval(Interval a, Interval b){
    return a.startInt < b.startInt;
}

void mergeOverlappingInt(Interval* arr, int sizeInt){
    sort(arr, arr + sizeInt, compareInterval);

    int res = 0;

    for(int i = 1; i < sizeInt; i++){
        if(arr[res].endInt >= arr[i].startInt){
            arr[res].endInt = max(arr[res].endInt, arr[i].endInt);
            arr[res].startInt = min(arr[res].startInt, arr[i].startInt);
        }
        else{
            res++;
            arr[res] = arr[i];
        }
    }
    for(int i =0; i <= res; i++){
        cout << "[" << arr[i].startInt << ", " << arr[i].endInt << "]";
    }
}
