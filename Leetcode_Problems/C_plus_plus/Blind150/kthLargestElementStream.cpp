/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <vector>
#include <queue>

class KthLargest {
private:
    int value;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
public:
    KthLargest(int k, std::vector<int>& nums) {
        value = k;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        while (pq.size() > value) {
            pq.pop();
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > value) {
            pq.pop();
        }
        return pq.top();
    }
};
