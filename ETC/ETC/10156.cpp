#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k, n, m;
	cin >> k >> n >> m;
	if ((k * n) < m)
	{
		cout << 0;
	}
	else {
		cout << k * n - m;
	}
}