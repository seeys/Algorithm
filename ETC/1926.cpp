#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502];
bool visited[502][502];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    int mx = 0; //그림의 최대
    int num = 0; //그림의 수

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 or visited[i][j])
                continue;
            num++;
            queue<pair<int, int>> q;
            visited[i][j] = 1;
            q.push({ i,j });

            int area = 0;
            while (!q.empty()) {
                area++;
                auto c = q.front();
                q.pop();
                for (int d = 0; d < 4; d++) {
                    int nx = c.X + dx[d];
                    int ny = c.Y + dy[d];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (visited[nx][ny] || board[nx][ny] != 1)
                        continue;
                    visited[nx][ny] = 1;
                    q.push({ nx,ny });
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << "\n" << mx;

}