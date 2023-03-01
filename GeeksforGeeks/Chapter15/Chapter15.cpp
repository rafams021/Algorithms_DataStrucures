// Chapter15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"

int main()
{
    vector<int> pre = { 1, 2, 3, 4, 5, 7, 8, 9 };
    vector<int> in = { 4, 2, 5, 1, 3, 8, 7, 9 };

    TreeNode* tree = NULL;
    tree = treeArrtoTree(pre);
    int res = diameter(tree);
    cout << res << endl;
    

    return 0;
}
