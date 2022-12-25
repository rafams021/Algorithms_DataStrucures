#include <iostream>
#include <algorithm>
using namespace std;

/*Time Complexity O(N*log(N))*/
int chocoDistribS(int* arr, int sizeA, int child){
    if(child > sizeA){
        return -1;
    }
    sort(arr, arr + sizeA);
    int res = arr[child - 1] - arr[0];
    for(int i = 1; (i + child - 1) < sizeA; i++){
        res = min(res, arr[i + child - 1] - arr[i]);
    }
    return res;
}
