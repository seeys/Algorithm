#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> vp;
int res[51];
void func(int n)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (vp[i].first < vp[j].first && vp[i].second < vp[j].second)
					res[i]++;
				else
					continue;
			}
			else
				continue;
		}
	}
	for (int k = 0; k < n; k++)
	{
		cout << res[k] + 1 << " ";
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num, x, y;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cin >> x >> y;
		vp.push_back({ x, y });
	}

	func(num);
	return 0;
}