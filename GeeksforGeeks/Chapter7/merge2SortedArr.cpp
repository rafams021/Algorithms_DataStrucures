#include <iostream>
#include <algorithm>
using namespace std;

/*Time Complexity O((n+m) * log(m+n))*/
void merge2SortedArr1(int* arr1, int* arr2, int sizeA1, int sizeA2){
    int* arrF = new int[sizeA1 + sizeA2 - 2];
    for(int i = 0; i < sizeA1; i++){
        arrF[i] = arr1[i];
    }
    for(int i = 0; i < sizeA2; i++){
        arrF[sizeA1 + i] = arr2[i];
    }
    sort(arrF, arrF + sizeA1 + sizeA2);
    for(int i = 0; i < (sizeA1 + sizeA2); i++){
        cout << arrF[i] << " ";
    }
    delete [] arrF;
}

/*Time Complexity O(n+m)*/
void merge2SortedArr2(int* arr1, int* arr2, int sizeA1, int sizeA2){
    int i = 0, j = 0;
    while(i < sizeA1 && j < sizeA2){
        if(arr1[i] <= arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else{
            cout << arr2[j] << " ";
            j++;
        }
    }
    while(i < sizeA1){
        cout << arr1[i] << " ";
        i++;
    }
    while(j < sizeA2){
        cout << arr2[j] << " ";
        j++;
    }
}
