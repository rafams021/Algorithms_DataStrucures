#include <iostream>
using namespace std;

/*Linear solution*/
int searchInfiniteSizedArrLinear(int* arr, int value){
    int i = 0;
    while(true){
        if(arr[i] == value) return i;
        if(arr[i] > value) return -1;
        i++;
    }
}

/*Log solution*/
int binary_search1(int* arr, int value, int low, int high){
    int mid = 0;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == value){
            return mid;
        }
        else if(arr[mid] < value){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int searchInfiniteSizedArr(int* arr, int value){
    if(arr[0] == value) return 0;
    int i = 1;
    while(arr[i] < value){
        i = i * 2;
    }
    if(arr[i] == value) return i;
    return binary_search1(arr, value, (i / 2) + 1, i);
}
