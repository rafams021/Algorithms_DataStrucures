    #include <iostream>
    using namespace std;

    int exactly3Divisors(int N);

    int main(){
        int res;
        res = exactly3Divisors(6);
        cout << res << endl;
        return 0;
    }

    int exactly3Divisors(int N)
    {
        //Your code here
        if(N < 4){
            return -1;
        }
        int counter1 = 0;
        for(int i = N; i >= 4; i--){
            int counter2 = 0;
            for(int j = 1; i <= N; i++){
                if(N % j == 0){
                    counter2++;
                }
            }
            if(counter2 == 3){
                counter1++;
            }
        }
        return counter1;
    }
