#include <iostream>
#include "test.h"

using namespace std;

void leadersinArray(int* arr, const int sizeA) {
	int first = 0, last = 1;
	while (first < sizeA - 2) {
		if (arr[first] > arr[last]) {
			if (last < sizeA - 1) {
				last++;
			}
			else {
				cout << arr[first] << " ";
				first++;
				last = first + 1;
			}
		}
		else {
			first++;
			last = first + 1;
		}
	}
	if (arr[first] > arr[last]) {
		cout << arr[first] << " " << arr[last];
	}
	else {
		cout << arr[last] << endl;
	}
}