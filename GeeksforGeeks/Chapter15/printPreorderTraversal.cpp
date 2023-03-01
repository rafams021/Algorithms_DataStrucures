#include "Header.h"

void printPreorderTraversal(TreeNode* root) {
	TreeNode* helper = root;
	if (helper != NULL) {
		cout << helper->data << " ";
		printInorderTraversal(helper->left);
		printInorderTraversal(helper->right);
	}
}