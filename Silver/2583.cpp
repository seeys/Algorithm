#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[101][101];
bool visited[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int m, n, k;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> n >> k;
	while (k--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++) {
			for (int j = x1; j < x2; j++) {
				board[i][j] = 1;
			}
		}
	}
	int cnt = 0; // 영역의 개수
	vector<int> res;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 1 || visited[i][j])
				continue;
			queue<pair<int, int>> q;
			visited[i][j] = true;
			q.push({ i,j });
			int area = 1;
			cnt++;
			while (!q.empty()) {
				auto cur = q.front(); 
				q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
					if (visited[nx][ny] || board[nx][ny] == 1) continue;
					q.push({ nx,ny });
					visited[nx][ny] = true;
					area++;
				}
			}
			res.push_back(area);
		}
	}
	sort(res.begin(), res.end());
	cout << cnt << '\n';
	for (int i : res)
		cout << i << ' ';
	return 0;
}