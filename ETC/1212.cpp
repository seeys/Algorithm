#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	char x[333335];
	cin >> x;
	char f[10][4] = { "","1","10","11","100","101","110","111" };
	char o[10][4] = { "000","001","010","011","100","101","110","111" };
	int len = strlen(x);
	if (x[0] == '0')
		cout << 0;
	else {
		cout << f[x[0] - 48];
		for (int i = 1; i < len; i++)
		{
			cout << o[x[i] - 48];
		}
	}
	return 0;
}