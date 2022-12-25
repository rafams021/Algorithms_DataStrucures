#include <iostream>
#include "test.h"

using namespace std;

int count1sInsortedArr(int *arr, int const sizeA, int const value){
    int low = indexOfFirstOcurrence(arr, sizeA, value);
    if(low == -1){
        return -1;
    }
    else{
        int high = indexOfLastOcurrence(arr, sizeA, value);
        return ( high - low + 1);
    }
}
