#include <iostream>
using namespace std;

int peakElementLinear(int* arr, int sizeA){
    if(arr[0] > arr[1]) return arr[0];
    if(arr[sizeA - 1] > arr[sizeA - 2]) return arr[sizeA - 1];
    for(int i = 1, j = i + 1; j < sizeA -1; i++, j++ ){
        if(arr[i] > arr[i - 1] && arr[i] > arr[j]){
            return arr[i];
        }
    }
    return -1;
}

int peakElement(int* arr, int sizeA){
    if(arr[0] > arr[1]) return arr[0];
    if(arr[sizeA - 1] > arr[sizeA - 2]) return arr[sizeA - 1];
    int mid = 0, low = 1, high = sizeA - 2;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            return arr[mid];
        }
        else if(arr[mid - 1] > arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
