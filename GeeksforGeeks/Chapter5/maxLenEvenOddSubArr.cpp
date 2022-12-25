#include <iostream>
using namespace std;

int maxLenEvenOddSubArr(int* arr, const int sizeA){
    int res = 0, first = 0, last = 1, counter = 1;
    bool even = false, odd = false;
    while(last < sizeA){
        if(arr[first] % 2 == 0){
            if(even){
                if(arr[last] % 2 == 0){
                    even = false;
                    counter++;
                    res = max(res, counter);
                    last++;
                }
                else{
                    even = false;
                    counter = 1;
                    first = last;
                    last = first + 1;
                }
            }
            else if(arr[last] % 2 == 1){
                even = true;
                counter++;
                res = max(res, counter);
                last++;
            }
            else{
                even = false;
                first = last;
                last = first + 1;
                counter = 1;
            }
        }
        else{
            if(odd){
                if(arr[last] % 2 == 1){
                    odd = false;
                    counter++;
                    res = max(res, counter);
                    last++;
                }
                else{
                    odd = false;
                    first = last;
                    last = first + 1;
                    counter = 1;
                }
            }
            else if(arr[last] % 2 == 0){
                odd = true;
                counter++;
                res = max(res, counter);
                last++;
            }
            else{
                odd = false;
                first = last;
                last = first + 1;
                counter = 1;
            }
        }
    }
    return res;
}
