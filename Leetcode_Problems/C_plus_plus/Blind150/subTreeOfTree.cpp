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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == NULL) return true;
        if (root == NULL) return false;
        if (sameTree(root, subRoot)) return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

private:
    bool sameTree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL && subRoot == NULL) return true;
        if (root != NULL && subRoot != NULL && root->value == subRoot->value) {
            return sameTree(root->left, subRoot->left) && sameTree(root->right, subRoot->right);
        }
        return false;
    }
};