#include <iostream>
using namespace std;

/*Time Complexity O(n^2)*/
int countInversionsN(int* arr, const int sizeA){
    int counter = 0;
    for(int i = 0; i < sizeA - 1; i++){
        for(int j = i + 1; j < sizeA; j++){
            if(arr[j] < arr[i]){
                counter++;
            }
        }
    }
    return counter;
}

/*Time Compleaxity O(N * logN)*/
int countandmerge(int* arr, int low, int mid, int high){
    int sizeL = mid - low + 1, sizeR = high - mid;
    int* left = new int[sizeL];
    int* right = new int[sizeR];

    for(int i = 0; i < sizeL; i++){
        left[i] = arr[i + low];
    }
    for(int i = 0; i < sizeR; i++){
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, counter = 0, k = low;
    while(i < sizeL && j < sizeR){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            counter += (sizeL - i);
            j++;
            k++;
        }
    }
    while(i < sizeL){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < sizeR){
        arr[k] = right[j];
        k++;
        j++;
    }
    delete [] left;
    delete [] right;
    return counter;
}

int countInversions(int* arr, int low, int high){
    int counter = 0, mid = 0;
    if(low < high){
        mid  = (low + high) / 2;
        counter += countInversions(arr, low, mid);
        counter += countInversions(arr, mid + 1, high);
        counter += countandmerge(arr, low, mid, high);
    }
    return counter;
}
