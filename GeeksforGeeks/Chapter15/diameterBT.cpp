#include "Header.h"

// Naive Solition O(N^2)
int height(TreeNode* root) {
	if (root == NULL) return 0;
	else {
		return 1 + max(height(root->left), height(root->right));
	}
}

int diameter(TreeNode* root) {
	if (root == NULL) return 0;
	int d1 = 1 + height(root->left) + height(root->right);
	int d2 = diameter(root->left);
	int d3 = diameter(root->right);

	return max(d1, max(d2, d3));
}

// Efficietn Solution

int res = 0;

int height(TreeNode* root) {
	if (root == NULL) return 0;
	int lh = height(root->left);
	int rh = height(root->right);
	res = max(res, 1 + lh + rh);
	return res;
}

