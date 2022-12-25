#include <iostream>
#include <algorithm>
using namespace std;

/*Time Complexity O(N*M)*/
void inter2SortArrN(int* arr1, int* arr2, const int size1, const int size2){
    if(size1 > size2) {
        inter2SortArrN(arr2, arr1, size2, size1);
        return;
    }
    int number = INT_MIN;
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j] && arr2[j] != number){
                number = arr1[i];
                cout << number << " ";
            }
        }
    }
}

/*Time Complexity O(N+M)*/
void inter2SortArr(int* arr1, int* arr2, const int size1, const int size2){
    if(size1 > size2) {
        inter2SortArr(arr2, arr1, size2, size1);
        return;
    }
    int i = 0, j = 0, number = INT_MIN;
    while(i < size1 && j < size2){
        if(arr1[i] == arr2[j] && arr2[j] != number){
            number = arr1[i];
            cout << number << " ";
            i++;
            j++;
        }
        else if(arr1[i] == number){
            i++;
        }
        else{
            j++;
        }
    }
}
