#include <iostream>
#include <vector>
using namespace std;

void matrixInSnakePattern(vector<vector<int>>& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < matrix[i].size(); j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
		else {
			for (int j = matrix[i].size() - 1; j >= 0; j--) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
}