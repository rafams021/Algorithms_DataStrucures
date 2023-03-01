#include "Header.h"

void printPostorderTraversal(TreeNode* root) {
	TreeNode* helper = root;
	if (helper != NULL) {
		printInorderTraversal(helper->left);
		printInorderTraversal(helper->right);
		cout << helper->data << " ";
	}
}