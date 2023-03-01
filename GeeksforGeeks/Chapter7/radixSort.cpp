#include <iostream>
using namespace std;

void countingSort(int* arr, int sizeA, int exp)
{
    int* outputArr = new int [sizeA];
    int countArr[10] = { 0 };

    for (int i = 0; i < sizeA; i++) {
        countArr[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        countArr[i] += countArr[i - 1];
    }

    for (int i = sizeA - 1; i >= 0; i--) {
        outputArr[countArr[(arr[i] / exp) % 10] - 1] = arr[i];
        countArr[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < sizeA; i++) {
        arr[i] = outputArr[i];
    }
    
    delete [] outputArr;
}

void radixsort(int arr[], int n)
{
    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        maxValue = max(maxValue, arr[i]);
    }

    for (int exp = 1; maxValue / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}