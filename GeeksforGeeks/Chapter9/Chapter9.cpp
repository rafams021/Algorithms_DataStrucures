// Chapter9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_set>
#include "test.h"

using namespace std;

int main()
{
    vector<int> arr1 = { 1, 4, 13, -2, -10, 5 };
    vector<int> arr2 = { 30 , 5, 30, 80 };
    int res = union2Arr(arr1, arr2);
    bool resbool = subArr0SumE(arr1);
    cout << resbool;
    return 0;
}

