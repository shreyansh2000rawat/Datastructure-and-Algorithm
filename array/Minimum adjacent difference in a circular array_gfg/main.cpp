// C++ program to find maximum difference
// between adjacent elements in a circular array.
#include <bits/stdc++.h>
using namespace std;

void minAdjDifference(int arr[], int n)
{
	if (n < 2)
		return;

	// Checking normal adjacent elements
	int res = abs(arr[1] - arr[0]);
	for (int i = 2; i < n; i++)
		res = min(res, abs(arr[i] - arr[i - 1]));

	// Checking circular link
	res = min(res, abs(arr[n - 1] - arr[0]));

	cout << "Min Difference = " << res;
}

// driver program to check the above function
int main()
{
	int a[] = { 10, 12, 13, 15, 10 };
	int n = sizeof(a) / sizeof(a[0]);
	minAdjDifference(a, n);
	return 0;
}
