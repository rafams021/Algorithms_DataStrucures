#include <iostream>
#include <vector>
using namespace std;

void matrixBounderalTraversal(vector < vector<int>>& matrix) {
	if (matrix.size() == 1) {
		for (int i = 0; i < matrix[0].size(); i++) {
			cout << matrix[0][i] << " ";
		}
	}
	else if (matrix[0].size() == 1) {
		for (int i = 0; i < matrix.size(); i++) {
			cout << matrix[i][0] << " ";
		}
	}
	else {
		for (int i = 0; i < matrix[0].size(); i++) {
			cout << matrix[0][i] << " ";
		}
		for (int i = 1; i < matrix.size(); i++) {
			cout << matrix[i][matrix[0].size() - 1] << " ";
		}
		for (int i = matrix[0].size() - 2; i >= 0; i--) {
			cout << matrix[matrix.size() - 1][i] << " ";
		}
		for (int i = matrix.size() - 2; i >= 1; i--) {
			cout << matrix[i][0] << " ";
		}
	}
}