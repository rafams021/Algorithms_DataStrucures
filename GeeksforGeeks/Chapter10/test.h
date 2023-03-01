#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

bool isPalindromeN(string &word);
bool isPalindromeE(string &word);
bool checkStrSubSeqN(string &word1, string &word2);
bool checkanagramN(string &word1, string &word2);
bool checkanagramE(string &word1, string &word2);
int leftMostRepCharN(string &word1);
int leftMostNonRepCharN(string &word1);
void revWordsStrN(string &word1);
int overPatternSearchN(string &word1, string &word2);
bool checkForRotationN(string &word1, string &word2);
bool checkForRotationBetter(string &word1, string &word2);
bool searchAnagramN(string &word1, string &word2);
bool searchAnagramE(string &word1, string &word2);
void helper(string& word);
int lexicographicRank(string &word);
int longSubStringN(string &word);

#endif // TEST_H_INCLUDED
