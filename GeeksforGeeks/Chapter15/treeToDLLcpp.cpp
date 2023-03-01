#include "Header.h"

TreeNode* treeToDLLN(TreeNode* root) {
	if (root == NULL) return root;
	static TreeNode* prev = NULL;
	TreeNode* head = treeToDLLN(root->left);
	if (prev == NULL) { head == root; }
	else {
		root->left = prev;
		prev->right = root;
	}
	prev = root;
	treeToDLLN(root->right);
	return head;
}