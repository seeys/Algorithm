#include <bits/stdc++.h>
using namespace std;
int a[5];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int res = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i] == n) {
			res++;
		}
	}

	cout << res;

}