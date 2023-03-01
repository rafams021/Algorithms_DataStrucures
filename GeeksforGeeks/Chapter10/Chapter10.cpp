// Chapter10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "test.h"
using namespace std;

int main()
{
    string word1 = "abcadbd";
    string word2 = "froga";
    int res = longSubStringN(word1);
    cout << res << endl;
    return 0;
}
