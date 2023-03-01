/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

class Solution {
public:
    // Time complexity O(N^2)
    bool containsDuplicateNaive(std::vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }

    // Time complexity O(NlogN)
    bool containsDuplicateBetter(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) return true;
        }
        return false;
    }

    // Time complexity O(N)
    bool containsDuplicateMuchBetter(std::vector<int>& nums){
        std::set<int> helper_set;
        for (int i = 0; i < nums.size(); i++) {
            helper_set.insert(nums[i]);
        }
        return nums.size() == helper_set.size() ? false : true;
    }

    // Time complexity O(N)
    bool containsDuplicateBest(std::vector<int>& nums) {
        std::set<int> helper_set;
        for (int i = 0; i < nums.size(); i++) {
            if (helper_set.find(nums[i]) != helper_set.end()) return true;
            helper_set.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    std::vector<int> nums{ 1, 2, 3, 1 };
    Solution duplicates;
    bool res = duplicates.containsDuplicateBest(nums);
    std::cout << res << std::endl;
}


