#include <bits/stdc++.h>
using namespace std;

int k;
int s[13];
int m = 6;
int visited[13];
int tmp[13];
void func(int x,int st) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			cout << tmp[i] << ' ';
		}
		cout << "\n";
		return;
	}
	int temp = 0;
	for (int i = st; i <= k; i++) {
			tmp[x] = s[i-1];
			func(x + 1, i + 1);
	}
}
void sort() {
	int temp = 0;
	for (int i = 0; i < k - 1; i++) {
		for (int j = i + 1; j < k; j++) {
			if (s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (1) {
		cin >> k;
		if (k == 0) return 0;
		for (int i = 0; i < k; i++) cin >> s[i];
		sort();
		func(0, 1);
		cout << "\n";
	}
	return 0;
}