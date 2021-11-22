#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[101][101];
bool visited[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int min_v = 0;
int max_v = 101;
int n;
queue <pair<int, int >> q;
void bfs(int x, int y,int h) {
	q.push({ x,y });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		visited[x][y] = true;
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (visited[nx][ny] || board[nx][ny] <= h) continue;
			visited[nx][ny] = true;
			q.push({ nx,ny });
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int res = 1; //최소1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			min_v = min(min_v, board[i][j]);
			max_v = max(max_v, board[i][j]);
		}
	}
	//높이가 최소~최대인것을 검사
	for (int i = min_v; i < max_v; i++) {
		int cnt = 0;
		//방문배열 초기화
		memset(visited, false, sizeof(visited));
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (board[j][k] > i && !visited[j][k]) {
					visited[j][k] = true;
					bfs(j, k, i);
					cnt++;
				}
			}
		}
		res = max(res, cnt);
	}
	cout << res;
	
	return 0;
}