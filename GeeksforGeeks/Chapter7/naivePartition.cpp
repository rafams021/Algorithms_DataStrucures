#include <iostream>
using namespace std;

/*Time Complexity O(N)*/
void naivePartition(int* arr, int sizeA, int position){
    int* arrF = new int [sizeA];
    int counter = 0;
    for(int i = 0; i < sizeA; i++){
        if(arr[i] <= arr[position]){
            arrF[counter++] = arr[i];
        }
    }
    for(int i = 0; i < sizeA; i++){
        if(arr[i] > arr[position]){
            arrF[counter++] = arr[i];
        }
    }
    arr = arrF;
    delete arrF;
}

/*Time Complexity O(N)*/
void lomutoParition(int* arr, int sizeA, int position){
    int i = -1;
    for(int j = 0; j < sizeA; j++){
        if(arr[j] < arr[position]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[position]);
}

/*Time Complexity O(N)*/
/*
void hoarePartition(int* arr, int sizeA, int position){
    int i = -1, j = sizeA;
    while(true){
        do{
            i++;
        }while(arr[i] < arr[position]);
        do{
            j--;
        }while(arr[j] > arr[position]);
        if(i >= j){
        break;
        }
        swap(arr[i], arr[j]);
    }
}
*/

