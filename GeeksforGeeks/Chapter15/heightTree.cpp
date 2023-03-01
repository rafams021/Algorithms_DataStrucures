#include "Header.h"

int heightTree(TreeNode* root) {
	TreeNode* helper = root;
	if (helper == NULL) {
		return 0;
	}
	else {
		return max(heightTree(helper->left), heightTree(helper->right)) + 1;
	}
}