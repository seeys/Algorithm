#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l, p, v;
	int i = 1;
	int k = 0;
	while (true) {
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0)
			break;
		else
			k = ((v % p) < l) ? v % p : l;
			cout << "Case " << i++ << ": " << ((v / p) * l + k) << endl;
	}
	
}