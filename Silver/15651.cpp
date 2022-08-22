// https://www.acmicpc.net/problem/15651
// N M 3

#include <bits/stdc++.h>
using namespace std;

int n, m;
int visited[10];
int arr[10];
void func(int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
			arr[x] = i;
			func(x + 1);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	func(0);
	return 0;
}