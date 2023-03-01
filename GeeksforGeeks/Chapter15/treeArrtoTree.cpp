#include "Header.h"

TreeNode* treeBST(vector<int>& arr, int start, int end) {
	if (start > end) return NULL;
	int mid = (start + end) / 2;
	TreeNode* root = new TreeNode(arr[mid]);
	root->left = treeBST(arr, start, mid - 1);
	root->right = treeBST(arr, mid + 1, end);
	return root;
}

TreeNode* treeArrtoTree(vector<int>& treeArr) {
	sort(treeArr.begin(), treeArr.end());
	int start = 0, end = treeArr.size() - 1;
	TreeNode* root = treeBST(treeArr, start, end);
	return root;
}