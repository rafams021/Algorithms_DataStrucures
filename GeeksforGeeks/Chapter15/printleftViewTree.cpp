#include "Header.h"

void printLeft(TreeNode* root, int curr_height) {
	if (root == NULL) return;
	static int max_height = 0;
	if (max_height < curr_height) {
		cout << root->data << " ";
		max_height = curr_height;
	}
	printLeft(root->left, curr_height + 1);
	printLeft(root->right, curr_height + 1);
}

void printLeftViewTree(TreeNode* root) {
	printLeft(root, 1);
 }