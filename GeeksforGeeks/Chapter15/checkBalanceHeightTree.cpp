#include "Header.h"
#include <queue>

bool checkBlanceHeightTN(TreeNode* root) {
	if (root == NULL) return true;
	int leftH = heightTree(root->left);
	int rightH = heightTree(root->right);
	return (abs(leftH - rightH) <= 1 && checkBlanceHeightTN(root->left) && checkBlanceHeightTN(root->right));
}