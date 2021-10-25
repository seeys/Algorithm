#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int b[101][101];
int c[101][101];
void solution(int n, int m, int k) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int l = 0; l < m; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << c[i][j]<<" ";
		}
		cout << "\n";
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	solution(n, m, k);
}