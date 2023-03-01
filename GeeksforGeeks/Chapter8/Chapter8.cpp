// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "test.h"
using namespace std;

int main()
{
	vector<vector<int>> matrix{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16}
	};

	rotateMatrixAntiClock90E(matrix);


#if(0)

#endif
	return 0;
}
