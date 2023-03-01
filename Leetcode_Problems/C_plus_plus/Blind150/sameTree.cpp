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
    bool isSame(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL && root2 == NULL) return true;
        if (root1 == NULL || root2 == NULL || root1->value != root2->value) return false;
        return isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
    }

};