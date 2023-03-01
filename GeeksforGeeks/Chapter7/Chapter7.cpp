// Chapter7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    int arr1[] = { 20, 40, 50, 10, 30 };
    int arr2[] = { 1000, 800, 730 };
    Interval arr3[] = { {5,10}, {3,15}, {18,30}, {2,7} };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cycleSort(arr1, n);
#if(1)
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
#endif
    return 0;
}
