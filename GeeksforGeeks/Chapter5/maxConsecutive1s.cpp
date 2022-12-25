#include <iostream>
using namespace std;

int maxConsecutive1s(int* arr, int sizeA) {
	int res = 0, count = 0, first = 0, last = 0;
	while (last < sizeA) {
		if (arr[first] == 1) {
			if (last == first) {
				last++;
				count++;
			}
			else {
				if (arr[last] == 1) {
					count++;
					last++;
				}
				else if (count == 1) {
					count = 0;
					first = last;
				}
				else {
					res = max(res, count);
					first = last;
					count = 0;
				}
			}
		}
		else {
			first++;
			last = first;
		}
	}
	if (arr[last - 1] == 1 && arr[last - 2] == 1) res = max(res, count);
	return res;
}