#include <iostream>
using namespace std;

int indexOfLastOcurrence(int* arr, const int sizeA, const int value){
    int low = 0, high = sizeA - 1, mid = 0;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == value){
            if(mid == sizeA - 1 || arr[mid + 1] != value){
                return mid;
            }
            else{
                low = mid + 1;
            }
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
