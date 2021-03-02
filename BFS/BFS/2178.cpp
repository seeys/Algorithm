#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502];

int n, m;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x,y });
    while (!q.empty()) {
        int x = q.front().X;
        int y = q.front().Y;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            if (board[nx][ny] == 0) {
                continue;
            }
            if (board[nx][ny] == 1) {
                board[nx][ny] = board[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
    return board[n - 1][m - 1];
}
int main(void) {

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%1d", &board[i][j]);
    cout << bfs(0, 0) << '\n';
    return 0;
}