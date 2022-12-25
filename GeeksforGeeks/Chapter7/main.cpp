#include <iostream>
#include "test.h"

using namespace std;


int main()
{
    int arr1[] = { 0, 1, 1, 2, 0, 1, 1, 2 };
    Interval arrInt[] = { {5, 10}, {3, 15}, {18, 30}, {2, 7} };
    #if(0)
    //int arr2[] = { 5, 20, 40, 40 };
    #endif
    int sizeA = sizeof(arr1) / sizeof(arr1[0]);
    int sizeAInt = sizeof(arrInt) / sizeof(arrInt[0]);
    mergeOverlappingInt(arrInt, sizeAInt);
    #if(0)
    for(int i = 0; i < sizeA; i ++){
        cout << arr1[i] << " ";
    }
    #endif
    return 0;
}
