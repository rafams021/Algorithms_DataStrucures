#include <iostream>
#include <vector>
using namespace std;


void mergeSort2(int* arr, int low, int mid, int high){

    int size1 = mid - low + 1, size2 = high - mid;
    vector<int> left;
    vector<int> right;

    for(int i = 0; i < size1; i++){
        left.push_back(arr[i + low]);
    }
    for(int j = 0; j < size2; j++){
        right.push_back(arr[mid + 1 + j]);
    }

    int i = 0, j = 0, k = low;
    while(i < size1 && j < size2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }

    while(i < size1){
        arr[k++] = left[i++];
    }
    while(j < size2){
        arr[k++] = right[j++];
    }
}

void mergeSort(int* arr, int low, int high){
    if(high > low){
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        mergeSort2(arr, low, mid, high);
    }
}
