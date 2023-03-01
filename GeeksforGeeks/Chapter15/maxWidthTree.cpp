#include "Header.h"
#include <queue>

int maxWidthTreeN(TreeNode* root) {
	if (root == NULL) return 0;
	int counter = 0, res = 0;
	queue<TreeNode*> queue_T;
	queue_T.push(root);
	queue_T.push(NULL);
	while (queue_T.size() > 1) {
		TreeNode* curr = queue_T.front();
		queue_T.pop();
		if (curr == NULL) {
			queue_T.push(NULL);
			res = max(res, counter);
			counter = 0;
			continue;
		}
		else {
			counter++;
		}
		if (curr->left != NULL) queue_T.push(curr->left);
		if (curr->right != NULL) queue_T.push(curr->right);
	}
	return res;
}