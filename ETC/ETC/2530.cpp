#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c;
	cin >> d;
	int h = a;
	int m = b + (d / 60);
	int s = c + (d % 60);
	if (s > 59)
	{
		m = m + (s / 60);
		s = s % 60;
	}
	if (m > 59)
	{
		h = h + (m / 60);
		m = m % 60;
	}
	if (h > 23)
		h = h % 24;
	
	cout << h << " " << m << " " << s;
}