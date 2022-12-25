#include <iostream>
using namespace std;

void freqinSortedArr(int* arr, const int sizeA) {
	int first = 0, last = 1, count = 1;
	while (first < sizeA - 1) {
		if (arr[first] == arr[last]) {
			count++;
			last++;
		}
		else {
			cout << arr[first] << " " << count << endl;
			count = 1;
			first = last;
			last++;
		}
	}
	if (arr[sizeA - 1] != arr[sizeA - 2]) {
		cout << arr[sizeA - 1] << " " << count << endl;
	}
}