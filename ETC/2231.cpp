#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num;
	cin >> num;
	int sum = 0;
	int tmp = 0;
	
	for(int i = 1; i < num; i++)
	{
		sum = i;
		tmp = i;

		while (tmp)
		{
			sum = sum + tmp % 10;
			tmp = tmp / 10;
		}
		if (sum == num)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}