#include <iostream>
using namespace std;

int maxProfit(int* arr, const int sizeA) {
	int profit = 0;
	for (int i = 1; i < sizeA; i++) {
		if (arr[i] > arr[i - 1]) {
			profit += arr[i] - arr[i - 1];
		}
	}
	return profit;
}