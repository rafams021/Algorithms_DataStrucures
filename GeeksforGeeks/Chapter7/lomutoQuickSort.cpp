#include <iostream>
using namespace std;

int iPartition(int* arr, int low, int high){
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < arr[high]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void qSortLomuto(int* arr, int low, int high){
    if(low < high){
        int p = iPartition(arr, low, high);
        qSortLomuto(arr, low, p - 1);
        qSortLomuto(arr, p + 1, high);
    }
}
