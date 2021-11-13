#include <bits/stdc++.h>
using namespace std;
int n, m, v;
int board[1001][1001];
bool vis[1001];

void dfs(int x) {
	cout << x << " ";
	for (int i = 1; i <= n; i++) {
		if (board[x][i] && !vis[i]) {
			vis[i] = true;
			dfs(i);
		}
	}
}
void bfs(int x) {
	queue<int> q;
	q.push(x);
	vis[x] = true;
	while (!q.empty()) {
		x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 1; i <= n; i++) {
			if (board[x][i] && !vis[i]) {
				vis[i] = 1;
				q.push(i);
			}
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}
	vis[v] = 1;
	dfs(v);
	cout << "\n";
	memset(vis, false, sizeof(vis));
	bfs(v);
	return 0;
}