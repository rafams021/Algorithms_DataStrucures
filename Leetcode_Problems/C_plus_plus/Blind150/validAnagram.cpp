/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    // Time Complexity O(NlogN)
    bool isAnagramNaive(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) return false;
        std::sort(word1.begin(), word1.end());
        std::sort(word2.begin(), word2.end());
        return word1 == word2;
    }

    // Time complexity O(N)
    bool isAnagramBetter(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) return false;
        std::unordered_map<char, int > helper_Word1;
        std::unordered_map<char, int > helper_Word2;
        for (int i = 0; i < word1.size(); i++) {
            helper_Word1[word1[i]]++;
            helper_Word2[word2[i]]++;
        }
        return helper_Word1 == helper_Word2;
    }


};

int main()
{
    std::string word1 = "rat";
    std::string word2 = "car";
    Solution Anagram;
    bool res = Anagram.isAnagramBetter(word1, word2);
    std::cout << res << std::endl;
}