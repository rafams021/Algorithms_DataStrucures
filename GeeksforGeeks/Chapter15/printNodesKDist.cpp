#include "Header.h"

void printNodesKDistance(TreeNode* root, int value) {
	TreeNode* helper = root;
	if (value == 1) {
		if (helper == NULL) return;
		cout << helper->data << " ";
	}
	else {
		printNodesKDistance(helper->left, value - 1);
		printNodesKDistance(helper->right, value - 1);
	}
}