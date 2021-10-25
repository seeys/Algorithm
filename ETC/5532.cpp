#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l, a, b, c, d;
	cin >> l; cin >> a; cin >> b; cin >> c; cin >> d;
	int x = a % c ? (a / c) + 1 : a / c;
	int y = b % d ? (b / d) + 1 : b / d;

	int re = x > y ? x : y;
	cout << l - re;

}