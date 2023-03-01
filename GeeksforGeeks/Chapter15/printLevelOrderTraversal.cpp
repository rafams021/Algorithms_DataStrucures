#include "Header.h"
#include <queue>

void printNodes(TreeNode* root, int height) {
	if (height == 1) {
		if (root == NULL) return;
		cout << root->data << " ";
	}
	else {
		printNodes(root->left, height - 1);
		printNodes(root->right, height - 1);
	}
}

void printLevelOrderTraversal(TreeNode* root) {
	TreeNode* helper = root;
	int height = heightTree(root);
	if (helper == NULL) {
		return;
	}
	for (int i = 1; i <= height; i++) {
		printNodes(helper, i);
	}
}

void printLevelORderTraversalE(TreeNode* root) {
	if (root == NULL) return;
	queue<TreeNode*> queue_nodes;
	queue_nodes.push(root);
	while (queue_nodes.empty() == false) {
		TreeNode* curr = queue_nodes.front();
		queue_nodes.pop();
		cout << curr->data << " ";
		if (curr->left != NULL) {
			queue_nodes.push(curr->left);
		}
		if (curr->right != NULL) {
			queue_nodes.push(curr->right);
		}
	}
}