// https://www.acmicpc.net/problem/15665
// N M 11

#include <bits/stdc++.h>
using namespace std;

int n, m;
int visited[10];
int arr[10];
int tmp[10];
void func(int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			cout << tmp[i] << ' ';
		}
		cout << "\n";
		return;
	}
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (temp != arr[i]) {
			tmp[x] = arr[i];
			temp = tmp[x];
			func(x + 1);
		}
	}
}
void sort() {
	int temp = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort();
	func(0);
	return 0;
}