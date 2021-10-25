#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v;
	int k;
	for (int i = 0; i < 5; i++)
	{
		cin >> k;
		v.push_back(k);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += pow(v[i], 2);
	}
	cout << sum % 10;
}