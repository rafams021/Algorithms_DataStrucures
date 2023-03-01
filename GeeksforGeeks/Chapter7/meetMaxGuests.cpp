/*
* Program that return what is the max guests you can see at the same time.
* Example:
* Input: arrive = { 900, 600, 700 }, departure = { 1000, 800, 730 }		Ouput: 2
* Explanation:
* Client 2 arrive at 600 and goes 800, client 3 arrive 730, then there is 2 clients at the same time.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int meetMaxGuests(int* arrive, int* departure, int sizeA) {
	sort(arrive, arrive + sizeA);
	sort(departure, departure + sizeA);
	int i = 1, j = 0, res = 1, curr = 1;
	while (i < sizeA && j < sizeA) {
		if (arrive[i] < departure[j]) {
			curr++;
			i++;
		}
		else {
			j++;
			curr--;
		}
		res = max(res, curr);
	}
	return res;
}