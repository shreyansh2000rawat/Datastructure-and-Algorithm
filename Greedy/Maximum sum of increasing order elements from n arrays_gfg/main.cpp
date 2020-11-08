#include <bits/stdc++.h>
#define M 4
using namespace std;


int maximumSum(int a[][M], int n) {

for (int i = 0; i < n; i++)
	sort(a[i], a[i] + M);

int sum = a[n - 1][M - 1];
int prev = a[n - 1][M - 1];
int i, j;

for (i = n - 2; i >= 0; i--) {
	for (j = M - 1; j >= 0; j--) {
	if (a[i][j] < prev) {
		prev = a[i][j];
		sum += prev;
		break;
	}
	}
	if (j == -1)
	return 0;
}

return sum;
}
int main() {
int arr[][M] = {{1, 7, 3, 4},
				{4, 2, 5, 1},
				{9, 5, 1, 8}};
int n = sizeof(arr) / sizeof(arr[0]);
cout << maximumSum(arr, n);
return 0;
}
