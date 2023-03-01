#include "Header.h"

void printInorderTraversal(TreeNode* root) {
	TreeNode* helper = root;
	if (helper != NULL) {
		printInorderTraversal(helper->left);
		cout << helper->data << " ";
		printInorderTraversal(helper->right);
	}
}