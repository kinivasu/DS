#include <bits/stdc++.h>
using namespace std;

//rotating the array
void rotateArr(int *a, int d, int n)
{
	reverse(a, a + d);
	reverse(a + d, a + n);
	reverse(a, a + n);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, d;
		cin >> n >> d;

		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		rotateArr(a, d, n);

		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		printf("\n");
	}
	return 0;
}