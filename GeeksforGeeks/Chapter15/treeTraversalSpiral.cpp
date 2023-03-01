#include "Header.h"
#include <queue>
#include <stack>

void printTraversalSpiral(TreeNode* root) {
	if (root == NULL) return;
	queue<TreeNode*> queue_T;
	stack<int> stack_T;
	bool reverse = false;
	queue_T.push(root);
	while (queue_T.empty() == false) {
		int count = queue_T.size();
		for (int i = 0; i < count; i++) {
			TreeNode* curr = queue_T.front();
			queue_T.pop();
			if (reverse) {
				stack_T.push(curr->data);
			}
			else {
				cout << curr->data << " ";
			}
			if (curr->left != NULL) queue_T.push(curr->left);
			if (curr->right != NULL) queue_T.push(curr->right);
		}
		if (reverse) {
			while (stack_T.empty() == false) {
				cout << stack_T.top() << " ";
				stack_T.pop();
			}
		}
		reverse = !reverse;
	}
}