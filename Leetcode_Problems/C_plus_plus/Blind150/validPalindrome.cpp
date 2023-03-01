/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <algorithm>
#include <string>

class Solution {
public:
    // Time Complexity O(N)
    bool isPalindromeNaive(std::string sentence) {
        std::string helper = "";
        std::string copy = "";
        for (auto& it : sentence) {
            if (isalnum(it)) helper += tolower(it);
        }
        copy = helper;
        std::reverse(copy.begin(), copy.end());
        return copy == helper;
    }

    // Time complexity O(N)
    bool isPalindromeBetter(std::string sentence) {
        int first = 0, last = sentence.size() - 1;
        while (first < last) {
            while (first < last && !isalnum(sentence[first])) first++;
            while (first < last && !isalnum(sentence[last])) last--;
            if (tolower(sentence[first]) != tolower(sentence[last])) return false;
            first++;
            last--;
        }
        return true;
    }

};

int main()
{
    std::string sentence = "A man, a plan, a canal: Panama";
    Solution Palindrome;
    bool res = Palindrome.isPalindromeBetter(sentence);
    std::cout << res << std::endl;
}