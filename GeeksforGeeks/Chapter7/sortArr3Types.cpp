#include <iostream>
#include <vector>
using namespace std;

void sortArr3TypesN(int* arr, int sizeA){
    vector<int> helper;
    for(int i = 0; i < sizeA; i++){
        if(arr[i] == 0){
            helper.push_back(arr[i]);
        }
    }
    for(int i = 0; i < sizeA; i++){
        if(arr[i] == 1){
            helper.push_back(arr[i]);
        }
    }
    for(int i = 0; i < sizeA; i++){
        if(arr[i] == 2){
            helper.push_back(arr[i]);
        }
    }
    for(int i = 0; i < sizeA; i++){
        arr[i] = helper[i];
    }
}

void sortArr3TypesLomuto(int* arr, int sizeA){
    int low = 0, mid = 0, high = sizeA -1;
    while(mid <= high){
        switch(arr[mid]){
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[high], arr[mid]);
            high--;
            break;
        }
    }
}
