#include <iostream>
using namespace std;

int maxSumSubArr(int* arr, int sizeA) {
	int res = INT_MIN;
	int help = INT_MIN, add = 0;
	for (int i = 0; i < sizeA; i++) {
		res = max(res, arr[i]);
		add += arr[i];
		for (int j = i + 1; j < sizeA; j++) {
			add += arr[j];
			help = max(help, add);
		}
		res = max(res, help);
		add = 0;
	}
	return res;
}