// https://www.acmicpc.net/problem/15652
// N M 4

#include <bits/stdc++.h>
using namespace std;

int n, m;
int tmp[10];
void func(int l, int s) {
	if (l == m) {
		for (int i = 0; i < m; i++) {
			cout << tmp[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = s; i <= n; i++) {
		tmp[l] = i;
		func(l + 1, i);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	func(0, 1);
	return 0;
}