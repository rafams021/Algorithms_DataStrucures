#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallestElementN(int* arr, int sizeA, int kth){
    sort(arr, arr + sizeA);
    return arr[kth - 1];
}

int partitionLomuto(int* arr, int low, int high){
    int i = low - 1;
    int pivot = arr[high];
    for(int j = low; j < high - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int kthSmallestElementHoare(int* arr, int sizeA, int kth){
    int low = 0, high = sizeA - 1;
    while(low <= high){
        int p = partitionLomuto(arr, low, high);
        if(p == kth - 1){
            return arr[p];
        }
        else if(p > kth - 1){
            high = p - 1;
        }
        else{
            low = p + 1;
        }
    }
    return -1;
}
