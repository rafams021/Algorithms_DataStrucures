#include "Header.h"

TreeNode* childrenNodesTreeInorder(vector<int>& arrIn, vector<int>& arrPRe, int sizeIn, int sizePre) {
	if (sizeIn > sizePre) return NULL;
	static int preIndex = 0;
	TreeNode* root = new TreeNode(arrPRe[preIndex++]);
	int inIndex;
	for (int i = sizeIn; i < sizePre; i++) {
		if (arrIn[i] == root->data) {
			inIndex = i;
			break;
		}
	}
	root->left = childrenNodesTreeInorder(arrIn, arrPRe, sizeIn, sizePre - 1);
	root->right = childrenNodesTreeInorder(arrIn, arrPRe, sizeIn + 1, sizePre);
	return root;
}

TreeNode* constructInorderTreeN(vector<int>& arrIn, vector<int>& arrPre) {
	int sizeIn = arrIn.size() - 1;
	int sizePre = arrPre.size() - 1;
	if (sizeIn != sizePre) return NULL;
	TreeNode* root = childrenNodesTreeInorder(arrIn, arrPre, sizeIn, sizePre);
	return root;
}