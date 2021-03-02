#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int tomato[1002][1002];
int not_tomato[1002][1002];
queue<pair<int, int>> q;
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void bfs(void)
{
    while (!q.empty()) {
        auto c = q.front();
        q.pop();
        for (int d = 0; d < 4; d++) {
            int nx = c.X + dx[d];
            int ny = c.Y + dy[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (not_tomato[nx][ny] >= 0)
                continue;
            not_tomato[nx][ny] = not_tomato[c.X][c.Y] + 1;
            q.push({ nx,ny });
        }
    } 
}
void print_max(void)
{
    int day = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (not_tomato[i][j] == -1) {
                cout << -1;
                return;
            }
            day = max(day, not_tomato[i][j]);
        }
    }
    cout << day;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1) //익은 토마토이면 푸시
                q.push({ i,j });
            else if (tomato[i][j] == 0) //익지 않은 토마토이면 -1
                not_tomato[i][j] = -1;
        }
    }
    bfs();
    print_max();
}