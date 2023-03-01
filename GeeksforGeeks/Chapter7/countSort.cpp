#include <iostream>
using namespace std;

void countSort(int* arr, int n, int k)
{
    int* countArr = new int [k];

    for (int i = 0; i < k; i++) {
        countArr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        countArr[arr[i]]++;
    }

    for (int i = 1; i < k; i++) {
        countArr[i] = countArr[i - 1] + countArr[i];
    }

    int* outputArr = new int [n];
    for (int i = n - 1; i >= 0; i--) {
        outputArr[countArr[arr[i]] - 1] = arr[i];
        countArr[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = outputArr[i];
    }
    delete [] countArr;
    delete [] outputArr;
}