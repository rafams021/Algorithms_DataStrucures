#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

struct Interval{
    int startInt;
    int endInt;
};

void merge2SortedArr1(int* arr1, int* arr2, int sizeA1, int sizeA2);
void merge2SortedArr2(int* arr1, int* arr2, int sizeA1, int sizeA2);
void mergeSort(int* arr, int low, int high);
void inter2SortArrN(int* arr1, int* arr2, const int size1, const int size2);
void inter2SortArr(int* arr1, int* arr2, const int size1, const int size2);
void union2SortArrN(int* arr1, int* arr2, const int size1, const int size2);
void union2SortArr(int* arr1, int* arr2, const int size1, const int size2);
int countInversionsN(int* arr, const int sizeA);
int countInversions(int* arr, int low, int high);
void lomutoParition(int* arr, int sizeA, int position);
void qSortLomuto(int* arr, int low, int high);
void qSortHoare(int* arr, int low, int high);
int kthSmallestElementN(int* arr, int sizeA, int kth);
int kthSmallestElementHoare(int* arr, int sizeA, int kth);
int minimumDifferenceArrN(int* arr, int sizeA);
int minimumDifferenceArrS(int* arr, int sizeA);
int chocoDistribS(int* arr, int sizeA, int child);
void sortArr2TypesN(int*arr, int sizeA);
void sortArr2TypesHoare(int* arr, int sizeA);
void sortArr2TypesLomuto(int* arr, int sizeA);
void sortArr3TypesN(int* arr, int sizeA);
void sortArr3TypesLomuto(int* arr, int sizeA);
void mergeOverlappingInt(Interval* arr, int sizeInt);
int meetMaxGuests(int* arrive, int* departure, int sizeA);
void cycleSort(int* arr, int sizeA);
void heapSort(int* arr, int sizeA);

#endif // TEST_H_INCLUDED
