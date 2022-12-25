#include <iostream>
using namespace std;

void sortArr2TypesN(int*arr, int sizeA){
    int* tempArr = new int [sizeA];
    int i = 0;
    for(int j = 0; j < sizeA; j++){
        if(arr[j] < 0){
            tempArr[i++] = arr[j];
        }
    }
    for(int j = 0; j < sizeA; j++){
        if(arr[j] >= 0){
            tempArr[i++] = arr[j];
        }
    }
    for(int j = 0; j < sizeA; j++){
        arr[j] = tempArr[j];
    }
    delete tempArr;
}

void sortArr2TypesHoare(int* arr, int sizeA){
    int i = -1, j = sizeA;
    while(true){
        do{
            i++;
        }while(arr[i] < 0);
        do{
            j--;
        }while(arr[j] >= 0);
        if(i >= j) return;
        swap(arr[i], arr[j]);
    }
}

void sortArr2TypesLomuto(int* arr, int sizeA){
    int pivot = 0;
    int i = -1;
    for(int j = 0; j < sizeA; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
}
