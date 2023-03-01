#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

unordered_set<int> vectorToSet(vector<int> &arr);
void printSet(unordered_set<int> &arrSet);
void printPositionSet(unordered_set<int> &arrSet, const int val);
int countDistinctElementsN(vector<int> &arr);
int countDistinctElementsE(vector<int> &arr);
void freqArrElementsN(vector<int> &arr);
void printMapKeysValues(unordered_map<int, int> &arrMap);
int intersectionOf2ArrN(vector<int> &arr1, vector<int> &arr2);
int intersectionOf2ArrE(vector<int> &arr1, vector<int> &arr2);
int union2Arr(vector<int> &arr1, vector<int> &arr2);
bool pairGivenSumArrN(vector<int> &arr, int value);
bool pairGivenSumArrE(vector<int> &arr, int value);
bool subArr0SumN(vector<int> &arr);
bool subArr0SumE(vector<int> &arr);

#endif // TEST_H_INCLUDED
