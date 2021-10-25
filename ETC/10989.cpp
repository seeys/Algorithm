#include <bits/stdc++.h>
using namespace std;
int num[10001];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		num[m]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (num[i])
			while (num[i] != 0) {
				cout << i << '\n';
				num[i]--;
			}
	}
}