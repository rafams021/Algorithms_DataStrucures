#include <iostream>
#include "test.h"

using namespace std;

int countOcurrences(int *arr, int const sizeA, int const value){
    int low = indexOfFirstOcurrence(arr, sizeA, value);
    if(low == -1){
        return -1;
    }
    else{
        return (indexOfLastOcurrence(arr, sizeA, value) - low + 1);
    }
}
