#include <iostream>
#include <vector>
#include "test.h"
using namespace std;

/* Naive Solution */
void transposeMatrixN(vector<vector<int>>& matrix) {
	vector<vector<int>>  transpose;
	for (int i = 0; i < matrix[0].size(); i++) {
		vector<int> helper;
		for (int j = 0; j < matrix.size(); j++) {
			helper.push_back(matrix[j][i]);
		}
		transpose.push_back(helper);
	}
	printMatrix(transpose);
}

/* Eficient Solution */

void transposeMatrixE(vector<vector<int>>& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = i + 1; j < matrix[0].size(); j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	printMatrix(matrix);
}