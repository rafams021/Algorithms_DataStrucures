#include <iostream>
#include <algorithm>
using namespace std;

/*Time Complexity O(M*N)*/
void union2SortArrN(int* arr1, int* arr2, const int size1, const int size2){
    int* arrF = new int [size1 + size2];
    for(int i = 0; i < size1; i++){
        arrF[i] = arr1[i];
    }
    for(int i = 0; i < size2; i++){
        arrF[size1 + i] = arr2[i];
    }
    sort(arrF, arrF + size1 + size2);
    for(int i = 0; i < size1 + size2; i++){
        int number = arrF[i - 1];
        if(i == 0 || arrF[i - 1] != arrF[i]){
            cout << arrF[i] << " ";
        }
    }
}

/*Time complexity O(M+N)*/
void union2SortArr(int* arr1, int* arr2, const int size1, const int size2){
    if(size1 > size2){
        union2SortArr(arr2, arr1, size2, size1);
        return;
    }
    int i = 0, j = 0, number = INT_MIN;
    while(i < size1 && j < size2){
        if(arr1[i] <= arr2[j] && arr1[i] != number){
            number = arr1[i];
            cout << number << " ";
            i++;
        }
        else if(arr2[j] <= arr1[i] && arr2[j] != number){
            number = arr2[j];
            cout << number << " ";
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i < size1){
        if(arr1[i] != arr1[i - 1] && arr1[i] != number){
            cout << arr1[i];
            i++;
        }
    }
    while(j < size2){
        if(arr2[j] != arr2[j - 1] && arr2[j] != number){
            cout << arr2[j];
            j++;
        }
    }
}
