/*Prime Factors*/
#include <iostream>
using namespace std;

int prime(int value);
void primeF(int value);

int main(){
    primeF(12);
    return 0;
}

void primeF(int value1){
    for(int i = 2; i < value1; i++){
        if(prime(i)){
            while(value1 % i == 0){
                cout << i << ' ';
                value1 /= i;
            }
        }
    }
}
