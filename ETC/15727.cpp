#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	if (a % 5)
	{
		cout << (a / 5) + 1;
	}
	else
		cout << a / 5;
}