#include <iostream>
using namespace std;

/*Linear Solution O(n)*/
int searchInRotatedArrLinear(int* arr, const int sizeA){
    for(int i = 1; i <= sizeA - 1; i++){
        if(arr[i] < arr[i - 1]){
            return sizeA - i;
        }
    }
    return sizeA;
}

int searchInRotatedArr(int* arr, const int sizeA){
    if(arr[0] < arr[sizeA - 1]) return sizeA;
    int low = 0, high = sizeA - 1, mid = 0;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] < arr[mid - 1]){
            return sizeA - mid;
        }
        else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[0]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
