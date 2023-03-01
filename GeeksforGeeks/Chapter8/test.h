#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int>>& matrix);
void matrixInSnakePattern(vector<vector<int>>& matrix);
void matrixBounderalTraversal(vector < vector<int>>& matrix);
void transposeMatrixN(vector<vector<int>>& matrix);
void transposeMatrixE(vector<vector<int>>& matrix);
void rotateMatrixAntiClock90N(vector<vector<int>>& matrix);
void rotateMatrixAntiClock90E(vector<vector<int>>& matrix);
void spiralTraversalM(vector<vector<int>>& matrix);
void searchInMatrixN(vector<vector<int>>& matrix, const int val);

#endif // TEST_H_INCLUDED#pragma once
