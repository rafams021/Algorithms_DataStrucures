#include <iostream>
using namespace std;

/*N^3 Solution*/
bool tripletInSortedArrCube(int* arr, const int sizeA, const int value){
    for(int i = 0; i < sizeA - 2; i++){
        for(int j = i + 1; j < sizeA - 1; j++){
            for(int k = j + 1; k < sizeA; k++){
                if(arr[i] + arr[j] + arr[k] == value){
                    return true;
                }
            }
        }
    }
    return false;
}

/*N^2 Solution*/
bool tripletInSortedArrSquare(int* arr, const int sizeA, const int value){
    int low = 1, high = sizeA - 1, temp = 0;
    for(int i = 0; i < sizeA - 2; i++){
        while(low <= high){
            temp = arr[i] + arr[low] + arr[high];
            if(temp == value){
                return true;
            }
            else if(temp > value){
                high--;
            }
            else if(temp < value){
                low++;
            }
        }
        low = i + 1;
        high = sizeA - 1;
    }
    return false;
}
