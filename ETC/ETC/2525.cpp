#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	int h = a + (c / 60);
	int m = b + (c % 60);
	if (m > 59)
	{
		h = h + (m / 60); m = m % 60;
	}
	if (h > 23)
		h = h % 24;
	cout << h << " " << m;
}