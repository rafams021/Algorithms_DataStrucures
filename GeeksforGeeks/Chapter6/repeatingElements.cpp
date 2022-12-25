#include <iostream>
using namespace std;

int repeatingElement(int*arr, int sizeA){
    int high = 1;
    for(int i = 0; i < sizeA; i++){
        if(arr[i] == arr[high]){
            return arr[i];
        }
        else{
            high++;
        }
    }
    return 0;
}
