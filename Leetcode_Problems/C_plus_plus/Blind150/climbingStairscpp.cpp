/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        int first = 1, second = 1;
        for (int i = 0; i < n - 1; i++) {
            int temp = first;
            first += second;
            second = temp;
        }
        return first;
    }
};