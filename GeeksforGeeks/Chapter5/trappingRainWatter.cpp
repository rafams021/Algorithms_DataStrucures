#include <iostream>
#include <vector>
using namespace std;

int maxWater(int* arr, int sizeA) {
	//vector<int> aLmax(sizeA);
	//vector<int> aRmax(sizeA);
	int* aLmax = new int [sizeA];
	int* aRmax = new int [sizeA];
	int res = 0;

	aLmax[0] = arr[0];
	for (int i = 1; i < sizeA; i++) {
		aLmax[i] = max(arr[i], aLmax[i - 1]);
	}

	aRmax[sizeA - 1] = arr[sizeA - 1];
	for (int i = sizeA - 2; i > 0; i--) {
		aRmax[i] = max(arr[i], aRmax[i + 1]);
	}

	for (int i = 1; i < sizeA - 1; i++) {
		res += min(aLmax[i], aRmax[i]) - arr[i];
	}

	return res;
}