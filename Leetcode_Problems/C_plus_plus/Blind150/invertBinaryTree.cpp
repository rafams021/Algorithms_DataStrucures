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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }

};
