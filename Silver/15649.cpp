// https://www.acmicpc.net/problem/15649
// N M 1

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
		if (!visited[i]) {
			arr[x] = i;
			visited[i] = 1;
			func(x + 1);
			visited[i] = 0;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	func(0);
	return 0;
}