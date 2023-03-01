/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    // Time Complexity O(N)
    int search(std::vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high){
            int mid = (high + low) / 2;
            if (nums[mid] == target) return mid;
            else if (target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

};

int main()
{
    std::vector<int> nums{ -1, 0, 3, 5, 9, 12 };
    int target = 9;
    Solution BinarySearch;
    int res = BinarySearch.search(nums, target);
    std::cout << res << std::endl;
}