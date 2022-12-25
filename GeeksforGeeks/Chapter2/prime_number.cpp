/*Prime Numbers*/
#include <iostream>
using namespace std;

bool isPrime(const int value);

int main(){
    bool res;
    res = isPrime(20);
    cout << res << endl;
    return 0;
}

bool isPrime(const int value){
    if(value == 1) { return false;}
    for(int i = 2; i < value; i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}
