/*Greatest common Divisor of 2 numbers*/
#include <iostream>
using namespace std;

int gcd(int value1, const int value2);
int gcdE(int value1, int value2);
int gcdOE(int value1, int value2);

int main(){
    int res, value1 = 10, value2 = 15;
    res = gcd(value1, value2);
    cout << res << endl;
    res = gcdE(value1, value2);
    cout << res << endl;
    res = gcdOE(value1, value2);
    cout << res << endl;
    return 0;
}

/*Brute force solution*/
int gcd(int value1, int value2){
    int mini = min(value1, value2);
    int maxi = max(value1, value2);
    while(maxi % mini != 0){
        mini--;
    }
    return mini;
}

/*Euclidean Algorithm*/

int gcdE(int value1, int value2){
    while(value1 != value2){
        value1 > value2 ? value1 -= value2 : value2 -= value1;
    }
    return value1;
}

/*Optimize Euclidean algorithm */

int gcdOE(int value1, int value2){
    if(value2 == 0){
        return value1;
    }
    else{
        return gcdOE(value2, value1 % value2);
    }

}
