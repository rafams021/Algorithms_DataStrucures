/*Palindrome Number*/
#include <iostream>
using namespace std;

bool palindrome(int n);

int main(){
    bool res = false;
    res = palindrome(232);
    if(res){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}

bool palindrome(int n){
    int nreverse = 0, temp = 0, ncopy = n;
    while(ncopy > 0){
        temp = ncopy % 10;
        nreverse = (nreverse * 10) + temp;
        ncopy /= 10;
    }
    return (nreverse == n) ? true : false;
    /*if(nreverse == n){
        return true;
    }
    return false;*/
}
