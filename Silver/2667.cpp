#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string home[26];
bool vis[26][26];
int n;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> home[i];
	}

	int cnt = 0; // 단지의 총 개수
	vector<int> v; // 집의 개수를 저장할 곳
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (home[i][j] == '0' or vis[i][j] == 1) continue;
			queue<pair<int, int>> Q;
			vis[i][j] = 1;
			Q.push({ i,j });
			int h_cnt = 1;
			cnt++;
			while (!Q.empty()) {
				auto cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (vis[nx][ny] == 1 || home[nx][ny] == '0') continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
					h_cnt++;
				}
			}
			v.push_back(h_cnt);
		}
	}

	cout << cnt << "\n";
	sort(v.begin(), v.end());
	for (auto c : v) {
		cout << c << "\n";
	}
	return 0;
}