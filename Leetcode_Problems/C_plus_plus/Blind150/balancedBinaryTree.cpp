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
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return dfs(root, height);
    }
private:
    bool dfs(TreeNode* root, int& height) {
        if (root == NULL) {
            height = -1;
            return true;
        }

        int left = 0;
        int right = 0;

        if (!dfs(root->left, left) || !dfs(root->right, right)) {
            return false;
        }
        if (abs(left - right) > 1) {
            return false;
        }

        height = 1 + std::max(left, right);
        return true;
    }

};