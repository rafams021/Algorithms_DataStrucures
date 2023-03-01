/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        std::priority_queue<int> pq;
        for (int i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }

        while (pq.size() > 1) {
            int value1 = pq.top();
            pq.pop();
            int value2 = pq.top();
            pq.pop();
            int value3 = value1 - value2;
            if (value3 > 0) pq.push(value3);
        }
        return pq.size() == 1 ? pq.top() : 0;
    }
};