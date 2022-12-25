/*Counting Digits*/

#include <iostream>
using namespace std;

int count(int n);

int main(){
    int result;
    result = count(9235);
    cout << result;
    return 0;
}

int count(int n){
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}
