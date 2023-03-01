#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

unordered_set<int> vectorToSet(vector<int> &arr){
    unordered_set<int> setArr;
    for(int i = 0; i < arr.size(); i++){
        setArr.insert(arr[i]);
    }
    return setArr;
}
