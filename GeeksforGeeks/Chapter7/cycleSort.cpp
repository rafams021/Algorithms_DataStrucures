#include <iostream>
#include <algorithm>

using namespace std;

void cycleSort(int* arr, int sizeA) {
	for (int cStart = 0; cStart < sizeA - 1; cStart++) {
		int helper = arr[cStart];
		int pos = cStart;
		for (int i = cStart + 1; i < sizeA; i++) {
			if (arr[i] < helper) {
				pos++;
			}
		}
		swap(helper, arr[pos]);
		while (pos != cStart) {
			pos = cStart;
			for (int i = cStart + 1; i < sizeA; i++) {
				if (arr[i] < helper) {
					pos++;
				}
			}
			swap(helper, arr[pos]);
		}
	}
}	