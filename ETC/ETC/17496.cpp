#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t, c, p;
	cin >> n >> t >> c >> p;
	if (n % t)
		cout << n / t * c * p;
	else
		cout<< ((n / t) - 1) * c * p;
}