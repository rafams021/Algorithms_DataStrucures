/*Trailing Ceros in Factorial*/
#include <iostream>
using namespace std;

int factorial(const int value);
int trailingC(int value);
int trailingC2(const int value);

int main(){
    int fact, res;
    fact = factorial(15);
    res = trailingC(fact);
    cout << res << endl;
    res = trailingC2(251);
    cout << res << endl;
    return 0;
}

/*This solution has overflow*/
int factorial(const int value){
    int res = 1;
    for(int i = value; i > 0; i--){
        res *= i;
    }
    return res;
}

int trailingC(int value){
    int countT = 0;
    while(value % 10 == 0){
            countT++;
            value /= 10;
    }
    return countT;
}

/*Dividing value by 5 is the correct solution without overflow*/

int trailingC2(const int value){
    int res = 0;
    for(int i = 5; i <= value; i *= 5){
        res = res + value / i;
    }
    return res;
}
