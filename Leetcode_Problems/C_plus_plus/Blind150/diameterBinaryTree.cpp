/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <vector>


struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        value = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    // Time Complexity O(N)
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        dfs(root, result);
        return result;
    }
private:
    int dfs(TreeNode* root, int& result) {
        if (root == NULL) return 0;
        int left = dfs(root->left, result);
        int right = dfs(root->right, result);

        result = std::max(result, right + left);
        return 1 + std::max(left, right);
    }
};