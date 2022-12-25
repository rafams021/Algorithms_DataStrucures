#include <iostream>
using namespace std;

int normalMaxSum(int arr[], int sizeA)
{
	int res = arr[0];

	int maxEnding = arr[0];

	for(int i = 1; i < sizeA; i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);

		res = max(maxEnding, res);
	}

	return res;
}

int overallMaxSum(int arr[], int sizeA)
{
	int max_normal = normalMaxSum(arr, sizeA);

	if(max_normal < 0)
		return max_normal;

	int arr_sum = 0;

	for(int i = 0; i < sizeA; i++)
	{
		arr_sum += arr[i];

		arr[i] = -arr[i];
	}

	int max_circular = arr_sum + normalMaxSum(arr, sizeA);

	return max(max_circular, max_normal);
}
