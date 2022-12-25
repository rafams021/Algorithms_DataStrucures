/*Factorial Number*/
#include <iostream>
using namespace std;

int factorial(const int n);
int factorialR(int n);

int main(){
    int result, result1;
    result = factorial(4);
    result1 = factorialR(4);
    cout << result << endl;
    cout <<result1 << endl;
    return 0;
}

int factorial(const int n){
    int res = 1;
    for(int i = n; i > 0; i--){
        res *= i;
    }
    return res;
}

int factorialR(int n){
    if(n == 0){
        return 1;
    }
    return n * (factorialR(n - 1));
}
