#include <iostream>
using namespace std;

int hoarePartition(int* arr, int low, int high){
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
    while(true){
        do{
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j) return j;
        swap(arr[i], arr[j]);
    }
}

void qSortHoare(int* arr, int low, int high){
    if(low < high){
        int p = hoarePartition(arr, low, high);
        qSortHoare(arr, low, p);
        qSortHoare(arr, p + 1, high);
    }
}
