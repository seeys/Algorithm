#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	int res = 0;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int sum = 0;
				sum += arr[i] + arr[j] + arr[k];
				if (sum <= m)
					res = max(res, sum);
			}
		}
	}
	cout << res;
}