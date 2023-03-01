#include <iostream>
#include <vector>
#include "test.h"
using namespace std;

/* Naive Solution */
void rotateMatrixAntiClock90N(vector<vector<int>>& matrix) {
	vector<vector<int>> matrixAnti;
	for (int i = 0; i < matrix.size(); i++) {
		vector<int> helper;
		for (int j = matrix[0].size() - 1; j >= 0; j--) {
			helper.push_back(matrix[i][j]);
		}
		matrixAnti.push_back(helper);
	}
	for (int i = 0; i < matrixAnti.size(); i++) {
		for (int j = i + 1; j < matrixAnti[0].size(); j++) {
			swap(matrixAnti[i][j], matrixAnti[j][i]);
		}
	}
	printMatrix(matrixAnti);
}

/* Eficient Solution */
void rotateMatrixAntiClock90E(vector<vector<int>>& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = i + 1; j < matrix[0].size(); j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	for (int i = 0; i < matrix.size(); i++) {
		int low = 0, high = matrix.size() - 1;
		while (low < high) {
			swap(matrix[i][low], matrix[high][i]);
			low++;
			high--;
		}
	}
	printMatrix(matrix);
}