#include <iostream>
using namespace std;

int maximumDif(int* arr, const int sizeA) {
	int first = 0, last = 1, res = INT_MIN, dif = 0;
	while (first < sizeA - 1) {
		if (last < sizeA) {
			dif = arr[last] - arr[first];
			if (dif > res) {
				res = dif;
			}
			last++;
		}
		else {
			first++;
			last = first + 1;
		}
	}


	return res;
}