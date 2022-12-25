#include <iostream>
using namespace std;

/*Linear O(n) solution*/
int squareRootLinear(int value){
    int res = 1;
    while(res * res <= value){
        res++;
    }
    return res - 1;
}

int squareRoot(const int value){
    int low = 1, high = value, res = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        int sq = mid * mid;
        if(sq == value){
            return mid;
        }
        else if(sq > value){
            high = mid - 1;
        }
        else{
            low = mid + 1;
            res = mid;
        }
    }
    return res;
}
