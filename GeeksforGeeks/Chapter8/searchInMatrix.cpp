#include <iostream>
#include <vector>
#include "test.h"
using namespace std;

/* Naive Solution */
void searchInMatrixN(vector<vector<int>>& matrix, const int val) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[0].size(); j++) {
			if (matrix[i][j] > val) {
				cout << "Not Found!";
				return;
			}
			else if (matrix[i][j] == val) {
				cout << "found at position: [" << i << " ," << j << "]";
				return;
			}
		}
	}
}