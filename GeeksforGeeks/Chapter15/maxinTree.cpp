#include "Header.h"

int maxInTreeN(TreeNode* root) {
	static int max_value = INT_MIN;
	if (root != NULL) {
		max_value = max(max_value, root->data);
		maxInTreeN(root->left);
		maxInTreeN(root->right);
	}
	return max_value;
}

int maxInTreeE(TreeNode* root) {
	if (root == NULL) {
		return 0;
	}
	else {
		return max(root->data, max(maxInTreeE(root->left), maxInTreeE(root->right)));
	}
}