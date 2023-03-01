#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLDED
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};

struct DoubleLL
{
	int data;
	DoubleLL* next;
	DoubleLL* prev;
	DoubleLL(int value) {
		data = value;
		next = NULL;
		prev = NULL;
	}
};

TreeNode* treeArrtoTree(vector<int>& treeArr);
void printInorderTraversal(TreeNode* root);
void printPreorderTraversal(TreeNode* root);
void printPostorderTraversal(TreeNode* root);
int heightTree(TreeNode* root);
void printNodesKDistance(TreeNode* helper, int value);
void printLevelOrderTraversal(TreeNode* root);
void printLevelORderTraversalE(TreeNode* root);
void printLevelOrderTraversalLine(TreeNode* root);
void printLevelOrderTraversalLineE(TreeNode* root);
int sizeTreeN(TreeNode* root);
int maxInTreeN(TreeNode* root);
int maxInTreeE(TreeNode* root);
void printLeftViewTree(TreeNode* root);
bool childrenSumProperty(TreeNode* root);
bool checkBlanceHeightTN(TreeNode* root);
int maxWidthTreeN(TreeNode* root);
TreeNode* constructInorderTreeN(vector<int>& arrIn, vector<int>& arrPre);
void printTraversalSpiral(TreeNode* root);
int diameter(TreeNode* root);

#endif // !HEADER_H_INCLUDED
