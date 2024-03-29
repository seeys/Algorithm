#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
char board[1002][1002];
int dist1[1002][1002]; // 불의 전파 시간
int dist2[1002][1002]; // 상근이의 이동 시간
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    cin >> m >> n;
    bool es = false;
    for (int i = 0; i < n; i++) {
      fill(dist1[i], dist1[i] + m, 0);
      fill(dist2[i], dist2[i] + m, 0);
    }
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> board[i][j];

    queue<pair<int, int> > Q1;
    queue<pair<int, int> > Q2;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (board[i][j] == '*') {
          Q1.push({ i,j });
          dist1[i][j] = 1;
        }
        if (board[i][j] == '@') {
          Q2.push({ i,j });
          dist2[i][j] = 1;
        }
      }
    }
    // 불에 대한 BFS
    while (!Q1.empty()) {
      auto cur = Q1.front(); Q1.pop();
      for (int dir = 0; dir < 4; dir++) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (dist1[nx][ny] || board[nx][ny] == '#') continue;
        dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
        Q1.push({ nx,ny });
      }
    }

    // 상근이에 대한 BFS
    while (!Q2.empty() && (!es)) {
      auto cur = Q2.front(); Q2.pop();
      for (int dir = 0; dir < 4; dir++) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) { // 범위를 벗어났다는 것은 탈출에 성공했다는 의미. 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 됨.
          cout << dist2[cur.X][cur.Y] << "\n";
          es = true;
          break;
        }
        if (dist2[nx][ny] || board[nx][ny] == '#') continue;
        if (dist1[nx][ny] != 0 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) continue; // 불의 전파 시간을 조건에 추가
        dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
        Q2.push({ nx,ny });
      }
    }
    if (!es) cout << "IMPOSSIBLE"<<'\n'; // 여기에 도달했다는 것은 탈출에 실패했음을 의미.
    memset(board, 0, sizeof(board));
  }

}