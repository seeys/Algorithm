#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[8] = { 0,1,0,-1,1,1,-1,-1 };
int dy[8] = { 1,0,-1,0,1,-1,1,-1 };
int board[51][51];
bool vis[51][51];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int w, h;
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> board[i][j];
			}
		}
		int cnt = 0; // ¼¶ÀÇ ÃÑ°³¼ö
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (board[i][j] == 0 || vis[i][j]) continue;
				queue<pair<int, int>> Q;
				vis[i][j] = true;
				Q.push({ i,j });
				cnt++;
				while (!Q.empty()) {
					auto cur = Q.front(); Q.pop();
					for (int dir = 0; dir < 8; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
						if (vis[nx][ny] || board[nx][ny] == 0) continue;
						vis[nx][ny] = true;
						Q.push({ nx,ny });
					}
				}
			}
		}
		cout << cnt << "\n";
		memset(board, false, sizeof(board));
		memset(vis, false, sizeof(vis));
	}

	return 0;
}