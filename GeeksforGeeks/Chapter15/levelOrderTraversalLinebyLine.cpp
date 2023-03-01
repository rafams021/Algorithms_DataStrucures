#include "Header.h"
#include <queue>

void printNodesLevel(TreeNode* root, int height) {
	if (height == 1) {
		if (root == NULL) return;
		cout << root->data << " ";
	}
	else {
		printNodesLevel(root->left, height - 1);
		printNodesLevel(root->right, height - 1);
	}
}

void printLevelOrderTraversalLine(TreeNode* root) {
	TreeNode* helper = root;
	int height = heightTree(root);
	if (helper == NULL) {
		return;
	}
	for (int i = 1; i <= height; i++) {
		printNodesLevel(helper, i);
		cout << endl;
	}
}

void printLevelOrderTraversalLineE(TreeNode* root) {
	if (root == NULL) return;
	queue<TreeNode*> queue_nodes;
	queue_nodes.push(root);
	queue_nodes.push(NULL);
	while (queue_nodes.size() > 1) {
		TreeNode* curr = queue_nodes.front();
		queue_nodes.pop();
		if (curr == NULL) {
			cout << endl;
			queue_nodes.push(NULL);
			continue;
		}
		cout << curr->data << " ";
		if (curr->left != NULL) queue_nodes.push(curr->left);
		if (curr->right != NULL) queue_nodes.push(curr->right);
	}
}