/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

class Solution {
public:
    // Time Complexity O(N^2)
    std::vector<int> twoSumNaive(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            int rest_target = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (rest_target == nums[j]) {
                    std::vector<int> res{ i, j };
                    return res;
                }
            }
        }
    }

    // Time complexity O(N)
    std::vector<int> twoSumBetter(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> helper;
        std::vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            int rest_target = target - nums[i];
            if (helper.count(rest_target)) {
                res.push_back(helper[rest_target]);
                res.push_back(i);
                return res;
            }
            helper[nums[i]] = i;
        }
        return res;
    }

};

int main()
{
    std::vector<int> nums{ -2, 3, 11, 2 };
    int num = 0;
    Solution TwoSum;
    std::vector<int> res = TwoSum.twoSumBetter(nums, num);
    std::cout << res[0] << " " << res[1] << std::endl;
}