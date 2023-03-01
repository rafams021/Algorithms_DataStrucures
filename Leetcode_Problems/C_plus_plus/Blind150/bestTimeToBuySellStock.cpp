/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    // Time Complexity O(N)
    int maxProfitFirst(std::vector<int>& nums) {
        int minValue = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minValue) minValue = nums[i];
            else if (nums[i] - minValue > maxProfit) maxProfit = nums[i] - minValue;
        }
        return maxProfit;
    }

    // Time Complexity O(N)
    int maxProfitSecond(std::vector<int>& nums) {
        int left = 0, right = 1;
        int maxProfit = 0;
        while (right < nums.size()) {
            if (nums[left] < nums[right]) {
                int profit = nums[right] - nums[left];
                maxProfit = std::max(maxProfit, profit);
            }
            else {
                left  = right;
            }
            right++;
        }
        return maxProfit;
    }

};

int main()
{
    std::vector<int> nums{ 7, 1, 5, 3, 6, 4 };
    Solution MaxProfit;
    int res = MaxProfit.maxProfitSecond(nums);
    std::cout << res << std::endl;
}