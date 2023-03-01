#include "Header.h"
#include <queue>

int sizeTreeN(TreeNode* root) {
	static int count = 0;
	if (root != NULL) {
		count++;
		sizeTreeN(root->left);
		sizeTreeN(root->right);
	}
	return count;
}

int sizeTreeE(TreeNode* root) {
	if (root == NULL) {
		return 0;
	}
	else {
		return 1 + sizeTreeE(root->left) + sizeTreeE(root->right);
	}
}