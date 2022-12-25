#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    int arr1[] = { 10, 20, 30, 40, 50 };
    int arr2[] = { 5, 15, 25, 35, 45 };
    double res = median2SortedArrMath(arr1, arr2, 5, 5);
    cout << res << endl;
    return 0;
}
