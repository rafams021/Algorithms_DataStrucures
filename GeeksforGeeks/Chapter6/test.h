#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

int indexOfFirstOcurrence(int* arr, const int sizeA, const int value);
int indexOfLastOcurrence(int* arr, const int sizeA, const int value);
int countOcurrences(int *arr, int const sizeA, int const value);
int count1sInsortedArr(int *arr, int const sizeA, int const value);
int squareRootLinear(int value);
int squareRoot(const int x);
int searchInfiniteSizedArrLinear(int* arr, int value);
int searchInfiniteSizedArr(int* arr, int value);
int searchInRotatedArrLinear(int* arr, const int sizeA);
int searchInRotatedArr(int* arr, const int sizeA);
int peakElementLinear(int* arr, int sizeA);
int peakElement(int* arr, int sizeA);
bool tripletInSortedArrCube(int* arr, const int sizeA, const int value);
bool tripletInSortedArrSquare(int* arr, const int sizeA, const int value);
double median2SortedArr(int* arr1, int* arr2, int sizeA1, int sizeA2);
double median2SortedArrMath(int* arr1, int* arr2, int sizeA1, int sizeA2);
int repeatingElement(int*arr, int sizeA);

#endif // TEST_H_INCLUDED
