#include <iostream>
using namespace std;

/*Time Complexity O(N^2)*/
void iSort(int* arr,int sizeA){
    
    for(int i = 1; i < sizeA; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1]=key;
    }
}