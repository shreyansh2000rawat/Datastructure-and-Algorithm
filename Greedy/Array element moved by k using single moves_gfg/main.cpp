#include <iostream>
using namespace std;

int winner(int a[], int n, int k)
{

	if (k >= n - 1)
		return n;

	int best = 0, times = 0;

	for (int i = 0; i < n; i++) {

		if (a[i] > best) {

			best = a[i];
			if (i)
				times = 1;
		}

		else
			times += 1;
		if (times >= k)
			return best;
	}
	return best;
}
int main()
{
	int a[] = { 2, 1, 3, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 2;
	cout << winner(a, n, k);
	return 0;
}
