/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <vector>
#include <deque>


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
    int maxDepthRecursive(TreeNode* root) {
        if (root == NULL) return 0;
        else {
            return std::max(maxDepthRecursive(root->left), maxDepthRecursive(root->right)) + 1;
        }
    }

    int maxDepthBFS(TreeNode* root) {
        if (root == NULL) return 0;
        int level = 0;
        std::deque<TreeNode*> q;
        q.push_back(root);
        while (!q.empty()) {
            for (int i = 0; i < q.size(); i++) {
                TreeNode* node = q.front();
                if (node->left) q.push_back(node->left);
                if (node->right) q.push_back(node->right);
                level++;
            }
        }
        return level;
    }

};