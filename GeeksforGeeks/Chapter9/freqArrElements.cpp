#include <iostream>
#include <vector>
#include <unordered_map>
#include "test.h"
using namespace std;

void freqArrElementsN(vector<int> &arr){
    unordered_map<int, int> helper;
    for(int i = 0; i < arr.size(); i++){
        helper[arr[i]]++;
    }
    printMapKeysValues(helper);
}
