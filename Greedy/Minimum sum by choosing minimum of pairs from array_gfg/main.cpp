#include <bits/stdc++.h>
using namespace std;

int minSum(int A[], int n)
{
	int min_val = *min_element(A, A+n);
	return (min_val * (n-1));
}

int main()
{
	int A[] = { 3, 6, 2, 8, 7, 5};
	int n = sizeof(A)/ sizeof (A[0]);
	cout << minSum(A, n);
	return 0;
}
