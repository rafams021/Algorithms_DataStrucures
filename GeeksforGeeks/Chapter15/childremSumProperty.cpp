#include "Header.h"

bool childrenSumProperty(TreeNode* root) {
	if (root == NULL) return true;
	if (root->left == NULL && root->right == NULL) return true;
	int sum = 0;
	if (root->left != NULL) sum += root->left->data;
	if (root->right != NULL) sum += root->right->data;
	return (root->data == sum && childrenSumProperty(root->left) && childrenSumProperty(root->right));
}