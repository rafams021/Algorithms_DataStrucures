/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

class Solution {
public:
    // Time Complexity O(N)
    bool isValid(std::string word) {
        std::stack<char> helper;
        for (auto& it : word) {
            if (it == ')' || it == '}' || it == ']') {
                if (helper.empty()) return false;
                else if (it == ')' && helper.top() != '(') return false;
                else if (it == '}' && helper.top() != '{') return false;
                else if (it == ']' && helper.top() != '[') return false;
            }
            else {
                helper.push(it);
            }
        }
        return helper.empty() ? true : false;
    }

};

int main()
{
    std::string word = "((()))";
    Solution IsValid;
    bool res = IsValid.isValid(word);
    std::cout << res << std::endl;
}