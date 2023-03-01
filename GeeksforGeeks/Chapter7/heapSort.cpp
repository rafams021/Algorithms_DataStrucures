#include <iostream>
using namespace std;

void heapify(int* arr, int sizeA, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < sizeA && arr[left] > arr[largest])
		largest = left;

	if (right < sizeA && arr[right] > arr[largest])
		largest = right;

	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, sizeA, largest);
	}
}

void buildheap(int arr[], int sizeA) {
	for (int i = sizeA / 2 - 1; i >= 0; i--)
		heapify(arr, sizeA, i);
}
void heapSort(int* arr, int sizeA)
{
	buildheap(arr, sizeA);

	for (int i = sizeA - 1; i > 0; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}